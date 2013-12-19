#ifndef FGPP_WINDOW_POSITIONEVENT_H
#define FGPP_WINDOW_POSITIONEVENT_H

#include <functional>

namespace fg {
    struct WindowPositionEvent;

    typedef std::function<
        void(
            const WindowPositionEvent &
        )
    > WindowPositionEventHandler;
}

#include "fgpp/window/window.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT WindowPositionEvent * newWindowPositionEvent(
        Window &
        , Int
        , Int
    );

    FGPPEXPORT WindowPositionEvent * clone(
        const WindowPositionEvent &
    );

    FGPPEXPORT void free(
        WindowPositionEvent &
    );

    FGPPEXPORT Window & getSource(
        const WindowPositionEvent &
    );

    FGPPEXPORT Int getX(
        const WindowPositionEvent &
    );

    FGPPEXPORT Int getY(
        const WindowPositionEvent &
    );
}

#endif  // FGPP_WINDOW_POSITIONEVENT_H
