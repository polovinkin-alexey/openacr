//
// include/gen/lib_mysql_gen.h
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


#pragma once
#include <mariadb/mysql.h>
//#pragma endinclude

// --- lib_mysql_FieldIdEnum

enum lib_mysql_FieldIdEnum {        // lib_mysql.FieldId.value
     lib_mysql_FieldId_value   = 0
};

enum { lib_mysql_FieldIdEnum_N = 1 };

namespace lib_mysql { struct trace; }
namespace lib_mysql { struct FDb; }
namespace lib_mysql { struct FieldId; }
namespace lib_mysql { struct Res; }
namespace lib_mysql {
}//pkey typedefs
namespace lib_mysql {
extern FDb _db;

// --- lib_mysql.trace
#pragma pack(push,1)
struct trace { // lib_mysql.trace
    trace();
};
#pragma pack(pop)

// print string representation of lib_mysql::trace to string LHS, no header -- cprint:lib_mysql.trace.String
void                 trace_Print(lib_mysql::trace & row, algo::cstring &str) __attribute__((nothrow));

// --- lib_mysql.FDb
// create: lib_mysql.FDb._db (Global)
struct FDb { // lib_mysql.FDb
    MYSQL*             mysql;   // optional pointer
    lib_mysql::trace   trace;   //
};

// Insert row into all appropriate indices. If error occurs, store error
// in algo_lib::_db.errtext and return false. Caller must Delete or Unref such row.
bool                 res_XrefMaybe(lib_mysql::Res &row);

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

// User-defined cleanup function invoked for field mysql of lib_mysql::FDb
void                 mysql_Cleanup() __attribute__((nothrow));

// Set all fields to initial values.
void                 FDb_Init();
void                 FDb_Uninit() __attribute__((nothrow));

// --- lib_mysql.FieldId
#pragma pack(push,1)
struct FieldId { // lib_mysql.FieldId: Field read helper
    i32   value;   //   -1
    inline operator lib_mysql_FieldIdEnum() const;
    explicit FieldId(i32                            in_value);
    FieldId(lib_mysql_FieldIdEnum arg);
    FieldId();
};
#pragma pack(pop)

// Get value of field as enum type
lib_mysql_FieldIdEnum value_GetEnum(const lib_mysql::FieldId& parent) __attribute__((nothrow));
// Set value of field from enum type.
void                 value_SetEnum(lib_mysql::FieldId& parent, lib_mysql_FieldIdEnum rhs) __attribute__((nothrow));
// Convert numeric value of field to one of predefined string constants.
// If string is found, return a static C string. Otherwise, return NULL.
const char*          value_ToCstr(const lib_mysql::FieldId& parent) __attribute__((nothrow));
// Convert value to a string. First, attempt conversion to a known string.
// If no string matches, print value as a numeric value.
void                 value_Print(const lib_mysql::FieldId& parent, algo::cstring &lhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, do not modify field and return false.
// In case of success, return true
bool                 value_SetStrptrMaybe(lib_mysql::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, set numeric value to DFLT
void                 value_SetStrptr(lib_mysql::FieldId& parent, algo::strptr rhs, lib_mysql_FieldIdEnum dflt) __attribute__((nothrow));
// Convert string to field. Return success value
bool                 value_ReadStrptrMaybe(lib_mysql::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));

// Read fields of lib_mysql::FieldId from an ascii string.
// The format of the string is the format of the lib_mysql::FieldId's only field
bool                 FieldId_ReadStrptrMaybe(lib_mysql::FieldId &parent, algo::strptr in_str);
// Set all fields to initial values.
void                 FieldId_Init(lib_mysql::FieldId& parent);
// print string representation of lib_mysql::FieldId to string LHS, no header -- cprint:lib_mysql.FieldId.String
void                 FieldId_Print(lib_mysql::FieldId & row, algo::cstring &str) __attribute__((nothrow));

// --- lib_mysql.Res
// create: lib_mysql.FDb.res (Cppstack)
struct Res { // lib_mysql.Res
    MYSQL_RES*   res;   // optional pointer
    Res();
    ~Res();
private:
    // user-defined fcleanup on lib_mysql.Res.res prevents copy
    Res(const Res&){ /*disallow copy constructor */}
    void operator =(const Res&){ /*disallow direct assignment */}
};

// User-defined cleanup function invoked for field res of lib_mysql::Res
void                 res_Cleanup(lib_mysql::Res& res) __attribute__((nothrow));

// Set all fields to initial values.
void                 Res_Init(lib_mysql::Res& res);
void                 Res_Uninit(lib_mysql::Res& res) __attribute__((nothrow));
} // end namespace lib_mysql
namespace algo {
inline algo::cstring &operator <<(algo::cstring &str, const lib_mysql::trace &row);// cfmt:lib_mysql.trace.String
inline algo::cstring &operator <<(algo::cstring &str, const lib_mysql::FieldId &row);// cfmt:lib_mysql.FieldId.String
}
