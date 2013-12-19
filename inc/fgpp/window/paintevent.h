#ifndef FGPP_WINDOW_PAINTEVENT_H
#define FGPP_WINDOW_PAINTEVENT_H

#include <functional>

namespace fg {
    struct WindowPaintEvent;

    typedef std::function<
        void(
            const WindowPaintEvent &
        )
    > WindowPaintEventHandler;
}

#include "fgpp/window/window.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT WindowPaintEvent * newWindowPaintEvent(
        Window &
        , Int
        , Int
        , Int
        , Int
    );

    FGPPEXPORT WindowPaintEvent * clone(
        const WindowPaintEvent &
    );

    FGPPEXPORT void free(
        WindowPaintEvent &
    );

    FGPPEXPORT Window & getSource(
        const WindowPaintEvent &
    );

    FGPPEXPORT Int getX(
        const WindowPaintEvent &
    );

    FGPPEXPORT Int getY(
        const WindowPaintEvent &
    );

    FGPPEXPORT Int getWidth(
        const WindowPaintEvent &
    );

    FGPPEXPORT Int getHeight(
        const WindowPaintEvent &
    );
}

#endif  // FGPP_WINDOW_PAINTEVENT_H
