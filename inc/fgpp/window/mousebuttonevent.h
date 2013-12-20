#ifndef FGPP_WINDOW_MOUSEBUTTONEVENT_H
#define FGPP_WINDOW_MOUSEBUTTONEVENT_H

#include <functional>

namespace fg {
    struct WindowMouseButtonEvent;

    typedef std::function<
        void(
            const WindowMouseButtonEvent &
        )
    > WindowMouseButtonEventHandler;
}

#include "fgpp/window/window.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT WindowMouseButtonEvent * newWindowMouseButtonEvent(
        Window &
        , ULong
        , Bool
        , Int
        , Int
    );

    FGPPEXPORT WindowMouseButtonEvent * clone(
        const WindowMouseButtonEvent &
    );

    FGPPEXPORT void free(
        WindowMouseButtonEvent &
    );

    FGPPEXPORT Window & getSource(
        const WindowMouseButtonEvent &
    );

    FGPPEXPORT ULong getIndex(
        const WindowMouseButtonEvent &
    );

    FGPPEXPORT Bool getPressed(
        const WindowMouseButtonEvent &
    );

    FGPPEXPORT Int getX(
        const WindowMouseButtonEvent &
    );

    FGPPEXPORT Int getY(
        const WindowMouseButtonEvent &
    );
}

#endif  // FGPP_WINDOW_MOUSEBUTTONEVENT_H
