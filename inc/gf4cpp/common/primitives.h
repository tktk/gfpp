#ifndef GF4CPP_COMMON_PRIMITIVES_H
#define GF4CPP_COMMON_PRIMITIVES_H

#include "gf/common/primitives.h"

#include <string>

namespace gf {
    typedef gfBool Bool;

    typedef gfSize Size;

    typedef gfByte Byte;
    typedef gfUByte UByte;
    typedef gfShort Short;
    typedef gfUShort UShort;
    typedef gfInt Int;
    typedef gfUInt UInt;
    typedef gfLong Long;
    typedef gfULong ULong;

    typedef gfFloat Float;
    typedef gfDouble Double;

    typedef gfStringChar StringChar;
    typedef gfUtf8Char Utf8Char;
    typedef gfUtf16Char Utf16Char;
    typedef gfUtf32Char Utf32Char;

    typedef std::basic_string< StringChar > String;
    typedef std::basic_string< Utf8Char > Utf8;
    typedef std::basic_string< Utf16Char > Utf16;
    typedef std::basic_string< Utf32Char > Utf32;
}

#endif  // GF4CPP_COMMON_PRIMITIVES_H
