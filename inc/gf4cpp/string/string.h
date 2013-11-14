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

template<>
inline void gfFree(
    gf::String &    _string
)
{
    gfStringFree(
        &_string
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
}

#endif  // GF4CPP_STRING_STRING_H
