#ifndef FGPP_STRING_UTF32_H
#define FGPP_STRING_UTF32_H

namespace fg {
    struct Utf32;
}

#include "fgpp/string/string.h"
#include "fgpp/string/utf8.h"
#include "fgpp/string/utf16.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT Utf32 * newUtf32(
    );

    FGPPEXPORT Utf32 * clone(
        const Utf32 &
    );

    FGPPEXPORT Utf32 * newUtf32(
        const Utf32Char *
    );

    FGPPEXPORT Utf32 * newUtf32(
        const Utf32Char *
        , Size
    );

    FGPPEXPORT Utf32 * newUtf32FromString(
        const String &
    );

    FGPPEXPORT Utf32 * newUtf32FromString(
        const StringChar *
    );

    FGPPEXPORT Utf32 * newUtf32FromString(
        const StringChar *
        , Size
    );

    FGPPEXPORT Utf32 * newUtf32FromUnicode(
        const Utf8 &
    );

    FGPPEXPORT Utf32 * newUtf32FromUnicode(
        const Utf8Char *
    );

    FGPPEXPORT Utf32 * newUtf32FromUnicode(
        const Utf8Char *
        , Size
    );

    FGPPEXPORT Utf32 * newUtf32FromUnicode(
        const Utf16 &
    );

    FGPPEXPORT Utf32 * newUtf32FromUnicode(
        const Utf16Char *
    );

    FGPPEXPORT Utf32 * newUtf32FromUnicode(
        const Utf16Char *
        , Size
    );

    FGPPEXPORT void free(
        Utf32 &
    );

    FGPPEXPORT const Utf32Char * getPtr(
        const Utf32 &
    );

    FGPPEXPORT Size getLength(
        const Utf32 &
    );

    FGPPEXPORT Bool assign(
        Utf32 &
        , const Utf32 &
    );

    FGPPEXPORT Bool assign(
        Utf32 &
        , const Utf32Char *
    );

    FGPPEXPORT Bool assign(
        Utf32 &
        , const Utf32Char *
        , Size
    );

    FGPPEXPORT Bool assignFromString(
        Utf32 &
        , const String &
    );

    FGPPEXPORT Bool assignFromString(
        Utf32 &
        , const StringChar *
    );

    FGPPEXPORT Bool assignFromString(
        Utf32 &
        , const StringChar *
        , Size
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf8 &
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf8Char *
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf8Char *
        , Size
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf16 &
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf16Char *
    );

    FGPPEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf16Char *
        , Size
    );

    FGPPEXPORT Bool toInt(
        Int &
        , const Utf32 &
    );

    FGPPEXPORT Bool toInt(
        Int &
        , const Utf32 &
        , Int
    );

    FGPPEXPORT Bool toUInt(
        UInt &
        , const Utf32 &
    );

    FGPPEXPORT Bool toUInt(
        UInt &
        , const Utf32 &
        , Int
    );

    FGPPEXPORT Bool toLong(
        Long &
        , const Utf32 &
    );

    FGPPEXPORT Bool toLong(
        Long &
        , const Utf32 &
        , Int
    );

    FGPPEXPORT Bool toULong(
        ULong &
        , const Utf32 &
    );

    FGPPEXPORT Bool toULong(
        ULong &
        , const Utf32 &
        , Int
    );

    FGPPEXPORT Bool toFloat(
        Float &
        , const Utf32 &
    );

    FGPPEXPORT Bool toDouble(
        Double &
        , const Utf32 &
    );
}

#endif  // FGPP_STRING_UTF32_H
