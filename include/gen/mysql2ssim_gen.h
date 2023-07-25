//
// include/gen/mysql2ssim_gen.h
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


#pragma once
#include "include/gen/command_gen.h"
#include "include/gen/algo_lib_gen.h"
//#pragma endinclude

// --- mysql2ssim_FieldIdEnum

enum mysql2ssim_FieldIdEnum {        // mysql2ssim.FieldId.value
     mysql2ssim_FieldId_value   = 0
};

enum { mysql2ssim_FieldIdEnum_N = 1 };

namespace mysql2ssim { struct trace; }
namespace mysql2ssim { struct FDb; }
namespace mysql2ssim { struct FTobltin; }
namespace mysql2ssim { struct FieldId; }
namespace mysql2ssim { struct _db_table_names_curs; }
namespace mysql2ssim { struct _db_in_tables_curs; }
namespace mysql2ssim { struct FTobltin_vals_curs; }
namespace mysql2ssim {
}//pkey typedefs
namespace mysql2ssim {
extern const char *mysql2ssim_help;
extern const char *mysql2ssim_syntax;
extern FDb _db;

// --- mysql2ssim.trace
#pragma pack(push,1)
struct trace { // mysql2ssim.trace
    trace();
};
#pragma pack(pop)

// print string representation of mysql2ssim::trace to string LHS, no header -- cprint:mysql2ssim.trace.String
void                 trace_Print(mysql2ssim::trace & row, algo::cstring &str) __attribute__((nothrow));

// --- mysql2ssim.FDb
// create: mysql2ssim.FDb._db (Global)
struct FDb { // mysql2ssim.FDb
    algo::cstring*        table_names_elems;   // pointer to elements
    u32                   table_names_n;       // number of elements in array
    u32                   table_names_max;     // max. capacity of array before realloc
    algo::cstring*        in_tables_elems;     // pointer to elements
    u32                   in_tables_n;         // number of elements in array
    u32                   in_tables_max;       // max. capacity of array before realloc
    command::mysql2ssim   cmdline;             //
    algo_lib::FTempfile   tempfile;            // Temp file where downloaded mysql goes before being handed to acr
    mysql2ssim::trace     trace;               //
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

// Reserve space. Insert element at the end
// The new element is initialized to a default value
algo::cstring&       table_names_Alloc() __attribute__((__warn_unused_result__, nothrow));
// Reserve space for new element, reallocating the array if necessary
// Insert new element at specified index. Index must be in range or a fatal error occurs.
algo::cstring&       table_names_AllocAt(int at) __attribute__((__warn_unused_result__, nothrow));
// Reserve space. Insert N elements at the end of the array, return pointer to array
algo::aryptr<algo::cstring> table_names_AllocN(int n_elems) __attribute__((__warn_unused_result__, nothrow));
// Return true if index is empty
bool                 table_names_EmptyQ() __attribute__((nothrow));
// Look up row by row id. Return NULL if out of range
algo::cstring*       table_names_Find(u64 t) __attribute__((__warn_unused_result__, nothrow));
// Return array pointer by value
algo::aryptr<algo::cstring> table_names_Getary() __attribute__((nothrow));
// Return pointer to last element of array, or NULL if array is empty
algo::cstring*       table_names_Last() __attribute__((nothrow, pure));
// Return max. number of items in the array
i32                  table_names_Max() __attribute__((nothrow));
// Return number of items in the array
i32                  table_names_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Remove item by index. If index outside of range, do nothing.
void                 table_names_Remove(u32 i) __attribute__((nothrow));
void                 table_names_RemoveAll() __attribute__((nothrow));
// Delete last element of array. Do nothing if array is empty.
void                 table_names_RemoveLast() __attribute__((nothrow));
// Make sure N *more* elements will fit in array. Process dies if out of memory
void                 table_names_Reserve(int n) __attribute__((nothrow));
// Make sure N elements fit in array. Process dies if out of memory
void                 table_names_AbsReserve(int n) __attribute__((nothrow));
// 'quick' Access row by row id. No bounds checking.
algo::cstring&       table_names_qFind(u64 t) __attribute__((nothrow));
// Return reference to last element of array. No bounds checking
algo::cstring&       table_names_qLast() __attribute__((nothrow));
// Return row id of specified element
u64                  table_names_rowid_Get(algo::cstring &elem) __attribute__((nothrow));
// Reserve space. Insert N elements at the end of the array, return pointer to array
algo::aryptr<algo::cstring> table_names_AllocNVal(int n_elems, const algo::cstring& val) __attribute__((__warn_unused_result__, nothrow));

// Reserve space. Insert element at the end
// The new element is initialized to a default value
algo::cstring&       in_tables_Alloc() __attribute__((__warn_unused_result__, nothrow));
// Reserve space for new element, reallocating the array if necessary
// Insert new element at specified index. Index must be in range or a fatal error occurs.
algo::cstring&       in_tables_AllocAt(int at) __attribute__((__warn_unused_result__, nothrow));
// Reserve space. Insert N elements at the end of the array, return pointer to array
algo::aryptr<algo::cstring> in_tables_AllocN(int n_elems) __attribute__((__warn_unused_result__, nothrow));
// Return true if index is empty
bool                 in_tables_EmptyQ() __attribute__((nothrow));
// Look up row by row id. Return NULL if out of range
algo::cstring*       in_tables_Find(u64 t) __attribute__((__warn_unused_result__, nothrow));
// Return array pointer by value
algo::aryptr<algo::cstring> in_tables_Getary() __attribute__((nothrow));
// Return pointer to last element of array, or NULL if array is empty
algo::cstring*       in_tables_Last() __attribute__((nothrow, pure));
// Return max. number of items in the array
i32                  in_tables_Max() __attribute__((nothrow));
// Return number of items in the array
i32                  in_tables_N() __attribute__((__warn_unused_result__, nothrow, pure));
// Remove item by index. If index outside of range, do nothing.
void                 in_tables_Remove(u32 i) __attribute__((nothrow));
void                 in_tables_RemoveAll() __attribute__((nothrow));
// Delete last element of array. Do nothing if array is empty.
void                 in_tables_RemoveLast() __attribute__((nothrow));
// Make sure N *more* elements will fit in array. Process dies if out of memory
void                 in_tables_Reserve(int n) __attribute__((nothrow));
// Make sure N elements fit in array. Process dies if out of memory
void                 in_tables_AbsReserve(int n) __attribute__((nothrow));
// 'quick' Access row by row id. No bounds checking.
algo::cstring&       in_tables_qFind(u64 t) __attribute__((nothrow));
// Return reference to last element of array. No bounds checking
algo::cstring&       in_tables_qLast() __attribute__((nothrow));
// Return row id of specified element
u64                  in_tables_rowid_Get(algo::cstring &elem) __attribute__((nothrow));
// Reserve space. Insert N elements at the end of the array, return pointer to array
algo::aryptr<algo::cstring> in_tables_AllocNVal(int n_elems, const algo::cstring& val) __attribute__((__warn_unused_result__, nothrow));

// proceed to next item
void                 _db_table_names_curs_Next(_db_table_names_curs &curs);
void                 _db_table_names_curs_Reset(_db_table_names_curs &curs, mysql2ssim::FDb &parent);
// cursor points to valid item
bool                 _db_table_names_curs_ValidQ(_db_table_names_curs &curs);
// item access
algo::cstring&       _db_table_names_curs_Access(_db_table_names_curs &curs);
// proceed to next item
void                 _db_in_tables_curs_Next(_db_in_tables_curs &curs);
void                 _db_in_tables_curs_Reset(_db_in_tables_curs &curs, mysql2ssim::FDb &parent);
// cursor points to valid item
bool                 _db_in_tables_curs_ValidQ(_db_in_tables_curs &curs);
// item access
algo::cstring&       _db_in_tables_curs_Access(_db_in_tables_curs &curs);
// Set all fields to initial values.
void                 FDb_Init();
void                 FDb_Uninit() __attribute__((nothrow));

// --- mysql2ssim.FTobltin
struct FTobltin { // mysql2ssim.FTobltin
    bool             warn;         //   false  Conversion warning
    bool             err;          //   false  Conversion error
    algo::cstring*   vals_elems;   // pointer to elements
    u32              vals_n;       // number of elements in array
    u32              vals_max;     // max. capacity of array before realloc
    FTobltin();
    ~FTobltin();
private:
    // reftype of mysql2ssim.FTobltin.vals prohibits copy
    FTobltin(const FTobltin&){ /*disallow copy constructor */}
    void operator =(const FTobltin&){ /*disallow direct assignment */}
};

// Reserve space. Insert element at the end
// The new element is initialized to a default value
algo::cstring&       vals_Alloc(mysql2ssim::FTobltin& parent) __attribute__((__warn_unused_result__, nothrow));
// Reserve space for new element, reallocating the array if necessary
// Insert new element at specified index. Index must be in range or a fatal error occurs.
algo::cstring&       vals_AllocAt(mysql2ssim::FTobltin& parent, int at) __attribute__((__warn_unused_result__, nothrow));
// Reserve space. Insert N elements at the end of the array, return pointer to array
algo::aryptr<algo::cstring> vals_AllocN(mysql2ssim::FTobltin& parent, int n_elems) __attribute__((__warn_unused_result__, nothrow));
// Return true if index is empty
bool                 vals_EmptyQ(mysql2ssim::FTobltin& parent) __attribute__((nothrow));
// Look up row by row id. Return NULL if out of range
algo::cstring*       vals_Find(mysql2ssim::FTobltin& parent, u64 t) __attribute__((__warn_unused_result__, nothrow));
// Return array pointer by value
algo::aryptr<algo::cstring> vals_Getary(mysql2ssim::FTobltin& parent) __attribute__((nothrow));
// Return pointer to last element of array, or NULL if array is empty
algo::cstring*       vals_Last(mysql2ssim::FTobltin& parent) __attribute__((nothrow, pure));
// Return max. number of items in the array
i32                  vals_Max(mysql2ssim::FTobltin& parent) __attribute__((nothrow));
// Return number of items in the array
i32                  vals_N(const mysql2ssim::FTobltin& parent) __attribute__((__warn_unused_result__, nothrow, pure));
// Remove item by index. If index outside of range, do nothing.
void                 vals_Remove(mysql2ssim::FTobltin& parent, u32 i) __attribute__((nothrow));
void                 vals_RemoveAll(mysql2ssim::FTobltin& parent) __attribute__((nothrow));
// Delete last element of array. Do nothing if array is empty.
void                 vals_RemoveLast(mysql2ssim::FTobltin& parent) __attribute__((nothrow));
// Make sure N *more* elements will fit in array. Process dies if out of memory
void                 vals_Reserve(mysql2ssim::FTobltin& parent, int n) __attribute__((nothrow));
// Make sure N elements fit in array. Process dies if out of memory
void                 vals_AbsReserve(mysql2ssim::FTobltin& parent, int n) __attribute__((nothrow));
// Copy contents of RHS to PARENT.
void                 vals_Setary(mysql2ssim::FTobltin& parent, mysql2ssim::FTobltin &rhs) __attribute__((nothrow));
// 'quick' Access row by row id. No bounds checking.
algo::cstring&       vals_qFind(mysql2ssim::FTobltin& parent, u64 t) __attribute__((nothrow));
// Return reference to last element of array. No bounds checking
algo::cstring&       vals_qLast(mysql2ssim::FTobltin& parent) __attribute__((nothrow));
// Return row id of specified element
u64                  vals_rowid_Get(mysql2ssim::FTobltin& parent, algo::cstring &elem) __attribute__((nothrow));
// Reserve space. Insert N elements at the end of the array, return pointer to array
algo::aryptr<algo::cstring> vals_AllocNVal(mysql2ssim::FTobltin& parent, int n_elems, const algo::cstring& val) __attribute__((__warn_unused_result__, nothrow));

// proceed to next item
void                 FTobltin_vals_curs_Next(FTobltin_vals_curs &curs);
void                 FTobltin_vals_curs_Reset(FTobltin_vals_curs &curs, mysql2ssim::FTobltin &parent);
// cursor points to valid item
bool                 FTobltin_vals_curs_ValidQ(FTobltin_vals_curs &curs);
// item access
algo::cstring&       FTobltin_vals_curs_Access(FTobltin_vals_curs &curs);
// Set all fields to initial values.
void                 FTobltin_Init(mysql2ssim::FTobltin& parent);
void                 FTobltin_Uninit(mysql2ssim::FTobltin& parent) __attribute__((nothrow));

// --- mysql2ssim.FieldId
#pragma pack(push,1)
struct FieldId { // mysql2ssim.FieldId: Field read helper
    i32   value;   //   -1
    inline operator mysql2ssim_FieldIdEnum() const;
    explicit FieldId(i32                            in_value);
    FieldId(mysql2ssim_FieldIdEnum arg);
    FieldId();
};
#pragma pack(pop)

// Get value of field as enum type
mysql2ssim_FieldIdEnum value_GetEnum(const mysql2ssim::FieldId& parent) __attribute__((nothrow));
// Set value of field from enum type.
void                 value_SetEnum(mysql2ssim::FieldId& parent, mysql2ssim_FieldIdEnum rhs) __attribute__((nothrow));
// Convert numeric value of field to one of predefined string constants.
// If string is found, return a static C string. Otherwise, return NULL.
const char*          value_ToCstr(const mysql2ssim::FieldId& parent) __attribute__((nothrow));
// Convert value to a string. First, attempt conversion to a known string.
// If no string matches, print value as a numeric value.
void                 value_Print(const mysql2ssim::FieldId& parent, algo::cstring &lhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, do not modify field and return false.
// In case of success, return true
bool                 value_SetStrptrMaybe(mysql2ssim::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, set numeric value to DFLT
void                 value_SetStrptr(mysql2ssim::FieldId& parent, algo::strptr rhs, mysql2ssim_FieldIdEnum dflt) __attribute__((nothrow));
// Convert string to field. Return success value
bool                 value_ReadStrptrMaybe(mysql2ssim::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));

// Read fields of mysql2ssim::FieldId from an ascii string.
// The format of the string is the format of the mysql2ssim::FieldId's only field
bool                 FieldId_ReadStrptrMaybe(mysql2ssim::FieldId &parent, algo::strptr in_str);
// Set all fields to initial values.
void                 FieldId_Init(mysql2ssim::FieldId& parent);
// print string representation of mysql2ssim::FieldId to string LHS, no header -- cprint:mysql2ssim.FieldId.String
void                 FieldId_Print(mysql2ssim::FieldId & row, algo::cstring &str) __attribute__((nothrow));

struct _db_table_names_curs {// cursor
    typedef algo::cstring ChildType;
    algo::cstring* elems;
    int n_elems;
    int index;
    _db_table_names_curs() { elems=NULL; n_elems=0; index=0; }
};


struct _db_in_tables_curs {// cursor
    typedef algo::cstring ChildType;
    algo::cstring* elems;
    int n_elems;
    int index;
    _db_in_tables_curs() { elems=NULL; n_elems=0; index=0; }
};


struct FTobltin_vals_curs {// cursor
    typedef algo::cstring ChildType;
    algo::cstring* elems;
    int n_elems;
    int index;
    FTobltin_vals_curs() { elems=NULL; n_elems=0; index=0; }
};

} // end namespace mysql2ssim
int                  main(int argc, char **argv);
#if defined(WIN32)
int WINAPI           WinMain(HINSTANCE,HINSTANCE,LPSTR,int);
#endif
namespace algo {
inline algo::cstring &operator <<(algo::cstring &str, const mysql2ssim::trace &row);// cfmt:mysql2ssim.trace.String
inline algo::cstring &operator <<(algo::cstring &str, const mysql2ssim::FieldId &row);// cfmt:mysql2ssim.FieldId.String
}
