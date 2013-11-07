#ifndef GF4CPP_COMMON_STRINGCONVERTER_H
#define GF4CPP_COMMON_STRINGCONVERTER_H

#include "gf4cpp/common/primitives.h"
#include "gf/util/import.h"

namespace gf {
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

#endif  // GF4CPP_COMMON_STRINGCONVERTER_H
