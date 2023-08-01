//
// cpp/gen/atf_nrun_gen.cpp
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


#include "include/algo.h"  // hard-coded include
#include "include/gen/atf_nrun_gen.h"
#include "include/gen/atf_nrun_gen.inl.h"
#include "include/gen/command_gen.h"
#include "include/gen/command_gen.inl.h"
#include "include/gen/algo_gen.h"
#include "include/gen/algo_gen.inl.h"
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
atf_nrun::FDb   atf_nrun::_db;    // dependency found via dev.targdep

namespace atf_nrun {
const char *atf_nrun_help =
"Usage: atf_nrun [options]\n"
"    -in       string  Input directory or filename, - for stdin. default: \"data\"\n"
"    -maxjobs  int     Number of simultaneous jobs. default: 2\n"
"    [ncmd]    int     . default: 6\n"
"    -verbose          Enable verbose mode\n"
"    -debug            Enable debug mode\n"
"    -version          Show version information\n"
"    -sig              Print SHA1 signatures for dispatches\n"
"    -help             Print this screen and exit\n"
;


const char *atf_nrun_syntax =
"-in:string=\"data\"\n"
" -maxjobs:int=2\n"
" [ncmd]:int=6\n"
;
} // namespace atf_nrun
namespace atf_nrun { // gen:ns_print_proto
    // Load statically available data into tables, register tables and database.
    static void          InitReflection();
    // Update cycles count from previous clock capture
    static void          ind_running_UpdateCycles() __attribute__((nothrow));
    static void          ind_running_Call() __attribute__((nothrow));
    // Update cycles count from previous clock capture
    static void          zd_todo_UpdateCycles() __attribute__((nothrow));
    static void          zd_todo_Call() __attribute__((nothrow));
    // find trace by row id (used to implement reflection)
    static algo::ImrowPtr trace_RowidFind(int t) __attribute__((nothrow));
    // Function return 1
    static i32           trace_N() __attribute__((__warn_unused_result__, nothrow, pure));
    static void          SizeCheck();
} // gen:ns_print_proto

// --- atf_nrun.trace..Print
// print string representation of atf_nrun::trace to string LHS, no header -- cprint:atf_nrun.trace.String
void atf_nrun::trace_Print(atf_nrun::trace & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "atf_nrun.trace";
    (void)row;//only to avoid -Wunused-parameter
}

// --- atf_nrun.FDb._db.MainArgs
// Main function
void atf_nrun::MainArgs(int argc, char **argv) {
    Argtuple argtuple;
    Argtuple_ReadArgv(argtuple, argc,argv,atf_nrun_syntax, atf_nrun_help);
    vrfy(atf_nrun_ReadTupleMaybe(atf_nrun::_db.cmdline, argtuple.tuple),"where:read_cmdline");
    vrfy(atf_nrun::LoadTuplesMaybe(atf_nrun::_db.cmdline.in)
    ,tempstr()<<"where:load_input  "<<algo_lib::DetachBadTags());
    atf_nrun::Main(); // call through to user-defined main
}

// --- atf_nrun.FDb._db.MainLoop
// Main loop.
void atf_nrun::MainLoop() {
    algo::SchedTime time(algo::get_cycles());
    algo_lib::_db.clock          = time;
    do {
        algo_lib::_db.next_loop.value = algo_lib::_db.limit;
        atf_nrun::Steps();
    } while (algo_lib::_db.next_loop < algo_lib::_db.limit);
}

// --- atf_nrun.FDb._db.Step
// Main step
void atf_nrun::Step() {
    ind_running_Call();
    zd_todo_Call();
}

// --- atf_nrun.FDb._db.InitReflection
// Load statically available data into tables, register tables and database.
static void atf_nrun::InitReflection() {
    algo_lib::imdb_InsertMaybe(algo::Imdb("atf_nrun", NULL, atf_nrun::Step, atf_nrun::MainLoop, NULL, algo::Comment()));

    algo::Imtable t_trace;
    t_trace.imtable         = "atf_nrun.trace";
    t_trace.ssimfile        = "";
    t_trace.size            = sizeof(atf_nrun::trace);
    t_trace.comment.value   = "";
    t_trace.c_RowidFind     = trace_RowidFind;
    t_trace.NItems          = trace_N;
    t_trace.Print           = (algo::ImrowPrintFcn)atf_nrun::trace_Print;
    algo_lib::imtable_InsertMaybe(t_trace);


    // -- load signatures of existing dispatches --
}

// --- atf_nrun.FDb._db.StaticCheck
void atf_nrun::StaticCheck() {
    algo_assert(_offset_of(atf_nrun::FieldId, value) + sizeof(((atf_nrun::FieldId*)0)->value) == sizeof(atf_nrun::FieldId));
}

// --- atf_nrun.FDb._db.InsertStrptrMaybe
// Parse strptr into known type and add to database.
// Return value is true unless an error occurs. If return value is false, algo_lib::_db.errtext has error text
bool atf_nrun::InsertStrptrMaybe(algo::strptr str) {
    bool retval = true;
    (void)str;//only to avoid -Wunused-parameter
    return retval;
}

// --- atf_nrun.FDb._db.LoadTuplesMaybe
// Load all finputs from given directory.
bool atf_nrun::LoadTuplesMaybe(algo::strptr root) {
    bool retval = true;
    (void)root;//only to avoid -Wunused-parameter
    return retval;
}

// --- atf_nrun.FDb._db.LoadSsimfileMaybe
// Load specified ssimfile.
bool atf_nrun::LoadSsimfileMaybe(algo::strptr fname) {
    bool retval = true;
    if (FileQ(fname)) {
        retval = algo_lib::LoadTuplesFile(fname, atf_nrun::InsertStrptrMaybe, true);
    }
    return retval;
}

// --- atf_nrun.FDb._db.Steps
// Calls Step function of dependencies
void atf_nrun::Steps() {
    atf_nrun::Step(); // dependent namespace specified via (dev.targdep)
    algo_lib::Step(); // dependent namespace specified via (dev.targdep)
}

// --- atf_nrun.FDb._db.XrefMaybe
// Insert row into all appropriate indices. If error occurs, store error
// in algo_lib::_db.errtext and return false. Caller must Delete or Unref such row.
bool atf_nrun::_db_XrefMaybe() {
    bool retval = true;
    return retval;
}

// --- atf_nrun.FDb.fentry.Alloc
// Allocate memory for new default row.
// If out of memory, process is killed.
atf_nrun::FEntry& atf_nrun::fentry_Alloc() {
    atf_nrun::FEntry* row = fentry_AllocMaybe();
    if (UNLIKELY(row == NULL)) {
        FatalErrorExit("atf_nrun.out_of_mem  field:atf_nrun.FDb.fentry  comment:'Alloc failed'");
    }
    return *row;
}

// --- atf_nrun.FDb.fentry.AllocMaybe
// Allocate memory for new element. If out of memory, return NULL.
atf_nrun::FEntry* atf_nrun::fentry_AllocMaybe() {
    atf_nrun::FEntry *row = (atf_nrun::FEntry*)fentry_AllocMem();
    if (row) {
        new (row) atf_nrun::FEntry; // call constructor
    }
    return row;
}

// --- atf_nrun.FDb.fentry.AllocMem
// Allocate space for one element. If no memory available, return NULL.
void* atf_nrun::fentry_AllocMem() {
    u64 new_nelems     = _db.fentry_n+1;
    // compute level and index on level
    u64 bsr   = algo::u64_BitScanReverse(new_nelems);
    u64 base  = u64(1)<<bsr;
    u64 index = new_nelems-base;
    void *ret = NULL;
    // if level doesn't exist yet, create it
    atf_nrun::FEntry*  lev   = NULL;
    if (bsr < 32) {
        lev = _db.fentry_lary[bsr];
        if (!lev) {
            lev=(atf_nrun::FEntry*)algo_lib::malloc_AllocMem(sizeof(atf_nrun::FEntry) * (u64(1)<<bsr));
            _db.fentry_lary[bsr] = lev;
        }
    }
    // allocate element from this level
    if (lev) {
        _db.fentry_n = i32(new_nelems);
        ret = lev + index;
    }
    return ret;
}

// --- atf_nrun.FDb.fentry.RemoveAll
// Remove all elements from Lary
void atf_nrun::fentry_RemoveAll() {
    for (u64 n = _db.fentry_n; n>0; ) {
        n--;
        fentry_qFind(u64(n)).~FEntry(); // destroy last element
        _db.fentry_n = i32(n);
    }
}

// --- atf_nrun.FDb.fentry.RemoveLast
// Delete last element of array. Do nothing if array is empty.
void atf_nrun::fentry_RemoveLast() {
    u64 n = _db.fentry_n;
    if (n > 0) {
        n -= 1;
        fentry_qFind(u64(n)).~FEntry();
        _db.fentry_n = i32(n);
    }
}

// --- atf_nrun.FDb.fentry.XrefMaybe
// Insert row into all appropriate indices. If error occurs, store error
// in algo_lib::_db.errtext and return false. Caller must Delete or Unref such row.
bool atf_nrun::fentry_XrefMaybe(atf_nrun::FEntry &row) {
    bool retval = true;
    (void)row;
    return retval;
}

// --- atf_nrun.FDb.ind_running.Find
// Find row by key. Return NULL if not found.
atf_nrun::FEntry* atf_nrun::ind_running_Find(i32 key) {
    u32 index = ::i32_Hash(0, key) & (_db.ind_running_buckets_n - 1);
    atf_nrun::FEntry* *e = &_db.ind_running_buckets_elems[index];
    atf_nrun::FEntry* ret=NULL;
    do {
        ret       = *e;
        bool done = !ret || (*ret).pid == key;
        if (done) break;
        e         = &ret->ind_running_next;
    } while (true);
    return ret;
}

// --- atf_nrun.FDb.ind_running.FindX
// Look up row by key and return reference. Throw exception if not found
atf_nrun::FEntry& atf_nrun::ind_running_FindX(i32 key) {
    atf_nrun::FEntry* ret = ind_running_Find(key);
    vrfy(ret, tempstr() << "atf_nrun.key_error  table:ind_running  key:'"<<key<<"'  comment:'key not found'");
    return *ret;
}

// --- atf_nrun.FDb.ind_running.GetOrCreate
// Find row by key. If not found, create and x-reference a new row with with this key.
atf_nrun::FEntry& atf_nrun::ind_running_GetOrCreate(i32 key) {
    atf_nrun::FEntry* ret = ind_running_Find(key);
    if (!ret) { //  if memory alloc fails, process dies; if insert fails, function returns NULL.
        ret         = &fentry_Alloc();
        (*ret).pid = key;
        bool good = fentry_XrefMaybe(*ret);
        if (!good) {
            fentry_RemoveLast(); // delete offending row, any existing xrefs are cleared
            ret = NULL;
        }
    }
    vrfy(ret, tempstr() << "atf_nrun.create_error  table:ind_running  key:'"<<key<<"'  comment:'bad xref'");
    return *ret;
}

// --- atf_nrun.FDb.ind_running.InsertMaybe
// Insert row into hash table. Return true if row is reachable through the hash after the function completes.
bool atf_nrun::ind_running_InsertMaybe(atf_nrun::FEntry& row) {
    ind_running_Reserve(1);
    bool retval = true; // if already in hash, InsertMaybe returns true
    if (LIKELY(row.ind_running_next == (atf_nrun::FEntry*)-1)) {// check if in hash already
        u32 index = ::i32_Hash(0, row.pid) & (_db.ind_running_buckets_n - 1);
        atf_nrun::FEntry* *prev = &_db.ind_running_buckets_elems[index];
        do {
            atf_nrun::FEntry* ret = *prev;
            if (!ret) { // exit condition 1: reached the end of the list
                break;
            }
            if ((*ret).pid == row.pid) { // exit condition 2: found matching key
                retval = false;
                break;
            }
            prev = &ret->ind_running_next;
        } while (true);
        if (retval) {
            row.ind_running_next = *prev;
            _db.ind_running_n++;
            *prev = &row;
        }
    }
    return retval;
}

// --- atf_nrun.FDb.ind_running.Remove
// Remove reference to element from hash index. If element is not in hash, do nothing
void atf_nrun::ind_running_Remove(atf_nrun::FEntry& row) {
    if (LIKELY(row.ind_running_next != (atf_nrun::FEntry*)-1)) {// check if in hash already
        u32 index = ::i32_Hash(0, row.pid) & (_db.ind_running_buckets_n - 1);
        atf_nrun::FEntry* *prev = &_db.ind_running_buckets_elems[index]; // addr of pointer to current element
        while (atf_nrun::FEntry *next = *prev) {                          // scan the collision chain for our element
            if (next == &row) {        // found it?
                *prev = next->ind_running_next; // unlink (singly linked list)
                _db.ind_running_n--;
                row.ind_running_next = (atf_nrun::FEntry*)-1;// not-in-hash
                break;
            }
            prev = &next->ind_running_next;
        }
    }
}

// --- atf_nrun.FDb.ind_running.Reserve
// Reserve enough room in the hash for N more elements. Return success code.
void atf_nrun::ind_running_Reserve(int n) {
    u32 old_nbuckets = _db.ind_running_buckets_n;
    u32 new_nelems   = _db.ind_running_n + n;
    // # of elements has to be roughly equal to the number of buckets
    if (new_nelems > old_nbuckets) {
        int new_nbuckets = i32_Max(algo::BumpToPow2(new_nelems), u32(4));
        u32 old_size = old_nbuckets * sizeof(atf_nrun::FEntry*);
        u32 new_size = new_nbuckets * sizeof(atf_nrun::FEntry*);
        // allocate new array. we don't use Realloc since copying is not needed and factor of 2 probably
        // means new memory will have to be allocated anyway
        atf_nrun::FEntry* *new_buckets = (atf_nrun::FEntry**)algo_lib::malloc_AllocMem(new_size);
        if (UNLIKELY(!new_buckets)) {
            FatalErrorExit("atf_nrun.out_of_memory  field:atf_nrun.FDb.ind_running");
        }
        memset(new_buckets, 0, new_size); // clear pointers
        // rehash all entries
        for (int i = 0; i < _db.ind_running_buckets_n; i++) {
            atf_nrun::FEntry* elem = _db.ind_running_buckets_elems[i];
            while (elem) {
                atf_nrun::FEntry &row        = *elem;
                atf_nrun::FEntry* next       = row.ind_running_next;
                u32 index          = ::i32_Hash(0, row.pid) & (new_nbuckets-1);
                row.ind_running_next     = new_buckets[index];
                new_buckets[index] = &row;
                elem               = next;
            }
        }
        // free old array
        algo_lib::malloc_FreeMem(_db.ind_running_buckets_elems, old_size);
        _db.ind_running_buckets_elems = new_buckets;
        _db.ind_running_buckets_n = new_nbuckets;
    }
}

// --- atf_nrun.FDb.ind_running.UpdateCycles
// Update cycles count from previous clock capture
inline static void atf_nrun::ind_running_UpdateCycles() {
    u64 cur_cycles                      = algo::get_cycles();
    algo_lib::_db.clock                 = algo::SchedTime(cur_cycles);
}

// --- atf_nrun.FDb.ind_running.Call
inline static void atf_nrun::ind_running_Call() {
    if (!atf_nrun::ind_running_EmptyQ()) { // fstep:atf_nrun.FDb.ind_running
        if (atf_nrun::_db.ind_running_next < algo_lib::_db.clock) {
            atf_nrun::_db.ind_running_next = algo_lib::_db.clock + atf_nrun::_db.ind_running_delay;
            atf_nrun::ind_running_Step(); // steptype:InlineRecur: call function every N clock cycles
            ind_running_UpdateCycles();
        }
        algo_lib::_db.next_loop.value = u64_Min(atf_nrun::_db.ind_running_next, algo_lib::_db.next_loop);
    }
}

// --- atf_nrun.FDb.ind_running.SetDelay
// Set inter-step delay to specified value.
// The difference between new delay and current delay is added to the next scheduled time.
void atf_nrun::ind_running_SetDelay(algo::SchedTime delay) {
    i64 diff = delay.value - atf_nrun::_db.ind_running_delay.value;
    atf_nrun::_db.ind_running_delay = delay;
    if (diff > 0) {
        atf_nrun::_db.ind_running_next.value += diff;
    } else {
        atf_nrun::_db.ind_running_next.value = algo::u64_SubClip(atf_nrun::_db.ind_running_next.value,-diff);
    }
}

// --- atf_nrun.FDb.zd_todo.Insert
// Insert row into linked list. If row is already in linked list, do nothing.
void atf_nrun::zd_todo_Insert(atf_nrun::FEntry& row) {
    if (!zd_todo_InLlistQ(row)) {
        atf_nrun::FEntry* old_tail = _db.zd_todo_tail;
        row.zd_todo_next = NULL;
        row.zd_todo_prev = old_tail;
        _db.zd_todo_tail = &row;
        atf_nrun::FEntry **new_row_a = &old_tail->zd_todo_next;
        atf_nrun::FEntry **new_row_b = &_db.zd_todo_head;
        atf_nrun::FEntry **new_row = old_tail ? new_row_a : new_row_b;
        *new_row = &row;
        _db.zd_todo_n++;
        if (_db.zd_todo_head == &row) {
            zd_todo_FirstChanged();
        }
    }
}

// --- atf_nrun.FDb.zd_todo.Remove
// Remove element from index. If element is not in index, do nothing.
void atf_nrun::zd_todo_Remove(atf_nrun::FEntry& row) {
    if (zd_todo_InLlistQ(row)) {
        atf_nrun::FEntry* old_head       = _db.zd_todo_head;
        (void)old_head; // in case it's not used
        atf_nrun::FEntry* prev = row.zd_todo_prev;
        atf_nrun::FEntry* next = row.zd_todo_next;
        // if element is first, adjust list head; otherwise, adjust previous element's next
        atf_nrun::FEntry **new_next_a = &prev->zd_todo_next;
        atf_nrun::FEntry **new_next_b = &_db.zd_todo_head;
        atf_nrun::FEntry **new_next = prev ? new_next_a : new_next_b;
        *new_next = next;
        // if element is last, adjust list tail; otherwise, adjust next element's prev
        atf_nrun::FEntry **new_prev_a = &next->zd_todo_prev;
        atf_nrun::FEntry **new_prev_b = &_db.zd_todo_tail;
        atf_nrun::FEntry **new_prev = next ? new_prev_a : new_prev_b;
        *new_prev = prev;
        _db.zd_todo_n--;
        row.zd_todo_next=(atf_nrun::FEntry*)-1; // not-in-list
        if (old_head != _db.zd_todo_head) {
            zd_todo_FirstChanged();
        }
    }
}

// --- atf_nrun.FDb.zd_todo.RemoveAll
// Empty the index. (The rows are not deleted)
void atf_nrun::zd_todo_RemoveAll() {
    atf_nrun::FEntry* row = _db.zd_todo_head;
    _db.zd_todo_head = NULL;
    _db.zd_todo_tail = NULL;
    _db.zd_todo_n = 0;
    bool do_fire = (NULL != row);
    while (row) {
        atf_nrun::FEntry* row_next = row->zd_todo_next;
        row->zd_todo_next  = (atf_nrun::FEntry*)-1;
        row->zd_todo_prev  = NULL;
        row = row_next;
    }
    if (do_fire) {
        zd_todo_FirstChanged();
    }
}

// --- atf_nrun.FDb.zd_todo.RemoveFirst
// If linked list is empty, return NULL. Otherwise unlink and return pointer to first element.
// Call FirstChanged trigger.
atf_nrun::FEntry* atf_nrun::zd_todo_RemoveFirst() {
    atf_nrun::FEntry *row = NULL;
    row = _db.zd_todo_head;
    if (row) {
        atf_nrun::FEntry *next = row->zd_todo_next;
        _db.zd_todo_head = next;
        atf_nrun::FEntry **new_end_a = &next->zd_todo_prev;
        atf_nrun::FEntry **new_end_b = &_db.zd_todo_tail;
        atf_nrun::FEntry **new_end = next ? new_end_a : new_end_b;
        *new_end = NULL;
        _db.zd_todo_n--;
        row->zd_todo_next = (atf_nrun::FEntry*)-1; // mark as not-in-list
        zd_todo_FirstChanged();
    }
    return row;
}

// --- atf_nrun.FDb.zd_todo.FirstChanged
// First element of index changed.
void atf_nrun::zd_todo_FirstChanged() {
}

// --- atf_nrun.FDb.zd_todo.UpdateCycles
// Update cycles count from previous clock capture
inline static void atf_nrun::zd_todo_UpdateCycles() {
    u64 cur_cycles                      = algo::get_cycles();
    algo_lib::_db.clock                 = algo::SchedTime(cur_cycles);
}

// --- atf_nrun.FDb.zd_todo.Call
inline static void atf_nrun::zd_todo_Call() {
    if (!atf_nrun::zd_todo_EmptyQ()) { // fstep:atf_nrun.FDb.zd_todo
        if (atf_nrun::_db.zd_todo_next < algo_lib::_db.clock) {
            atf_nrun::_db.zd_todo_next = algo_lib::_db.clock + atf_nrun::_db.zd_todo_delay;
            atf_nrun::zd_todo_Step(); // steptype:InlineRecur: call function every N clock cycles
            zd_todo_UpdateCycles();
        }
        algo_lib::_db.next_loop.value = u64_Min(atf_nrun::_db.zd_todo_next, algo_lib::_db.next_loop);
    }
}

// --- atf_nrun.FDb.zd_todo.SetDelay
// Set inter-step delay to specified value.
// The difference between new delay and current delay is added to the next scheduled time.
void atf_nrun::zd_todo_SetDelay(algo::SchedTime delay) {
    i64 diff = delay.value - atf_nrun::_db.zd_todo_delay.value;
    atf_nrun::_db.zd_todo_delay = delay;
    if (diff > 0) {
        atf_nrun::_db.zd_todo_next.value += diff;
    } else {
        atf_nrun::_db.zd_todo_next.value = algo::u64_SubClip(atf_nrun::_db.zd_todo_next.value,-diff);
    }
}

// --- atf_nrun.FDb.trace.RowidFind
// find trace by row id (used to implement reflection)
static algo::ImrowPtr atf_nrun::trace_RowidFind(int t) {
    return algo::ImrowPtr(t==0 ? u64(&_db.trace) : u64(0));
}

// --- atf_nrun.FDb.trace.N
// Function return 1
inline static i32 atf_nrun::trace_N() {
    return 1;
}

// --- atf_nrun.FDb..Init
// Set all fields to initial values.
void atf_nrun::FDb_Init() {
    // initialize LAry fentry (atf_nrun.FDb.fentry)
    _db.fentry_n = 0;
    memset(_db.fentry_lary, 0, sizeof(_db.fentry_lary)); // zero out all level pointers
    atf_nrun::FEntry* fentry_first = (atf_nrun::FEntry*)algo_lib::malloc_AllocMem(sizeof(atf_nrun::FEntry) * (u64(1)<<4));
    if (!fentry_first) {
        FatalErrorExit("out of memory");
    }
    for (int i = 0; i < 4; i++) {
        _db.fentry_lary[i]  = fentry_first;
        fentry_first    += 1ULL<<i;
    }
    // initialize hash table for atf_nrun::FEntry;
    _db.ind_running_n             	= 0; // (atf_nrun.FDb.ind_running)
    _db.ind_running_buckets_n     	= 4; // (atf_nrun.FDb.ind_running)
    _db.ind_running_buckets_elems 	= (atf_nrun::FEntry**)algo_lib::malloc_AllocMem(sizeof(atf_nrun::FEntry*)*_db.ind_running_buckets_n); // initial buckets (atf_nrun.FDb.ind_running)
    if (!_db.ind_running_buckets_elems) {
        FatalErrorExit("out of memory"); // (atf_nrun.FDb.ind_running)
    }
    memset(_db.ind_running_buckets_elems, 0, sizeof(atf_nrun::FEntry*)*_db.ind_running_buckets_n); // (atf_nrun.FDb.ind_running)
    _db.zd_todo_head = NULL; // (atf_nrun.FDb.zd_todo)
    _db.zd_todo_n = 0; // (atf_nrun.FDb.zd_todo)
    _db.zd_todo_tail = NULL; // (atf_nrun.FDb.zd_todo)

    atf_nrun::InitReflection();
}

// --- atf_nrun.FDb..Uninit
void atf_nrun::FDb_Uninit() {
    atf_nrun::FDb &row = _db; (void)row;

    // atf_nrun.FDb.ind_running.Uninit (Thash)  //Running job
    // skip destruction of ind_running in global scope

    // atf_nrun.FDb.fentry.Uninit (Lary)  //List of jobs
    // skip destruction in global scope
}

// --- atf_nrun.FEntry.job.Start
// Start subprocess
// If subprocess already running, do nothing. Otherwise, start it
int atf_nrun::job_Start(atf_nrun::FEntry& fentry) {
    int retval = 0;
    if (fentry.job_pid == 0) {
        verblog(job_ToCmdline(fentry)); // maybe print command
#ifdef WIN32
        algo_lib::ResolveExecFname(fentry.job_path);
        tempstr cmdline(job_ToCmdline(fentry));
        fentry.job_pid = dospawn(Zeroterm(fentry.job_path),Zeroterm(cmdline),fentry.job_timeout,fentry.job_fstdin,fentry.job_fstdout,fentry.job_fstderr);
#else
        fentry.job_pid = fork();
        if (fentry.job_pid == 0) { // child
            algo_lib::DieWithParent();
            if (fentry.job_timeout > 0) {
                alarm(fentry.job_timeout);
            }
            if (retval==0) retval=algo_lib::ApplyRedirect(fentry.job_fstdin , 0);
            if (retval==0) retval=algo_lib::ApplyRedirect(fentry.job_fstdout, 1);
            if (retval==0) retval=algo_lib::ApplyRedirect(fentry.job_fstderr, 2);
            if (retval==0) retval= job_Execv(fentry);
            if (retval != 0) { // if start fails, print error
                int err=errno;
                prerr("atf_nrun.job_execv"
                <<Keyval("errno",err)
                <<Keyval("errstr",strerror(err))
                <<Keyval("comment","Execv failed"));
            }
            _exit(127); // if failed to start, exit anyway
        } else if (fentry.job_pid == -1) {
            retval = errno; // failed to fork
        }
#endif
    }
    fentry.job_status = fentry.job_pid > 0 ? 0 : -1; // if didn't start, set error status
    return retval;
}

// --- atf_nrun.FEntry.job.StartRead
// Start subprocess & Read output
algo::Fildes atf_nrun::job_StartRead(atf_nrun::FEntry& fentry, algo_lib::FFildes &read) {
    int pipefd[2];
    int rc=pipe(pipefd);
    (void)rc;
    read.fd.value = pipefd[0];
    fentry.job_fstdout  << ">&" << pipefd[1];
    job_Start(fentry);
    (void)close(pipefd[1]);
    return read.fd;
}

// --- atf_nrun.FEntry.job.Kill
// Kill subprocess and wait
void atf_nrun::job_Kill(atf_nrun::FEntry& fentry) {
    if (fentry.job_pid != 0) {
        kill(fentry.job_pid,9);
        job_Wait(fentry);
    }
}

// --- atf_nrun.FEntry.job.Wait
// Wait for subprocess to return
void atf_nrun::job_Wait(atf_nrun::FEntry& fentry) {
    if (fentry.job_pid > 0) {
        int wait_flags = 0;
        int wait_status = 0;
        int rc = -1;
        do {
            // really wait for subprocess to exit
            rc = waitpid(fentry.job_pid,&wait_status,wait_flags);
        } while (rc==-1 && errno==EINTR);
        if (rc == fentry.job_pid) {
            fentry.job_status = wait_status;
            fentry.job_pid = 0;
        }
    }
}

// --- atf_nrun.FEntry.job.Exec
// Start + Wait
// Execute subprocess and return exit code
int atf_nrun::job_Exec(atf_nrun::FEntry& fentry) {
    job_Start(fentry);
    job_Wait(fentry);
    return fentry.job_status;
}

// --- atf_nrun.FEntry.job.ExecX
// Start + Wait, throw exception on error
// Execute subprocess; throw human-readable exception on error
void atf_nrun::job_ExecX(atf_nrun::FEntry& fentry) {
    int rc = job_Exec(fentry);
    vrfy(rc==0, tempstr() << "algo_lib.exec" << Keyval("cmd",job_ToCmdline(fentry))
    << Keyval("comment",algo::DescribeWaitStatus(fentry.job_status)));
}

// --- atf_nrun.FEntry.job.Execv
// Call execv()
// Call execv with specified parameters -- cprint:bash.Argv
int atf_nrun::job_Execv(atf_nrun::FEntry& fentry) {
    char **argv = (char**)alloca((2+2+algo_lib::_db.cmdline.verbose)*sizeof(char*)); // start of first arg (future pointer)
    algo::tempstr temp;
    int n_argv=0;
    argv[n_argv++] = (char*)(int_ptr)ch_N(temp);// future pointer
    temp << fentry.job_path;
    ch_Alloc(temp) = 0;// NUL term for pathname

    if (fentry.job_cmd.c != "") {
        argv[n_argv++] = (char*)(int_ptr)ch_N(temp);// future pointer
        temp << "-c";
        ch_Alloc(temp) = 0;
        argv[n_argv++] = (char*)(int_ptr)ch_N(temp);// future pointer
        cstring_Print(fentry.job_cmd.c, temp);
        ch_Alloc(temp) = 0;// NUL term for this arg
    }
    argv[n_argv] = NULL; // last pointer
    while (n_argv>0) { // shift pointers
        argv[--n_argv] += (u64)temp.ch_elems;
    }
    // if fentry.job_path is relative, search for it in PATH
    algo_lib::ResolveExecFname(fentry.job_path);
    return execv(Zeroterm(fentry.job_path),argv);
}

// --- atf_nrun.FEntry.job.ToCmdline
algo::tempstr atf_nrun::job_ToCmdline(atf_nrun::FEntry& fentry) {
    algo::tempstr retval;
    retval << fentry.job_path << " ";
    command::bash_PrintArgv(fentry.job_cmd,retval);
    if (ch_N(fentry.job_fstdin)) {
        retval << " " << fentry.job_fstdin;
    }
    if (ch_N(fentry.job_fstdout)) {
        retval << " " << fentry.job_fstdout;
    }
    if (ch_N(fentry.job_fstderr)) {
        retval << " 2" << fentry.job_fstderr;
    }
    return retval;
}

// --- atf_nrun.FEntry..Init
// Set all fields to initial values.
void atf_nrun::FEntry_Init(atf_nrun::FEntry& fentry) {
    fentry.pid = i32(0);
    fentry.job_path = algo::strptr("bin/bash");
    fentry.job_pid = pid_t(0);
    fentry.job_timeout = i32(0);
    fentry.job_status = i32(0);
    fentry.ind_running_next = (atf_nrun::FEntry*)-1; // (atf_nrun.FDb.ind_running) not-in-hash
    fentry.zd_todo_next = (atf_nrun::FEntry*)-1; // (atf_nrun.FDb.zd_todo) not-in-list
    fentry.zd_todo_prev = NULL; // (atf_nrun.FDb.zd_todo)
}

// --- atf_nrun.FEntry..Uninit
void atf_nrun::FEntry_Uninit(atf_nrun::FEntry& fentry) {
    atf_nrun::FEntry &row = fentry; (void)row;
    ind_running_Remove(row); // remove fentry from index ind_running
    zd_todo_Remove(row); // remove fentry from index zd_todo

    // atf_nrun.FEntry.job.Uninit (Exec)  //Subprocess
    job_Kill(fentry); // kill child, ensure forward progress
}

// --- atf_nrun.FieldId.value.ToCstr
// Convert numeric value of field to one of predefined string constants.
// If string is found, return a static C string. Otherwise, return NULL.
const char* atf_nrun::value_ToCstr(const atf_nrun::FieldId& parent) {
    const char *ret = NULL;
    switch(value_GetEnum(parent)) {
        case atf_nrun_FieldId_value        : ret = "value";  break;
    }
    return ret;
}

// --- atf_nrun.FieldId.value.Print
// Convert value to a string. First, attempt conversion to a known string.
// If no string matches, print value as a numeric value.
void atf_nrun::value_Print(const atf_nrun::FieldId& parent, algo::cstring &lhs) {
    const char *strval = value_ToCstr(parent);
    if (strval) {
        lhs << strval;
    } else {
        lhs << parent.value;
    }
}

// --- atf_nrun.FieldId.value.SetStrptrMaybe
// Convert string to field.
// If the string is invalid, do not modify field and return false.
// In case of success, return true
bool atf_nrun::value_SetStrptrMaybe(atf_nrun::FieldId& parent, algo::strptr rhs) {
    bool ret = false;
    switch (elems_N(rhs)) {
        case 5: {
            switch (u64(algo::ReadLE32(rhs.elems))|(u64(rhs[4])<<32)) {
                case LE_STR5('v','a','l','u','e'): {
                    value_SetEnum(parent,atf_nrun_FieldId_value); ret = true; break;
                }
            }
            break;
        }
    }
    return ret;
}

// --- atf_nrun.FieldId.value.SetStrptr
// Convert string to field.
// If the string is invalid, set numeric value to DFLT
void atf_nrun::value_SetStrptr(atf_nrun::FieldId& parent, algo::strptr rhs, atf_nrun_FieldIdEnum dflt) {
    if (!value_SetStrptrMaybe(parent,rhs)) value_SetEnum(parent,dflt);
}

// --- atf_nrun.FieldId.value.ReadStrptrMaybe
// Convert string to field. Return success value
bool atf_nrun::value_ReadStrptrMaybe(atf_nrun::FieldId& parent, algo::strptr rhs) {
    bool retval = false;
    retval = value_SetStrptrMaybe(parent,rhs); // try symbol conversion
    if (!retval) { // didn't work? try reading as underlying type
        retval = i32_ReadStrptrMaybe(parent.value,rhs);
    }
    return retval;
}

// --- atf_nrun.FieldId..ReadStrptrMaybe
// Read fields of atf_nrun::FieldId from an ascii string.
// The format of the string is the format of the atf_nrun::FieldId's only field
bool atf_nrun::FieldId_ReadStrptrMaybe(atf_nrun::FieldId &parent, algo::strptr in_str) {
    bool retval = true;
    retval = retval && atf_nrun::value_ReadStrptrMaybe(parent, in_str);
    return retval;
}

// --- atf_nrun.FieldId..Print
// print string representation of atf_nrun::FieldId to string LHS, no header -- cprint:atf_nrun.FieldId.String
void atf_nrun::FieldId_Print(atf_nrun::FieldId & row, algo::cstring &str) {
    atf_nrun::value_Print(row, str);
}

// --- atf_nrun...SizeCheck
inline static void atf_nrun::SizeCheck() {
}

// --- atf_nrun...main
int main(int argc, char **argv) {
    try {
        lib_json::FDb_Init();
        algo_lib::FDb_Init();
        atf_nrun::FDb_Init();
        algo_lib::_db.argc = argc;
        algo_lib::_db.argv = argv;
        algo_lib::IohookInit();
        atf_nrun::MainArgs(algo_lib::_db.argc,algo_lib::_db.argv); // dmmeta.main:atf_nrun
    } catch(algo_lib::ErrorX &x) {
        prerr("atf_nrun.error  " << x); // there may be additional hints in DetachBadTags
        algo_lib::_db.exit_code = 1;
    }
    if (algo_lib::_db.last_signal) {
        algo_lib::_db.exit_code = 1;
    }
    try {
        atf_nrun::FDb_Uninit();
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

// --- atf_nrun...WinMain
#if defined(WIN32)
int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int) {
    return main(__argc,__argv);
}
#endif
