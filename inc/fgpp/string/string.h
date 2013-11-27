#ifndef FGPP_STRING_STRING_H
#define FGPP_STRING_STRING_H

namespace fg {
    struct String;
}

#include "fgpp/string/utf8.h"
#include "fgpp/string/utf16.h"
#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT String * newString(
    );

    FGPPEXPORT String * clone(
        const String &
    );

    FGPPEXPORT String * newString(
        const StringChar *
    );

    FGPPEXPORT String * newString(
        const StringChar *
        , Size
    );

    FGPPEXPORT String * newStringFromUnicode(
        const Utf8 &
    );

    FGPPEXPORT String * newStringFromUnicode(
        const Utf8Char *
    );

    FGPPEXPORT String * newStringFromUnicode(
        const Utf8Char *
        , Size
    );

    FGPPEXPORT String * newStringFromUnicode(
        const Utf16 &
    );

    FGPPEXPORT String * newStringFromUnicode(
        const Utf16Char *
    );

    FGPPEXPORT String * newStringFromUnicode(
        const Utf16Char *
        , Size
    );

    FGPPEXPORT String * newStringFromUnicode(
        const Utf32 &
    );

    FGPPEXPORT String * newStringFromUnicode(
        const Utf32Char *
    );

    FGPPEXPORT String * newStringFromUnicode(
        const Utf32Char *
        , Size
    );

    FGPPEXPORT void free(
        String &
    );

    FGPPEXPORT const StringChar * getPtr(
        const String &
    );

    FGPPEXPORT Size getLength(
        const String &
    );

    FGPPEXPORT Bool assign(
        String &
        , const String &
    );

    FGPPEXPORT Bool assign(
        String &
        , const StringChar *
    );

    FGPPEXPORT Bool assign(
        String &
        , const StringChar *
        , Size
    );

    FGPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf8 &
    );

    FGPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf8Char *
    );

    FGPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf8Char *
        , Size
    );

    FGPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf16 &
    );

    FGPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf16Char *
    );

    FGPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf16Char *
        , Size
    );

    FGPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf32 &
    );

    FGPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf32Char *
    );

    FGPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf32Char *
        , Size
    );
}

#endif  // FGPP_STRING_STRING_H
