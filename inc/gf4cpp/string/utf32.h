#ifndef GF4CPP_STRING_UTF32_H
#define GF4CPP_STRING_UTF32_H

#include "gf/string/utf32.h"

namespace gf {
    typedef GfUtf32 Utf32;
}

#include "gf4cpp/string/string.h"
#include "gf4cpp/string/utf8.h"
#include "gf4cpp/string/utf16.h"
#include "gf4cpp/common/functional.h"
#include "gf4cpp/common/primitives.h"
#include "gf/util/import.h"

namespace gf {
    GFEXPORT Utf32 * newUtf32();

    GFEXPORT Utf32 * clone(
        const Utf32 &
    );

    GFEXPORT Utf32 * newUtf32(
        const Utf32Char *
        , Size
    );

    GFEXPORT Utf32 * newUtf32FromString(
        const String &
    );

    GFEXPORT Utf32 * newUtf32FromString(
        const StringChar *
        , Size
    );

    GFEXPORT Utf32 * newUtf32FromUnicode(
        const Utf8 &
    );

    GFEXPORT Utf32 * newUtf32FromUnicode(
        const Utf8Char *
        , Size
    );

    GFEXPORT Utf32 * newUtf32FromUnicode(
        const Utf16 &
    );

    GFEXPORT Utf32 * newUtf32FromUnicode(
        const Utf16Char *
        , Size
    );

    GFEXPORT void free(
        Utf32 &
    );

    GFEXPORT const Utf32Char * getPtr(
        const Utf32 &
    );

    GFEXPORT Size getLength(
        const Utf32 &
    );

    GFEXPORT Bool assign(
        Utf32 &
        , const Utf32 &
    );

    GFEXPORT Bool assign(
        Utf32 &
        , const Utf32Char *
        , Size
    );

    GFEXPORT Bool assignFromString(
        Utf32 &
        , const String &
    );

    GFEXPORT Bool assignFromString(
        Utf32 &
        , const StringChar *
        , Size
    );

    GFEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf8 &
    );

    GFEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf8Char *
        , Size
    );

    GFEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf16 &
    );

    GFEXPORT Bool assignFromUnicode(
        Utf32 &
        , const Utf16Char *
        , Size
    );
}

template<>
inline void gfFree(
    gf::Utf32 & _utf32
)
{
    gf::free(
        _utf32
    );
}

#endif  // GF4CPP_STRING_UTF32_H
