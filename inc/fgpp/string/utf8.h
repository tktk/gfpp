#ifndef FGPP_STRING_UTF8_H
#define FGPP_STRING_UTF8_H

namespace fg {
    struct Utf8;
}

#include "fgpp/string/string.h"
#include "fgpp/string/utf16.h"
#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT Utf8 * newUtf8(
    );

    FGPPEXPORT Utf8 * clone(
        const Utf8 &
    );

    FGPPEXPORT Utf8 * newUtf8(
        const Utf8Char *
    );

    FGPPEXPORT Utf8 * newUtf8(
        const Utf8Char *
        , Size
    );

    FGPPEXPORT Utf8 * newUtf8FromString(
        const String &
    );

    FGPPEXPORT Utf8 * newUtf8FromString(
        const StringChar *
    );

    FGPPEXPORT Utf8 * newUtf8FromString(
        const StringChar *
        , Size
    );

    FGPPEXPORT Utf8 * newUtf8FromUnicode(
        const Utf16 &
    );

    FGPPEXPORT Utf8 * newUtf8FromUnicode(
        const Utf16Char *
    );

    FGPPEXPORT Utf8 * newUtf8FromUnicode(
        const Utf16Char *
        , Size
    );

    FGPPEXPORT Utf8 * newUtf8FromUnicode(
        const Utf32 &
    );

    FGPPEXPORT Utf8 * newUtf8FromUnicode(
        const Utf32Char *
    );

    FGPPEXPORT Utf8 * newUtf8FromUnicode(
        const Utf32Char *
        , Size
    );

    FGPPEXPORT void free(
        Utf8 &
    );

    FGPPEXPORT const Utf8Char * getPtr(
        const Utf8 &
    );

    FGPPEXPORT Size getLength(
        const Utf8 &
    );

    FGPPEXPORT Bool assign(
        Utf8 &
        , const Utf8 &
    );

    FGPPEXPORT Bool assign(
        Utf8 &
        , const Utf8Char *
    );

    FGPPEXPORT Bool assign(
        Utf8 &
        , const Utf8Char *
        , Size
    );

    FGPPEXPORT Bool assignFromString(
        Utf8 &
        , const String &
    );

    FGPPEXPORT Bool assignFromString(
        Utf8 &
        , const StringChar *
    );

    FGPPEXPORT Bool assignFromString(
        Utf8 &
        , const StringChar *
        , Size
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf16 &
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf16Char *
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf16Char *
        , Size
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf32 &
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf32Char *
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf32Char *
        , Size
    );
}

#endif  // FGPP_STRING_UTF8_H
