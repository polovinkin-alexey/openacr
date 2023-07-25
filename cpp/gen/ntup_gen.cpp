//
// cpp/gen/ntup_gen.cpp
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


#include "include/algo.h"  // hard-coded include
#include "include/gen/ntup_gen.h"
#include "include/gen/ntup_gen.inl.h"
#include "include/gen/command_gen.h"
#include "include/gen/command_gen.inl.h"
#include "include/gen/lib_json_gen.h"
#include "include/gen/lib_json_gen.inl.h"
#include "include/gen/lib_prot_gen.h"
#include "include/gen/lib_prot_gen.inl.h"
#include "include/gen/algo_lib_gen.h"
#include "include/gen/algo_lib_gen.inl.h"
//#pragma endinclude

// Instantiate all libraries linked into this executable,
// in dependency order
lib_json::FDb   lib_json::_db;    // dependency found via dev.targdep
algo_lib::FDb   algo_lib::_db;    // dependency found via dev.targdep
ntup::FDb       ntup::_db;        // dependency found via dev.targdep

namespace ntup {
const char *ntup_help =
"ntup: Tuple utility\n"
"Usage: ntup field [options]\n"
"    -in       string  Input directory or filename, - for stdin. default: \"data\"\n"
"    -cmd      string  Emit command for each tuple\n"
"    -field    string  Select and print attribute from incoming tuple\n"
"    -typetag  string  Match typetag. default: \"%\"\n"
"    -verbose          Enable verbose mode\n"
"    -debug            Enable debug mode\n"
"    -version          Show version information\n"
"    -sig              Print SHA1 signatures for dispatches\n"
"    -help             Print this screen and exit\n"
;


const char *ntup_syntax =
"-in:string=\"data\"\n"
" -cmd:string=\n"
" -field:string\n"
" -typetag:string=\"%\"\n"
;
} // namespace ntup
namespace ntup {
    // Load statically available data into tables, register tables and database.
    static void          InitReflection();
    // find trace by row id (used to implement reflection)
    static algo::ImrowPtr trace_RowidFind(int t) __attribute__((nothrow));
    // Function return 1
    static i32           trace_N() __attribute__((__warn_unused_result__, nothrow, pure));
    static void          SizeCheck();
} // end namespace ntup

// --- ntup.trace..Print
// print string representation of ntup::trace to string LHS, no header -- cprint:ntup.trace.String
void ntup::trace_Print(ntup::trace & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "ntup.trace";
    (void)row;//only to avoid -Wunused-parameter
}

// --- ntup.FDb._db.MainArgs
// Main function
void ntup::MainArgs(int argc, char **argv) {
    Argtuple argtuple;
    Argtuple_ReadArgv(argtuple, argc,argv,ntup_syntax, ntup_help);
    vrfy(ntup_ReadTupleMaybe(ntup::_db.cmdline, argtuple.tuple),"where:read_cmdline");
    vrfy(ntup::LoadTuplesMaybe(ntup::_db.cmdline.in)
    ,tempstr()<<"where:load_input  "<<algo_lib::DetachBadTags());
    ntup::Main(); // call through to user-defined main
}

// --- ntup.FDb._db.MainLoop
// Main loop.
void ntup::MainLoop() {
    algo::SchedTime time(algo::get_cycles());
    algo_lib::_db.clock          = time;
    do {
        algo_lib::_db.next_loop.value = algo_lib::_db.limit;
        ntup::Steps();
    } while (algo_lib::_db.next_loop < algo_lib::_db.limit);
}

// --- ntup.FDb._db.Step
// Main step
void ntup::Step() {
}

// --- ntup.FDb._db.InitReflection
// Load statically available data into tables, register tables and database.
static void ntup::InitReflection() {
    algo_lib::imdb_InsertMaybe(algo::Imdb("ntup", NULL, NULL, ntup::MainLoop, NULL, algo::Comment()));

    algo::Imtable t_trace;
    t_trace.imtable         = "ntup.trace";
    t_trace.ssimfile        = "";
    t_trace.size            = sizeof(ntup::trace);
    t_trace.comment.value   = "";
    t_trace.c_RowidFind     = trace_RowidFind;
    t_trace.NItems          = trace_N;
    t_trace.Print           = (algo::ImrowPrintFcn)ntup::trace_Print;
    algo_lib::imtable_InsertMaybe(t_trace);


    // -- load signatures of existing dispatches --
}

// --- ntup.FDb._db.StaticCheck
void ntup::StaticCheck() {
    algo_assert(_offset_of(ntup::FieldId, value) + sizeof(((ntup::FieldId*)0)->value) == sizeof(ntup::FieldId));
}

// --- ntup.FDb._db.InsertStrptrMaybe
// Parse strptr into known type and add to database.
// Return value is true unless an error occurs. If return value is false, algo_lib::_db.errtext has error text
bool ntup::InsertStrptrMaybe(algo::strptr str) {
    bool retval = true;
    (void)str;//only to avoid -Wunused-parameter
    return retval;
}

// --- ntup.FDb._db.LoadTuplesMaybe
// Load all finputs from given directory.
bool ntup::LoadTuplesMaybe(algo::strptr root) {
    bool retval = true;
    (void)root;//only to avoid -Wunused-parameter
    return retval;
}

// --- ntup.FDb._db.LoadSsimfileMaybe
// Load specified ssimfile.
bool ntup::LoadSsimfileMaybe(algo::strptr fname) {
    bool retval = true;
    if (FileQ(fname)) {
        retval = algo_lib::LoadTuplesFile(fname, ntup::InsertStrptrMaybe, true);
    }
    return retval;
}

// --- ntup.FDb._db.Steps
// Calls Step function of dependencies
void ntup::Steps() {
    algo_lib::Step(); // dependent namespace specified via (dev.targdep)
}

// --- ntup.FDb._db.XrefMaybe
// Insert row into all appropriate indices. If error occurs, store error
// in algo_lib::_db.errtext and return false. Caller must Delete or Unref such row.
bool ntup::_db_XrefMaybe() {
    bool retval = true;
    return retval;
}

// --- ntup.FDb.trace.RowidFind
// find trace by row id (used to implement reflection)
static algo::ImrowPtr ntup::trace_RowidFind(int t) {
    return algo::ImrowPtr(t==0 ? u64(&_db.trace) : u64(0));
}

// --- ntup.FDb.trace.N
// Function return 1
inline static i32 ntup::trace_N() {
    return 1;
}

// --- ntup.FDb..Init
// Set all fields to initial values.
void ntup::FDb_Init() {

    ntup::InitReflection();
}

// --- ntup.FDb..Uninit
void ntup::FDb_Uninit() {
    ntup::FDb &row = _db; (void)row;
}

// --- ntup.FieldId.value.ToCstr
// Convert numeric value of field to one of predefined string constants.
// If string is found, return a static C string. Otherwise, return NULL.
const char* ntup::value_ToCstr(const ntup::FieldId& parent) {
    const char *ret = NULL;
    switch(value_GetEnum(parent)) {
        case ntup_FieldId_value            : ret = "value";  break;
    }
    return ret;
}

// --- ntup.FieldId.value.Print
// Convert value to a string. First, attempt conversion to a known string.
// If no string matches, print value as a numeric value.
void ntup::value_Print(const ntup::FieldId& parent, algo::cstring &lhs) {
    const char *strval = value_ToCstr(parent);
    if (strval) {
        lhs << strval;
    } else {
        lhs << parent.value;
    }
}

// --- ntup.FieldId.value.SetStrptrMaybe
// Convert string to field.
// If the string is invalid, do not modify field and return false.
// In case of success, return true
bool ntup::value_SetStrptrMaybe(ntup::FieldId& parent, algo::strptr rhs) {
    bool ret = false;
    switch (elems_N(rhs)) {
        case 5: {
            switch (u64(algo::ReadLE32(rhs.elems))|(u64(rhs[4])<<32)) {
                case LE_STR5('v','a','l','u','e'): {
                    value_SetEnum(parent,ntup_FieldId_value); ret = true; break;
                }
            }
            break;
        }
    }
    return ret;
}

// --- ntup.FieldId.value.SetStrptr
// Convert string to field.
// If the string is invalid, set numeric value to DFLT
void ntup::value_SetStrptr(ntup::FieldId& parent, algo::strptr rhs, ntup_FieldIdEnum dflt) {
    if (!value_SetStrptrMaybe(parent,rhs)) value_SetEnum(parent,dflt);
}

// --- ntup.FieldId.value.ReadStrptrMaybe
// Convert string to field. Return success value
bool ntup::value_ReadStrptrMaybe(ntup::FieldId& parent, algo::strptr rhs) {
    bool retval = false;
    retval = value_SetStrptrMaybe(parent,rhs); // try symbol conversion
    if (!retval) { // didn't work? try reading as underlying type
        retval = i32_ReadStrptrMaybe(parent.value,rhs);
    }
    return retval;
}

// --- ntup.FieldId..ReadStrptrMaybe
// Read fields of ntup::FieldId from an ascii string.
// The format of the string is the format of the ntup::FieldId's only field
bool ntup::FieldId_ReadStrptrMaybe(ntup::FieldId &parent, algo::strptr in_str) {
    bool retval = true;
    retval = retval && ntup::value_ReadStrptrMaybe(parent, in_str);
    return retval;
}

// --- ntup.FieldId..Print
// print string representation of ntup::FieldId to string LHS, no header -- cprint:ntup.FieldId.String
void ntup::FieldId_Print(ntup::FieldId & row, algo::cstring &str) {
    ntup::value_Print(row, str);
}

// --- ntup...SizeCheck
inline static void ntup::SizeCheck() {
}

// --- ntup...main
int main(int argc, char **argv) {
    try {
        lib_json::FDb_Init();
        algo_lib::FDb_Init();
        ntup::FDb_Init();
        algo_lib::_db.argc = argc;
        algo_lib::_db.argv = argv;
        algo_lib::IohookInit();
        ntup::MainArgs(algo_lib::_db.argc,algo_lib::_db.argv); // dmmeta.main:ntup
    } catch(algo_lib::ErrorX &x) {
        prerr("ntup.error  " << x); // there may be additional hints in DetachBadTags
        algo_lib::_db.exit_code = 1;
    }
    if (algo_lib::_db.last_signal) {
        algo_lib::_db.exit_code = 1;
    }
    try {
        ntup::FDb_Uninit();
        algo_lib::FDb_Uninit();
        lib_json::FDb_Uninit();
    } catch(algo_lib::ErrorX &) {
        // don't print anything, might crash
        algo_lib::_db.exit_code = 1;
    }
    // only the lower 1 byte makes it to the outside world
    (void)i32_UpdateMin(algo_lib::_db.exit_code,255);
    return algo_lib::_db.exit_code;
}

// --- ntup...WinMain
#if defined(WIN32)
int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int) {
    return main(__argc,__argv);
}
#endif
