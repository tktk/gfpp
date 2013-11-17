﻿#ifndef GF4CPP_STRING_UTF8_H
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

template<>
inline void gfFree(
    gf::Utf8 &  _utf8
)
{
    gfUtf8Free(
        &_utf8
    );
}

namespace gf {
    inline Utf8 * newUtf8(
    )
    {
        return gfUtf8New();
    }

    inline Utf8 * clone(
        const Utf8 &    _UTF8
    )
    {
        return gfUtf8Clone(
            &_UTF8
        );
    }

    inline Utf8 * newUtf8(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return gfUtf8NewFromCharPtr(
            _FROM
            , _length
        );
    }

    inline Utf8 * newUtf8FromString(
        const String &  _FROM
    )
    {
        return gfUtf8NewFromString(
            &_FROM
        );
    }

    inline Utf8 * newUtf8FromString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return gfUtf8NewFromStringCharPtr(
            _FROM
            , _length
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf16 &   _FROM
    )
    {
        return gfUtf8NewFromUtf16(
            &_FROM
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return gfUtf8NewFromUtf16CharPtr(
            _FROM
            , _length
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf32 &   _FROM
    )
    {
        return gfUtf8NewFromUtf32(
            &_FROM
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return gfUtf8NewFromUtf32CharPtr(
            _FROM
            , _length
        );
    }

    inline void free(
        Utf8 &  _utf8
    )
    {
        return gfFree(
            _utf8
        );
    }

    inline const Utf8Char * getPtr(
        const Utf8 &    _UTF8
    )
    {
        return gfUtf8GetPtr(
            &_UTF8
        );
    }

    inline Size getLength(
        const Utf8 &    _UTF8
    )
    {
        return gfUtf8GetLength(
            &_UTF8
        );
    }

    inline Bool assign(
        Utf8 &          _to
        , const Utf8 &  _FROM
    )
    {
        return gfUtf8Assign(
            &_to
            , &_FROM
        );
    }

    inline Bool assign(
        Utf8 &              _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return gfUtf8AssignFromCharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool assignFromString(
        Utf8 &              _to
        , const String &    _FROM
    )
    {
        return gfUtf8AssignFromString(
            &_to
            , &_FROM
        );
    }

    inline Bool assignFromString(
        Utf8 &                  _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return gfUtf8AssignFromStringCharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &          _to
        , const Utf16 & _FROM
    )
    {
        return gfUtf8AssignFromUtf16(
            &_to
            , &_FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &              _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return gfUtf8AssignFromUtf16CharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &          _to
        , const Utf32 & _FROM
    )
    {
        return gfUtf8AssignFromUtf32(
            &_to
            , &_FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &              _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return gfUtf8AssignFromUtf32CharPtr(
            &_to
            , _FROM
            , _length
        );
    }
}

#endif  // GF4CPP_STRING_UTF8_H
