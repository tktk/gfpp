#ifndef GFPP_STRING_UTF16_H
#define GFPP_STRING_UTF16_H

namespace gf {
    struct Utf16;
}

#include "gfpp/string/string.h"
#include "gfpp/string/utf8.h"
#include "gfpp/string/utf32.h"
#include "gfpp/common/primitives.h"
#include "gfpp/util/import.h"

namespace gf {
    GFPPEXPORT Utf16 * newUtf16(
    );

    GFPPEXPORT Utf16 * clone(
        const Utf16 &
    );

    GFPPEXPORT Utf16 * newUtf16(
        const Utf16Char *
    );

    GFPPEXPORT Utf16 * newUtf16(
        const Utf16Char *
        , Size
    );

    GFPPEXPORT Utf16 * newUtf16FromString(
        const String &
    );

    GFPPEXPORT Utf16 * newUtf16FromString(
        const StringChar *
    );

    GFPPEXPORT Utf16 * newUtf16FromString(
        const StringChar *
        , Size
    );

    GFPPEXPORT Utf16 * newUtf16FromUnicode(
        const Utf8 &
    );

    GFPPEXPORT Utf16 * newUtf16FromUnicode(
        const Utf8Char *
    );

    GFPPEXPORT Utf16 * newUtf16FromUnicode(
        const Utf8Char *
        , Size
    );

    GFPPEXPORT Utf16 * newUtf16FromUnicode(
        const Utf32 &
    );

    GFPPEXPORT Utf16 * newUtf16FromUnicode(
        const Utf32Char *
    );

    GFPPEXPORT Utf16 * newUtf16FromUnicode(
        const Utf32Char *
        , Size
    );

    GFPPEXPORT void free(
        Utf16 &
    );

    GFPPEXPORT const Utf16Char * getPtr(
        const Utf16 &
    );

    GFPPEXPORT Size getLength(
        const Utf16 &
    );

    GFPPEXPORT Bool assign(
        Utf16 &
        , const Utf16 &
    );

    GFPPEXPORT Bool assign(
        Utf16 &
        , const Utf16Char *
    );

    GFPPEXPORT Bool assign(
        Utf16 &
        , const Utf16Char *
        , Size
    );

    GFPPEXPORT Bool assignFromString(
        Utf16 &
        , const String &
    );

    GFPPEXPORT Bool assignFromString(
        Utf16 &
        , const StringChar *
    );

    GFPPEXPORT Bool assignFromString(
        Utf16 &
        , const StringChar *
        , Size
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf8 &
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf8Char *
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf8Char *
        , Size
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf32 &
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf32Char *
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf32Char *
        , Size
    );
}

#endif  // GFPP_STRING_UTF16_H
