#include "gfpp/util/export.h"
#include "gfpp/window/window.h"

#include "gfpp/window/eventhandlers.h"
#include "gfpp/string/utf32.h"
#include "gfpp/common/primitives.h"

namespace gf {
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
