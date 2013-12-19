#include "fgpp/util/export.h"
#include "fgpp/window/paintevent.h"

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
    WindowPaintEvent * newWindowPaintEvent(
        Window &
        , Int
        , Int
        , Int
        , Int
    )
    {
        return nullptr;
    }

    WindowPaintEvent * clone(
        const WindowPaintEvent &
    )
    {
        return nullptr;
    }

    void free(
        WindowPaintEvent &
    )
    {
    }

    Window & getSource(
        const WindowPaintEvent &
    )
    {
        return window;
    }

    Int getX(
        const WindowPaintEvent &
    )
    {
        return 0;
    }

    Int getY(
        const WindowPaintEvent &
    )
    {
        return 0;
    }

    Int getWidth(
        const WindowPaintEvent &
    )
    {
        return 0;
    }

    Int getHeight(
        const WindowPaintEvent &
    )
    {
        return 0;
    }
}
