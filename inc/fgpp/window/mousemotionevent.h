#ifndef FGPP_WINDOW_MOUSEMOTIONEVENT_H
#define FGPP_WINDOW_MOUSEMOTIONEVENT_H

#include <functional>

namespace fg {
    struct WindowMouseMotionEvent;

    typedef std::function<
        void(
            const WindowMouseMotionEvent &
        )
    > WindowMouseMotionEventHandler;
}

#include "fgpp/window/window.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT WindowMouseMotionEvent * newWindowMouseMotionEvent(
        Window &
        , Int
        , Int
    );

    FGPPEXPORT WindowMouseMotionEvent * clone(
        const WindowMouseMotionEvent &
    );

    FGPPEXPORT void free(
        WindowMouseMotionEvent &
    );

    FGPPEXPORT Window & getSource(
        const WindowMouseMotionEvent &
    );

    FGPPEXPORT Int getX(
        const WindowMouseMotionEvent &
    );

    FGPPEXPORT Int getY(
        const WindowMouseMotionEvent &
    );
}

#endif  // FGPP_WINDOW_MOUSEMOTIONEVENT_H
