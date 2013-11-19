#ifndef GFPP_WINDOW_WINDOW_H
#define GFPP_WINDOW_WINDOW_H

namespace gf {
    struct Window;
}

#include "gfpp/window/eventhandlers.h"
#include "gfpp/string/utf32.h"
#include "gfpp/common/primitives.h"
#include "gfpp/util/import.h"

namespace gf {
    GFPPEXPORT Window * newWindow(
        const WindowEventHandlers &
        , const Utf32 &
        , Int
        , Int
    );

    GFPPEXPORT void free(
        Window &
    );

    GFPPEXPORT void close(
        Window &
    );

    GFPPEXPORT Bool setTitle(
        Window &
        , const Utf32 &
    );

    GFPPEXPORT void setPosition(
        Window &
        , Int
        , Int
    );

    GFPPEXPORT void setSize(
        Window &
        , Int
        , Int
    );

    GFPPEXPORT void repaint(
        Window &
        , Int
        , Int
        , Int
        , Int
    );

    GFPPEXPORT void repaint(
        Window &
    );
}

#endif  // GFPP_WINDOW_WINDOW_H
