#ifndef FGPP_STRING_UTF8_H
#define FGPP_STRING_UTF8_H

#include "fgpp/def/string/utf8.h"
#include "fgpp/def/string/string.h"
#include "fgpp/def/string/utf16.h"
#include "fgpp/def/string/utf32.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import_new.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        Utf8 * newUtf8(
        )
    )

    FGPP_FUNCTION_PTR(
        Utf8 * clone(
            const Utf8 &
        )
    )

    FGPP_FUNCTION_PTR(
        Utf8 * newUtf8(
            const Utf8Char *
        )
    )

    FGPP_FUNCTION_PTR(
        Utf8 * newUtf8(
            const Utf8Char *
            , Size
        )
    )

    FGPP_FUNCTION_PTR(
        Utf8 * newUtf8FromString(
            const String &
        )
    )

    FGPP_FUNCTION_PTR(
        Utf8 * newUtf8FromString(
            const StringChar *
        )
    )

    FGPP_FUNCTION_PTR(
        Utf8 * newUtf8FromString(
            const StringChar *
            , Size
        )
    )

    FGPP_FUNCTION_PTR(
        Utf8 * newUtf8FromUnicode(
            const Utf16 &
        )
    )

    FGPP_FUNCTION_PTR(
        Utf8 * newUtf8FromUnicode(
            const Utf16Char *
        )
    )

    FGPP_FUNCTION_PTR(
        Utf8 * newUtf8FromUnicode(
            const Utf16Char *
            , Size
        )
    )

    FGPP_FUNCTION_PTR(
        Utf8 * newUtf8FromUnicode(
            const Utf32 &
        )
    )

    FGPP_FUNCTION_PTR(
        Utf8 * newUtf8FromUnicode(
            const Utf32Char *
        )
    )

    FGPP_FUNCTION_PTR(
        Utf8 * newUtf8FromUnicode(
            const Utf32Char *
            , Size
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            Utf8 &
        )
    )

    FGPP_FUNCTION_PTR(
        const Utf8Char * getPtr(
            const Utf8 &
        )
    )

    FGPP_FUNCTION_NUM(
        Size getLength(
            const Utf8 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assign(
            Utf8 &
            , const Utf8 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assign(
            Utf8 &
            , const Utf8Char *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assign(
            Utf8 &
            , const Utf8Char *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromString(
            Utf8 &
            , const String &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromString(
            Utf8 &
            , const StringChar *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromString(
            Utf8 &
            , const StringChar *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf8 &
            , const Utf16 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf8 &
            , const Utf16Char *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf8 &
            , const Utf16Char *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf8 &
            , const Utf32 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf8 &
            , const Utf32Char *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            Utf8 &
            , const Utf32Char *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toInt(
            Int &
            , const Utf8 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toInt(
            Int &
            , const Utf8 &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toUInt(
            UInt &
            , const Utf8 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toUInt(
            UInt &
            , const Utf8 &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toLong(
            Long &
            , const Utf8 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toLong(
            Long &
            , const Utf8 &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toULong(
            ULong &
            , const Utf8 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toULong(
            ULong &
            , const Utf8 &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toFloat(
            Float &
            , const Utf8 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toDouble(
            Double &
            , const Utf8 &
        )
    )
}

#endif  // FGPP_STRING_UTF8_H
