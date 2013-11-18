#ifndef GFPP_STRING_UTF16_H
#define GFPP_STRING_UTF16_H

#include "gf/string/utf16.h"

namespace gf {
    typedef GfUtf16 Utf16;
}

#include "gf4cpp/string/string.h"
#include "gf4cpp/string/utf8.h"
#include "gf4cpp/string/utf32.h"
#include "gf4cpp/common/functional.h"
#include "gf4cpp/common/primitives.h"
#include "gf/util/import.h"

namespace gf {
    GFEXPORT Utf16 * newUtf16(
    );

    GFEXPORT Utf16 * clone(
        const Utf16 &
    );

    GFEXPORT Utf16 * newUtf16(
        const Utf16Char *
    );

    GFEXPORT Utf16 * newUtf16(
        const Utf16Char *
        , Size
    );

    GFEXPORT Utf16 * newUtf16FromString(
        const String &
    );

    GFEXPORT Utf16 * newUtf16FromString(
        const StringChar *
    );

    GFEXPORT Utf16 * newUtf16FromString(
        const StringChar *
        , Size
    );

    GFEXPORT Utf16 * newUtf16FromUnicode(
        const Utf8 &
    );

    GFEXPORT Utf16 * newUtf16FromUnicode(
        const Utf8Char *
    );

    GFEXPORT Utf16 * newUtf16FromUnicode(
        const Utf8Char *
        , Size
    );

    GFEXPORT Utf16 * newUtf16FromUnicode(
        const Utf32 &
    );

    GFEXPORT Utf16 * newUtf16FromUnicode(
        const Utf32Char *
    );

    GFEXPORT Utf16 * newUtf16FromUnicode(
        const Utf32Char *
        , Size
    );

    GFEXPORT void free(
        Utf16 &
    );

    GFEXPORT const Utf16Char * getPtr(
        const Utf16 &
    );

    GFEXPORT Size getLength(
        const Utf16 &
    );

    GFEXPORT Bool assign(
        Utf16 &
        , const Utf16 &
    );

    GFEXPORT Bool assign(
        Utf16 &
        , const Utf16Char *
    );

    GFEXPORT Bool assign(
        Utf16 &
        , const Utf16Char *
        , Size
    );

    GFEXPORT Bool assignFromString(
        Utf16 &
        , const String &
    );

    GFEXPORT Bool assignFromString(
        Utf16 &
        , const StringChar *
    );

    GFEXPORT Bool assignFromString(
        Utf16 &
        , const StringChar *
        , Size
    );

    GFEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf8 &
    );

    GFEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf8Char *
    );

    GFEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf8Char *
        , Size
    );

    GFEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf32 &
    );

    GFEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf32Char *
    );

    GFEXPORT Bool assignFromUnicode(
        Utf16 &
        , const Utf32Char *
        , Size
    );
}

template<>
inline void gfFree(
    gf::Utf16 & _utf16
)
{
    gf::free(
        _utf16
    );
}

#endif  // GFPP_STRING_UTF16_H
