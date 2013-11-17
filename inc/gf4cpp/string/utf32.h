﻿#ifndef GF4CPP_STRING_UTF32_H
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

    inline Utf32 * newUtf32FromString(
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

    inline Utf32 * newUtf32FromUnicode(
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

    inline Utf32 * newUtf32FromUnicode(
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

    inline const Utf32Char * getPtr(
        const Utf32 &  _UTF32
    )
    {
        return gfUtf32GetPtr(
            &_UTF32
        );
    }

    inline Size getLength(
        const Utf32 &  _UTF32
    )
    {
        return gfUtf32GetLength(
            &_UTF32
        );
    }

    inline Bool assign(
        Utf32 &         _to
        , const Utf32 & _FROM
    )
    {
        return gfUtf32Assign(
            &_to
            , &_FROM
        );
    }

    inline Bool assign(
        Utf32 &             _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return gfUtf32AssignFromCharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool assignFromString(
        Utf32 &             _to
        , const String &    _FROM
    )
    {
        return gfUtf32AssignFromString(
            &_to
            , &_FROM
        );
    }

    inline Bool assignFromString(
        Utf32 &                 _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return gfUtf32AssignFromStringCharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &         _to
        , const Utf8 &  _FROM
    )
    {
        return gfUtf32AssignFromUtf8(
            &_to
            , &_FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &             _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return gfUtf32AssignFromUtf8CharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &         _to
        , const Utf16 & _FROM
    )
    {
        return gfUtf32AssignFromUtf16(
            &_to
            , &_FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &             _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return gfUtf32AssignFromUtf16CharPtr(
            &_to
            , _FROM
            , _length
        );
    }
}

#endif  // GF4CPP_STRING_UTF32_H
