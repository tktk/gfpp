#ifndef GFPP_STRING_STRING_H
#define GFPP_STRING_STRING_H

namespace gf {
    struct String;
}

#include "gfpp/string/utf8.h"
#include "gfpp/string/utf16.h"
#include "gfpp/string/utf32.h"
#include "gfpp/common/primitives.h"
#include "gfpp/util/import.h"

namespace gf {
    GFPPEXPORT String * newString(
    );

    GFPPEXPORT String * clone(
        const String &
    );

    GFPPEXPORT String * newString(
        const StringChar *
    );

    GFPPEXPORT String * newString(
        const StringChar *
        , Size
    );

    GFPPEXPORT String * newStringFromUnicode(
        const Utf8 &
    );

    GFPPEXPORT String * newStringFromUnicode(
        const Utf8Char *
    );

    GFPPEXPORT String * newStringFromUnicode(
        const Utf8Char *
        , Size
    );

    GFPPEXPORT String * newStringFromUnicode(
        const Utf16 &
    );

    GFPPEXPORT String * newStringFromUnicode(
        const Utf16Char *
    );

    GFPPEXPORT String * newStringFromUnicode(
        const Utf16Char *
        , Size
    );

    GFPPEXPORT String * newStringFromUnicode(
        const Utf32 &
    );

    GFPPEXPORT String * newStringFromUnicode(
        const Utf32Char *
    );

    GFPPEXPORT String * newStringFromUnicode(
        const Utf32Char *
        , Size
    );

    GFPPEXPORT void free(
        String &
    );

    GFPPEXPORT const StringChar * getPtr(
        const String &
    );

    GFPPEXPORT Size getLength(
        const String &
    );

    GFPPEXPORT Bool assign(
        String &
        , const String &
    );

    GFPPEXPORT Bool assign(
        String &
        , const StringChar *
    );

    GFPPEXPORT Bool assign(
        String &
        , const StringChar *
        , Size
    );

    GFPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf8 &
    );

    GFPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf8Char *
    );

    GFPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf8Char *
        , Size
    );

    GFPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf16 &
    );

    GFPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf16Char *
    );

    GFPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf16Char *
        , Size
    );

    GFPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf32 &
    );

    GFPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf32Char *
    );

    GFPPEXPORT Bool assignFromUnicode(
        String &
        , const Utf32Char *
        , Size
    );
}

#endif  // GFPP_STRING_STRING_H
