#ifndef GF4CPP_STRING_UTF8_H
#define GF4CPP_STRING_UTF8_H

#include "gf/string/utf8.h"

namespace gf {
    typedef GfUtf8 Utf8;
}

#include "gf4cpp/string/string.h"
#include "gf4cpp/string/utf16.h"
#include "gf4cpp/string/utf32.h"
#include "gf4cpp/common/functional.h"
#include "gf4cpp/common/primitives.h"
#include "gf/util/import.h"

namespace gf {
    GFEXPORT Utf8 * newUtf8(
    );

    GFEXPORT Utf8 * clone(
        const Utf8 &
    );

    GFEXPORT Utf8 * newUtf8(
        const Utf8Char *
        , Size
    );

    GFEXPORT Utf8 * newUtf8FromString(
        const String &
    );

    GFEXPORT Utf8 * newUtf8FromString(
        const StringChar *
        , Size
    );

    GFEXPORT Utf8 * newUtf8FromUnicode(
        const Utf16 &
    );

    GFEXPORT Utf8 * newUtf8FromUnicode(
        const Utf16Char *
        , Size
    );

    GFEXPORT Utf8 * newUtf8FromUnicode(
        const Utf32 &
    );

    GFEXPORT Utf8 * newUtf8FromUnicode(
        const Utf32Char *
        , Size
    );

    GFEXPORT void free(
        Utf8 &
    );

    GFEXPORT const Utf8Char * getPtr(
        const Utf8 &
    );

    GFEXPORT Size getLength(
        const Utf8 &
    );

    GFEXPORT Bool assign(
        Utf8 &
        , const Utf8 &
    );

    GFEXPORT Bool assign(
        Utf8 &
        , const Utf8Char *
        , Size
    );

    GFEXPORT Bool assignFromString(
        Utf8 &
        , const String &
    );

    GFEXPORT Bool assignFromString(
        Utf8 &
        , const StringChar *
        , Size
    );

    GFEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf16 &
    );

    GFEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf16Char *
        , Size
    );

    GFEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf32 &
    );

    GFEXPORT Bool assignFromUnicode(
        Utf8 &
        , const Utf32Char *
        , Size
    );
}

template<>
inline void gfFree(
    gf::Utf8 &  _utf8
)
{
    gf::free(
        _utf8
    );
}

#endif  // GF4CPP_STRING_UTF8_H
