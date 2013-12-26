#ifndef FGPP_DEF_WINDOW_POSITIONEVENT_H
#define FGPP_DEF_WINDOW_POSITIONEVENT_H

#include <functional>

namespace fg {
    struct WindowPositionEvent;

    typedef std::function<
        void(
            const WindowPositionEvent &
        )
    > WindowPositionEventHandler;
}

#endif  // FGPP_DEF_WINDOW_POSITIONEVENT_H
