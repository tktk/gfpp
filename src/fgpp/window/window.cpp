#include "fgpp/util/export.h"
#include "fgpp/window/window.h"

#include "fgpp/window/eventhandlers.h"
#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace fg {
    Window * newWindow(
        const WindowEventHandlers &
        , const Utf32 &
        , Int
        , Int
    )
    {
        return nullptr;
    }

    void free(
        Window &
    )
    {
    }

    void close(
        Window &
    )
    {
    }

    Bool setTitle(
        Window &
        , const Utf32 &
    )
    {
        return false;
    }

    void setPosition(
        Window &
        , Int
        , Int
    )
    {
    }

    void setSize(
        Window &
        , Int
        , Int
    )
    {
    }

    void repaint(
        Window &
        , Int
        , Int
        , Int
        , Int
    )
    {
    }

    void repaint(
        Window &
    )
    {
    }
}
