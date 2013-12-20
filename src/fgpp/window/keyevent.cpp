#include "fgpp/util/export.h"
#include "fgpp/window/keyevent.h"

#include "fgpp/window/window.h"
#include "fgpp/window/key.h"
#include "fgpp/common/primitives.h"

namespace fg {
    struct Window
    {
    };
}

namespace {
    fg::Window  window;
}

namespace fg {
    WindowKeyEvent * newWindowKeyEvent(
        Window &
        , Key
        , const Utf32Char *
        , Bool
    )
    {
        return nullptr;
    }

    WindowKeyEvent * clone(
        const WindowKeyEvent &
    )
    {
        return nullptr;
    }

    void free(
        WindowKeyEvent &
    )
    {
    }

    Window & getSource(
        const WindowKeyEvent &
    )
    {
        return window;
    }

    Key getKey(
        const WindowKeyEvent &
    )
    {
        return KEY_INVALID;
    }

    const Utf32Char * getCharPtr(
        const WindowKeyEvent &
    )
    {
        return nullptr;
    }

    Bool getPressed(
        const WindowKeyEvent &
    )
    {
        return false;
    }
}
