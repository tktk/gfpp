#ifndef GFPP_STRING_UTF8_H
#define GFPP_STRING_UTF8_H

namespace gf {
    struct Utf8;
}

#include "gfpp/string/string.h"
#include "gfpp/string/utf16.h"
#include "gfpp/string/utf32.h"
#include "gfpp/common/primitives.h"
#include "gfpp/util/import.h"

namespace gf {
    GFPPEXPORT Utf8 * newUtf8(
    );

    GFPPEXPORT Utf8 * clone(
        const Utf8 &
    );

    GFPPEXPORT Utf8 * newUtf8(
        const Utf8Char *
    );

    GFPPEXPORT Utf8 * newUtf8(
        const Utf8Char *
        , Size
    );

    GFPPEXPORT Utf8 * newUtf8FromString(
        const String &
    );

    GFPPEXPORT Utf8 * newUtf8FromString(
        const StringChar *
    );

    GFPPEXPORT Utf8 * newUtf8FromString(
        const StringChar *
        , Size
    );

    GFPPEXPORT Utf8 * newUtf8FromUnicode(
        const Utf16 &
    );

    GFPPEXPORT Utf8 * newUtf8FromUnicode(
        const Utf16Char *
    );

    GFPPEXPORT Utf8 * newUtf8FromUnicode(
        const Utf16Char *
        , Size
    );

    GFPPEXPORT Utf8 * newUtf8FromUnicode(
        const Utf32 &
    );

    GFPPEXPORT Utf8 * newUtf8FromUnicode(
        const Utf32Char *
    );

    GFPPEXPORT Utf8 * newUtf8FromUnicode(
        const Utf32Char *
        , Size
    );

    GFPPEXPORT void free(
        Utf8 &
    );

    GFPPEXPORT const Utf8Char * getPtr(
        const Utf8 &
    );

    GFPPEXPORT Size getLength(
        const Utf8 &
    );

    GFPPEXPORT Bool assign(
        Utf8 &
        , const Utf8 &
    );

    GFPPEXPORT Bool assign(
        Utf8 &
        , const Utf8Char *
    );

    GFPPEXPORT Bool assign(
        Utf8 &
        , const Utf8Char *
        , Size
    );

    GFPPEXPORT Bool assignFromString(
        Utf8 &
        , const String &
    );

    GFPPEXPORT Bool assignFromString(
        Utf8 &
        , const StringChar *
    );

    GFPPEXPORT Bool assignFromString(
        Utf8 &
        , const StringChar *
        , Size
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf16 &
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf16Char *
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf16Char *
        , Size
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf32 &
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf32Char *
    );

    GFPPEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf32Char *
        , Size
    );
}

#endif  // GFPP_STRING_UTF8_H
