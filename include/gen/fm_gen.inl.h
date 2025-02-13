//
// include/gen/fm_gen.inl.h
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


#pragma once
#include "include/gen/ams_gen.inl.h"
#include "include/gen/algo_gen.inl.h"
//#pragma endinclude

inline bool fm::Code::operator ==(const fm::Code &rhs) const {
    return fm::Code_Eq(const_cast<fm::Code&>(*this),const_cast<fm::Code&>(rhs));
}

inline bool fm::Code::operator !=(const fm::Code &rhs) const {
    return !fm::Code_Eq(const_cast<fm::Code&>(*this),const_cast<fm::Code&>(rhs));
}

inline bool fm::Code::operator ==(const algo::strptr &rhs) const {
    return fm::Code_EqStrptr(const_cast<fm::Code&>(*this),rhs);
}
inline fm::Code::Code() {
    fm::Code_Init(*this);
}


// --- fm.Code.ch.Getary
// Access string as array of chars
inline algo::aryptr<char> fm::ch_Getary(const fm::Code& parent) {
    int len = ch_N(parent);
    algo::aryptr<char> ret((char*)parent.ch, len);
    return ret;
}

// --- fm.Code.ch.HashStrptr
inline u32 fm::Code_Hash(u32 prev, const algo::strptr &str) {
    return algo::CRC32Step(prev, (u8*)str.elems, str.n_elems);
}

// --- fm.Code.ch.Init
inline void fm::ch_Init(fm::Code &parent) {
    memset(parent.ch, ' ', 32);
}

// --- fm.Code.ch.Max
// always return constant 32
inline int fm::ch_Max(fm::Code& parent) {
    (void)parent;
    return 32;
}

// --- fm.Code.ch.N
inline int fm::ch_N(const fm::Code& parent) {
    u64 ret;
    ret = 32;
    while (ret>0 && parent.ch[ret-1]==u8(' ')) {
        ret--;
    }
    return int(ret);
}

// --- fm.Code.ch.AssignStrptr
// Copy from strptr (operator=)
inline void fm::Code::operator =(const algo::strptr &str) {
    ch_SetStrptr(*this, str);
}

// --- fm.Code.ch.Set
// Copy from same type
// Copy value from RHS.
inline void fm::Code::operator =(const fm::Code& parent) {
    memcpy(ch, parent.ch, 32);
}

// --- fm.Code.ch.Ctor
inline  fm::Code::Code(const fm::Code &rhs) {
    operator =(rhs);
}

// --- fm.Code.ch.CtorStrptr
inline  fm::Code::Code(const algo::strptr &rhs) {
    ch_SetStrptr(*this, rhs);
}

// --- fm.Code.ch.Cast
inline fm::Code::operator algo::strptr () const {
    return ch_Getary(*this);
}

// --- fm.Code..Cmp
inline i32 fm::Code_Cmp(fm::Code & lhs, fm::Code & rhs) {
    i32 retval = 0;
    retval = algo::strptr_Cmp(ch_Getary(lhs), ch_Getary(rhs));
    return retval;
}

// --- fm.Code..Init
// Set all fields to initial values.
inline void fm::Code_Init(fm::Code& parent) {
    memset(parent.ch, ' ', 32);
}

// --- fm.Code..Eq
inline bool fm::Code_Eq(const fm::Code & lhs,const fm::Code & rhs) {
    bool retval = true;
    retval = algo::strptr_Eq(ch_Getary(lhs), ch_Getary(rhs));
    return retval;
}

// --- fm.Code..EqStrptr
inline bool fm::Code_EqStrptr(fm::Code & lhs, const algo::strptr &rhs) {
    return algo::strptr_Eq(ch_Getary(lhs), rhs);
}

inline bool fm::Objtype::operator ==(const fm::Objtype &rhs) const {
    return fm::Objtype_Eq(const_cast<fm::Objtype&>(*this),const_cast<fm::Objtype&>(rhs));
}

inline bool fm::Objtype::operator !=(const fm::Objtype &rhs) const {
    return !fm::Objtype_Eq(const_cast<fm::Objtype&>(*this),const_cast<fm::Objtype&>(rhs));
}

inline bool fm::Objtype::operator ==(const algo::strptr &rhs) const {
    return fm::Objtype_EqStrptr(const_cast<fm::Objtype&>(*this),rhs);
}
inline fm::Objtype::Objtype() {
    fm::Objtype_Init(*this);
}


// --- fm.Objtype.ch.Getary
// Access string as array of chars
inline algo::aryptr<char> fm::ch_Getary(const fm::Objtype& parent) {
    int len = ch_N(parent);
    algo::aryptr<char> ret((char*)parent.ch, len);
    return ret;
}

// --- fm.Objtype.ch.HashStrptr
inline u32 fm::Objtype_Hash(u32 prev, const algo::strptr &str) {
    return algo::CRC32Step(prev, (u8*)str.elems, str.n_elems);
}

// --- fm.Objtype.ch.Init
inline void fm::ch_Init(fm::Objtype &parent) {
    memset(parent.ch, ' ', 15);
}

// --- fm.Objtype.ch.Max
// always return constant 15
inline int fm::ch_Max(fm::Objtype& parent) {
    (void)parent;
    return 15;
}

// --- fm.Objtype.ch.N
inline int fm::ch_N(const fm::Objtype& parent) {
    u64 ret;
    ret = 15;
    while (ret>0 && parent.ch[ret-1]==u8(' ')) {
        ret--;
    }
    return int(ret);
}

// --- fm.Objtype.ch.AssignStrptr
// Copy from strptr (operator=)
inline void fm::Objtype::operator =(const algo::strptr &str) {
    ch_SetStrptr(*this, str);
}

// --- fm.Objtype.ch.Set
// Copy from same type
// Copy value from RHS.
inline void fm::Objtype::operator =(const fm::Objtype& parent) {
    memcpy(ch, parent.ch, 15);
}

// --- fm.Objtype.ch.Ctor
inline  fm::Objtype::Objtype(const fm::Objtype &rhs) {
    operator =(rhs);
}

// --- fm.Objtype.ch.CtorStrptr
inline  fm::Objtype::Objtype(const algo::strptr &rhs) {
    ch_SetStrptr(*this, rhs);
}

// --- fm.Objtype.ch.Cast
inline fm::Objtype::operator algo::strptr () const {
    return ch_Getary(*this);
}

// --- fm.Objtype..Cmp
inline i32 fm::Objtype_Cmp(fm::Objtype & lhs, fm::Objtype & rhs) {
    i32 retval = 0;
    retval = algo::strptr_Cmp(ch_Getary(lhs), ch_Getary(rhs));
    return retval;
}

// --- fm.Objtype..Init
// Set all fields to initial values.
inline void fm::Objtype_Init(fm::Objtype& parent) {
    memset(parent.ch, ' ', 15);
}

// --- fm.Objtype..Eq
inline bool fm::Objtype_Eq(const fm::Objtype & lhs,const fm::Objtype & rhs) {
    bool retval = true;
    retval = algo::strptr_Eq(ch_Getary(lhs), ch_Getary(rhs));
    return retval;
}

// --- fm.Objtype..EqStrptr
inline bool fm::Objtype_EqStrptr(fm::Objtype & lhs, const algo::strptr &rhs) {
    return algo::strptr_Eq(ch_Getary(lhs), rhs);
}

inline bool fm::Objinst::operator ==(const fm::Objinst &rhs) const {
    return fm::Objinst_Eq(const_cast<fm::Objinst&>(*this),const_cast<fm::Objinst&>(rhs));
}

inline bool fm::Objinst::operator !=(const fm::Objinst &rhs) const {
    return !fm::Objinst_Eq(const_cast<fm::Objinst&>(*this),const_cast<fm::Objinst&>(rhs));
}

inline bool fm::Objinst::operator ==(const algo::strptr &rhs) const {
    return fm::Objinst_EqStrptr(const_cast<fm::Objinst&>(*this),rhs);
}
inline fm::Objinst::Objinst() {
    fm::Objinst_Init(*this);
}


// --- fm.Objinst.ch.Getary
// Access string as array of chars
inline algo::aryptr<char> fm::ch_Getary(const fm::Objinst& parent) {
    int len = ch_N(parent);
    algo::aryptr<char> ret((char*)parent.ch, len);
    return ret;
}

// --- fm.Objinst.ch.HashStrptr
inline u32 fm::Objinst_Hash(u32 prev, const algo::strptr &str) {
    return algo::CRC32Step(prev, (u8*)str.elems, str.n_elems);
}

// --- fm.Objinst.ch.Init
inline void fm::ch_Init(fm::Objinst &parent) {
    memset(parent.ch, ' ', 79);
}

// --- fm.Objinst.ch.Max
// always return constant 79
inline int fm::ch_Max(fm::Objinst& parent) {
    (void)parent;
    return 79;
}

// --- fm.Objinst.ch.N
inline int fm::ch_N(const fm::Objinst& parent) {
    u64 ret;
    ret = 79;
    while (ret>0 && parent.ch[ret-1]==u8(' ')) {
        ret--;
    }
    return int(ret);
}

// --- fm.Objinst.ch.AssignStrptr
// Copy from strptr (operator=)
inline void fm::Objinst::operator =(const algo::strptr &str) {
    ch_SetStrptr(*this, str);
}

// --- fm.Objinst.ch.Set
// Copy from same type
// Copy value from RHS.
inline void fm::Objinst::operator =(const fm::Objinst& parent) {
    memcpy(ch, parent.ch, 79);
}

// --- fm.Objinst.ch.Ctor
inline  fm::Objinst::Objinst(const fm::Objinst &rhs) {
    operator =(rhs);
}

// --- fm.Objinst.ch.CtorStrptr
inline  fm::Objinst::Objinst(const algo::strptr &rhs) {
    ch_SetStrptr(*this, rhs);
}

// --- fm.Objinst.ch.Cast
inline fm::Objinst::operator algo::strptr () const {
    return ch_Getary(*this);
}

// --- fm.Objinst..Cmp
inline i32 fm::Objinst_Cmp(fm::Objinst & lhs, fm::Objinst & rhs) {
    i32 retval = 0;
    retval = algo::strptr_Cmp(ch_Getary(lhs), ch_Getary(rhs));
    return retval;
}

// --- fm.Objinst..Init
// Set all fields to initial values.
inline void fm::Objinst_Init(fm::Objinst& parent) {
    memset(parent.ch, ' ', 79);
}

// --- fm.Objinst..Eq
inline bool fm::Objinst_Eq(const fm::Objinst & lhs,const fm::Objinst & rhs) {
    bool retval = true;
    retval = algo::strptr_Eq(ch_Getary(lhs), ch_Getary(rhs));
    return retval;
}

// --- fm.Objinst..EqStrptr
inline bool fm::Objinst_EqStrptr(fm::Objinst & lhs, const algo::strptr &rhs) {
    return algo::strptr_Eq(ch_Getary(lhs), rhs);
}
inline fm::Flag::Flag() {
    fm::Flag_Init(*this);
}


// --- fm.Flag.value.GetEnum
// Get value of field as enum type
inline fm_Flag_value_Enum fm::value_GetEnum(const fm::Flag& parent) {
    return fm_Flag_value_Enum(parent.value);
}

// --- fm.Flag.value.SetEnum
// Set value of field from enum type.
inline void fm::value_SetEnum(fm::Flag& parent, fm_Flag_value_Enum rhs) {
    parent.value = char(rhs);
}

// --- fm.Flag..Init
// Set all fields to initial values.
inline void fm::Flag_Init(fm::Flag& parent) {
    parent.value = char('C');
}

inline bool fm::Severity::operator ==(const fm::Severity &rhs) const {
    return fm::Severity_Eq(const_cast<fm::Severity&>(*this),const_cast<fm::Severity&>(rhs));
}

inline bool fm::Severity::operator !=(const fm::Severity &rhs) const {
    return !fm::Severity_Eq(const_cast<fm::Severity&>(*this),const_cast<fm::Severity&>(rhs));
}

inline bool fm::Severity::operator <(const fm::Severity &rhs) const {
    return fm::Severity_Lt(const_cast<fm::Severity&>(*this),const_cast<fm::Severity&>(rhs));
}

inline bool fm::Severity::operator >(const fm::Severity &rhs) const {
    return rhs < *this;
}

inline bool fm::Severity::operator <=(const fm::Severity &rhs) const {
    return !(rhs < *this);
}

inline bool fm::Severity::operator >=(const fm::Severity &rhs) const {
    return !(*this < rhs);
}

inline bool fm::Severity::operator ==(fm_Severity_value_Enum rhs) const {
    return fm::Severity_EqEnum(const_cast<fm::Severity&>(*this),rhs);
}
inline fm::Severity::Severity() {
    fm::Severity_Init(*this);
}


// --- fm.Severity.value.GetEnum
// Get value of field as enum type
inline fm_Severity_value_Enum fm::value_GetEnum(const fm::Severity& parent) {
    return fm_Severity_value_Enum(parent.value);
}

// --- fm.Severity.value.SetEnum
// Set value of field from enum type.
inline void fm::value_SetEnum(fm::Severity& parent, fm_Severity_value_Enum rhs) {
    parent.value = char(rhs);
}

// --- fm.Severity..Lt
inline bool fm::Severity_Lt(fm::Severity lhs, fm::Severity rhs) {
    return char_Lt(lhs.value, rhs.value);
}

// --- fm.Severity..Cmp
inline i32 fm::Severity_Cmp(fm::Severity lhs, fm::Severity rhs) {
    i32 retval = 0;
    retval = char_Cmp(lhs.value, rhs.value);
    return retval;
}

// --- fm.Severity..Init
// Set all fields to initial values.
inline void fm::Severity_Init(fm::Severity& parent) {
    parent.value = char('1');
}

// --- fm.Severity..UpdateMax
// Attempt to make LHS bigger. Return true if it was changed
inline bool fm::Severity_UpdateMax(fm::Severity &lhs, fm::Severity rhs) {
    bool retval = lhs < rhs;
    if (retval) {
        lhs = rhs;
    }
    return retval;
}

// --- fm.Severity..Min
// Return the lesser of two values
inline fm::Severity fm::Severity_Min(fm::Severity lhs, fm::Severity rhs) {
    return lhs < rhs ? lhs : rhs;
}

// --- fm.Severity..UpdateMin
// Attempt to make LHS smaller. Return true if it was changed
inline bool fm::Severity_UpdateMin(fm::Severity &lhs, fm::Severity rhs) {
    bool retval = rhs < lhs;
    if (retval) {
        lhs = rhs;
    }
    return retval;
}

// --- fm.Severity..Max
// Return the greater of two values
inline fm::Severity fm::Severity_Max(fm::Severity lhs, fm::Severity rhs) {
    return rhs < lhs ? lhs : rhs;
}

// --- fm.Severity..Eq
inline bool fm::Severity_Eq(fm::Severity lhs, fm::Severity rhs) {
    bool retval = true;
    retval = char_Eq(lhs.value, rhs.value);
    return retval;
}

// --- fm.Severity..Update
// Set value. Return true if new value is different from old value.
inline bool fm::Severity_Update(fm::Severity &lhs, fm::Severity rhs) {
    bool ret = !Severity_Eq(lhs, rhs); // compare values
    if (ret) {
        lhs = rhs; // update
    }
    return ret;
}

// --- fm.Severity..EqEnum
// define enum comparison operator to avoid ambiguity
inline bool fm::Severity_EqEnum(fm::Severity lhs, fm_Severity_value_Enum rhs) {
    return fm_Severity_value_Enum(lhs.value) == rhs;
}

inline bool fm::Summary::operator ==(const fm::Summary &rhs) const {
    return fm::Summary_Eq(const_cast<fm::Summary&>(*this),const_cast<fm::Summary&>(rhs));
}

inline bool fm::Summary::operator !=(const fm::Summary &rhs) const {
    return !fm::Summary_Eq(const_cast<fm::Summary&>(*this),const_cast<fm::Summary&>(rhs));
}

inline bool fm::Summary::operator ==(const algo::strptr &rhs) const {
    return fm::Summary_EqStrptr(const_cast<fm::Summary&>(*this),rhs);
}
inline fm::Summary::Summary() {
    fm::Summary_Init(*this);
}


// --- fm.Summary.ch.Getary
// Access string as array of chars
inline algo::aryptr<char> fm::ch_Getary(const fm::Summary& parent) {
    int len = ch_N(parent);
    algo::aryptr<char> ret((char*)parent.ch, len);
    return ret;
}

// --- fm.Summary.ch.HashStrptr
inline u32 fm::Summary_Hash(u32 prev, const algo::strptr &str) {
    return algo::CRC32Step(prev, (u8*)str.elems, str.n_elems);
}

// --- fm.Summary.ch.Init
inline void fm::ch_Init(fm::Summary &parent) {
    memset(parent.ch, ' ', 64);
}

// --- fm.Summary.ch.Max
// always return constant 64
inline int fm::ch_Max(fm::Summary& parent) {
    (void)parent;
    return 64;
}

// --- fm.Summary.ch.N
inline int fm::ch_N(const fm::Summary& parent) {
    u64 ret;
    ret = 64;
    while (ret>0 && parent.ch[ret-1]==u8(' ')) {
        ret--;
    }
    return int(ret);
}

// --- fm.Summary.ch.AssignStrptr
// Copy from strptr (operator=)
inline void fm::Summary::operator =(const algo::strptr &str) {
    ch_SetStrptr(*this, str);
}

// --- fm.Summary.ch.Set
// Copy from same type
// Copy value from RHS.
inline void fm::Summary::operator =(const fm::Summary& parent) {
    memcpy(ch, parent.ch, 64);
}

// --- fm.Summary.ch.Ctor
inline  fm::Summary::Summary(const fm::Summary &rhs) {
    operator =(rhs);
}

// --- fm.Summary.ch.CtorStrptr
inline  fm::Summary::Summary(const algo::strptr &rhs) {
    ch_SetStrptr(*this, rhs);
}

// --- fm.Summary.ch.Cast
inline fm::Summary::operator algo::strptr () const {
    return ch_Getary(*this);
}

// --- fm.Summary..Cmp
inline i32 fm::Summary_Cmp(fm::Summary & lhs, fm::Summary & rhs) {
    i32 retval = 0;
    retval = algo::strptr_Cmp(ch_Getary(lhs), ch_Getary(rhs));
    return retval;
}

// --- fm.Summary..Init
// Set all fields to initial values.
inline void fm::Summary_Init(fm::Summary& parent) {
    memset(parent.ch, ' ', 64);
}

// --- fm.Summary..Eq
inline bool fm::Summary_Eq(const fm::Summary & lhs,const fm::Summary & rhs) {
    bool retval = true;
    retval = algo::strptr_Eq(ch_Getary(lhs), ch_Getary(rhs));
    return retval;
}

// --- fm.Summary..EqStrptr
inline bool fm::Summary_EqStrptr(fm::Summary & lhs, const algo::strptr &rhs) {
    return algo::strptr_Eq(ch_Getary(lhs), rhs);
}

inline bool fm::Description::operator ==(const fm::Description &rhs) const {
    return fm::Description_Eq(const_cast<fm::Description&>(*this),const_cast<fm::Description&>(rhs));
}

inline bool fm::Description::operator !=(const fm::Description &rhs) const {
    return !fm::Description_Eq(const_cast<fm::Description&>(*this),const_cast<fm::Description&>(rhs));
}

inline bool fm::Description::operator ==(const algo::strptr &rhs) const {
    return fm::Description_EqStrptr(const_cast<fm::Description&>(*this),rhs);
}
inline fm::Description::Description() {
    fm::Description_Init(*this);
}


// --- fm.Description.ch.Getary
// Access string as array of chars
inline algo::aryptr<char> fm::ch_Getary(const fm::Description& parent) {
    int len = ch_N(parent);
    algo::aryptr<char> ret((char*)parent.ch, len);
    return ret;
}

// --- fm.Description.ch.HashStrptr
inline u32 fm::Description_Hash(u32 prev, const algo::strptr &str) {
    return algo::CRC32Step(prev, (u8*)str.elems, str.n_elems);
}

// --- fm.Description.ch.Init
inline void fm::ch_Init(fm::Description &parent) {
    memset(parent.ch, ' ', 128);
}

// --- fm.Description.ch.Max
// always return constant 128
inline int fm::ch_Max(fm::Description& parent) {
    (void)parent;
    return 128;
}

// --- fm.Description.ch.N
inline int fm::ch_N(const fm::Description& parent) {
    u64 ret;
    ret = 128;
    while (ret>0 && parent.ch[ret-1]==u8(' ')) {
        ret--;
    }
    return int(ret);
}

// --- fm.Description.ch.AssignStrptr
// Copy from strptr (operator=)
inline void fm::Description::operator =(const algo::strptr &str) {
    ch_SetStrptr(*this, str);
}

// --- fm.Description.ch.Set
// Copy from same type
// Copy value from RHS.
inline void fm::Description::operator =(const fm::Description& parent) {
    memcpy(ch, parent.ch, 128);
}

// --- fm.Description.ch.Ctor
inline  fm::Description::Description(const fm::Description &rhs) {
    operator =(rhs);
}

// --- fm.Description.ch.CtorStrptr
inline  fm::Description::Description(const algo::strptr &rhs) {
    ch_SetStrptr(*this, rhs);
}

// --- fm.Description.ch.Cast
inline fm::Description::operator algo::strptr () const {
    return ch_Getary(*this);
}

// --- fm.Description..Cmp
inline i32 fm::Description_Cmp(fm::Description & lhs, fm::Description & rhs) {
    i32 retval = 0;
    retval = algo::strptr_Cmp(ch_Getary(lhs), ch_Getary(rhs));
    return retval;
}

// --- fm.Description..Init
// Set all fields to initial values.
inline void fm::Description_Init(fm::Description& parent) {
    memset(parent.ch, ' ', 128);
}

// --- fm.Description..Eq
inline bool fm::Description_Eq(const fm::Description & lhs,const fm::Description & rhs) {
    bool retval = true;
    retval = algo::strptr_Eq(ch_Getary(lhs), ch_Getary(rhs));
    return retval;
}

// --- fm.Description..EqStrptr
inline bool fm::Description_EqStrptr(fm::Description & lhs, const algo::strptr &rhs) {
    return algo::strptr_Eq(ch_Getary(lhs), rhs);
}

inline bool fm::Source::operator ==(const fm::Source &rhs) const {
    return fm::Source_Eq(const_cast<fm::Source&>(*this),const_cast<fm::Source&>(rhs));
}

inline bool fm::Source::operator !=(const fm::Source &rhs) const {
    return !fm::Source_Eq(const_cast<fm::Source&>(*this),const_cast<fm::Source&>(rhs));
}

inline bool fm::Source::operator ==(const algo::strptr &rhs) const {
    return fm::Source_EqStrptr(const_cast<fm::Source&>(*this),rhs);
}
inline fm::Source::Source() {
    fm::Source_Init(*this);
}


// --- fm.Source.ch.Getary
// Access string as array of chars
inline algo::aryptr<char> fm::ch_Getary(const fm::Source& parent) {
    int len = ch_N(parent);
    algo::aryptr<char> ret((char*)parent.ch, len);
    return ret;
}

// --- fm.Source.ch.HashStrptr
inline u32 fm::Source_Hash(u32 prev, const algo::strptr &str) {
    return algo::CRC32Step(prev, (u8*)str.elems, str.n_elems);
}

// --- fm.Source.ch.Init
inline void fm::ch_Init(fm::Source &parent) {
    memset(parent.ch, ' ', 32);
}

// --- fm.Source.ch.Max
// always return constant 32
inline int fm::ch_Max(fm::Source& parent) {
    (void)parent;
    return 32;
}

// --- fm.Source.ch.N
inline int fm::ch_N(const fm::Source& parent) {
    u64 ret;
    ret = 32;
    while (ret>0 && parent.ch[ret-1]==u8(' ')) {
        ret--;
    }
    return int(ret);
}

// --- fm.Source.ch.AssignStrptr
// Copy from strptr (operator=)
inline void fm::Source::operator =(const algo::strptr &str) {
    ch_SetStrptr(*this, str);
}

// --- fm.Source.ch.Set
// Copy from same type
// Copy value from RHS.
inline void fm::Source::operator =(const fm::Source& parent) {
    memcpy(ch, parent.ch, 32);
}

// --- fm.Source.ch.Ctor
inline  fm::Source::Source(const fm::Source &rhs) {
    operator =(rhs);
}

// --- fm.Source.ch.CtorStrptr
inline  fm::Source::Source(const algo::strptr &rhs) {
    ch_SetStrptr(*this, rhs);
}

// --- fm.Source.ch.Cast
inline fm::Source::operator algo::strptr () const {
    return ch_Getary(*this);
}

// --- fm.Source..Cmp
inline i32 fm::Source_Cmp(fm::Source & lhs, fm::Source & rhs) {
    i32 retval = 0;
    retval = algo::strptr_Cmp(ch_Getary(lhs), ch_Getary(rhs));
    return retval;
}

// --- fm.Source..Init
// Set all fields to initial values.
inline void fm::Source_Init(fm::Source& parent) {
    memset(parent.ch, ' ', 32);
}

// --- fm.Source..Eq
inline bool fm::Source_Eq(const fm::Source & lhs,const fm::Source & rhs) {
    bool retval = true;
    retval = algo::strptr_Eq(ch_Getary(lhs), ch_Getary(rhs));
    return retval;
}

// --- fm.Source..EqStrptr
inline bool fm::Source_EqStrptr(fm::Source & lhs, const algo::strptr &rhs) {
    return algo::strptr_Eq(ch_Getary(lhs), rhs);
}
inline fm::AlarmMsg::AlarmMsg() {
    fm::AlarmMsg_Init(*this);
}


// --- fm.AlarmMsg.base.Castdown
// Check if ams::MsgHeader is an instance of AlarmMsg by checking the type field
// If it is, return the pointer of target type.
// Additionally, check if the length field permits valid instance of AlarmMsg.
// If not successful, quietly return NULL.
inline fm::AlarmMsg* fm::AlarmMsg_Castdown(ams::MsgHeader &hdr) {
    bool cond = hdr.type == (17);
    cond &= i32(hdr.length) >= ssizeof(fm::AlarmMsg);
    return cond ? reinterpret_cast<fm::AlarmMsg*>(&hdr) : NULL;
}

// --- fm.AlarmMsg.base.Castbase
inline ams::MsgHeader& fm::Castbase(fm::AlarmMsg& parent) {
    return reinterpret_cast<ams::MsgHeader&>(parent);
}

// --- fm.AlarmMsg..GetMsgLength
// Message length (uses length field)
inline i32 fm::GetMsgLength(const fm::AlarmMsg& row) {
    return i32(const_cast<fm::AlarmMsg&>(row).length);
}

// --- fm.AlarmMsg..GetMsgMemptr
// Memptr encompassing the message (uses length field)
inline algo::memptr fm::GetMsgMemptr(const fm::AlarmMsg& row) {
    return algo::memptr((u8*)&row, i32(const_cast<fm::AlarmMsg&>(row).length));
}
inline fm::FieldId::FieldId(i32                            in_value)
    : value(in_value)
{
}
inline fm::FieldId::FieldId(fm_FieldIdEnum arg) { this->value = i32(arg); }
inline fm::FieldId::FieldId() {
    fm::FieldId_Init(*this);
}


// --- fm.FieldId.value.GetEnum
// Get value of field as enum type
inline fm_FieldIdEnum fm::value_GetEnum(const fm::FieldId& parent) {
    return fm_FieldIdEnum(parent.value);
}

// --- fm.FieldId.value.SetEnum
// Set value of field from enum type.
inline void fm::value_SetEnum(fm::FieldId& parent, fm_FieldIdEnum rhs) {
    parent.value = i32(rhs);
}

// --- fm.FieldId.value.Cast
inline fm::FieldId::operator fm_FieldIdEnum () const {
    return fm_FieldIdEnum((*this).value);
}

// --- fm.FieldId..Init
// Set all fields to initial values.
inline void fm::FieldId_Init(fm::FieldId& parent) {
    parent.value = i32(-1);
}
inline fm::Protocol::Protocol() {
}


inline algo::cstring &algo::operator <<(algo::cstring &str, const fm::Flag &row) {// cfmt:fm.Flag.String
    fm::Flag_Print(const_cast<fm::Flag&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const fm::Severity &row) {// cfmt:fm.Severity.String
    fm::Severity_Print(const_cast<fm::Severity&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const fm::AlarmMsg &row) {// cfmt:fm.AlarmMsg.String
    fm::AlarmMsg_Print(const_cast<fm::AlarmMsg&>(row), str);
    return str;
}

inline algo::cstring &algo::operator <<(algo::cstring &str, const fm::FieldId &row) {// cfmt:fm.FieldId.String
    fm::FieldId_Print(const_cast<fm::FieldId&>(row), str);
    return str;
}
