#ifndef GF4CPP_COMMON_STRING_H
#define GF4CPP_COMMON_STRING_H

#include "gf/common/string.h"
#include "gf4cpp/common/primitives.h"

namespace gf {
    typedef GfString String;
    typedef GfUtf8 Utf8;
    typedef GfUtf16 Utf16;
    typedef GfUtf32 Utf32;
}

template<>
inline void gfFree(
    gf::String &    _string
)
{
    gfStringFree(
        &_string
    );
}

template<>
inline void gfFree(
    gf::Utf8 &  _utf8
)
{
    gfUtf8Free(
        &_utf8
    );
}

template<>
inline void gfFree(
    gf::Utf16 & _utf16
)
{
    gfUtf16Free(
        &_utf16
    );
}

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
    inline Bool toString(
        String &        _to
        , const Utf8 &  _FROM
    )
    {
        return gfStringFromUtf8(
            &_to
            , &_FROM
        );
    }

    inline Bool toStringFromUnicode(
        String &            _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return gfStringFromUtf8CharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool toString(
        String &        _to
        , const Utf16 & _FROM
    )
    {
        return gfStringFromUtf16(
            &_to
            , &_FROM
        );
    }

    inline Bool toStringFromUnicode(
        String &            _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return gfStringFromUtf16CharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool toString(
        String &        _to
        , const Utf32 & _FROM
    )
    {
        return gfStringFromUtf32(
            &_to
            , &_FROM
        );
    }

    inline Bool toStringFromUnicode(
        String &            _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return gfStringFromUtf32CharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline String * newString(
    )
    {
        return gfStringNew();
    }

    inline String * clone(
        const String &  _STRING
    )
    {
        return gfStringClone(
            &_STRING
        );
    }

    inline String * newString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return gfStringNewFromCharPtr(
            _FROM
            , _length
        );
    }

    inline String * newString(
        const Utf8 &    _FROM
    )
    {
        return gfStringNewFromUtf8(
            &_FROM
        );
    }

    inline String * newStringFromUnicode(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return gfStringNewFromUtf8CharPtr(
            _FROM
            , _length
        );
    }

    inline String * newString(
        const Utf16 &   _FROM
    )
    {
        return gfStringNewFromUtf16(
            &_FROM
        );
    }

    inline String * newStringFromUnicode(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return gfStringNewFromUtf16CharPtr(
            _FROM
            , _length
        );
    }

    inline String * newString(
        const Utf32 &   _FROM
    )
    {
        return gfStringNewFromUtf32(
            &_FROM
        );
    }

    inline String * newStringFromUnicode(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return gfStringNewFromUtf32CharPtr(
            _FROM
            , _length
        );
    }

    inline void free(
        String &    _string
    )
    {
        return gfFree(
            _string
        );
    }

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

    inline Bool toUtf16(
        Utf16 &             _to
        , const String &    _FROM
    )
    {
        return gfUtf16FromString(
            &_to
            , &_FROM
        );
    }

    inline Bool toUtf16FromString(
        Utf16 &                 _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return gfUtf16FromStringCharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool toUtf16(
        Utf16 &         _to
        , const Utf8 &  _FROM
    )
    {
        return gfUtf16FromUtf8(
            &_to
            , &_FROM
        );
    }

    inline Bool toUtf16FromUnicode(
        Utf16 &             _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return gfUtf16FromUtf8CharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Bool toUtf16(
        Utf16 &         _to
        , const Utf32 & _FROM
    )
    {
        return gfUtf16FromUtf32(
            &_to
            , &_FROM
        );
    }

    inline Bool toUtf16FromUnicode(
        Utf16 &             _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return gfUtf16FromUtf32CharPtr(
            &_to
            , _FROM
            , _length
        );
    }

    inline Utf16 * newUtf16(
    )
    {
        return gfUtf16New();
    }

    inline Utf16 * clone(
        const Utf16 &   _UTF16
    )
    {
        return gfUtf16Clone(
            &_UTF16
        );
    }

    inline Utf16 * newUtf16(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return gfUtf16NewFromCharPtr(
            _FROM
            , _length
        );
    }

    inline Utf16 * newUtf16(
        const String &  _FROM
    )
    {
        return gfUtf16NewFromString(
            &_FROM
        );
    }

    inline Utf16 * newUtf16FromString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return gfUtf16NewFromStringCharPtr(
            _FROM
            , _length
        );
    }

    inline Utf16 * newUtf16(
        const Utf8 &    _FROM
    )
    {
        return gfUtf16NewFromUtf8(
            &_FROM
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return gfUtf16NewFromUtf8CharPtr(
            _FROM
            , _length
        );
    }

    inline Utf16 * newUtf16(
        const Utf32 &   _FROM
    )
    {
        return gfUtf16NewFromUtf32(
            &_FROM
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return gfUtf16NewFromUtf32CharPtr(
            _FROM
            , _length
        );
    }

    inline void free(
        Utf16 & _utf16
    )
    {
        return gfFree(
            _utf16
        );
    }

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

#endif  // GF4CPP_COMMON_STRING_H
