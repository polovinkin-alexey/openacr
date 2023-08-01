//
// include/gen/_gen.h
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


// gen:ns_enums
// gen:ns_fwddecl2
namespace acr { struct FQuery; }
namespace acr { struct FSsimfile; }
namespace algo { struct DateCache; }
namespace algo { struct Errcode; }
namespace algo { struct ImrowPtr; }
namespace algo { struct LineBuf; }
namespace algo { struct PageBuf; }
namespace algo { struct Tuple; }
namespace algo { struct cstring; }
using algo::cstring;
namespace algo { struct i32_Range; }
namespace algo_lib { struct FDb; }
namespace algo_lib { struct FIohook; }
namespace algo_lib { struct InTextFile; }
namespace algo_lib { struct MmapFile; }
using algo_lib::MmapFile;
namespace algo_lib { struct Replscope; }
using algo_lib::Replscope;
namespace atf_amc { struct Hooktype; }
namespace atf_amc { struct MsgHeader; }
namespace lib_json { struct FNode; }
struct pad_byte;

// --- pad_byte
#pragma pack(push,1)
struct pad_byte { // pad_byte
    u8   value;   //   0
    explicit pad_byte(u8                             in_value);
    pad_byte();
};
#pragma pack(pop)

// Set all fields to initial values.
void                 pad_byte_Init(pad_byte& parent);
// Attempt to parse i8 from str
// Leading whitespace is silently skipped
// Return success value; If false, RESULT is unchanged
// String must be non-empty
// Number may prefixed with + or - (with no space after)
// If the value is outside of valid range for the type, it is clipped to the valid range
// Supported bases: 10, 16 (if string starts with 0x or 0X
// For hex numbers, there is no overflow (just take last N digits that fit the type)
bool                 i8_ReadStrptrMaybe(i8& result, algo::strptr str);
// Attempt to parse u8 from str
// Leading whitespace is silently skipped
// Return success value; If false, RESULT is unchanged
// String must be non-empty
// Number may prefixed with + or - (with no space after)
// If the value is outside of valid range for the type, it is clipped to the valid range
// Supported bases: 10, 16 (if string starts with 0x or 0X
// For hex numbers, there is no overflow (just take last N digits that fit the type)
bool                 u8_ReadStrptrMaybe(u8& result, algo::strptr str);
// Attempt to parse i16 from str
// Leading whitespace is silently skipped
// Return success value; If false, RESULT is unchanged
// String must be non-empty
// Number may prefixed with + or - (with no space after)
// If the value is outside of valid range for the type, it is clipped to the valid range
// Supported bases: 10, 16 (if string starts with 0x or 0X
// For hex numbers, there is no overflow (just take last N digits that fit the type)
bool                 i16_ReadStrptrMaybe(i16& result, algo::strptr str);
// Attempt to parse u16 from str
// Leading whitespace is silently skipped
// Return success value; If false, RESULT is unchanged
// String must be non-empty
// Number may prefixed with + or - (with no space after)
// If the value is outside of valid range for the type, it is clipped to the valid range
// Supported bases: 10, 16 (if string starts with 0x or 0X
// For hex numbers, there is no overflow (just take last N digits that fit the type)
bool                 u16_ReadStrptrMaybe(u16& result, algo::strptr str);
// Attempt to parse i32 from str
// Leading whitespace is silently skipped
// Return success value; If false, RESULT is unchanged
// String must be non-empty
// Number may prefixed with + or - (with no space after)
// If the value is outside of valid range for the type, it is clipped to the valid range
// Supported bases: 10, 16 (if string starts with 0x or 0X
// For hex numbers, there is no overflow (just take last N digits that fit the type)
bool                 i32_ReadStrptrMaybe(i32& result, algo::strptr str);
// Attempt to parse u32 from str
// Leading whitespace is silently skipped
// Return success value; If false, RESULT is unchanged
// String must be non-empty
// Number may prefixed with + or - (with no space after)
// If the value is outside of valid range for the type, it is clipped to the valid range
// Supported bases: 10, 16 (if string starts with 0x or 0X
// For hex numbers, there is no overflow (just take last N digits that fit the type)
bool                 u32_ReadStrptrMaybe(u32& result, algo::strptr str);
// Attempt to parse i64 from str
// Leading whitespace is silently skipped
// Return success value; If false, RESULT is unchanged
// String must be non-empty
// Number may prefixed with + or - (with no space after)
// If the value is outside of valid range for the type, it is clipped to the valid range
// Supported bases: 10, 16 (if string starts with 0x or 0X
// For hex numbers, there is no overflow (just take last N digits that fit the type)
bool                 i64_ReadStrptrMaybe(i64& result, algo::strptr str);
// Attempt to parse u64 from str
// Leading whitespace is silently skipped
// Return success value; If false, RESULT is unchanged
// String must be non-empty
// Number may prefixed with + or - (with no space after)
// If the value is outside of valid range for the type, it is clipped to the valid range
// Supported bases: 10, 16 (if string starts with 0x or 0X
// For hex numbers, there is no overflow (just take last N digits that fit the type)
bool                 u64_ReadStrptrMaybe(u64& result, algo::strptr str);
// Attempt to parse u128 from str
// Leading whitespace is silently skipped
// Return success value; If false, RESULT is unchanged
// String must be non-empty
// Number may prefixed with + or - (with no space after)
// If the value is outside of valid range for the type, it is clipped to the valid range
// Supported bases: 10, 16 (if string starts with 0x or 0X
// For hex numbers, there is no overflow (just take last N digits that fit the type)
bool                 u128_ReadStrptrMaybe(u128& result, algo::strptr str);
u32                  bool_Hash(u32 prev, bool rhs) __attribute__((nothrow));
// Read fields of bool from an ascii string.
// The function is implemented externally.
bool                 bool_ReadStrptrMaybe(bool &parent, algo::strptr in_str);
bool                 bool_Lt(bool lhs, bool rhs) __attribute__((nothrow));
i32                  bool_Cmp(bool lhs, bool rhs) __attribute__((nothrow));
bool                 bool_Eq(bool lhs, bool rhs) __attribute__((nothrow));
// Set value. Return true if new value is different from old value.
bool                 bool_Update(bool &lhs, bool rhs) __attribute__((nothrow));
// Convert bool to a string (user-implemented function)
void                 bool_Print(bool row, algo::cstring &str) __attribute__((nothrow));
// Create JSON representation of bool under PARENT node -- implemented externally
lib_json::FNode *    bool_FmtJson(bool row, lib_json::FNode *parent) __attribute__((nothrow));
u32                  char_Hash(u32 prev, char rhs) __attribute__((nothrow));
// Read fields of char from an ascii string.
// The function is implemented externally.
bool                 char_ReadStrptrMaybe(char &parent, algo::strptr in_str);
bool                 char_Lt(char lhs, char rhs) __attribute__((nothrow));
i32                  char_Cmp(char lhs, char rhs) __attribute__((nothrow));
bool                 char_Eq(char lhs, char rhs) __attribute__((nothrow));
// Set value. Return true if new value is different from old value.
bool                 char_Update(char &lhs, char rhs) __attribute__((nothrow));
// Convert char to a string (user-implemented function)
void                 char_Print(char row, algo::cstring &str) __attribute__((nothrow));
// Create JSON representation of char under PARENT node -- implemented externally
lib_json::FNode *    char_FmtJson(char row, lib_json::FNode *parent) __attribute__((nothrow));
u32                  double_Hash(u32 prev, double rhs) __attribute__((nothrow));
// Read fields of double from an ascii string.
// The function is implemented externally.
bool                 double_ReadStrptrMaybe(double &parent, algo::strptr in_str);
bool                 double_Lt(double lhs, double rhs) __attribute__((nothrow));
i32                  double_Cmp(double lhs, double rhs) __attribute__((nothrow));
// Attempt to make LHS bigger. Return true if it was changed
bool                 double_UpdateMax(double &lhs, double rhs) __attribute__((nothrow));
// Return the lesser of two values
double               double_Min(double lhs, double rhs) __attribute__((nothrow));
// Attempt to make LHS smaller. Return true if it was changed
bool                 double_UpdateMin(double &lhs, double rhs) __attribute__((nothrow));
// Return the greater of two values
double               double_Max(double lhs, double rhs) __attribute__((nothrow));
bool                 double_Eq(double lhs, double rhs) __attribute__((nothrow));
// Set value. Return true if new value is different from old value.
bool                 double_Update(double &lhs, double rhs) __attribute__((nothrow));
// Convert double to a string (user-implemented function)
void                 double_Print(double row, algo::cstring &str) __attribute__((nothrow));
// Create JSON representation of double under PARENT node -- implemented externally
lib_json::FNode *    double_FmtJson(double row, lib_json::FNode *parent) __attribute__((nothrow));
u32                  float_Hash(u32 prev, float rhs) __attribute__((nothrow));
// Read fields of float from an ascii string.
// The function is implemented externally.
bool                 float_ReadStrptrMaybe(float &parent, algo::strptr in_str);
bool                 float_Lt(float lhs, float rhs) __attribute__((nothrow));
i32                  float_Cmp(float lhs, float rhs) __attribute__((nothrow));
// Attempt to make LHS bigger. Return true if it was changed
bool                 float_UpdateMax(float &lhs, float rhs) __attribute__((nothrow));
// Return the lesser of two values
float                float_Min(float lhs, float rhs) __attribute__((nothrow));
// Attempt to make LHS smaller. Return true if it was changed
bool                 float_UpdateMin(float &lhs, float rhs) __attribute__((nothrow));
// Return the greater of two values
float                float_Max(float lhs, float rhs) __attribute__((nothrow));
bool                 float_Eq(float lhs, float rhs) __attribute__((nothrow));
// Set value. Return true if new value is different from old value.
bool                 float_Update(float &lhs, float rhs) __attribute__((nothrow));
// Convert float to a string (user-implemented function)
void                 float_Print(float row, algo::cstring &str) __attribute__((nothrow));
// Create JSON representation of float under PARENT node -- implemented externally
lib_json::FNode *    float_FmtJson(float row, lib_json::FNode *parent) __attribute__((nothrow));
u32                  i16_Hash(u32 prev, i16 rhs) __attribute__((nothrow));
// Read fields of i16 from an ascii string.
// The function is implemented externally.
bool                 i16_ReadStrptrMaybe(i16 &parent, algo::strptr in_str);
bool                 i16_Lt(i16 lhs, i16 rhs) __attribute__((nothrow));
i32                  i16_Cmp(i16 lhs, i16 rhs) __attribute__((nothrow));
// Attempt to make LHS bigger. Return true if it was changed
bool                 i16_UpdateMax(i16 &lhs, i16 rhs) __attribute__((nothrow));
// Return the lesser of two values
i16                  i16_Min(i16 lhs, i16 rhs) __attribute__((nothrow));
// Attempt to make LHS smaller. Return true if it was changed
bool                 i16_UpdateMin(i16 &lhs, i16 rhs) __attribute__((nothrow));
// Return the greater of two values
i16                  i16_Max(i16 lhs, i16 rhs) __attribute__((nothrow));
bool                 i16_Eq(i16 lhs, i16 rhs) __attribute__((nothrow));
// Set value. Return true if new value is different from old value.
bool                 i16_Update(i16 &lhs, i16 rhs) __attribute__((nothrow));
// Convert i16 to a string (user-implemented function)
void                 i16_Print(i16 row, algo::cstring &str) __attribute__((nothrow));
// Create JSON representation of i16 under PARENT node -- implemented externally
lib_json::FNode *    i16_FmtJson(i16 row, lib_json::FNode *parent) __attribute__((nothrow));
u32                  i32_Hash(u32 prev, i32 rhs) __attribute__((nothrow));
// Read fields of i32 from an ascii string.
// The function is implemented externally.
bool                 i32_ReadStrptrMaybe(i32 &parent, algo::strptr in_str);
bool                 i32_Lt(i32 lhs, i32 rhs) __attribute__((nothrow));
i32                  i32_Cmp(i32 lhs, i32 rhs) __attribute__((nothrow));
// Attempt to make LHS bigger. Return true if it was changed
bool                 i32_UpdateMax(i32 &lhs, i32 rhs) __attribute__((nothrow));
// Return the lesser of two values
i32                  i32_Min(i32 lhs, i32 rhs) __attribute__((nothrow));
// Attempt to make LHS smaller. Return true if it was changed
bool                 i32_UpdateMin(i32 &lhs, i32 rhs) __attribute__((nothrow));
// Return the greater of two values
i32                  i32_Max(i32 lhs, i32 rhs) __attribute__((nothrow));
bool                 i32_Eq(i32 lhs, i32 rhs) __attribute__((nothrow));
// Set value. Return true if new value is different from old value.
bool                 i32_Update(i32 &lhs, i32 rhs) __attribute__((nothrow));
// Convert i32 to a string (user-implemented function)
void                 i32_Print(i32 row, algo::cstring &str) __attribute__((nothrow));
// Create JSON representation of i32 under PARENT node -- implemented externally
lib_json::FNode *    i32_FmtJson(i32 row, lib_json::FNode *parent) __attribute__((nothrow));
u32                  i64_Hash(u32 prev, i64 rhs) __attribute__((nothrow));
// Read fields of i64 from an ascii string.
// The function is implemented externally.
bool                 i64_ReadStrptrMaybe(i64 &parent, algo::strptr in_str);
bool                 i64_Lt(i64 lhs, i64 rhs) __attribute__((nothrow));
i32                  i64_Cmp(i64 lhs, i64 rhs) __attribute__((nothrow));
// Attempt to make LHS bigger. Return true if it was changed
bool                 i64_UpdateMax(i64 &lhs, i64 rhs) __attribute__((nothrow));
// Return the lesser of two values
i64                  i64_Min(i64 lhs, i64 rhs) __attribute__((nothrow));
// Attempt to make LHS smaller. Return true if it was changed
bool                 i64_UpdateMin(i64 &lhs, i64 rhs) __attribute__((nothrow));
// Return the greater of two values
i64                  i64_Max(i64 lhs, i64 rhs) __attribute__((nothrow));
bool                 i64_Eq(i64 lhs, i64 rhs) __attribute__((nothrow));
// Set value. Return true if new value is different from old value.
bool                 i64_Update(i64 &lhs, i64 rhs) __attribute__((nothrow));
// Convert i64 to a string (user-implemented function)
void                 i64_Print(i64 row, algo::cstring &str) __attribute__((nothrow));
// Create JSON representation of i64 under PARENT node -- implemented externally
lib_json::FNode *    i64_FmtJson(i64 row, lib_json::FNode *parent) __attribute__((nothrow));
u32                  i8_Hash(u32 prev, i8 rhs) __attribute__((nothrow));
// Read fields of i8 from an ascii string.
// The function is implemented externally.
bool                 i8_ReadStrptrMaybe(i8 &parent, algo::strptr in_str);
bool                 i8_Lt(i8 lhs, i8 rhs) __attribute__((nothrow));
i32                  i8_Cmp(i8 lhs, i8 rhs) __attribute__((nothrow));
// Attempt to make LHS bigger. Return true if it was changed
bool                 i8_UpdateMax(i8 &lhs, i8 rhs) __attribute__((nothrow));
// Return the lesser of two values
i8                   i8_Min(i8 lhs, i8 rhs) __attribute__((nothrow));
// Attempt to make LHS smaller. Return true if it was changed
bool                 i8_UpdateMin(i8 &lhs, i8 rhs) __attribute__((nothrow));
// Return the greater of two values
i8                   i8_Max(i8 lhs, i8 rhs) __attribute__((nothrow));
bool                 i8_Eq(i8 lhs, i8 rhs) __attribute__((nothrow));
// Set value. Return true if new value is different from old value.
bool                 i8_Update(i8 &lhs, i8 rhs) __attribute__((nothrow));
// Convert i8 to a string (user-implemented function)
void                 i8_Print(i8 row, algo::cstring &str) __attribute__((nothrow));
// Create JSON representation of i8 under PARENT node -- implemented externally
lib_json::FNode *    i8_FmtJson(i8 row, lib_json::FNode *parent) __attribute__((nothrow));
u32                  u8_Hash(u32 prev, u8 rhs) __attribute__((nothrow));
// Read fields of u8 from an ascii string.
// The function is implemented externally.
bool                 u8_ReadStrptrMaybe(u8 &parent, algo::strptr in_str);
bool                 u8_Lt(u8 lhs, u8 rhs) __attribute__((nothrow));
i32                  u8_Cmp(u8 lhs, u8 rhs) __attribute__((nothrow));
// Attempt to make LHS bigger. Return true if it was changed
bool                 u8_UpdateMax(u8 &lhs, u8 rhs) __attribute__((nothrow));
// Return the lesser of two values
u8                   u8_Min(u8 lhs, u8 rhs) __attribute__((nothrow));
// Attempt to make LHS smaller. Return true if it was changed
bool                 u8_UpdateMin(u8 &lhs, u8 rhs) __attribute__((nothrow));
// Return the greater of two values
u8                   u8_Max(u8 lhs, u8 rhs) __attribute__((nothrow));
bool                 u8_Eq(u8 lhs, u8 rhs) __attribute__((nothrow));
// Set value. Return true if new value is different from old value.
bool                 u8_Update(u8 &lhs, u8 rhs) __attribute__((nothrow));
// Convert u8 to a string (user-implemented function)
void                 u8_Print(u8 row, algo::cstring &str) __attribute__((nothrow));
// Create JSON representation of u8 under PARENT node -- implemented externally
lib_json::FNode *    u8_FmtJson(u8 row, lib_json::FNode *parent) __attribute__((nothrow));
u32                  u128_Hash(u32 prev, u128 rhs) __attribute__((nothrow));
// Read fields of u128 from an ascii string.
// The function is implemented externally.
bool                 u128_ReadStrptrMaybe(u128 &parent, algo::strptr in_str);
bool                 u128_Lt(u128 lhs, u128 rhs) __attribute__((nothrow));
i32                  u128_Cmp(u128 lhs, u128 rhs) __attribute__((nothrow));
// Attempt to make LHS bigger. Return true if it was changed
bool                 u128_UpdateMax(u128 &lhs, u128 rhs) __attribute__((nothrow));
// Return the lesser of two values
u128                 u128_Min(u128 lhs, u128 rhs) __attribute__((nothrow));
// Attempt to make LHS smaller. Return true if it was changed
bool                 u128_UpdateMin(u128 &lhs, u128 rhs) __attribute__((nothrow));
// Return the greater of two values
u128                 u128_Max(u128 lhs, u128 rhs) __attribute__((nothrow));
bool                 u128_Eq(u128 lhs, u128 rhs) __attribute__((nothrow));
// Set value. Return true if new value is different from old value.
bool                 u128_Update(u128 &lhs, u128 rhs) __attribute__((nothrow));
// Convert u128 to a string (user-implemented function)
void                 u128_Print(u128 row, algo::cstring &str) __attribute__((nothrow));
u32                  u16_Hash(u32 prev, u16 rhs) __attribute__((nothrow));
// Read fields of u16 from an ascii string.
// The function is implemented externally.
bool                 u16_ReadStrptrMaybe(u16 &parent, algo::strptr in_str);
bool                 u16_Lt(u16 lhs, u16 rhs) __attribute__((nothrow));
i32                  u16_Cmp(u16 lhs, u16 rhs) __attribute__((nothrow));
// Attempt to make LHS bigger. Return true if it was changed
bool                 u16_UpdateMax(u16 &lhs, u16 rhs) __attribute__((nothrow));
// Return the lesser of two values
u16                  u16_Min(u16 lhs, u16 rhs) __attribute__((nothrow));
// Attempt to make LHS smaller. Return true if it was changed
bool                 u16_UpdateMin(u16 &lhs, u16 rhs) __attribute__((nothrow));
// Return the greater of two values
u16                  u16_Max(u16 lhs, u16 rhs) __attribute__((nothrow));
bool                 u16_Eq(u16 lhs, u16 rhs) __attribute__((nothrow));
// Set value. Return true if new value is different from old value.
bool                 u16_Update(u16 &lhs, u16 rhs) __attribute__((nothrow));
// Convert u16 to a string (user-implemented function)
void                 u16_Print(u16 row, algo::cstring &str) __attribute__((nothrow));
// Create JSON representation of u16 under PARENT node -- implemented externally
lib_json::FNode *    u16_FmtJson(u16 row, lib_json::FNode *parent) __attribute__((nothrow));
u32                  u32_Hash(u32 prev, u32 rhs) __attribute__((nothrow));
// Read fields of u32 from an ascii string.
// The function is implemented externally.
bool                 u32_ReadStrptrMaybe(u32 &parent, algo::strptr in_str);
bool                 u32_Lt(u32 lhs, u32 rhs) __attribute__((nothrow));
i32                  u32_Cmp(u32 lhs, u32 rhs) __attribute__((nothrow));
// Attempt to make LHS bigger. Return true if it was changed
bool                 u32_UpdateMax(u32 &lhs, u32 rhs) __attribute__((nothrow));
// Return the lesser of two values
u32                  u32_Min(u32 lhs, u32 rhs) __attribute__((nothrow));
// Attempt to make LHS smaller. Return true if it was changed
bool                 u32_UpdateMin(u32 &lhs, u32 rhs) __attribute__((nothrow));
// Return the greater of two values
u32                  u32_Max(u32 lhs, u32 rhs) __attribute__((nothrow));
bool                 u32_Eq(u32 lhs, u32 rhs) __attribute__((nothrow));
// Set value. Return true if new value is different from old value.
bool                 u32_Update(u32 &lhs, u32 rhs) __attribute__((nothrow));
// Convert u32 to a string (user-implemented function)
void                 u32_Print(u32 row, algo::cstring &str) __attribute__((nothrow));
// Create JSON representation of u32 under PARENT node -- implemented externally
lib_json::FNode *    u32_FmtJson(u32 row, lib_json::FNode *parent) __attribute__((nothrow));
u32                  u64_Hash(u32 prev, u64 rhs) __attribute__((nothrow));
// Read fields of u64 from an ascii string.
// The function is implemented externally.
bool                 u64_ReadStrptrMaybe(u64 &parent, algo::strptr in_str);
bool                 u64_Lt(u64 lhs, u64 rhs) __attribute__((nothrow));
i32                  u64_Cmp(u64 lhs, u64 rhs) __attribute__((nothrow));
// Attempt to make LHS bigger. Return true if it was changed
bool                 u64_UpdateMax(u64 &lhs, u64 rhs) __attribute__((nothrow));
// Return the lesser of two values
u64                  u64_Min(u64 lhs, u64 rhs) __attribute__((nothrow));
// Attempt to make LHS smaller. Return true if it was changed
bool                 u64_UpdateMin(u64 &lhs, u64 rhs) __attribute__((nothrow));
// Return the greater of two values
u64                  u64_Max(u64 lhs, u64 rhs) __attribute__((nothrow));
bool                 u64_Eq(u64 lhs, u64 rhs) __attribute__((nothrow));
// Set value. Return true if new value is different from old value.
bool                 u64_Update(u64 &lhs, u64 rhs) __attribute__((nothrow));
// Convert u64 to a string (user-implemented function)
void                 u64_Print(u64 row, algo::cstring &str) __attribute__((nothrow));
// Create JSON representation of u64 under PARENT node -- implemented externally
lib_json::FNode *    u64_FmtJson(u64 row, lib_json::FNode *parent) __attribute__((nothrow));
// gen:ns_operators
namespace algo {
inline algo::cstring &operator <<(algo::cstring &str, const bool &row);// cfmt:bool.String
inline algo::cstring &operator <<(algo::cstring &str, const char &row);// cfmt:char.String
inline algo::cstring &operator <<(algo::cstring &str, const double &row);// cfmt:double.String
inline algo::cstring &operator <<(algo::cstring &str, const float &row);// cfmt:float.String
inline algo::cstring &operator <<(algo::cstring &str, const i16 &row);// cfmt:i16.String
inline algo::cstring &operator <<(algo::cstring &str, const i32 &row);// cfmt:i32.String
inline algo::cstring &operator <<(algo::cstring &str, const i64 &row);// cfmt:i64.String
inline algo::cstring &operator <<(algo::cstring &str, const i8 &row);// cfmt:i8.String
inline algo::cstring &operator <<(algo::cstring &str, const u8 &row);// cfmt:u8.String
inline algo::cstring &operator <<(algo::cstring &str, const u128 &row);// cfmt:u128.String
inline algo::cstring &operator <<(algo::cstring &str, const u16 &row);// cfmt:u16.String
inline algo::cstring &operator <<(algo::cstring &str, const u32 &row);// cfmt:u32.String
inline algo::cstring &operator <<(algo::cstring &str, const u64 &row);// cfmt:u64.String
}
