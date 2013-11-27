#ifndef FGPP_WINDOW_WINDOW_H
#define FGPP_WINDOW_WINDOW_H

namespace fg {
    struct Window;
}

#include "fgpp/window/eventhandlers.h"
#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT Window * newWindow(
        const WindowEventHandlers &
        , const Utf32 &
        , Int
        , Int
    );

    FGPPEXPORT void free(
        Window &
    );

    FGPPEXPORT void close(
        Window &
    );

    FGPPEXPORT Bool setTitle(
        Window &
        , const Utf32 &
    );

    FGPPEXPORT void setPosition(
        Window &
        , Int
        , Int
    );

    FGPPEXPORT void setSize(
        Window &
        , Int
        , Int
    );

    FGPPEXPORT void repaint(
        Window &
        , Int
        , Int
        , Int
        , Int
    );

    FGPPEXPORT void repaint(
        Window &
    );
}

#endif  // FGPP_WINDOW_WINDOW_H
