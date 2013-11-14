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
    inline Bool toUtf8(
        Utf8 &              _to
        , const String &    _FROM
    )
    {
        return gfUtf8FromString(
            &_to
            , &_FROM
        );
    }

    inline Bool toUtf8FromString(
        Utf8 &                  _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return gfUtf8FromStringCharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool toUtf8(
        Utf8 &          _to
        , const Utf16 & _FROM
    )
    {
        return gfUtf8FromUtf16(
            &_to
            , &_FROM
        );
    }

    inline Bool toUtf8FromUnicode(
        Utf8 &              _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return gfUtf8FromUtf16CharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool toUtf8(
        Utf8 &          _to
        , const Utf32 & _FROM
    )
    {
        return gfUtf8FromUtf32(
            &_to
            , &_FROM
        );
    }

    inline Bool toUtf8FromUnicode(
        Utf8 &              _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return gfUtf8FromUtf32CharPtr(
            &_to
            , _FROM
            , _length
        );
    }

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

    inline Utf8 * newUtf8(
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

    inline Utf8 * newUtf8(
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

    inline Utf8 * newUtf8(
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
}

#endif  // GF4CPP_STRING_UTF8_H
