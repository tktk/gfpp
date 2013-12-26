#ifndef FGPP_STRING_UTF16_H
#define FGPP_STRING_UTF16_H

#include "fgpp/def/string/utf16.h"
#include "fgpp/def/string/string.h"
#include "fgpp/def/string/utf8.h"
#include "fgpp/def/string/utf32.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        Utf16 * newUtf16(
        )
    )

    FGPP_FUNCTION_PTR(
        Utf16 * clone(
            const Utf16 &
        )
    )

    FGPP_FUNCTION_PTR(
        Utf16 * newUtf16(
            const Utf16Char *
        )
    )

    FGPP_FUNCTION_PTR(
        Utf16 * newUtf16(
            const Utf16Char *
            , Size
        )
    )

    FGPP_FUNCTION_PTR(
        Utf16 * newUtf16FromString(
            const String &
        )
    )

    FGPP_FUNCTION_PTR(
        Utf16 * newUtf16FromString(
            const StringChar *
        )
    )

    FGPP_FUNCTION_PTR(
        Utf16 * newUtf16FromString(
            const StringChar *
            , Size
        )
    )

    FGPP_FUNCTION_PTR(
        Utf16 * newUtf16FromUnicode(
            const Utf8 &
        )
    )

    FGPP_FUNCTION_PTR(
        Utf16 * newUtf16FromUnicode(
            const Utf8Char *
        )
    )

    FGPP_FUNCTION_PTR(
        Utf16 * newUtf16FromUnicode(
            const Utf8Char *
            , Size
        )
    )

    FGPP_FUNCTION_PTR(
        Utf16 * newUtf16FromUnicode(
            const Utf32 &
        )
    )

    FGPP_FUNCTION_PTR(
        Utf16 * newUtf16FromUnicode(
            const Utf32Char *
        )
    )

    FGPP_FUNCTION_PTR(
        Utf16 * newUtf16FromUnicode(
            const Utf32Char *
            , Size
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            Utf16 &
        )
    )

    FGPP_FUNCTION_PTR(
        const Utf16Char * getPtr(
            const Utf16 &
        )
    )

    FGPP_FUNCTION_NUM(
        Size getLength(
            const Utf16 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assign(
            Utf16 &
            , const Utf16 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assign(
            Utf16 &
            , const Utf16Char *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assign(
            Utf16 &
            , const Utf16Char *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromString(
            Utf16 &
            , const String &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromString(
            Utf16 &
            , const StringChar *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromString(
            Utf16 &
            , const StringChar *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf16 &
            , const Utf8 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf16 &
            , const Utf8Char *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf16 &
            , const Utf8Char *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf16 &
            , const Utf32 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf16 &
            , const Utf32Char *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf16 &
            , const Utf32Char *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toInt(
            Int &
            , const Utf16 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toInt(
            Int &
            , const Utf16 &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toUInt(
            UInt &
            , const Utf16 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toUInt(
            UInt &
            , const Utf16 &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toLong(
            Long &
            , const Utf16 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toLong(
            Long &
            , const Utf16 &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toULong(
            ULong &
            , const Utf16 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toULong(
            ULong &
            , const Utf16 &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toFloat(
            Float &
            , const Utf16 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toDouble(
            Double &
            , const Utf16 &
        )
    )
}

#endif  // FGPP_STRING_UTF16_H
