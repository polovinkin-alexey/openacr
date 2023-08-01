//
// include/gen/lib_sql_gen.h
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


#pragma once
#include "include/gen/algo_gen.h"
//#pragma endinclude
// gen:ns_enums

// --- lib_sql_FieldIdEnum

enum lib_sql_FieldIdEnum {        // lib_sql.FieldId.value
     lib_sql_FieldId_value   = 0
};

enum { lib_sql_FieldIdEnum_N = 1 };

namespace lib_sql { // gen:ns_pkeytypedef
} // gen:ns_pkeytypedef
namespace lib_sql { // gen:ns_field
} // gen:ns_field
// gen:ns_fwddecl2
namespace lib_sql { struct _db_attr_curs; }
namespace lib_sql { struct FAttr; }
namespace lib_sql { struct trace; }
namespace lib_sql { struct FDb; }
namespace lib_sql { struct FieldId; }
namespace lib_sql { extern struct lib_sql::FDb _db; }
namespace lib_sql { // gen:ns_print_struct

// --- lib_sql.FAttr
// create: lib_sql.FDb.attr (Lary)
// global access: ind_attr (Thash)
struct FAttr { // lib_sql.FAttr
    algo::cstring     attr;            //
    bool              isbool;          //   false
    lib_sql::FAttr*   ind_attr_next;   // hash next
private:
    friend lib_sql::FAttr&      attr_Alloc() __attribute__((__warn_unused_result__, nothrow));
    friend lib_sql::FAttr*      attr_AllocMaybe() __attribute__((__warn_unused_result__, nothrow));
    friend void                 attr_RemoveAll() __attribute__((nothrow));
    friend void                 attr_RemoveLast() __attribute__((nothrow));
    FAttr();
    ~FAttr();
    FAttr(const FAttr&){ /*disallow copy constructor */}
    void operator =(const FAttr&){ /*disallow direct assignment */}
};

// Set all fields to initial values.
void                 FAttr_Init(lib_sql::FAttr& attr);
void                 FAttr_Uninit(lib_sql::FAttr& attr) __attribute__((nothrow));

// --- lib_sql.trace
#pragma pack(push,1)
struct trace { // lib_sql.trace
    trace();
};
#pragma pack(pop)

// print string representation of lib_sql::trace to string LHS, no header -- cprint:lib_sql.trace.String
void                 trace_Print(lib_sql::trace & row, algo::cstring &str) __attribute__((nothrow));

// --- lib_sql.FDb
// create: lib_sql.FDb._db (Global)
struct FDb { // lib_sql.FDb
    lib_sql::FAttr*    attr_lary[32];            // level array
    i32                attr_n;                   // number of elements in array
    lib_sql::FAttr**   ind_attr_buckets_elems;   // pointer to bucket array
    i32                ind_attr_buckets_n;       // number of elements in bucket array
    i32                ind_attr_n;               // number of elements in the hash table
    lib_sql::trace     trace;                    //
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
lib_sql::FAttr&      attr_Alloc() __attribute__((__warn_unused_result__, nothrow));
// Allocate memory for new element. If out of memory, return NULL.
lib_sql::FAttr*      attr_AllocMaybe() __attribute__((__warn_unused_result__, nothrow));
// Allocate space for one element. If no memory available, return NULL.
void*                attr_AllocMem() __attribute__((__warn_unused_result__, nothrow));
// Return true if index is empty
bool                 attr_EmptyQ() __attribute__((nothrow));
// Look up row by row id. Return NULL if out of range
lib_sql::FAttr*      attr_Find(u64 t) __attribute__((__warn_unused_result__, nothrow));
// Return pointer to last element of array, or NULL if array is empty
lib_sql::FAttr*      attr_Last() __attribute__((nothrow, pure));
// Return number of items in the pool
i32                  attr_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Remove all elements from Lary
void                 attr_RemoveAll() __attribute__((nothrow));
// Delete last element of array. Do nothing if array is empty.
void                 attr_RemoveLast() __attribute__((nothrow));
// 'quick' Access row by row id. No bounds checking.
lib_sql::FAttr&      attr_qFind(u64 t) __attribute__((nothrow));
// Insert row into all appropriate indices. If error occurs, store error
// in algo_lib::_db.errtext and return false. Caller must Delete or Unref such row.
bool                 attr_XrefMaybe(lib_sql::FAttr &row);

// Return true if hash is empty
bool                 ind_attr_EmptyQ() __attribute__((nothrow));
// Find row by key. Return NULL if not found.
lib_sql::FAttr*      ind_attr_Find(const algo::strptr& key) __attribute__((__warn_unused_result__, nothrow));
// Look up row by key and return reference. Throw exception if not found
lib_sql::FAttr&      ind_attr_FindX(const algo::strptr& key);
// Find row by key. If not found, create and x-reference a new row with with this key.
lib_sql::FAttr&      ind_attr_GetOrCreate(const algo::strptr& key) __attribute__((nothrow));
// Return number of items in the hash
i32                  ind_attr_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Insert row into hash table. Return true if row is reachable through the hash after the function completes.
bool                 ind_attr_InsertMaybe(lib_sql::FAttr& row) __attribute__((nothrow));
// Remove reference to element from hash index. If element is not in hash, do nothing
void                 ind_attr_Remove(lib_sql::FAttr& row) __attribute__((nothrow));
// Reserve enough room in the hash for N more elements. Return success code.
void                 ind_attr_Reserve(int n) __attribute__((nothrow));

// cursor points to valid item
void                 _db_attr_curs_Reset(_db_attr_curs &curs, lib_sql::FDb &parent);
// cursor points to valid item
bool                 _db_attr_curs_ValidQ(_db_attr_curs &curs);
// proceed to next item
void                 _db_attr_curs_Next(_db_attr_curs &curs);
// item access
lib_sql::FAttr&      _db_attr_curs_Access(_db_attr_curs &curs);
// Set all fields to initial values.
void                 FDb_Init();
void                 FDb_Uninit() __attribute__((nothrow));

// --- lib_sql.FieldId
#pragma pack(push,1)
struct FieldId { // lib_sql.FieldId: Field read helper
    i32   value;   //   -1
    inline operator lib_sql_FieldIdEnum() const;
    explicit FieldId(i32                            in_value);
    FieldId(lib_sql_FieldIdEnum arg);
    FieldId();
};
#pragma pack(pop)

// Get value of field as enum type
lib_sql_FieldIdEnum  value_GetEnum(const lib_sql::FieldId& parent) __attribute__((nothrow));
// Set value of field from enum type.
void                 value_SetEnum(lib_sql::FieldId& parent, lib_sql_FieldIdEnum rhs) __attribute__((nothrow));
// Convert numeric value of field to one of predefined string constants.
// If string is found, return a static C string. Otherwise, return NULL.
const char*          value_ToCstr(const lib_sql::FieldId& parent) __attribute__((nothrow));
// Convert value to a string. First, attempt conversion to a known string.
// If no string matches, print value as a numeric value.
void                 value_Print(const lib_sql::FieldId& parent, algo::cstring &lhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, do not modify field and return false.
// In case of success, return true
bool                 value_SetStrptrMaybe(lib_sql::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, set numeric value to DFLT
void                 value_SetStrptr(lib_sql::FieldId& parent, algo::strptr rhs, lib_sql_FieldIdEnum dflt) __attribute__((nothrow));
// Convert string to field. Return success value
bool                 value_ReadStrptrMaybe(lib_sql::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));

// Read fields of lib_sql::FieldId from an ascii string.
// The format of the string is the format of the lib_sql::FieldId's only field
bool                 FieldId_ReadStrptrMaybe(lib_sql::FieldId &parent, algo::strptr in_str);
// Set all fields to initial values.
void                 FieldId_Init(lib_sql::FieldId& parent);
// print string representation of lib_sql::FieldId to string LHS, no header -- cprint:lib_sql.FieldId.String
void                 FieldId_Print(lib_sql::FieldId & row, algo::cstring &str) __attribute__((nothrow));
} // gen:ns_print_struct
namespace lib_sql { // gen:ns_curstext

struct _db_attr_curs {// cursor
    typedef lib_sql::FAttr ChildType;
    lib_sql::FDb *parent;
    i64 index;
    _db_attr_curs(){ parent=NULL; index=0; }
};

} // gen:ns_curstext
namespace lib_sql { // gen:ns_func
} // gen:ns_func
// gen:ns_operators
namespace algo {
inline algo::cstring &operator <<(algo::cstring &str, const lib_sql::trace &row);// cfmt:lib_sql.trace.String
inline algo::cstring &operator <<(algo::cstring &str, const lib_sql::FieldId &row);// cfmt:lib_sql.FieldId.String
}
