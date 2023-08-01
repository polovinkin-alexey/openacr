//
// include/gen/lib_exec_gen.h
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


#pragma once
#include "include/gen/command_gen.h"
#include "include/gen/dev_gen.h"
#include "include/gen/algo_gen.h"
#include "include/gen/algo_lib_gen.h"
//#pragma endinclude
// gen:ns_enums

// --- lib_exec_FieldIdEnum

enum lib_exec_FieldIdEnum {        // lib_exec.FieldId.value
     lib_exec_FieldId_value   = 0
};

enum { lib_exec_FieldIdEnum_N = 1 };

namespace lib_exec { // gen:ns_pkeytypedef
} // gen:ns_pkeytypedef
namespace lib_exec { // gen:ns_field
extern const char *lib_exec_help;
extern const char *lib_exec_syntax;
} // gen:ns_field
// gen:ns_fwddecl2
namespace lib_exec { struct FSyscmd; }
namespace lib_exec { struct _db_syscmddep_curs; }
namespace lib_exec { struct _db_syscmd_curs; }
namespace lib_exec { struct _db_bh_syscmd_curs; }
namespace lib_exec { struct _db_zd_started_curs; }
namespace lib_exec { struct syscmd_c_prior_curs; }
namespace lib_exec { struct syscmd_c_next_curs; }
namespace lib_exec { struct trace; }
namespace lib_exec { struct FDb; }
namespace lib_exec { struct FSyscmddep; }
namespace lib_exec { struct FieldId; }
namespace lib_exec { extern struct lib_exec::FDb _db; }
namespace lib_exec { // gen:ns_print_struct

// --- lib_exec.trace
#pragma pack(push,1)
struct trace { // lib_exec.trace
    trace();
};
#pragma pack(pop)

// print string representation of lib_exec::trace to string LHS, no header -- cprint:lib_exec.trace.String
void                 trace_Print(lib_exec::trace & row, algo::cstring &str) __attribute__((nothrow));

// --- lib_exec.FDb
// create: lib_exec.FDb._db (Global)
struct FDb { // lib_exec.FDb
    command::lib_exec       cmdline;                     //
    lib_exec::FSyscmddep*   syscmddep_lary[32];          // level array
    i32                     syscmddep_n;                 // number of elements in array
    u64                     next_syscmd;                 //   0
    lib_exec::FSyscmd*      syscmd_lary[32];             // level array
    i32                     syscmd_n;                    // number of elements in array
    lib_exec::FSyscmd**     ind_running_buckets_elems;   // pointer to bucket array
    i32                     ind_running_buckets_n;       // number of elements in bucket array
    i32                     ind_running_n;               // number of elements in the hash table
    lib_exec::FSyscmd**     bh_syscmd_elems;             // binary heap by execkey
    i32                     bh_syscmd_n;                 // number of elements in the heap
    i32                     bh_syscmd_max;               // max elements in bh_syscmd_elems
    lib_exec::FSyscmd*      zd_started_head;             // zero-terminated doubly linked list
    i32                     zd_started_n;                // zero-terminated doubly linked list
    lib_exec::FSyscmd*      zd_started_tail;             // pointer to last element
    lib_exec::trace         trace;                       //
};

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
lib_exec::FSyscmddep& syscmddep_Alloc() __attribute__((__warn_unused_result__, nothrow));
// Allocate memory for new element. If out of memory, return NULL.
lib_exec::FSyscmddep* syscmddep_AllocMaybe() __attribute__((__warn_unused_result__, nothrow));
// Create new row from struct.
// Return pointer to new element, or NULL if insertion failed (due to out-of-memory, duplicate key, etc)
lib_exec::FSyscmddep* syscmddep_InsertMaybe(const dev::Syscmddep &value) __attribute__((nothrow));
// Allocate space for one element. If no memory available, return NULL.
void*                syscmddep_AllocMem() __attribute__((__warn_unused_result__, nothrow));
// Return true if index is empty
bool                 syscmddep_EmptyQ() __attribute__((nothrow));
// Look up row by row id. Return NULL if out of range
lib_exec::FSyscmddep* syscmddep_Find(u64 t) __attribute__((__warn_unused_result__, nothrow));
// Return pointer to last element of array, or NULL if array is empty
lib_exec::FSyscmddep* syscmddep_Last() __attribute__((nothrow, pure));
// Return number of items in the pool
i32                  syscmddep_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Remove all elements from Lary
void                 syscmddep_RemoveAll() __attribute__((nothrow));
// Delete last element of array. Do nothing if array is empty.
void                 syscmddep_RemoveLast() __attribute__((nothrow));
// 'quick' Access row by row id. No bounds checking.
lib_exec::FSyscmddep& syscmddep_qFind(u64 t) __attribute__((nothrow));
// Insert row into all appropriate indices. If error occurs, store error
// in algo_lib::_db.errtext and return false. Caller must Delete or Unref such row.
bool                 syscmddep_XrefMaybe(lib_exec::FSyscmddep &row);

// Allocate memory for new default row.
// If out of memory, process is killed.
lib_exec::FSyscmd&   syscmd_Alloc() __attribute__((__warn_unused_result__, nothrow));
// Allocate memory for new element. If out of memory, return NULL.
lib_exec::FSyscmd*   syscmd_AllocMaybe() __attribute__((__warn_unused_result__, nothrow));
// Create new row from struct.
// Return pointer to new element, or NULL if insertion failed (due to out-of-memory, duplicate key, etc)
lib_exec::FSyscmd*   syscmd_InsertMaybe(const dev::Syscmd &value) __attribute__((nothrow));
// Allocate space for one element. If no memory available, return NULL.
void*                syscmd_AllocMem() __attribute__((__warn_unused_result__, nothrow));
// Return true if index is empty
bool                 syscmd_EmptyQ() __attribute__((nothrow));
// Look up row by row id. Return NULL if out of range
lib_exec::FSyscmd*   syscmd_Find(i32 t) __attribute__((__warn_unused_result__, nothrow));
// Return pointer to last element of array, or NULL if array is empty
lib_exec::FSyscmd*   syscmd_Last() __attribute__((nothrow, pure));
// Return number of items in the pool
i32                  syscmd_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Remove all elements from Lary
void                 syscmd_RemoveAll() __attribute__((nothrow));
// Delete last element of array. Do nothing if array is empty.
void                 syscmd_RemoveLast() __attribute__((nothrow));
// 'quick' Access row by row id. No bounds checking.
lib_exec::FSyscmd&   syscmd_qFind(i32 t) __attribute__((nothrow));
// Insert row into all appropriate indices. If error occurs, store error
// in algo_lib::_db.errtext and return false. Caller must Delete or Unref such row.
bool                 syscmd_XrefMaybe(lib_exec::FSyscmd &row);

// Return true if hash is empty
bool                 ind_running_EmptyQ() __attribute__((nothrow));
// Find row by key. Return NULL if not found.
lib_exec::FSyscmd*   ind_running_Find(i32 key) __attribute__((__warn_unused_result__, nothrow));
// Find row by key. If not found, create and x-reference a new row with with this key.
lib_exec::FSyscmd&   ind_running_GetOrCreate(i32 key) __attribute__((nothrow));
// Return number of items in the hash
i32                  ind_running_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Insert row into hash table. Return true if row is reachable through the hash after the function completes.
bool                 ind_running_InsertMaybe(lib_exec::FSyscmd& row) __attribute__((nothrow));
// Remove reference to element from hash index. If element is not in hash, do nothing
void                 ind_running_Remove(lib_exec::FSyscmd& row) __attribute__((nothrow));
// Reserve enough room in the hash for N more elements. Return success code.
void                 ind_running_Reserve(int n) __attribute__((nothrow));

// Remove all elements from heap and free memory used by the array.
void                 bh_syscmd_Dealloc() __attribute__((nothrow));
// Return true if index is empty
bool                 bh_syscmd_EmptyQ() __attribute__((nothrow));
// If index empty, return NULL. Otherwise return pointer to first element in index
lib_exec::FSyscmd*   bh_syscmd_First() __attribute__((__warn_unused_result__, nothrow, pure));
// Return true if row is in index, false otherwise
bool                 bh_syscmd_InBheapQ(lib_exec::FSyscmd& row) __attribute__((__warn_unused_result__, nothrow));
// Insert row. Row must not already be in index. If row is already in index, do nothing.
void                 bh_syscmd_Insert(lib_exec::FSyscmd& row) __attribute__((nothrow));
// Return number of items in the heap
i32                  bh_syscmd_N() __attribute__((__warn_unused_result__, nothrow, pure));
// If row is in heap, update its position. If row is not in heap, insert it.
// Return new position of item in the heap (0=top)
i32                  bh_syscmd_Reheap(lib_exec::FSyscmd& row) __attribute__((nothrow));
// Key of first element in the heap changed. Move it.
// This function does not check the insert condition.
// Return new position of item in the heap (0=top).
// Heap must be non-empty or behavior is undefined.
i32                  bh_syscmd_ReheapFirst() __attribute__((nothrow));
// Remove element from index. If element is not in index, do nothing.
void                 bh_syscmd_Remove(lib_exec::FSyscmd& row) __attribute__((nothrow));
// Remove all elements from binary heap
void                 bh_syscmd_RemoveAll() __attribute__((nothrow));
// If index is empty, return NULL. Otherwise remove and return first key in index.
//  Call 'head changed' trigger.
lib_exec::FSyscmd*   bh_syscmd_RemoveFirst() __attribute__((nothrow));
// Reserve space in index for N more elements
void                 bh_syscmd_Reserve(int n) __attribute__((nothrow));

// Return true if index is empty
bool                 zd_started_EmptyQ() __attribute__((__warn_unused_result__, nothrow));
// If index empty, return NULL. Otherwise return pointer to first element in index
lib_exec::FSyscmd*   zd_started_First() __attribute__((__warn_unused_result__, nothrow, pure));
// Return true if row is in the linked list, false otherwise
bool                 zd_started_InLlistQ(lib_exec::FSyscmd& row) __attribute__((__warn_unused_result__, nothrow));
// Insert row into linked list. If row is already in linked list, do nothing.
void                 zd_started_Insert(lib_exec::FSyscmd& row) __attribute__((nothrow));
// If index empty, return NULL. Otherwise return pointer to last element in index
lib_exec::FSyscmd*   zd_started_Last() __attribute__((__warn_unused_result__, nothrow, pure));
// Return number of items in the linked list
i32                  zd_started_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Return pointer to next element in the list
lib_exec::FSyscmd*   zd_started_Next(lib_exec::FSyscmd &row) __attribute__((__warn_unused_result__, nothrow));
// Return pointer to previous element in the list
lib_exec::FSyscmd*   zd_started_Prev(lib_exec::FSyscmd &row) __attribute__((__warn_unused_result__, nothrow));
// Remove element from index. If element is not in index, do nothing.
void                 zd_started_Remove(lib_exec::FSyscmd& row) __attribute__((nothrow));
// Empty the index. (The rows are not deleted)
void                 zd_started_RemoveAll() __attribute__((nothrow));
// If linked list is empty, return NULL. Otherwise unlink and return pointer to first element.
lib_exec::FSyscmd*   zd_started_RemoveFirst() __attribute__((nothrow));
// Return reference to last element in the index. No bounds checking.
lib_exec::FSyscmd&   zd_started_qLast() __attribute__((__warn_unused_result__, nothrow));

// cursor points to valid item
void                 _db_syscmddep_curs_Reset(_db_syscmddep_curs &curs, lib_exec::FDb &parent);
// cursor points to valid item
bool                 _db_syscmddep_curs_ValidQ(_db_syscmddep_curs &curs);
// proceed to next item
void                 _db_syscmddep_curs_Next(_db_syscmddep_curs &curs);
// item access
lib_exec::FSyscmddep& _db_syscmddep_curs_Access(_db_syscmddep_curs &curs);
// cursor points to valid item
void                 _db_syscmd_curs_Reset(_db_syscmd_curs &curs, lib_exec::FDb &parent);
// cursor points to valid item
bool                 _db_syscmd_curs_ValidQ(_db_syscmd_curs &curs);
// proceed to next item
void                 _db_syscmd_curs_Next(_db_syscmd_curs &curs);
// item access
lib_exec::FSyscmd&   _db_syscmd_curs_Access(_db_syscmd_curs &curs);
void                 _db_bh_syscmd_curs_Reserve(_db_bh_syscmd_curs &curs, int n);
// Reset cursor. If HEAP is non-empty, add its top element to CURS.
void                 _db_bh_syscmd_curs_Reset(_db_bh_syscmd_curs &curs, lib_exec::FDb &parent);
// Advance cursor.
void                 _db_bh_syscmd_curs_Next(_db_bh_syscmd_curs &curs);
// Access current element. If not more elements, return NULL
lib_exec::FSyscmd&   _db_bh_syscmd_curs_Access(_db_bh_syscmd_curs &curs);
// Return true if Access() will return non-NULL.
bool                 _db_bh_syscmd_curs_ValidQ(_db_bh_syscmd_curs &curs);
// cursor points to valid item
void                 _db_zd_started_curs_Reset(_db_zd_started_curs &curs, lib_exec::FDb &parent);
// cursor points to valid item
bool                 _db_zd_started_curs_ValidQ(_db_zd_started_curs &curs);
// proceed to next item
void                 _db_zd_started_curs_Next(_db_zd_started_curs &curs);
// item access
lib_exec::FSyscmd&   _db_zd_started_curs_Access(_db_zd_started_curs &curs);
// Set all fields to initial values.
void                 FDb_Init();
void                 FDb_Uninit() __attribute__((nothrow));

// --- lib_exec.FSyscmd
// create: lib_exec.FDb.syscmd (Lary)
// global access: ind_running (Thash)
// global access: bh_syscmd (Bheap)
// global access: zd_started (Llist)
// access: lib_exec.FSyscmddep.p_child (Upptr)
// access: lib_exec.FSyscmddep.p_parent (Upptr)
struct FSyscmd { // lib_exec.FSyscmd
    lib_exec::FSyscmd*       ind_running_next;   // hash next
    i32                      bh_syscmd_idx;      // index in heap; -1 means not-in-heap
    lib_exec::FSyscmd*       zd_started_next;    // zslist link; -1 means not-in-list
    lib_exec::FSyscmd*       zd_started_prev;    // previous element
    i64                      syscmd;             //   0  Step number
    algo::cstring            command;            // Command to execute
    i32                      pid;                //   0  PID, if running
    i32                      status;             //   0  Exit status (if command has completed)
    i32                      nprereq;            //   0  Number of live pre-requisites
    bool                     fail_prereq;        //   false  Set if one of pre-requisites fails
    bool                     completed;          //   false  Completed?
    i32                      maxtime;            //   0  Optional max running time (used to use SIGALRM)
    lib_exec::FSyscmddep**   c_prior_elems;      // array of pointers
    u32                      c_prior_n;          // array of pointers
    u32                      c_prior_max;        // capacity of allocated array
    lib_exec::FSyscmddep**   c_next_elems;       // array of pointers
    u32                      c_next_n;           // array of pointers
    u32                      c_next_max;         // capacity of allocated array
    i32                      rowid;              //   0
    algo::cstring            message;            // Message to print when command finishes
    bool                     redir_out;          //   true  Redirect stdout/stderr to temp file
    bool                     show_out;           //   true  Print stdout/stderr
    algo_lib::FFildes        stdout_fd;          // Temporary file containing stdout of subprocess
    algo_lib::FFildes        stderr_fd;          // Temporary file containing stderr of subprocess
    i32                      signal;             //   0  Signal received by process (if any)
private:
    friend lib_exec::FSyscmd&   syscmd_Alloc() __attribute__((__warn_unused_result__, nothrow));
    friend lib_exec::FSyscmd*   syscmd_AllocMaybe() __attribute__((__warn_unused_result__, nothrow));
    friend void                 syscmd_RemoveAll() __attribute__((nothrow));
    friend void                 syscmd_RemoveLast() __attribute__((nothrow));
    FSyscmd();
    ~FSyscmd();
    FSyscmd(const FSyscmd&){ /*disallow copy constructor */}
    void operator =(const FSyscmd&){ /*disallow direct assignment */}
};

// Copy fields out of row
void                 syscmd_CopyOut(lib_exec::FSyscmd &row, dev::Syscmd &out) __attribute__((nothrow));
// Copy fields in to row
void                 syscmd_CopyIn(lib_exec::FSyscmd &row, dev::Syscmd &in) __attribute__((nothrow));

i64                  execkey_Get(lib_exec::FSyscmd& syscmd) __attribute__((__warn_unused_result__, nothrow));
void                 execkey_Set(lib_exec::FSyscmd& syscmd, i64 rhs) __attribute__((nothrow));

// Return true if index is empty
bool                 c_prior_EmptyQ(lib_exec::FSyscmd& syscmd) __attribute__((nothrow));
// Look up row by row id. Return NULL if out of range
lib_exec::FSyscmddep* c_prior_Find(lib_exec::FSyscmd& syscmd, u32 t) __attribute__((__warn_unused_result__, nothrow));
// Return array of pointers
algo::aryptr<lib_exec::FSyscmddep*> c_prior_Getary(lib_exec::FSyscmd& syscmd) __attribute__((nothrow));
// Insert pointer to row into array. Row must not already be in array.
// If pointer is already in the array, it may be inserted twice.
void                 c_prior_Insert(lib_exec::FSyscmd& syscmd, lib_exec::FSyscmddep& row) __attribute__((nothrow));
// Insert pointer to row in array.
// If row is already in the array, do nothing.
// Return value: whether element was inserted into array.
bool                 c_prior_InsertMaybe(lib_exec::FSyscmd& syscmd, lib_exec::FSyscmddep& row) __attribute__((nothrow));
// Return number of items in the pointer array
i32                  c_prior_N(const lib_exec::FSyscmd& syscmd) __attribute__((__warn_unused_result__, nothrow, pure));
// Find element using linear scan. If element is in array, remove, otherwise do nothing
void                 c_prior_Remove(lib_exec::FSyscmd& syscmd, lib_exec::FSyscmddep& row) __attribute__((nothrow));
// Empty the index. (The rows are not deleted)
void                 c_prior_RemoveAll(lib_exec::FSyscmd& syscmd) __attribute__((nothrow));
// Reserve space in index for N more elements;
void                 c_prior_Reserve(lib_exec::FSyscmd& syscmd, u32 n) __attribute__((nothrow));

// Return true if index is empty
bool                 c_next_EmptyQ(lib_exec::FSyscmd& syscmd) __attribute__((nothrow));
// Look up row by row id. Return NULL if out of range
lib_exec::FSyscmddep* c_next_Find(lib_exec::FSyscmd& syscmd, u32 t) __attribute__((__warn_unused_result__, nothrow));
// Return array of pointers
algo::aryptr<lib_exec::FSyscmddep*> c_next_Getary(lib_exec::FSyscmd& syscmd) __attribute__((nothrow));
// Insert pointer to row into array. Row must not already be in array.
// If pointer is already in the array, it may be inserted twice.
void                 c_next_Insert(lib_exec::FSyscmd& syscmd, lib_exec::FSyscmddep& row) __attribute__((nothrow));
// Insert pointer to row in array.
// If row is already in the array, do nothing.
// Return value: whether element was inserted into array.
bool                 c_next_InsertMaybe(lib_exec::FSyscmd& syscmd, lib_exec::FSyscmddep& row) __attribute__((nothrow));
// Return number of items in the pointer array
i32                  c_next_N(const lib_exec::FSyscmd& syscmd) __attribute__((__warn_unused_result__, nothrow, pure));
// Find element using linear scan. If element is in array, remove, otherwise do nothing
void                 c_next_Remove(lib_exec::FSyscmd& syscmd, lib_exec::FSyscmddep& row) __attribute__((nothrow));
// Empty the index. (The rows are not deleted)
void                 c_next_RemoveAll(lib_exec::FSyscmd& syscmd) __attribute__((nothrow));
// Reserve space in index for N more elements;
void                 c_next_Reserve(lib_exec::FSyscmd& syscmd, u32 n) __attribute__((nothrow));

// Set all fields to initial values.
void                 FSyscmd_Init(lib_exec::FSyscmd& syscmd);
void                 syscmd_c_prior_curs_Reset(syscmd_c_prior_curs &curs, lib_exec::FSyscmd &parent);
// cursor points to valid item
bool                 syscmd_c_prior_curs_ValidQ(syscmd_c_prior_curs &curs);
// proceed to next item
void                 syscmd_c_prior_curs_Next(syscmd_c_prior_curs &curs);
// item access
lib_exec::FSyscmddep& syscmd_c_prior_curs_Access(syscmd_c_prior_curs &curs);
void                 syscmd_c_next_curs_Reset(syscmd_c_next_curs &curs, lib_exec::FSyscmd &parent);
// cursor points to valid item
bool                 syscmd_c_next_curs_ValidQ(syscmd_c_next_curs &curs);
// proceed to next item
void                 syscmd_c_next_curs_Next(syscmd_c_next_curs &curs);
// item access
lib_exec::FSyscmddep& syscmd_c_next_curs_Access(syscmd_c_next_curs &curs);
void                 FSyscmd_Uninit(lib_exec::FSyscmd& syscmd) __attribute__((nothrow));
// print string representation of lib_exec::FSyscmd to string LHS, no header -- cprint:lib_exec.FSyscmd.String
void                 FSyscmd_Print(lib_exec::FSyscmd & row, algo::cstring &str) __attribute__((nothrow));

// --- lib_exec.FSyscmddep
// create: lib_exec.FDb.syscmddep (Lary)
// access: lib_exec.FSyscmd.c_prior (Ptrary)
// access: lib_exec.FSyscmd.c_next (Ptrary)
struct FSyscmddep { // lib_exec.FSyscmddep
    i64                  child;                   //   0
    i64                  parent;                  //   0
    lib_exec::FSyscmd*   p_child;                 // reference to parent row
    lib_exec::FSyscmd*   p_parent;                // reference to parent row
    bool                 syscmd_c_next_in_ary;    //   false  membership flag
    bool                 syscmd_c_prior_in_ary;   //   false  membership flag
private:
    friend lib_exec::FSyscmddep& syscmddep_Alloc() __attribute__((__warn_unused_result__, nothrow));
    friend lib_exec::FSyscmddep* syscmddep_AllocMaybe() __attribute__((__warn_unused_result__, nothrow));
    friend void                 syscmddep_RemoveAll() __attribute__((nothrow));
    friend void                 syscmddep_RemoveLast() __attribute__((nothrow));
    FSyscmddep();
    ~FSyscmddep();
    FSyscmddep(const FSyscmddep&){ /*disallow copy constructor */}
    void operator =(const FSyscmddep&){ /*disallow direct assignment */}
};

// Copy fields out of row
void                 syscmddep_CopyOut(lib_exec::FSyscmddep &row, dev::Syscmddep &out) __attribute__((nothrow));
// Copy fields in to row
void                 syscmddep_CopyIn(lib_exec::FSyscmddep &row, dev::Syscmddep &in) __attribute__((nothrow));

algo::RspaceStr16    syscmddep_Get(lib_exec::FSyscmddep& syscmddep) __attribute__((__warn_unused_result__, nothrow));
void                 syscmddep_Set(lib_exec::FSyscmddep& syscmddep, const algo::strptr& rhs) __attribute__((nothrow));

// Set all fields to initial values.
void                 FSyscmddep_Init(lib_exec::FSyscmddep& syscmddep);
void                 FSyscmddep_Uninit(lib_exec::FSyscmddep& syscmddep) __attribute__((nothrow));
// print string representation of lib_exec::FSyscmddep to string LHS, no header -- cprint:lib_exec.FSyscmddep.String
void                 FSyscmddep_Print(lib_exec::FSyscmddep & row, algo::cstring &str) __attribute__((nothrow));

// --- lib_exec.FieldId
#pragma pack(push,1)
struct FieldId { // lib_exec.FieldId: Field read helper
    i32   value;   //   -1
    inline operator lib_exec_FieldIdEnum() const;
    explicit FieldId(i32                            in_value);
    FieldId(lib_exec_FieldIdEnum arg);
    FieldId();
};
#pragma pack(pop)

// Get value of field as enum type
lib_exec_FieldIdEnum value_GetEnum(const lib_exec::FieldId& parent) __attribute__((nothrow));
// Set value of field from enum type.
void                 value_SetEnum(lib_exec::FieldId& parent, lib_exec_FieldIdEnum rhs) __attribute__((nothrow));
// Convert numeric value of field to one of predefined string constants.
// If string is found, return a static C string. Otherwise, return NULL.
const char*          value_ToCstr(const lib_exec::FieldId& parent) __attribute__((nothrow));
// Convert value to a string. First, attempt conversion to a known string.
// If no string matches, print value as a numeric value.
void                 value_Print(const lib_exec::FieldId& parent, algo::cstring &lhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, do not modify field and return false.
// In case of success, return true
bool                 value_SetStrptrMaybe(lib_exec::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, set numeric value to DFLT
void                 value_SetStrptr(lib_exec::FieldId& parent, algo::strptr rhs, lib_exec_FieldIdEnum dflt) __attribute__((nothrow));
// Convert string to field. Return success value
bool                 value_ReadStrptrMaybe(lib_exec::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));

// Read fields of lib_exec::FieldId from an ascii string.
// The format of the string is the format of the lib_exec::FieldId's only field
bool                 FieldId_ReadStrptrMaybe(lib_exec::FieldId &parent, algo::strptr in_str);
// Set all fields to initial values.
void                 FieldId_Init(lib_exec::FieldId& parent);
// print string representation of lib_exec::FieldId to string LHS, no header -- cprint:lib_exec.FieldId.String
void                 FieldId_Print(lib_exec::FieldId & row, algo::cstring &str) __attribute__((nothrow));
} // gen:ns_print_struct
namespace lib_exec { // gen:ns_curstext

struct _db_syscmddep_curs {// cursor
    typedef lib_exec::FSyscmddep ChildType;
    lib_exec::FDb *parent;
    i64 index;
    _db_syscmddep_curs(){ parent=NULL; index=0; }
};


struct _db_syscmd_curs {// cursor
    typedef lib_exec::FSyscmd ChildType;
    lib_exec::FDb *parent;
    i64 index;
    _db_syscmd_curs(){ parent=NULL; index=0; }
};

// Non-destructive heap cursor, returns heap elements in sorted order.
// A running front of potential smallest entries is kept in the helper heap (curs.temp_%)
struct _db_bh_syscmd_curs {
    typedef lib_exec::FSyscmd ChildType;
    lib_exec::FDb      *parent;        // parent
    lib_exec::FSyscmd*     *temp_elems;    // helper heap
    int            temp_n;        // number of elements heaped in the helper heap
    int            temp_max;      // max number of elements possible in the helper heap
    _db_bh_syscmd_curs() : parent(NULL), temp_elems(NULL), temp_n(0), temp_max(0) {}
    ~_db_bh_syscmd_curs();
};


struct _db_zd_started_curs {// fcurs:lib_exec.FDb.zd_started/curs
    typedef lib_exec::FSyscmd ChildType;
    lib_exec::FSyscmd* row;
    _db_zd_started_curs() {
        row = NULL;
    }
};


struct syscmd_c_prior_curs {// fcurs:lib_exec.FSyscmd.c_prior/curs
    typedef lib_exec::FSyscmddep ChildType;
    lib_exec::FSyscmddep** elems;
    u32 n_elems;
    u32 index;
    syscmd_c_prior_curs() { elems=NULL; n_elems=0; index=0; }
};


struct syscmd_c_next_curs {// fcurs:lib_exec.FSyscmd.c_next/curs
    typedef lib_exec::FSyscmddep ChildType;
    lib_exec::FSyscmddep** elems;
    u32 n_elems;
    u32 index;
    syscmd_c_next_curs() { elems=NULL; n_elems=0; index=0; }
};

} // gen:ns_curstext
namespace lib_exec { // gen:ns_func
} // gen:ns_func
// gen:ns_operators
namespace algo {
inline algo::cstring &operator <<(algo::cstring &str, const lib_exec::trace &row);// cfmt:lib_exec.trace.String
inline algo::cstring &operator <<(algo::cstring &str, const lib_exec::FieldId &row);// cfmt:lib_exec.FieldId.String
}
