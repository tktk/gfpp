#include "fgpp/util/export.h"
#include "fgpp/window/mousebuttonevent.h"

#include "fgpp/window/window.h"
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
    WindowMouseButtonEvent * newWindowMouseButtonEvent(
        Window &
        , ULong
        , Bool
        , Int
        , Int
    )
    {
        return nullptr;
    }

    WindowMouseButtonEvent * clone(
        const WindowMouseButtonEvent &
    )
    {
        return nullptr;
    }

    void free(
        WindowMouseButtonEvent &
    )
    {
    }

    Window & getSource(
        const WindowMouseButtonEvent &
    )
    {
        return window;
    }

    ULong getIndex(
        const WindowMouseButtonEvent &
    )
    {
        return 0;
    }

    Bool getPressed(
        const WindowMouseButtonEvent &
    )
    {
        return false;
    }

    Int getX(
        const WindowMouseButtonEvent &
    )
    {
        return 0;
    }

    Int getY(
        const WindowMouseButtonEvent &
    )
    {
        return 0;
    }
}
