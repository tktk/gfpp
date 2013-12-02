#ifndef FGPP_STRING_UTF16_H
#define FGPP_STRING_UTF16_H

namespace fg {
    struct Utf16;
}

#include "fgpp/string/string.h"
#include "fgpp/string/utf8.h"
#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT Utf16 * newUtf16(
    );

    FGPPEXPORT Utf16 * clone(
        const Utf16 &
    );

    FGPPEXPORT Utf16 * newUtf16(
        const Utf16Char *
    );

    FGPPEXPORT Utf16 * newUtf16(
        const Utf16Char *
        , Size
    );

    FGPPEXPORT Utf16 * newUtf16FromString(
        const String &
    );

    FGPPEXPORT Utf16 * newUtf16FromString(
        const StringChar *
    );

    FGPPEXPORT Utf16 * newUtf16FromString(
        const StringChar *
        , Size
    );

    FGPPEXPORT Utf16 * newUtf16FromUnicode(
        const Utf8 &
    );

    FGPPEXPORT Utf16 * newUtf16FromUnicode(
        const Utf8Char *
    );

    FGPPEXPORT Utf16 * newUtf16FromUnicode(
        const Utf8Char *
        , Size
    );

    FGPPEXPORT Utf16 * newUtf16FromUnicode(
        const Utf32 &
    );

    FGPPEXPORT Utf16 * newUtf16FromUnicode(
        const Utf32Char *
    );

    FGPPEXPORT Utf16 * newUtf16FromUnicode(
        const Utf32Char *
        , Size
    );

    FGPPEXPORT void free(
        Utf16 &
    );

    FGPPEXPORT const Utf16Char * getPtr(
        const Utf16 &
    );

    FGPPEXPORT Size getLength(
        const Utf16 &
    );

    FGPPEXPORT Bool assign(
        Utf16 &
        , const Utf16 &
    );

    FGPPEXPORT Bool assign(
        Utf16 &
        , const Utf16Char *
    );

    FGPPEXPORT Bool assign(
        Utf16 &
        , const Utf16Char *
        , Size
    );

    FGPPEXPORT Bool assignFromString(
        Utf16 &
        , const String &
    );

    FGPPEXPORT Bool assignFromString(
        Utf16 &
        , const StringChar *
    );

    FGPPEXPORT Bool assignFromString(
        Utf16 &
        , const StringChar *
        , Size
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf8 &
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf8Char *
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf8Char *
        , Size
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf32 &
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf32Char *
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf32Char *
        , Size
    );

    FGPPEXPORT Bool toInt(
        Int &
        , const Utf16 &
    );

    FGPPEXPORT Bool toInt(
        Int &
        , const Utf16 &
        , Int
    );

    FGPPEXPORT Bool toUInt(
        UInt &
        , const Utf16 &
    );

    FGPPEXPORT Bool toUInt(
        UInt &
        , const Utf16 &
        , Int
    );

    FGPPEXPORT Bool toLong(
        Long &
        , const Utf16 &
    );

    FGPPEXPORT Bool toLong(
        Long &
        , const Utf16 &
        , Int
    );

    FGPPEXPORT Bool toULong(
        ULong &
        , const Utf16 &
    );

    FGPPEXPORT Bool toULong(
        ULong &
        , const Utf16 &
        , Int
    );

    FGPPEXPORT Bool toFloat(
        Float &
        , const Utf16 &
    );

    FGPPEXPORT Bool toDouble(
        Double &
        , const Utf16 &
    );
}

#endif  // FGPP_STRING_UTF16_H
