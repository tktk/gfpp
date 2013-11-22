#include "gfpp/util/export.h"
#include "gfpp/string/utf8.h"

#include "gfpp/string/string.h"
#include "gfpp/string/utf16.h"
#include "gfpp/string/utf32.h"
#include "gfpp/common/primitives.h"

namespace gf {
    Utf8 * newUtf8(
    )
    {
        return nullptr;
    }

    Utf8 * clone(
        const Utf8 &
    )
    {
        return nullptr;
    }

    Utf8 * newUtf8(
        const Utf8Char *
    )
    {
        return nullptr;
    }

    Utf8 * newUtf8(
        const Utf8Char *
        , Size
    )
    {
        return nullptr;
    }

    Utf8 * newUtf8FromString(
        const String &
    )
    {
        return nullptr;
    }

    Utf8 * newUtf8FromString(
        const StringChar *
    )
    {
        return nullptr;
    }

    Utf8 * newUtf8FromString(
        const StringChar *
        , Size
    )
    {
        return nullptr;
    }

    Utf8 * newUtf8FromUnicode(
        const Utf16 &
    )
    {
        return nullptr;
    }

    Utf8 * newUtf8FromUnicode(
        const Utf16Char *
    )
    {
        return nullptr;
    }

    Utf8 * newUtf8FromUnicode(
        const Utf16Char *
        , Size
    )
    {
        return nullptr;
    }

    Utf8 * newUtf8FromUnicode(
        const Utf32 &
    )
    {
        return nullptr;
    }

    Utf8 * newUtf8FromUnicode(
        const Utf32Char *
    )
    {
        return nullptr;
    }

    Utf8 * newUtf8FromUnicode(
        const Utf32Char *
        , Size
    )
    {
        return nullptr;
    }

    void free(
        Utf8 &
    )
    {
    }

    const Utf8Char * getPtr(
        const Utf8 &
    )
    {
        return nullptr;
    }

    Size getLength(
        const Utf8 &
    )
    {
        return 0;
    }

    Bool assign(
        Utf8 &
        , const Utf8 &
    )
    {
        return false;
    }

    Bool assign(
        Utf8 &
        , const Utf8Char *
    )
    {
        return false;
    }

    Bool assign(
        Utf8 &
        , const Utf8Char *
        , Size
    )
    {
        return false;
    }

    Bool assignFromString(
        Utf8 &
        , const String &
    )
    {
        return false;
    }

    Bool assignFromString(
        Utf8 &
        , const StringChar *
    )
    {
        return false;
    }

    Bool assignFromString(
        Utf8 &
        , const StringChar *
        , Size
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        Utf8 &
        , const Utf16 &
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        Utf8 &
        , const Utf16Char *
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        Utf8 &
        , const Utf16Char *
        , Size
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        Utf8 &
        , const Utf32 &
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        Utf8 &
        , const Utf32Char *
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        Utf8 &
        , const Utf32Char *
        , Size
    )
    {
        return false;
    }
}
