﻿#include "gfpp/util/export.h"
#include "gfpp/string/string.h"

#include "gfpp/string/utf8.h"
#include "gfpp/string/utf16.h"
#include "gfpp/string/utf32.h"
#include "gfpp/common/primitives.h"

namespace gf {
    String * newString(
    )
    {
        return nullptr;
    }

    String * clone(
        const String &
    )
    {
        return nullptr;
    }

    String * newString(
        const StringChar *
    )
    {
        return nullptr;
    }

    String * newString(
        const StringChar *
        , Size
    )
    {
        return nullptr;
    }

    String * newStringFromUnicode(
        const Utf8 &
    )
    {
        return nullptr;
    }

    String * newStringFromUnicode(
        const Utf8Char *
    )
    {
        return nullptr;
    }

    String * newStringFromUnicode(
        const Utf8Char *
        , Size
    )
    {
        return nullptr;
    }

    String * newStringFromUnicode(
        const Utf16 &
    )
    {
        return nullptr;
    }

    String * newStringFromUnicode(
        const Utf16Char *
    )
    {
        return nullptr;
    }

    String * newStringFromUnicode(
        const Utf16Char *
        , Size
    )
    {
        return nullptr;
    }

    String * newStringFromUnicode(
        const Utf32 &
    )
    {
        return nullptr;
    }

    String * newStringFromUnicode(
        const Utf32Char *
    )
    {
        return nullptr;
    }

    String * newStringFromUnicode(
        const Utf32Char *
        , Size
    )
    {
        return nullptr;
    }

    void free(
        String &
    )
    {
    }

    const StringChar * getPtr(
        const String &
    )
    {
        return nullptr;
    }

    Size getLength(
        const String &
    )
    {
        return 0;
    }

    Bool assign(
        String &
        , const String &
    )
    {
        return false;
    }

    Bool assign(
        String &
        , const StringChar *
    )
    {
        return false;
    }

    Bool assign(
        String &
        , const StringChar *
        , Size
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        String &
        , const Utf8 &
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        String &
        , const Utf8Char *
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        String &
        , const Utf8Char *
        , Size
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        String &
        , const Utf16 &
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        String &
        , const Utf16Char *
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        String &
        , const Utf16Char *
        , Size
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        String &
        , const Utf32 &
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        String &
        , const Utf32Char *
    )
    {
        return false;
    }

    Bool assignFromUnicode(
        String &
        , const Utf32Char *
        , Size
    )
    {
        return false;
    }
}
