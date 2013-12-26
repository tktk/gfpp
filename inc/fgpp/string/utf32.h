#ifndef FGPP_STRING_UTF32_H
#define FGPP_STRING_UTF32_H

#include "fgpp/def/string/utf32.h"
#include "fgpp/def/string/string.h"
#include "fgpp/def/string/utf8.h"
#include "fgpp/def/string/utf16.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import_new.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        Utf32 * newUtf32(
        )
    )

    FGPP_FUNCTION_PTR(
        Utf32 * clone(
            const Utf32 &
        )
    )

    FGPP_FUNCTION_PTR(
        Utf32 * newUtf32(
            const Utf32Char *
        )
    )

    FGPP_FUNCTION_PTR(
        Utf32 * newUtf32(
            const Utf32Char *
            , Size
        )
    )

    FGPP_FUNCTION_PTR(
        Utf32 * newUtf32FromString(
            const String &
        )
    )

    FGPP_FUNCTION_PTR(
        Utf32 * newUtf32FromString(
            const StringChar *
        )
    )

    FGPP_FUNCTION_PTR(
        Utf32 * newUtf32FromString(
            const StringChar *
            , Size
        )
    )

    FGPP_FUNCTION_PTR(
        Utf32 * newUtf32FromUnicode(
            const Utf8 &
        )
    )

    FGPP_FUNCTION_PTR(
        Utf32 * newUtf32FromUnicode(
            const Utf8Char *
        )
    )

    FGPP_FUNCTION_PTR(
        Utf32 * newUtf32FromUnicode(
            const Utf8Char *
            , Size
        )
    )

    FGPP_FUNCTION_PTR(
        Utf32 * newUtf32FromUnicode(
            const Utf16 &
        )
    )

    FGPP_FUNCTION_PTR(
        Utf32 * newUtf32FromUnicode(
            const Utf16Char *
        )
    )

    FGPP_FUNCTION_PTR(
        Utf32 * newUtf32FromUnicode(
            const Utf16Char *
            , Size
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            Utf32 &
        )
    )

    FGPP_FUNCTION_PTR(
        const Utf32Char * getPtr(
            const Utf32 &
        )
    )

    FGPP_FUNCTION_NUM(
        Size getLength(
            const Utf32 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assign(
            Utf32 &
            , const Utf32 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assign(
            Utf32 &
            , const Utf32Char *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assign(
            Utf32 &
            , const Utf32Char *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromString(
            Utf32 &
            , const String &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromString(
            Utf32 &
            , const StringChar *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromString(
            Utf32 &
            , const StringChar *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf32 &
            , const Utf8 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf32 &
            , const Utf8Char *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf32 &
            , const Utf8Char *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf32 &
            , const Utf16 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf32 &
            , const Utf16Char *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf32 &
            , const Utf16Char *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toInt(
            Int &
            , const Utf32 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toInt(
            Int &
            , const Utf32 &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toUInt(
            UInt &
            , const Utf32 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toUInt(
            UInt &
            , const Utf32 &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toLong(
            Long &
            , const Utf32 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toLong(
            Long &
            , const Utf32 &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toULong(
            ULong &
            , const Utf32 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toULong(
            ULong &
            , const Utf32 &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toFloat(
            Float &
            , const Utf32 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toDouble(
            Double &
            , const Utf32 &
        )
    )
}

#endif  // FGPP_STRING_UTF32_H
