#ifndef FGPP_DEF_WINDOW_MOUSEMOTIONEVENT_H
#define FGPP_DEF_WINDOW_MOUSEMOTIONEVENT_H

#include <functional>

namespace fg {
    struct WindowMouseMotionEvent;

    typedef std::function<
        void(
            const WindowMouseMotionEvent &
        )
    > WindowMouseMotionEventHandler;
}

#endif  // FGPP_DEF_WINDOW_MOUSEMOTIONEVENT_H
