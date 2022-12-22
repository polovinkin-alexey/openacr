//
// cpp/gen/atfdb_gen.cpp
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


#include "include/algo.h"  // hard-coded include
#include "include/gen/atfdb_gen.h"
#include "include/gen/atfdb_gen.inl.h"
#include "include/gen/algo_gen.h"
#include "include/gen/algo_gen.inl.h"
//#pragma endinclude
// compile-time string constants for atfdb.Msgdir.msgdir
const char *atfdb_Msgdir_msgdir_exp   = "exp";
const char *atfdb_Msgdir_msgdir_in    = "in";

namespace atfdb {
    static void          SizeCheck();
} // end namespace atfdb

// --- atfdb.Amctest..ReadFieldMaybe
bool atfdb::Amctest_ReadFieldMaybe(atfdb::Amctest &parent, algo::strptr field, algo::strptr strval) {
    atfdb::FieldId field_id;
    (void)value_SetStrptrMaybe(field_id,field);
    bool retval = true; // default is no error
    switch(field_id) {
        case atfdb_FieldId_amctest: retval = algo::Smallstr50_ReadStrptrMaybe(parent.amctest, strval); break;
        case atfdb_FieldId_comment: retval = algo::Comment_ReadStrptrMaybe(parent.comment, strval); break;
        default: break;
    }
    if (!retval) {
        algo_lib::AppendErrtext("attr",field);
    }
    return retval;
}

// --- atfdb.Amctest..ReadStrptrMaybe
// Read fields of atfdb::Amctest from an ascii string.
// The format of the string is an ssim Tuple
bool atfdb::Amctest_ReadStrptrMaybe(atfdb::Amctest &parent, algo::strptr in_str) {
    bool retval = true;
    retval = algo::StripTypeTag(in_str, "atfdb.amctest") || algo::StripTypeTag(in_str, "atfdb.Amctest");
    ind_beg(algo::Attr_curs, attr, in_str) {
        retval = retval && Amctest_ReadFieldMaybe(parent, attr.name, attr.value);
    }ind_end;
    return retval;
}

// --- atfdb.Amctest..Print
// print string representation of atfdb::Amctest to string LHS, no header -- cprint:atfdb.Amctest.String
void atfdb::Amctest_Print(atfdb::Amctest & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "atfdb.amctest";

    algo::Smallstr50_Print(row.amctest, temp);
    PrintAttrSpaceReset(str,"amctest", temp);

    algo::Comment_Print(row.comment, temp);
    PrintAttrSpaceReset(str,"comment", temp);
}

// --- atfdb.Cijob..ReadFieldMaybe
bool atfdb::Cijob_ReadFieldMaybe(atfdb::Cijob &parent, algo::strptr field, algo::strptr strval) {
    atfdb::FieldId field_id;
    (void)value_SetStrptrMaybe(field_id,field);
    bool retval = true; // default is no error
    switch(field_id) {
        case atfdb_FieldId_cijob: retval = algo::Smallstr50_ReadStrptrMaybe(parent.cijob, strval); break;
        case atfdb_FieldId_comment: retval = algo::Comment_ReadStrptrMaybe(parent.comment, strval); break;
        default: break;
    }
    if (!retval) {
        algo_lib::AppendErrtext("attr",field);
    }
    return retval;
}

// --- atfdb.Cijob..ReadStrptrMaybe
// Read fields of atfdb::Cijob from an ascii string.
// The format of the string is an ssim Tuple
bool atfdb::Cijob_ReadStrptrMaybe(atfdb::Cijob &parent, algo::strptr in_str) {
    bool retval = true;
    retval = algo::StripTypeTag(in_str, "atfdb.cijob") || algo::StripTypeTag(in_str, "atfdb.Cijob");
    ind_beg(algo::Attr_curs, attr, in_str) {
        retval = retval && Cijob_ReadFieldMaybe(parent, attr.name, attr.value);
    }ind_end;
    return retval;
}

// --- atfdb.Cijob..Print
// print string representation of atfdb::Cijob to string LHS, no header -- cprint:atfdb.Cijob.String
void atfdb::Cijob_Print(atfdb::Cijob & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "atfdb.cijob";

    algo::Smallstr50_Print(row.cijob, temp);
    PrintAttrSpaceReset(str,"cijob", temp);

    algo::Comment_Print(row.comment, temp);
    PrintAttrSpaceReset(str,"comment", temp);
}

// --- atfdb.Citest..ReadFieldMaybe
bool atfdb::Citest_ReadFieldMaybe(atfdb::Citest &parent, algo::strptr field, algo::strptr strval) {
    atfdb::FieldId field_id;
    (void)value_SetStrptrMaybe(field_id,field);
    bool retval = true; // default is no error
    switch(field_id) {
        case atfdb_FieldId_citest: retval = algo::Smallstr50_ReadStrptrMaybe(parent.citest, strval); break;
        case atfdb_FieldId_needenv: retval = bool_ReadStrptrMaybe(parent.needenv, strval); break;
        case atfdb_FieldId_cijob: retval = algo::Smallstr50_ReadStrptrMaybe(parent.cijob, strval); break;
        case atfdb_FieldId_comment: retval = algo::Comment_ReadStrptrMaybe(parent.comment, strval); break;
        default: break;
    }
    if (!retval) {
        algo_lib::AppendErrtext("attr",field);
    }
    return retval;
}

// --- atfdb.Citest..ReadStrptrMaybe
// Read fields of atfdb::Citest from an ascii string.
// The format of the string is an ssim Tuple
bool atfdb::Citest_ReadStrptrMaybe(atfdb::Citest &parent, algo::strptr in_str) {
    bool retval = true;
    retval = algo::StripTypeTag(in_str, "atfdb.citest") || algo::StripTypeTag(in_str, "atfdb.Citest");
    ind_beg(algo::Attr_curs, attr, in_str) {
        retval = retval && Citest_ReadFieldMaybe(parent, attr.name, attr.value);
    }ind_end;
    return retval;
}

// --- atfdb.Citest..Print
// print string representation of atfdb::Citest to string LHS, no header -- cprint:atfdb.Citest.String
void atfdb::Citest_Print(atfdb::Citest & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "atfdb.citest";

    algo::Smallstr50_Print(row.citest, temp);
    PrintAttrSpaceReset(str,"citest", temp);

    bool_Print(row.needenv, temp);
    PrintAttrSpaceReset(str,"needenv", temp);

    algo::Smallstr50_Print(row.cijob, temp);
    PrintAttrSpaceReset(str,"cijob", temp);

    algo::Comment_Print(row.comment, temp);
    PrintAttrSpaceReset(str,"comment", temp);
}

// --- atfdb.Comptest.target.Get
algo::Smallstr16 atfdb::target_Get(atfdb::Comptest& parent) {
    algo::Smallstr16 ret(algo::Pathcomp(parent.comptest, ".LL"));
    return ret;
}

// --- atfdb.Comptest.target.Get2
algo::Smallstr16 atfdb::Comptest_target_Get(algo::strptr arg) {
    algo::Smallstr16 ret(algo::Pathcomp(arg, ".LL"));
    return ret;
}

// --- atfdb.Comptest.testname.Get
algo::Smallstr50 atfdb::testname_Get(atfdb::Comptest& parent) {
    algo::Smallstr50 ret(algo::Pathcomp(parent.comptest, ".LR"));
    return ret;
}

// --- atfdb.Comptest.testname.Get2
algo::Smallstr50 atfdb::Comptest_testname_Get(algo::strptr arg) {
    algo::Smallstr50 ret(algo::Pathcomp(arg, ".LR"));
    return ret;
}

// --- atfdb.Comptest..Concat_target_testname
tempstr atfdb::Comptest_Concat_target_testname( const algo::strptr& target ,const algo::strptr& testname ) {
    return tempstr() << target <<'.'<< testname ;
}

// --- atfdb.Comptest..ReadFieldMaybe
bool atfdb::Comptest_ReadFieldMaybe(atfdb::Comptest &parent, algo::strptr field, algo::strptr strval) {
    atfdb::FieldId field_id;
    (void)value_SetStrptrMaybe(field_id,field);
    bool retval = true; // default is no error
    switch(field_id) {
        case atfdb_FieldId_comptest: retval = algo::Smallstr50_ReadStrptrMaybe(parent.comptest, strval); break;
        case atfdb_FieldId_timeout: retval = i32_ReadStrptrMaybe(parent.timeout, strval); break;
        case atfdb_FieldId_memcheck: retval = bool_ReadStrptrMaybe(parent.memcheck, strval); break;
        case atfdb_FieldId_exit_code: retval = u8_ReadStrptrMaybe(parent.exit_code, strval); break;
        case atfdb_FieldId_comment: retval = algo::Comment_ReadStrptrMaybe(parent.comment, strval); break;
        default: break;
    }
    if (!retval) {
        algo_lib::AppendErrtext("attr",field);
    }
    return retval;
}

// --- atfdb.Comptest..ReadStrptrMaybe
// Read fields of atfdb::Comptest from an ascii string.
// The format of the string is an ssim Tuple
bool atfdb::Comptest_ReadStrptrMaybe(atfdb::Comptest &parent, algo::strptr in_str) {
    bool retval = true;
    retval = algo::StripTypeTag(in_str, "atfdb.comptest") || algo::StripTypeTag(in_str, "atfdb.Comptest");
    ind_beg(algo::Attr_curs, attr, in_str) {
        retval = retval && Comptest_ReadFieldMaybe(parent, attr.name, attr.value);
    }ind_end;
    return retval;
}

// --- atfdb.Comptest..Print
// print string representation of atfdb::Comptest to string LHS, no header -- cprint:atfdb.Comptest.String
void atfdb::Comptest_Print(atfdb::Comptest & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "atfdb.comptest";

    algo::Smallstr50_Print(row.comptest, temp);
    PrintAttrSpaceReset(str,"comptest", temp);

    i32_Print(row.timeout, temp);
    PrintAttrSpaceReset(str,"timeout", temp);

    bool_Print(row.memcheck, temp);
    PrintAttrSpaceReset(str,"memcheck", temp);

    u8_Print(row.exit_code, temp);
    PrintAttrSpaceReset(str,"exit_code", temp);

    algo::Comment_Print(row.comment, temp);
    PrintAttrSpaceReset(str,"comment", temp);
}

// --- atfdb.FieldId.value.ToCstr
// Convert numeric value of field to one of predefined string constants.
// If string is found, return a static C string. Otherwise, return NULL.
const char* atfdb::value_ToCstr(const atfdb::FieldId& parent) {
    const char *ret = NULL;
    switch(value_GetEnum(parent)) {
        case atfdb_FieldId_amctest         : ret = "amctest";  break;
        case atfdb_FieldId_comment         : ret = "comment";  break;
        case atfdb_FieldId_cijob           : ret = "cijob";  break;
        case atfdb_FieldId_citest          : ret = "citest";  break;
        case atfdb_FieldId_needenv         : ret = "needenv";  break;
        case atfdb_FieldId_comptest        : ret = "comptest";  break;
        case atfdb_FieldId_target          : ret = "target";  break;
        case atfdb_FieldId_testname        : ret = "testname";  break;
        case atfdb_FieldId_timeout         : ret = "timeout";  break;
        case atfdb_FieldId_memcheck        : ret = "memcheck";  break;
        case atfdb_FieldId_exit_code       : ret = "exit_code";  break;
        case atfdb_FieldId_msgdir          : ret = "msgdir";  break;
        case atfdb_FieldId_args            : ret = "args";  break;
        case atfdb_FieldId_test_gsymbol_char: ret = "test_gsymbol_char";  break;
        case atfdb_FieldId_test_gsymbol_pkey: ret = "test_gsymbol_pkey";  break;
        case atfdb_FieldId_test_gsymbol_strptr: ret = "test_gsymbol_strptr";  break;
        case atfdb_FieldId_filter          : ret = "filter";  break;
        case atfdb_FieldId_tmsg            : ret = "tmsg";  break;
        case atfdb_FieldId_rank            : ret = "rank";  break;
        case atfdb_FieldId_dir             : ret = "dir";  break;
        case atfdb_FieldId_msg             : ret = "msg";  break;
        case atfdb_FieldId_unittest        : ret = "unittest";  break;
        case atfdb_FieldId_value           : ret = "value";  break;
    }
    return ret;
}

// --- atfdb.FieldId.value.Print
// Convert value to a string. First, attempt conversion to a known string.
// If no string matches, print value as a numeric value.
void atfdb::value_Print(const atfdb::FieldId& parent, algo::cstring &lhs) {
    const char *strval = value_ToCstr(parent);
    if (strval) {
        lhs << strval;
    } else {
        lhs << parent.value;
    }
}

// --- atfdb.FieldId.value.SetStrptrMaybe
// Convert string to field.
// If the string is invalid, do not modify field and return false.
// In case of success, return true
bool atfdb::value_SetStrptrMaybe(atfdb::FieldId& parent, algo::strptr rhs) {
    bool ret = false;
    switch (elems_N(rhs)) {
        case 3: {
            switch (u64(algo::ReadLE16(rhs.elems))|(u64(rhs[2])<<16)) {
                case LE_STR3('d','i','r'): {
                    value_SetEnum(parent,atfdb_FieldId_dir); ret = true; break;
                }
                case LE_STR3('m','s','g'): {
                    value_SetEnum(parent,atfdb_FieldId_msg); ret = true; break;
                }
            }
            break;
        }
        case 4: {
            switch (u64(algo::ReadLE32(rhs.elems))) {
                case LE_STR4('a','r','g','s'): {
                    value_SetEnum(parent,atfdb_FieldId_args); ret = true; break;
                }
                case LE_STR4('r','a','n','k'): {
                    value_SetEnum(parent,atfdb_FieldId_rank); ret = true; break;
                }
                case LE_STR4('t','m','s','g'): {
                    value_SetEnum(parent,atfdb_FieldId_tmsg); ret = true; break;
                }
            }
            break;
        }
        case 5: {
            switch (u64(algo::ReadLE32(rhs.elems))|(u64(rhs[4])<<32)) {
                case LE_STR5('c','i','j','o','b'): {
                    value_SetEnum(parent,atfdb_FieldId_cijob); ret = true; break;
                }
                case LE_STR5('v','a','l','u','e'): {
                    value_SetEnum(parent,atfdb_FieldId_value); ret = true; break;
                }
            }
            break;
        }
        case 6: {
            switch (u64(algo::ReadLE32(rhs.elems))|(u64(algo::ReadLE16(rhs.elems+4))<<32)) {
                case LE_STR6('c','i','t','e','s','t'): {
                    value_SetEnum(parent,atfdb_FieldId_citest); ret = true; break;
                }
                case LE_STR6('f','i','l','t','e','r'): {
                    value_SetEnum(parent,atfdb_FieldId_filter); ret = true; break;
                }
                case LE_STR6('m','s','g','d','i','r'): {
                    value_SetEnum(parent,atfdb_FieldId_msgdir); ret = true; break;
                }
                case LE_STR6('t','a','r','g','e','t'): {
                    value_SetEnum(parent,atfdb_FieldId_target); ret = true; break;
                }
            }
            break;
        }
        case 7: {
            switch (u64(algo::ReadLE32(rhs.elems))|(u64(algo::ReadLE16(rhs.elems+4))<<32)|(u64(rhs[6])<<48)) {
                case LE_STR7('a','m','c','t','e','s','t'): {
                    value_SetEnum(parent,atfdb_FieldId_amctest); ret = true; break;
                }
                case LE_STR7('c','o','m','m','e','n','t'): {
                    value_SetEnum(parent,atfdb_FieldId_comment); ret = true; break;
                }
                case LE_STR7('n','e','e','d','e','n','v'): {
                    value_SetEnum(parent,atfdb_FieldId_needenv); ret = true; break;
                }
                case LE_STR7('t','i','m','e','o','u','t'): {
                    value_SetEnum(parent,atfdb_FieldId_timeout); ret = true; break;
                }
            }
            break;
        }
        case 8: {
            switch (algo::ReadLE64(rhs.elems)) {
                case LE_STR8('c','o','m','p','t','e','s','t'): {
                    value_SetEnum(parent,atfdb_FieldId_comptest); ret = true; break;
                }
                case LE_STR8('m','e','m','c','h','e','c','k'): {
                    value_SetEnum(parent,atfdb_FieldId_memcheck); ret = true; break;
                }
                case LE_STR8('t','e','s','t','n','a','m','e'): {
                    value_SetEnum(parent,atfdb_FieldId_testname); ret = true; break;
                }
                case LE_STR8('u','n','i','t','t','e','s','t'): {
                    value_SetEnum(parent,atfdb_FieldId_unittest); ret = true; break;
                }
            }
            break;
        }
        case 9: {
            switch (algo::ReadLE64(rhs.elems)) {
                case LE_STR8('e','x','i','t','_','c','o','d'): {
                    if (memcmp(rhs.elems+8,"e",1)==0) { value_SetEnum(parent,atfdb_FieldId_exit_code); ret = true; break; }
                    break;
                }
            }
            break;
        }
        case 17: {
            switch (algo::ReadLE64(rhs.elems)) {
                case LE_STR8('t','e','s','t','_','g','s','y'): {
                    if (memcmp(rhs.elems+8,"mbol_char",9)==0) { value_SetEnum(parent,atfdb_FieldId_test_gsymbol_char); ret = true; break; }
                    if (memcmp(rhs.elems+8,"mbol_pkey",9)==0) { value_SetEnum(parent,atfdb_FieldId_test_gsymbol_pkey); ret = true; break; }
                    break;
                }
            }
            break;
        }
        case 19: {
            switch (algo::ReadLE64(rhs.elems)) {
                case LE_STR8('t','e','s','t','_','g','s','y'): {
                    if (memcmp(rhs.elems+8,"mbol_strptr",11)==0) { value_SetEnum(parent,atfdb_FieldId_test_gsymbol_strptr); ret = true; break; }
                    break;
                }
            }
            break;
        }
    }
    return ret;
}

// --- atfdb.FieldId.value.SetStrptr
// Convert string to field.
// If the string is invalid, set numeric value to DFLT
void atfdb::value_SetStrptr(atfdb::FieldId& parent, algo::strptr rhs, atfdb_FieldIdEnum dflt) {
    if (!value_SetStrptrMaybe(parent,rhs)) value_SetEnum(parent,dflt);
}

// --- atfdb.FieldId.value.ReadStrptrMaybe
// Convert string to field. Return success value
bool atfdb::value_ReadStrptrMaybe(atfdb::FieldId& parent, algo::strptr rhs) {
    bool retval = false;
    retval = value_SetStrptrMaybe(parent,rhs); // try symbol conversion
    if (!retval) { // didn't work? try reading as underlying type
        retval = i32_ReadStrptrMaybe(parent.value,rhs);
    }
    return retval;
}

// --- atfdb.FieldId..ReadStrptrMaybe
// Read fields of atfdb::FieldId from an ascii string.
// The format of the string is the format of the atfdb::FieldId's only field
bool atfdb::FieldId_ReadStrptrMaybe(atfdb::FieldId &parent, algo::strptr in_str) {
    bool retval = true;
    retval = retval && atfdb::value_ReadStrptrMaybe(parent, in_str);
    return retval;
}

// --- atfdb.FieldId..Print
// print string representation of atfdb::FieldId to string LHS, no header -- cprint:atfdb.FieldId.String
void atfdb::FieldId_Print(atfdb::FieldId & row, algo::cstring &str) {
    atfdb::value_Print(row, str);
}

// --- atfdb.Msgdir..ReadFieldMaybe
bool atfdb::Msgdir_ReadFieldMaybe(atfdb::Msgdir &parent, algo::strptr field, algo::strptr strval) {
    atfdb::FieldId field_id;
    (void)value_SetStrptrMaybe(field_id,field);
    bool retval = true; // default is no error
    switch(field_id) {
        case atfdb_FieldId_msgdir: retval = algo::Smallstr50_ReadStrptrMaybe(parent.msgdir, strval); break;
        case atfdb_FieldId_comment: retval = algo::Comment_ReadStrptrMaybe(parent.comment, strval); break;
        default: break;
    }
    if (!retval) {
        algo_lib::AppendErrtext("attr",field);
    }
    return retval;
}

// --- atfdb.Msgdir..ReadStrptrMaybe
// Read fields of atfdb::Msgdir from an ascii string.
// The format of the string is an ssim Tuple
bool atfdb::Msgdir_ReadStrptrMaybe(atfdb::Msgdir &parent, algo::strptr in_str) {
    bool retval = true;
    retval = algo::StripTypeTag(in_str, "atfdb.msgdir") || algo::StripTypeTag(in_str, "atfdb.Msgdir");
    ind_beg(algo::Attr_curs, attr, in_str) {
        retval = retval && Msgdir_ReadFieldMaybe(parent, attr.name, attr.value);
    }ind_end;
    return retval;
}

// --- atfdb.Msgdir..Print
// print string representation of atfdb::Msgdir to string LHS, no header -- cprint:atfdb.Msgdir.String
void atfdb::Msgdir_Print(atfdb::Msgdir & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "atfdb.msgdir";

    algo::Smallstr50_Print(row.msgdir, temp);
    PrintAttrSpaceReset(str,"msgdir", temp);

    algo::Comment_Print(row.comment, temp);
    PrintAttrSpaceReset(str,"comment", temp);
}

// --- atfdb.Targs..ReadFieldMaybe
bool atfdb::Targs_ReadFieldMaybe(atfdb::Targs &parent, algo::strptr field, algo::strptr strval) {
    atfdb::FieldId field_id;
    (void)value_SetStrptrMaybe(field_id,field);
    bool retval = true; // default is no error
    switch(field_id) {
        case atfdb_FieldId_comptest: retval = algo::Smallstr50_ReadStrptrMaybe(parent.comptest, strval); break;
        case atfdb_FieldId_args: retval = algo::cstring_ReadStrptrMaybe(parent.args, strval); break;
        default: break;
    }
    if (!retval) {
        algo_lib::AppendErrtext("attr",field);
    }
    return retval;
}

// --- atfdb.Targs..ReadStrptrMaybe
// Read fields of atfdb::Targs from an ascii string.
// The format of the string is an ssim Tuple
bool atfdb::Targs_ReadStrptrMaybe(atfdb::Targs &parent, algo::strptr in_str) {
    bool retval = true;
    retval = algo::StripTypeTag(in_str, "atfdb.targs") || algo::StripTypeTag(in_str, "atfdb.Targs");
    ind_beg(algo::Attr_curs, attr, in_str) {
        retval = retval && Targs_ReadFieldMaybe(parent, attr.name, attr.value);
    }ind_end;
    return retval;
}

// --- atfdb.Targs..Print
// print string representation of atfdb::Targs to string LHS, no header -- cprint:atfdb.Targs.String
void atfdb::Targs_Print(atfdb::Targs & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "atfdb.targs";

    algo::Smallstr50_Print(row.comptest, temp);
    PrintAttrSpaceReset(str,"comptest", temp);

    algo::cstring_Print(row.args, temp);
    PrintAttrSpaceReset(str,"args", temp);
}

// --- atfdb.TestGsymbolChar..ReadFieldMaybe
bool atfdb::TestGsymbolChar_ReadFieldMaybe(atfdb::TestGsymbolChar &parent, algo::strptr field, algo::strptr strval) {
    atfdb::FieldId field_id;
    (void)value_SetStrptrMaybe(field_id,field);
    bool retval = true; // default is no error
    switch(field_id) {
        case atfdb_FieldId_test_gsymbol_char: retval = algo::Smallstr50_ReadStrptrMaybe(parent.test_gsymbol_char, strval); break;
        case atfdb_FieldId_comment: retval = algo::Comment_ReadStrptrMaybe(parent.comment, strval); break;
        default: break;
    }
    if (!retval) {
        algo_lib::AppendErrtext("attr",field);
    }
    return retval;
}

// --- atfdb.TestGsymbolChar..ReadStrptrMaybe
// Read fields of atfdb::TestGsymbolChar from an ascii string.
// The format of the string is an ssim Tuple
bool atfdb::TestGsymbolChar_ReadStrptrMaybe(atfdb::TestGsymbolChar &parent, algo::strptr in_str) {
    bool retval = true;
    retval = algo::StripTypeTag(in_str, "atfdb.test_gsymbol_char") || algo::StripTypeTag(in_str, "atfdb.TestGsymbolChar");
    ind_beg(algo::Attr_curs, attr, in_str) {
        retval = retval && TestGsymbolChar_ReadFieldMaybe(parent, attr.name, attr.value);
    }ind_end;
    return retval;
}

// --- atfdb.TestGsymbolChar..Print
// print string representation of atfdb::TestGsymbolChar to string LHS, no header -- cprint:atfdb.TestGsymbolChar.String
void atfdb::TestGsymbolChar_Print(atfdb::TestGsymbolChar & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "atfdb.test_gsymbol_char";

    algo::Smallstr50_Print(row.test_gsymbol_char, temp);
    PrintAttrSpaceReset(str,"test_gsymbol_char", temp);

    algo::Comment_Print(row.comment, temp);
    PrintAttrSpaceReset(str,"comment", temp);
}

// --- atfdb.TestGsymbolPkey..ReadFieldMaybe
bool atfdb::TestGsymbolPkey_ReadFieldMaybe(atfdb::TestGsymbolPkey &parent, algo::strptr field, algo::strptr strval) {
    atfdb::FieldId field_id;
    (void)value_SetStrptrMaybe(field_id,field);
    bool retval = true; // default is no error
    switch(field_id) {
        case atfdb_FieldId_test_gsymbol_pkey: retval = algo::Smallstr50_ReadStrptrMaybe(parent.test_gsymbol_pkey, strval); break;
        case atfdb_FieldId_comment: retval = algo::Comment_ReadStrptrMaybe(parent.comment, strval); break;
        default: break;
    }
    if (!retval) {
        algo_lib::AppendErrtext("attr",field);
    }
    return retval;
}

// --- atfdb.TestGsymbolPkey..ReadStrptrMaybe
// Read fields of atfdb::TestGsymbolPkey from an ascii string.
// The format of the string is an ssim Tuple
bool atfdb::TestGsymbolPkey_ReadStrptrMaybe(atfdb::TestGsymbolPkey &parent, algo::strptr in_str) {
    bool retval = true;
    retval = algo::StripTypeTag(in_str, "atfdb.test_gsymbol_pkey") || algo::StripTypeTag(in_str, "atfdb.TestGsymbolPkey");
    ind_beg(algo::Attr_curs, attr, in_str) {
        retval = retval && TestGsymbolPkey_ReadFieldMaybe(parent, attr.name, attr.value);
    }ind_end;
    return retval;
}

// --- atfdb.TestGsymbolPkey..Print
// print string representation of atfdb::TestGsymbolPkey to string LHS, no header -- cprint:atfdb.TestGsymbolPkey.String
void atfdb::TestGsymbolPkey_Print(atfdb::TestGsymbolPkey & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "atfdb.test_gsymbol_pkey";

    algo::Smallstr50_Print(row.test_gsymbol_pkey, temp);
    PrintAttrSpaceReset(str,"test_gsymbol_pkey", temp);

    algo::Comment_Print(row.comment, temp);
    PrintAttrSpaceReset(str,"comment", temp);
}

// --- atfdb.TestGsymbolStrptr..ReadFieldMaybe
bool atfdb::TestGsymbolStrptr_ReadFieldMaybe(atfdb::TestGsymbolStrptr &parent, algo::strptr field, algo::strptr strval) {
    atfdb::FieldId field_id;
    (void)value_SetStrptrMaybe(field_id,field);
    bool retval = true; // default is no error
    switch(field_id) {
        case atfdb_FieldId_test_gsymbol_strptr: retval = algo::Smallstr50_ReadStrptrMaybe(parent.test_gsymbol_strptr, strval); break;
        case atfdb_FieldId_comment: retval = algo::Comment_ReadStrptrMaybe(parent.comment, strval); break;
        default: break;
    }
    if (!retval) {
        algo_lib::AppendErrtext("attr",field);
    }
    return retval;
}

// --- atfdb.TestGsymbolStrptr..ReadStrptrMaybe
// Read fields of atfdb::TestGsymbolStrptr from an ascii string.
// The format of the string is an ssim Tuple
bool atfdb::TestGsymbolStrptr_ReadStrptrMaybe(atfdb::TestGsymbolStrptr &parent, algo::strptr in_str) {
    bool retval = true;
    retval = algo::StripTypeTag(in_str, "atfdb.test_gsymbol_strptr") || algo::StripTypeTag(in_str, "atfdb.TestGsymbolStrptr");
    ind_beg(algo::Attr_curs, attr, in_str) {
        retval = retval && TestGsymbolStrptr_ReadFieldMaybe(parent, attr.name, attr.value);
    }ind_end;
    return retval;
}

// --- atfdb.TestGsymbolStrptr..Print
// print string representation of atfdb::TestGsymbolStrptr to string LHS, no header -- cprint:atfdb.TestGsymbolStrptr.String
void atfdb::TestGsymbolStrptr_Print(atfdb::TestGsymbolStrptr & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "atfdb.test_gsymbol_strptr";

    algo::Smallstr50_Print(row.test_gsymbol_strptr, temp);
    PrintAttrSpaceReset(str,"test_gsymbol_strptr", temp);

    algo::Comment_Print(row.comment, temp);
    PrintAttrSpaceReset(str,"comment", temp);
}

// --- atfdb.Tfilt..ReadFieldMaybe
bool atfdb::Tfilt_ReadFieldMaybe(atfdb::Tfilt &parent, algo::strptr field, algo::strptr strval) {
    atfdb::FieldId field_id;
    (void)value_SetStrptrMaybe(field_id,field);
    bool retval = true; // default is no error
    switch(field_id) {
        case atfdb_FieldId_comptest: retval = algo::Smallstr50_ReadStrptrMaybe(parent.comptest, strval); break;
        case atfdb_FieldId_filter: retval = algo::cstring_ReadStrptrMaybe(parent.filter, strval); break;
        case atfdb_FieldId_comment: retval = algo::Comment_ReadStrptrMaybe(parent.comment, strval); break;
        default: break;
    }
    if (!retval) {
        algo_lib::AppendErrtext("attr",field);
    }
    return retval;
}

// --- atfdb.Tfilt..ReadStrptrMaybe
// Read fields of atfdb::Tfilt from an ascii string.
// The format of the string is an ssim Tuple
bool atfdb::Tfilt_ReadStrptrMaybe(atfdb::Tfilt &parent, algo::strptr in_str) {
    bool retval = true;
    retval = algo::StripTypeTag(in_str, "atfdb.tfilt") || algo::StripTypeTag(in_str, "atfdb.Tfilt");
    ind_beg(algo::Attr_curs, attr, in_str) {
        retval = retval && Tfilt_ReadFieldMaybe(parent, attr.name, attr.value);
    }ind_end;
    return retval;
}

// --- atfdb.Tfilt..Print
// print string representation of atfdb::Tfilt to string LHS, no header -- cprint:atfdb.Tfilt.String
void atfdb::Tfilt_Print(atfdb::Tfilt & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "atfdb.tfilt";

    algo::Smallstr50_Print(row.comptest, temp);
    PrintAttrSpaceReset(str,"comptest", temp);

    algo::cstring_Print(row.filter, temp);
    PrintAttrSpaceReset(str,"filter", temp);

    algo::Comment_Print(row.comment, temp);
    PrintAttrSpaceReset(str,"comment", temp);
}

// --- atfdb.Tmsg.comptest.Get
algo::Smallstr50 atfdb::comptest_Get(atfdb::Tmsg& parent) {
    algo::Smallstr50 ret(algo::Pathcomp(parent.tmsg, "/LL"));
    return ret;
}

// --- atfdb.Tmsg.comptest.Get2
algo::Smallstr50 atfdb::Tmsg_comptest_Get(algo::strptr arg) {
    algo::Smallstr50 ret(algo::Pathcomp(arg, "/LL"));
    return ret;
}

// --- atfdb.Tmsg.rank.Get
i32 atfdb::rank_Get(atfdb::Tmsg& parent) {
    i32 ret;
    ret = 0; // default value
    (void)i32_ReadStrptrMaybe(ret, algo::Pathcomp(parent.tmsg, "/LR.LL"));
    return ret;
}

// --- atfdb.Tmsg.rank.Get2
i32 atfdb::Tmsg_rank_Get(algo::strptr arg) {
    i32 ret;
    ret = 0; // default value
    (void)i32_ReadStrptrMaybe(ret, algo::Pathcomp(arg, "/LR.LL"));
    return ret;
}

// --- atfdb.Tmsg.dir.Get
algo::Smallstr50 atfdb::dir_Get(atfdb::Tmsg& parent) {
    algo::Smallstr50 ret(algo::Pathcomp(parent.tmsg, "/LR.LR"));
    return ret;
}

// --- atfdb.Tmsg.dir.Get2
algo::Smallstr50 atfdb::Tmsg_dir_Get(algo::strptr arg) {
    algo::Smallstr50 ret(algo::Pathcomp(arg, "/LR.LR"));
    return ret;
}

// --- atfdb.Tmsg..Concat_comptest_rank_dir
tempstr atfdb::Tmsg_Concat_comptest_rank_dir( const algo::strptr& comptest ,i32 rank ,const algo::strptr& dir ) {
    return tempstr() << comptest <<'/'<< rank <<'.'<< dir ;
}

// --- atfdb.Tmsg..ReadFieldMaybe
bool atfdb::Tmsg_ReadFieldMaybe(atfdb::Tmsg &parent, algo::strptr field, algo::strptr strval) {
    atfdb::FieldId field_id;
    (void)value_SetStrptrMaybe(field_id,field);
    bool retval = true; // default is no error
    switch(field_id) {
        case atfdb_FieldId_tmsg: retval = algo::Smallstr50_ReadStrptrMaybe(parent.tmsg, strval); break;
        case atfdb_FieldId_msg: retval = algo::cstring_ReadStrptrMaybe(parent.msg, strval); break;
        default: break;
    }
    if (!retval) {
        algo_lib::AppendErrtext("attr",field);
    }
    return retval;
}

// --- atfdb.Tmsg..ReadStrptrMaybe
// Read fields of atfdb::Tmsg from an ascii string.
// The format of the string is an ssim Tuple
bool atfdb::Tmsg_ReadStrptrMaybe(atfdb::Tmsg &parent, algo::strptr in_str) {
    bool retval = true;
    retval = algo::StripTypeTag(in_str, "atfdb.tmsg") || algo::StripTypeTag(in_str, "atfdb.Tmsg");
    ind_beg(algo::Attr_curs, attr, in_str) {
        retval = retval && Tmsg_ReadFieldMaybe(parent, attr.name, attr.value);
    }ind_end;
    return retval;
}

// --- atfdb.Tmsg..Print
// print string representation of atfdb::Tmsg to string LHS, no header -- cprint:atfdb.Tmsg.String
void atfdb::Tmsg_Print(atfdb::Tmsg & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "atfdb.tmsg";

    algo::Smallstr50_Print(row.tmsg, temp);
    PrintAttrSpaceReset(str,"tmsg", temp);

    algo::cstring_Print(row.msg, temp);
    PrintAttrSpaceReset(str,"msg", temp);
}

// --- atfdb.Unittest.target.Get
algo::Smallstr16 atfdb::target_Get(atfdb::Unittest& parent) {
    algo::Smallstr16 ret(algo::Pathcomp(parent.unittest, ".RL"));
    return ret;
}

// --- atfdb.Unittest.target.Get2
algo::Smallstr16 atfdb::Unittest_target_Get(algo::strptr arg) {
    algo::Smallstr16 ret(algo::Pathcomp(arg, ".RL"));
    return ret;
}

// --- atfdb.Unittest.testname.Get
algo::Smallstr50 atfdb::testname_Get(atfdb::Unittest& parent) {
    algo::Smallstr50 ret(algo::Pathcomp(parent.unittest, ".RR"));
    return ret;
}

// --- atfdb.Unittest.testname.Get2
algo::Smallstr50 atfdb::Unittest_testname_Get(algo::strptr arg) {
    algo::Smallstr50 ret(algo::Pathcomp(arg, ".RR"));
    return ret;
}

// --- atfdb.Unittest..Concat_target_testname
tempstr atfdb::Unittest_Concat_target_testname( const algo::strptr& target ,const algo::strptr& testname ) {
    return tempstr() << target <<'.'<< testname ;
}

// --- atfdb.Unittest..ReadFieldMaybe
bool atfdb::Unittest_ReadFieldMaybe(atfdb::Unittest &parent, algo::strptr field, algo::strptr strval) {
    atfdb::FieldId field_id;
    (void)value_SetStrptrMaybe(field_id,field);
    bool retval = true; // default is no error
    switch(field_id) {
        case atfdb_FieldId_unittest: retval = algo::Smallstr50_ReadStrptrMaybe(parent.unittest, strval); break;
        case atfdb_FieldId_comment: retval = algo::Comment_ReadStrptrMaybe(parent.comment, strval); break;
        default: break;
    }
    if (!retval) {
        algo_lib::AppendErrtext("attr",field);
    }
    return retval;
}

// --- atfdb.Unittest..ReadStrptrMaybe
// Read fields of atfdb::Unittest from an ascii string.
// The format of the string is an ssim Tuple
bool atfdb::Unittest_ReadStrptrMaybe(atfdb::Unittest &parent, algo::strptr in_str) {
    bool retval = true;
    retval = algo::StripTypeTag(in_str, "atfdb.unittest") || algo::StripTypeTag(in_str, "atfdb.Unittest");
    ind_beg(algo::Attr_curs, attr, in_str) {
        retval = retval && Unittest_ReadFieldMaybe(parent, attr.name, attr.value);
    }ind_end;
    return retval;
}

// --- atfdb.Unittest..ReadTupleMaybe
// Read fields of atfdb::Unittest from attributes of ascii tuple TUPLE
bool atfdb::Unittest_ReadTupleMaybe(atfdb::Unittest &parent, algo::Tuple &tuple) {
    bool retval = true;
    ind_beg(algo::Tuple_attrs_curs,attr,tuple) {
        retval = Unittest_ReadFieldMaybe(parent, attr.name, attr.value);
        if (!retval) {
            break;
        }
    }ind_end;
    return retval;
}

// --- atfdb.Unittest..Print
// print string representation of atfdb::Unittest to string LHS, no header -- cprint:atfdb.Unittest.String
void atfdb::Unittest_Print(atfdb::Unittest & row, algo::cstring &str) {
    algo::tempstr temp;
    str << "atfdb.unittest";

    algo::Smallstr50_Print(row.unittest, temp);
    PrintAttrSpaceReset(str,"unittest", temp);

    algo::Comment_Print(row.comment, temp);
    PrintAttrSpaceReset(str,"comment", temp);
}

// --- atfdb...SizeCheck
inline static void atfdb::SizeCheck() {
}
