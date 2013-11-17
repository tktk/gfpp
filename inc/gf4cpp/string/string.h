#ifndef GF4CPP_STRING_STRING_H
#define GF4CPP_STRING_STRING_H

#include "gf/string/string.h"

namespace gf {
    typedef GfString String;
}

#include "gf4cpp/string/utf8.h"
#include "gf4cpp/string/utf16.h"
#include "gf4cpp/string/utf32.h"
#include "gf4cpp/common/functional.h"
#include "gf4cpp/common/primitives.h"
#include "gf/util/import.h"

namespace gf {
    GFEXPORT String * newString();

    GFEXPORT String * clone(
        const String &
    );

    GFEXPORT String * newString(
        const StringChar *
    );

    GFEXPORT String * newString(
        const StringChar *
        , Size
    );

    GFEXPORT String * newStringFromUnicode(
        const Utf8 &
    );

    GFEXPORT String * newStringFromUnicode(
        const Utf8Char *
    );

    GFEXPORT String * newStringFromUnicode(
        const Utf8Char *
        , Size
    );

    GFEXPORT String * newStringFromUnicode(
        const Utf16 &
    );

    GFEXPORT String * newStringFromUnicode(
        const Utf16Char *
    );

    GFEXPORT String * newStringFromUnicode(
        const Utf16Char *
        , Size
    );

    GFEXPORT String * newStringFromUnicode(
        const Utf32 &
    );

    GFEXPORT String * newStringFromUnicode(
        const Utf32Char *
    );

    GFEXPORT String * newStringFromUnicode(
        const Utf32Char *
        , Size
    );

    GFEXPORT void free(
        String &
    );

    GFEXPORT const StringChar * getPtr(
        const String &
    );

    GFEXPORT Size getLength(
        const String &
    );

    GFEXPORT Bool assign(
        String &
        , const String &
    );

    GFEXPORT Bool assign(
        String &
        , const StringChar *
    );

    GFEXPORT Bool assign(
        String &
        , const StringChar *
        , Size
    );

    GFEXPORT Bool assignFromUnicode(
        String &
        , const Utf8 &
    );

    GFEXPORT Bool assignFromUnicode(
        String &
        , const Utf8Char *
    );

    GFEXPORT Bool assignFromUnicode(
        String &
        , const Utf8Char *
        , Size
    );

    GFEXPORT Bool assignFromUnicode(
        String &
        , const Utf16 &
    );

    GFEXPORT Bool assignFromUnicode(
        String &
        , const Utf16Char *
    );

    GFEXPORT Bool assignFromUnicode(
        String &
        , const Utf16Char *
        , Size
    );

    GFEXPORT Bool assignFromUnicode(
        String &
        , const Utf32 &
    );

    GFEXPORT Bool assignFromUnicode(
        String &
        , const Utf32Char *
    );

    GFEXPORT Bool assignFromUnicode(
        String &
        , const Utf32Char *
        , Size
    );
}

template<>
inline void gfFree(
    gf::String &    _string
)
{
    gf::free(
        _string
    );
}

#endif  // GF4CPP_STRING_STRING_H
