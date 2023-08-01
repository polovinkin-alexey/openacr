//
// include/gen/ssim2csv_gen.h
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


#pragma once
#include "include/gen/command_gen.h"
#include "include/gen/algo_gen.h"
#include "include/gen/algo_lib_gen.h"
//#pragma endinclude
// gen:ns_enums

// --- ssim2csv_FieldIdEnum

enum ssim2csv_FieldIdEnum {        // ssim2csv.FieldId.value
     ssim2csv_FieldId_value   = 0
};

enum { ssim2csv_FieldIdEnum_N = 1 };

namespace ssim2csv { // gen:ns_pkeytypedef
} // gen:ns_pkeytypedef
namespace ssim2csv { // gen:ns_field
extern const char *ssim2csv_help;
extern const char *ssim2csv_syntax;
} // gen:ns_field
// gen:ns_fwddecl2
namespace ssim2csv { struct _db_expand_curs; }
namespace ssim2csv { struct _db_outfile_curs; }
namespace ssim2csv { struct _db_name_curs; }
namespace ssim2csv { struct _db_value_curs; }
namespace ssim2csv { struct _db_flatten_curs; }
namespace ssim2csv { struct trace; }
namespace ssim2csv { struct FDb; }
namespace ssim2csv { struct FExpand; }
namespace ssim2csv { struct FFlatten; }
namespace ssim2csv { struct FOutfile; }
namespace ssim2csv { struct FieldId; }
namespace ssim2csv { extern struct ssim2csv::FDb _db; }
namespace ssim2csv { // gen:ns_print_struct

// --- ssim2csv.trace
#pragma pack(push,1)
struct trace { // ssim2csv.trace
    trace();
};
#pragma pack(pop)

// print string representation of ssim2csv::trace to string LHS, no header -- cprint:ssim2csv.trace.String
void                 trace_Print(ssim2csv::trace & row, algo::cstring &str) __attribute__((nothrow));

// --- ssim2csv.FDb
// create: ssim2csv.FDb._db (Global)
struct FDb { // ssim2csv.FDb
    command::ssim2csv      cmdline;                     //
    ssim2csv::FExpand*     expand_lary[32];             // level array
    i32                    expand_n;                    // number of elements in array
    ssim2csv::FExpand**    ind_expand_buckets_elems;    // pointer to bucket array
    i32                    ind_expand_buckets_n;        // number of elements in bucket array
    i32                    ind_expand_n;                // number of elements in the hash table
    ssim2csv::FOutfile*    outfile_lary[32];            // level array
    i32                    outfile_n;                   // number of elements in array
    ssim2csv::FOutfile**   ind_outfile_buckets_elems;   // pointer to bucket array
    i32                    ind_outfile_buckets_n;       // number of elements in bucket array
    i32                    ind_outfile_n;               // number of elements in the hash table
    algo::cstring*         name_elems;                  // pointer to elements
    u32                    name_n;                      // number of elements in array
    u32                    name_max;                    // max. capacity of array before realloc
    algo::cstring*         value_elems;                 // pointer to elements
    u32                    value_n;                     // number of elements in array
    u32                    value_max;                   // max. capacity of array before realloc
    ssim2csv::FFlatten*    flatten_elems;               // pointer to elements
    u32                    flatten_n;                   // number of elements in array
    u32                    flatten_max;                 // max. capacity of array before realloc
    ssim2csv::trace        trace;                       //
};

// Main function
void                 MainArgs(int argc, char **argv);
// Main loop.
void                 MainLoop();
// Main step
void                 Step();
// Main function
void                 Main();
void                 StaticCheck();
// Parse strptr into known type and add to database.
// Return value is true unless an error occurs. If return value is false, algo_lib::_db.errtext has error text
bool                 InsertStrptrMaybe(algo::strptr str);
// Load all finputs from given directory.
bool                 LoadTuplesMaybe(algo::strptr root) __attribute__((nothrow));
// Load specified ssimfile.
bool                 LoadSsimfileMaybe(algo::strptr fname) __attribute__((nothrow));
// Calls Step function of dependencies
void                 Steps();
// Insert row into all appropriate indices. If error occurs, store error
// in algo_lib::_db.errtext and return false. Caller must Delete or Unref such row.
bool                 _db_XrefMaybe();

// Allocate memory for new default row.
// If out of memory, process is killed.
ssim2csv::FExpand&   expand_Alloc() __attribute__((__warn_unused_result__, nothrow));
// Allocate memory for new element. If out of memory, return NULL.
ssim2csv::FExpand*   expand_AllocMaybe() __attribute__((__warn_unused_result__, nothrow));
// Allocate space for one element. If no memory available, return NULL.
void*                expand_AllocMem() __attribute__((__warn_unused_result__, nothrow));
// Return true if index is empty
bool                 expand_EmptyQ() __attribute__((nothrow));
// Look up row by row id. Return NULL if out of range
ssim2csv::FExpand*   expand_Find(u64 t) __attribute__((__warn_unused_result__, nothrow));
// Return pointer to last element of array, or NULL if array is empty
ssim2csv::FExpand*   expand_Last() __attribute__((nothrow, pure));
// Return number of items in the pool
i32                  expand_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Remove all elements from Lary
void                 expand_RemoveAll() __attribute__((nothrow));
// Delete last element of array. Do nothing if array is empty.
void                 expand_RemoveLast() __attribute__((nothrow));
// 'quick' Access row by row id. No bounds checking.
ssim2csv::FExpand&   expand_qFind(u64 t) __attribute__((nothrow));
// Insert row into all appropriate indices. If error occurs, store error
// in algo_lib::_db.errtext and return false. Caller must Delete or Unref such row.
bool                 expand_XrefMaybe(ssim2csv::FExpand &row);

// Return true if hash is empty
bool                 ind_expand_EmptyQ() __attribute__((nothrow));
// Find row by key. Return NULL if not found.
ssim2csv::FExpand*   ind_expand_Find(const algo::strptr& key) __attribute__((__warn_unused_result__, nothrow));
// Look up row by key and return reference. Throw exception if not found
ssim2csv::FExpand&   ind_expand_FindX(const algo::strptr& key);
// Find row by key. If not found, create and x-reference a new row with with this key.
ssim2csv::FExpand&   ind_expand_GetOrCreate(const algo::strptr& key) __attribute__((nothrow));
// Return number of items in the hash
i32                  ind_expand_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Insert row into hash table. Return true if row is reachable through the hash after the function completes.
bool                 ind_expand_InsertMaybe(ssim2csv::FExpand& row) __attribute__((nothrow));
// Remove reference to element from hash index. If element is not in hash, do nothing
void                 ind_expand_Remove(ssim2csv::FExpand& row) __attribute__((nothrow));
// Reserve enough room in the hash for N more elements. Return success code.
void                 ind_expand_Reserve(int n) __attribute__((nothrow));

// Allocate memory for new default row.
// If out of memory, process is killed.
ssim2csv::FOutfile&  outfile_Alloc() __attribute__((__warn_unused_result__, nothrow));
// Allocate memory for new element. If out of memory, return NULL.
ssim2csv::FOutfile*  outfile_AllocMaybe() __attribute__((__warn_unused_result__, nothrow));
// Allocate space for one element. If no memory available, return NULL.
void*                outfile_AllocMem() __attribute__((__warn_unused_result__, nothrow));
// Return true if index is empty
bool                 outfile_EmptyQ() __attribute__((nothrow));
// Look up row by row id. Return NULL if out of range
ssim2csv::FOutfile*  outfile_Find(u64 t) __attribute__((__warn_unused_result__, nothrow));
// Return pointer to last element of array, or NULL if array is empty
ssim2csv::FOutfile*  outfile_Last() __attribute__((nothrow, pure));
// Return number of items in the pool
i32                  outfile_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Remove all elements from Lary
void                 outfile_RemoveAll() __attribute__((nothrow));
// Delete last element of array. Do nothing if array is empty.
void                 outfile_RemoveLast() __attribute__((nothrow));
// 'quick' Access row by row id. No bounds checking.
ssim2csv::FOutfile&  outfile_qFind(u64 t) __attribute__((nothrow));
// Insert row into all appropriate indices. If error occurs, store error
// in algo_lib::_db.errtext and return false. Caller must Delete or Unref such row.
bool                 outfile_XrefMaybe(ssim2csv::FOutfile &row);

// Return true if hash is empty
bool                 ind_outfile_EmptyQ() __attribute__((nothrow));
// Find row by key. Return NULL if not found.
ssim2csv::FOutfile*  ind_outfile_Find(const algo::strptr& key) __attribute__((__warn_unused_result__, nothrow));
// Look up row by key and return reference. Throw exception if not found
ssim2csv::FOutfile&  ind_outfile_FindX(const algo::strptr& key);
// Find row by key. If not found, create and x-reference a new row with with this key.
ssim2csv::FOutfile&  ind_outfile_GetOrCreate(const algo::strptr& key) __attribute__((nothrow));
// Return number of items in the hash
i32                  ind_outfile_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Insert row into hash table. Return true if row is reachable through the hash after the function completes.
bool                 ind_outfile_InsertMaybe(ssim2csv::FOutfile& row) __attribute__((nothrow));
// Remove reference to element from hash index. If element is not in hash, do nothing
void                 ind_outfile_Remove(ssim2csv::FOutfile& row) __attribute__((nothrow));
// Reserve enough room in the hash for N more elements. Return success code.
void                 ind_outfile_Reserve(int n) __attribute__((nothrow));

// Reserve space. Insert element at the end
// The new element is initialized to a default value
algo::cstring&       name_Alloc() __attribute__((__warn_unused_result__, nothrow));
// Reserve space for new element, reallocating the array if necessary
// Insert new element at specified index. Index must be in range or a fatal error occurs.
algo::cstring&       name_AllocAt(int at) __attribute__((__warn_unused_result__, nothrow));
// Reserve space. Insert N elements at the end of the array, return pointer to array
algo::aryptr<algo::cstring> name_AllocN(int n_elems) __attribute__((__warn_unused_result__, nothrow));
// Return true if index is empty
bool                 name_EmptyQ() __attribute__((nothrow));
// Look up row by row id. Return NULL if out of range
algo::cstring*       name_Find(u64 t) __attribute__((__warn_unused_result__, nothrow));
// Return array pointer by value
algo::aryptr<algo::cstring> name_Getary() __attribute__((nothrow));
// Return pointer to last element of array, or NULL if array is empty
algo::cstring*       name_Last() __attribute__((nothrow, pure));
// Return max. number of items in the array
i32                  name_Max() __attribute__((nothrow));
// Return number of items in the array
i32                  name_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Remove item by index. If index outside of range, do nothing.
void                 name_Remove(u32 i) __attribute__((nothrow));
void                 name_RemoveAll() __attribute__((nothrow));
// Delete last element of array. Do nothing if array is empty.
void                 name_RemoveLast() __attribute__((nothrow));
// Make sure N *more* elements will fit in array. Process dies if out of memory
void                 name_Reserve(int n) __attribute__((nothrow));
// Make sure N elements fit in array. Process dies if out of memory
void                 name_AbsReserve(int n) __attribute__((nothrow));
// 'quick' Access row by row id. No bounds checking.
algo::cstring&       name_qFind(u64 t) __attribute__((nothrow));
// Return reference to last element of array. No bounds checking
algo::cstring&       name_qLast() __attribute__((nothrow));
// Return row id of specified element
u64                  name_rowid_Get(algo::cstring &elem) __attribute__((nothrow));
// Reserve space. Insert N elements at the end of the array, return pointer to array
algo::aryptr<algo::cstring> name_AllocNVal(int n_elems, const algo::cstring& val) __attribute__((__warn_unused_result__, nothrow));

// Reserve space. Insert element at the end
// The new element is initialized to a default value
algo::cstring&       value_Alloc() __attribute__((__warn_unused_result__, nothrow));
// Reserve space for new element, reallocating the array if necessary
// Insert new element at specified index. Index must be in range or a fatal error occurs.
algo::cstring&       value_AllocAt(int at) __attribute__((__warn_unused_result__, nothrow));
// Reserve space. Insert N elements at the end of the array, return pointer to array
algo::aryptr<algo::cstring> value_AllocN(int n_elems) __attribute__((__warn_unused_result__, nothrow));
// Return true if index is empty
bool                 value_EmptyQ() __attribute__((nothrow));
// Look up row by row id. Return NULL if out of range
algo::cstring*       value_Find(u64 t) __attribute__((__warn_unused_result__, nothrow));
// Return array pointer by value
algo::aryptr<algo::cstring> value_Getary() __attribute__((nothrow));
// Return pointer to last element of array, or NULL if array is empty
algo::cstring*       value_Last() __attribute__((nothrow, pure));
// Return max. number of items in the array
i32                  value_Max() __attribute__((nothrow));
// Return number of items in the array
i32                  value_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Remove item by index. If index outside of range, do nothing.
void                 value_Remove(u32 i) __attribute__((nothrow));
void                 value_RemoveAll() __attribute__((nothrow));
// Delete last element of array. Do nothing if array is empty.
void                 value_RemoveLast() __attribute__((nothrow));
// Make sure N *more* elements will fit in array. Process dies if out of memory
void                 value_Reserve(int n) __attribute__((nothrow));
// Make sure N elements fit in array. Process dies if out of memory
void                 value_AbsReserve(int n) __attribute__((nothrow));
// 'quick' Access row by row id. No bounds checking.
algo::cstring&       value_qFind(u64 t) __attribute__((nothrow));
// Return reference to last element of array. No bounds checking
algo::cstring&       value_qLast() __attribute__((nothrow));
// Return row id of specified element
u64                  value_rowid_Get(algo::cstring &elem) __attribute__((nothrow));
// Reserve space. Insert N elements at the end of the array, return pointer to array
algo::aryptr<algo::cstring> value_AllocNVal(int n_elems, const algo::cstring& val) __attribute__((__warn_unused_result__, nothrow));

// Reserve space. Insert element at the end
// The new element is initialized to a default value
ssim2csv::FFlatten&  flatten_Alloc() __attribute__((__warn_unused_result__, nothrow));
// Reserve space for new element, reallocating the array if necessary
// Insert new element at specified index. Index must be in range or a fatal error occurs.
ssim2csv::FFlatten&  flatten_AllocAt(int at) __attribute__((__warn_unused_result__, nothrow));
// Reserve space. Insert N elements at the end of the array, return pointer to array
algo::aryptr<ssim2csv::FFlatten> flatten_AllocN(int n_elems) __attribute__((__warn_unused_result__, nothrow));
// Return true if index is empty
bool                 flatten_EmptyQ() __attribute__((nothrow));
// Look up row by row id. Return NULL if out of range
ssim2csv::FFlatten*  flatten_Find(u64 t) __attribute__((__warn_unused_result__, nothrow));
// Return array pointer by value
algo::aryptr<ssim2csv::FFlatten> flatten_Getary() __attribute__((nothrow));
// Return pointer to last element of array, or NULL if array is empty
ssim2csv::FFlatten*  flatten_Last() __attribute__((nothrow, pure));
// Return max. number of items in the array
i32                  flatten_Max() __attribute__((nothrow));
// Return number of items in the array
i32                  flatten_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Remove item by index. If index outside of range, do nothing.
void                 flatten_Remove(u32 i) __attribute__((nothrow));
void                 flatten_RemoveAll() __attribute__((nothrow));
// Delete last element of array. Do nothing if array is empty.
void                 flatten_RemoveLast() __attribute__((nothrow));
// Make sure N *more* elements will fit in array. Process dies if out of memory
void                 flatten_Reserve(int n) __attribute__((nothrow));
// Make sure N elements fit in array. Process dies if out of memory
void                 flatten_AbsReserve(int n) __attribute__((nothrow));
// 'quick' Access row by row id. No bounds checking.
ssim2csv::FFlatten&  flatten_qFind(u64 t) __attribute__((nothrow));
// Return reference to last element of array. No bounds checking
ssim2csv::FFlatten&  flatten_qLast() __attribute__((nothrow));
// Return row id of specified element
u64                  flatten_rowid_Get(ssim2csv::FFlatten &elem) __attribute__((nothrow));
// Reserve space. Insert N elements at the end of the array, return pointer to array
algo::aryptr<ssim2csv::FFlatten> flatten_AllocNVal(int n_elems, const ssim2csv::FFlatten& val) __attribute__((__warn_unused_result__, nothrow));
// Insert row into all appropriate indices. If error occurs, store error
// in algo_lib::_db.errtext and return false. Caller must Delete or Unref such row.
bool                 flatten_XrefMaybe(ssim2csv::FFlatten &row);

// cursor points to valid item
void                 _db_expand_curs_Reset(_db_expand_curs &curs, ssim2csv::FDb &parent);
// cursor points to valid item
bool                 _db_expand_curs_ValidQ(_db_expand_curs &curs);
// proceed to next item
void                 _db_expand_curs_Next(_db_expand_curs &curs);
// item access
ssim2csv::FExpand&   _db_expand_curs_Access(_db_expand_curs &curs);
// cursor points to valid item
void                 _db_outfile_curs_Reset(_db_outfile_curs &curs, ssim2csv::FDb &parent);
// cursor points to valid item
bool                 _db_outfile_curs_ValidQ(_db_outfile_curs &curs);
// proceed to next item
void                 _db_outfile_curs_Next(_db_outfile_curs &curs);
// item access
ssim2csv::FOutfile&  _db_outfile_curs_Access(_db_outfile_curs &curs);
// proceed to next item
void                 _db_name_curs_Next(_db_name_curs &curs);
void                 _db_name_curs_Reset(_db_name_curs &curs, ssim2csv::FDb &parent);
// cursor points to valid item
bool                 _db_name_curs_ValidQ(_db_name_curs &curs);
// item access
algo::cstring&       _db_name_curs_Access(_db_name_curs &curs);
// proceed to next item
void                 _db_value_curs_Next(_db_value_curs &curs);
void                 _db_value_curs_Reset(_db_value_curs &curs, ssim2csv::FDb &parent);
// cursor points to valid item
bool                 _db_value_curs_ValidQ(_db_value_curs &curs);
// item access
algo::cstring&       _db_value_curs_Access(_db_value_curs &curs);
// proceed to next item
void                 _db_flatten_curs_Next(_db_flatten_curs &curs);
void                 _db_flatten_curs_Reset(_db_flatten_curs &curs, ssim2csv::FDb &parent);
// cursor points to valid item
bool                 _db_flatten_curs_ValidQ(_db_flatten_curs &curs);
// item access
ssim2csv::FFlatten&  _db_flatten_curs_Access(_db_flatten_curs &curs);
// Set all fields to initial values.
void                 FDb_Init();
void                 FDb_Uninit() __attribute__((nothrow));

// --- ssim2csv.FExpand
// create: ssim2csv.FDb.expand (Lary)
// global access: ind_expand (Thash)
struct FExpand { // ssim2csv.FExpand
    ssim2csv::FExpand*   ind_expand_next;   // hash next
    algo::cstring        expand;            //
private:
    friend ssim2csv::FExpand&   expand_Alloc() __attribute__((__warn_unused_result__, nothrow));
    friend ssim2csv::FExpand*   expand_AllocMaybe() __attribute__((__warn_unused_result__, nothrow));
    friend void                 expand_RemoveAll() __attribute__((nothrow));
    friend void                 expand_RemoveLast() __attribute__((nothrow));
    FExpand();
    ~FExpand();
    FExpand(const FExpand&){ /*disallow copy constructor */}
    void operator =(const FExpand&){ /*disallow direct assignment */}
};

// Set all fields to initial values.
void                 FExpand_Init(ssim2csv::FExpand& expand);
void                 FExpand_Uninit(ssim2csv::FExpand& expand) __attribute__((nothrow));
// print string representation of ssim2csv::FExpand to string LHS, no header -- cprint:ssim2csv.FExpand.String
void                 FExpand_Print(ssim2csv::FExpand & row, algo::cstring &str) __attribute__((nothrow));

// --- ssim2csv.FFlatten
// create: ssim2csv.FDb.flatten (Tary)
struct FFlatten { // ssim2csv.FFlatten
    algo::cstring   in;       //
    algo::cstring   prefix;   //
    FFlatten();
};

// print string representation of ssim2csv::FFlatten to string LHS, no header -- cprint:ssim2csv.FFlatten.String
void                 FFlatten_Print(ssim2csv::FFlatten & row, algo::cstring &str) __attribute__((nothrow));

// --- ssim2csv.FOutfile
// create: ssim2csv.FDb.outfile (Lary)
// global access: ind_outfile (Thash)
struct FOutfile { // ssim2csv.FOutfile
    ssim2csv::FOutfile*   ind_outfile_next;   // hash next
    algo_lib::FFildes     fildes;             //
    algo::cstring         header;             //
    algo::cstring         outfile;            //
private:
    friend ssim2csv::FOutfile&  outfile_Alloc() __attribute__((__warn_unused_result__, nothrow));
    friend ssim2csv::FOutfile*  outfile_AllocMaybe() __attribute__((__warn_unused_result__, nothrow));
    friend void                 outfile_RemoveAll() __attribute__((nothrow));
    friend void                 outfile_RemoveLast() __attribute__((nothrow));
    FOutfile();
    ~FOutfile();
    FOutfile(const FOutfile&){ /*disallow copy constructor */}
    void operator =(const FOutfile&){ /*disallow direct assignment */}
};

// Set all fields to initial values.
void                 FOutfile_Init(ssim2csv::FOutfile& outfile);
void                 FOutfile_Uninit(ssim2csv::FOutfile& outfile) __attribute__((nothrow));
// print string representation of ssim2csv::FOutfile to string LHS, no header -- cprint:ssim2csv.FOutfile.String
void                 FOutfile_Print(ssim2csv::FOutfile & row, algo::cstring &str) __attribute__((nothrow));

// --- ssim2csv.FieldId
#pragma pack(push,1)
struct FieldId { // ssim2csv.FieldId: Field read helper
    i32   value;   //   -1
    inline operator ssim2csv_FieldIdEnum() const;
    explicit FieldId(i32                            in_value);
    FieldId(ssim2csv_FieldIdEnum arg);
    FieldId();
};
#pragma pack(pop)

// Get value of field as enum type
ssim2csv_FieldIdEnum value_GetEnum(const ssim2csv::FieldId& parent) __attribute__((nothrow));
// Set value of field from enum type.
void                 value_SetEnum(ssim2csv::FieldId& parent, ssim2csv_FieldIdEnum rhs) __attribute__((nothrow));
// Convert numeric value of field to one of predefined string constants.
// If string is found, return a static C string. Otherwise, return NULL.
const char*          value_ToCstr(const ssim2csv::FieldId& parent) __attribute__((nothrow));
// Convert value to a string. First, attempt conversion to a known string.
// If no string matches, print value as a numeric value.
void                 value_Print(const ssim2csv::FieldId& parent, algo::cstring &lhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, do not modify field and return false.
// In case of success, return true
bool                 value_SetStrptrMaybe(ssim2csv::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, set numeric value to DFLT
void                 value_SetStrptr(ssim2csv::FieldId& parent, algo::strptr rhs, ssim2csv_FieldIdEnum dflt) __attribute__((nothrow));
// Convert string to field. Return success value
bool                 value_ReadStrptrMaybe(ssim2csv::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));

// Read fields of ssim2csv::FieldId from an ascii string.
// The format of the string is the format of the ssim2csv::FieldId's only field
bool                 FieldId_ReadStrptrMaybe(ssim2csv::FieldId &parent, algo::strptr in_str);
// Set all fields to initial values.
void                 FieldId_Init(ssim2csv::FieldId& parent);
// print string representation of ssim2csv::FieldId to string LHS, no header -- cprint:ssim2csv.FieldId.String
void                 FieldId_Print(ssim2csv::FieldId & row, algo::cstring &str) __attribute__((nothrow));
} // gen:ns_print_struct
namespace ssim2csv { // gen:ns_curstext

struct _db_expand_curs {// cursor
    typedef ssim2csv::FExpand ChildType;
    ssim2csv::FDb *parent;
    i64 index;
    _db_expand_curs(){ parent=NULL; index=0; }
};


struct _db_outfile_curs {// cursor
    typedef ssim2csv::FOutfile ChildType;
    ssim2csv::FDb *parent;
    i64 index;
    _db_outfile_curs(){ parent=NULL; index=0; }
};


struct _db_name_curs {// cursor
    typedef algo::cstring ChildType;
    algo::cstring* elems;
    int n_elems;
    int index;
    _db_name_curs() { elems=NULL; n_elems=0; index=0; }
};


struct _db_value_curs {// cursor
    typedef algo::cstring ChildType;
    algo::cstring* elems;
    int n_elems;
    int index;
    _db_value_curs() { elems=NULL; n_elems=0; index=0; }
};


struct _db_flatten_curs {// cursor
    typedef ssim2csv::FFlatten ChildType;
    ssim2csv::FFlatten* elems;
    int n_elems;
    int index;
    _db_flatten_curs() { elems=NULL; n_elems=0; index=0; }
};

} // gen:ns_curstext
namespace ssim2csv { // gen:ns_func
} // gen:ns_func
int                  main(int argc, char **argv);
#if defined(WIN32)
int WINAPI           WinMain(HINSTANCE,HINSTANCE,LPSTR,int);
#endif
// gen:ns_operators
namespace algo {
inline algo::cstring &operator <<(algo::cstring &str, const ssim2csv::trace &row);// cfmt:ssim2csv.trace.String
inline algo::cstring &operator <<(algo::cstring &str, const ssim2csv::FExpand &row);// cfmt:ssim2csv.FExpand.String
inline algo::cstring &operator <<(algo::cstring &str, const ssim2csv::FFlatten &row);// cfmt:ssim2csv.FFlatten.String
inline algo::cstring &operator <<(algo::cstring &str, const ssim2csv::FOutfile &row);// cfmt:ssim2csv.FOutfile.String
inline algo::cstring &operator <<(algo::cstring &str, const ssim2csv::FieldId &row);// cfmt:ssim2csv.FieldId.String
}
