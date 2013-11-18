#ifndef GFPP_STRING_UTF32_H
#define GFPP_STRING_UTF32_H

namespace gf {
    struct Utf32;
}

#include "gfpp/string/string.h"
#include "gfpp/string/utf8.h"
#include "gfpp/string/utf16.h"
#include "gfpp/common/primitives.h"
#include "gfpp/util/import.h"

namespace gf {
    GFPPEXPORT Utf32 * newUtf32(
    );

    GFPPEXPORT Utf32 * clone(
        const Utf32 &
    );

    GFPPEXPORT Utf32 * newUtf32(
        const Utf32Char *
    );

    GFPPEXPORT Utf32 * newUtf32(
        const Utf32Char *
        , Size
    );

    GFPPEXPORT Utf32 * newUtf32FromString(
        const String &
    );

    GFPPEXPORT Utf32 * newUtf32FromString(
        const StringChar *
    );

    GFPPEXPORT Utf32 * newUtf32FromString(
        const StringChar *
        , Size
    );

    GFPPEXPORT Utf32 * newUtf32FromUnicode(
        const Utf8 &
    );

    GFPPEXPORT Utf32 * newUtf32FromUnicode(
        const Utf8Char *
    );

    GFPPEXPORT Utf32 * newUtf32FromUnicode(
        const Utf8Char *
        , Size
    );

    GFPPEXPORT Utf32 * newUtf32FromUnicode(
        const Utf16 &
    );

    GFPPEXPORT Utf32 * newUtf32FromUnicode(
        const Utf16Char *
    );

    GFPPEXPORT Utf32 * newUtf32FromUnicode(
        const Utf16Char *
        , Size
    );

    GFPPEXPORT void free(
        Utf32 &
    );

    GFPPEXPORT const Utf32Char * getPtr(
        const Utf32 &
    );

    GFPPEXPORT Size getLength(
        const Utf32 &
    );

    GFPPEXPORT Bool assign(
        Utf32 &
        , const Utf32 &
    );

    GFPPEXPORT Bool assign(
        Utf32 &
        , const Utf32Char *
    );

    GFPPEXPORT Bool assign(
        Utf32 &
        , const Utf32Char *
        , Size
    );

    GFPPEXPORT Bool assignFromString(
        Utf32 &
        , const String &
    );

    GFPPEXPORT Bool assignFromString(
        Utf32 &
        , const StringChar *
    );

    GFPPEXPORT Bool assignFromString(
        Utf32 &
        , const StringChar *
        , Size
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf8 &
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf8Char *
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf8Char *
        , Size
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf16 &
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf16Char *
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf16Char *
        , Size
    );
}

#endif  // GFPP_STRING_UTF32_H
