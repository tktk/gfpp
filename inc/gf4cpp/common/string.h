#ifndef GF4CPP_COMMON_STRING_H
#define GF4CPP_COMMON_STRING_H

#include "gf/common/string.h"
#include "gf4cpp/common/primitives.h"
#include "gf/util/import.h"

#include <string>

namespace gf {
    typedef GfStringChar StringChar;
    typedef GfUtf8Char Utf8Char;
    typedef GfUtf16Char Utf16Char;
    typedef GfUtf32Char Utf32Char;

    typedef std::basic_string< StringChar > String;
    typedef std::basic_string< Utf8Char > Utf8;
    typedef std::basic_string< Utf16Char > Utf16;
    typedef std::basic_string< Utf32Char > Utf32;

    GFEXPORT Bool fromString(
        Utf8 &
        , const String &
    );

    GFEXPORT Bool fromString(
        Utf16 &
        , const String &
    );

    GFEXPORT Bool fromString(
        Utf32 &
        , const String &
    );

    GFEXPORT Bool toString(
        String &
        , const Utf8 &
    );

    GFEXPORT Bool toString(
        String &
        , const Utf16 &
    );

    GFEXPORT Bool toString(
        String &
        , const Utf32 &
    );

    GFEXPORT Bool toUtf8(
        Utf8 &
        , const Utf16 &
    );

    GFEXPORT Bool toUtf8(
        Utf8 &
        , const Utf32 &
    );

    GFEXPORT Bool toUtf16(
        Utf16 &
        , const Utf8 &
    );

    GFEXPORT Bool toUtf16(
        Utf16 &
        , const Utf32 &
    );

    GFEXPORT Bool toUtf32(
        Utf32 &
        , const Utf8 &
    );

    GFEXPORT Bool toUtf32(
        Utf32 &
        , const Utf16 &
    );
}

#endif  // GF4CPP_COMMON_STRING_H
