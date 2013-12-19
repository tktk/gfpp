#ifndef FGPP_WINDOW_SIZEEVENT_H
#define FGPP_WINDOW_SIZEEVENT_H

#include <functional>

namespace fg {
    struct WindowSizeEvent;

    typedef std::function<
        void(
            const WindowSizeEvent &
        )
    > WindowSizeEventHandler;
}

#include "fgpp/window/window.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT WindowSizeEvent * newWindowSizeEvent(
        Window &
        , Int
        , Int
    );

    FGPPEXPORT WindowSizeEvent * clone(
        const WindowSizeEvent &
    );

    FGPPEXPORT void free(
        WindowSizeEvent &
    );

    FGPPEXPORT Window & getSource(
        const WindowSizeEvent &
    );

    FGPPEXPORT Int getWidth(
        const WindowSizeEvent &
    );

    FGPPEXPORT Int getHeight(
        const WindowSizeEvent &
    );
}

#endif  // FGPP_WINDOW_SIZEEVENT_H
