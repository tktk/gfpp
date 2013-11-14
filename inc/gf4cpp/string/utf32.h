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

template<>
inline void gfFree(
    gf::Utf32 & _utf32
)
{
    gfUtf32Free(
        &_utf32
    );
}

namespace gf {
    inline Bool toUtf32(
        Utf32 &             _to
        , const String &    _FROM
    )
    {
        return gfUtf32FromString(
            &_to
            , &_FROM
        );
    }

    inline Bool toUtf32FromString(
        Utf32 &                 _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return gfUtf32FromStringCharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool toUtf32(
        Utf32 &         _to
        , const Utf8 &  _FROM
    )
    {
        return gfUtf32FromUtf8(
            &_to
            , &_FROM
        );
    }

    inline Bool toUtf32FromUnicode(
        Utf32 &             _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return gfUtf32FromUtf8CharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool toUtf32(
        Utf32 &         _to
        , const Utf16 & _FROM
    )
    {
        return gfUtf32FromUtf16(
            &_to
            , &_FROM
        );
    }

    inline Bool toUtf32FromUnicode(
        Utf32 &             _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return gfUtf32FromUtf16CharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Utf32 * newUtf32(
    )
    {
        return gfUtf32New();
    }

    inline Utf32 * clone(
        const Utf32 &   _UTF32
    )
    {
        return gfUtf32Clone(
            &_UTF32
        );
    }

    inline Utf32 * newUtf32(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return gfUtf32NewFromCharPtr(
            _FROM
            , _length
        );
    }

    inline Utf32 * newUtf32(
        const String &  _FROM
    )
    {
        return gfUtf32NewFromString(
            &_FROM
        );
    }

    inline Utf32 * newUtf32FromString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return gfUtf32NewFromStringCharPtr(
            _FROM
            , _length
        );
    }

    inline Utf32 * newUtf32(
        const Utf8 &    _FROM
    )
    {
        return gfUtf32NewFromUtf8(
            &_FROM
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return gfUtf32NewFromUtf8CharPtr(
            _FROM
            , _length
        );
    }

    inline Utf32 * newUtf32(
        const Utf16 &   _FROM
    )
    {
        return gfUtf32NewFromUtf16(
            &_FROM
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return gfUtf32NewFromUtf16CharPtr(
            _FROM
            , _length
        );
    }

    inline void free(
        Utf32 & _utf32
    )
    {
        return gfFree(
            _utf32
        );
    }
}

#endif  // GF4CPP_STRING_UTF32_H
