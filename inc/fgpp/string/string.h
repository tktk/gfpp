#ifndef FGPP_STRING_STRING_H
#define FGPP_STRING_STRING_H

#include "fgpp/def/string/string.h"
#include "fgpp/def/string/utf8.h"
#include "fgpp/def/string/utf16.h"
#include "fgpp/def/string/utf32.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import_new.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        String * newString(
        )
    )

    FGPP_FUNCTION_PTR(
        String * clone(
            const String &
        )
    )

    FGPP_FUNCTION_PTR(
        String * newString(
            const StringChar *
        )
    )

    FGPP_FUNCTION_PTR(
        String * newString(
            const StringChar *
            , Size
        )
    )

    FGPP_FUNCTION_PTR(
        String * newStringFromUnicode(
            const Utf8 &
        )
    )

    FGPP_FUNCTION_PTR(
        String * newStringFromUnicode(
            const Utf8Char *
        )
    )

    FGPP_FUNCTION_PTR(
        String * newStringFromUnicode(
            const Utf8Char *
            , Size
        )
    )

    FGPP_FUNCTION_PTR(
        String * newStringFromUnicode(
            const Utf16 &
        )
    )

    FGPP_FUNCTION_PTR(
        String * newStringFromUnicode(
            const Utf16Char *
        )
    )

    FGPP_FUNCTION_PTR(
        String * newStringFromUnicode(
            const Utf16Char *
            , Size
        )
    )

    FGPP_FUNCTION_PTR(
        String * newStringFromUnicode(
            const Utf32 &
        )
    )

    FGPP_FUNCTION_PTR(
        String * newStringFromUnicode(
            const Utf32Char *
        )
    )

    FGPP_FUNCTION_PTR(
        String * newStringFromUnicode(
            const Utf32Char *
            , Size
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            String &
        )
    )

    FGPP_FUNCTION_PTR(
        const StringChar * getPtr(
            const String &
        )
    )

    FGPP_FUNCTION_NUM(
        Size getLength(
            const String &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assign(
            String &
            , const String &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assign(
            String &
            , const StringChar *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assign(
            String &
            , const StringChar *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            String &
            , const Utf8 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            String &
            , const Utf8Char *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            String &
            , const Utf8Char *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            String &
            , const Utf16 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            String &
            , const Utf16Char *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            String &
            , const Utf16Char *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            String &
            , const Utf32 &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            String &
            , const Utf32Char *
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool assignFromUnicode(
            String &
            , const Utf32Char *
            , Size
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toInt(
            Int &
            , const String &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toInt(
            Int &
            , const String &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toUInt(
            UInt &
            , const String &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toUInt(
            UInt &
            , const String &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toLong(
            Long &
            , const String &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toLong(
            Long &
            , const String &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toULong(
            ULong &
            , const String &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toULong(
            ULong &
            , const String &
            , Int
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toFloat(
            Float &
            , const String &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool toDouble(
            Double &
            , const String &
        )
    )
}

#endif  // FGPP_STRING_STRING_H
