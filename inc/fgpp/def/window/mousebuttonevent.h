#ifndef FGPP_DEF_WINDOW_MOUSEBUTTONEVENT_H
#define FGPP_DEF_WINDOW_MOUSEBUTTONEVENT_H

#include <functional>

namespace fg {
    struct WindowMouseButtonEvent;

    typedef std::function<
        void(
            const WindowMouseButtonEvent &
        )
    > WindowMouseButtonEventHandler;
}

#endif  // FGPP_DEF_WINDOW_MOUSEBUTTONEVENT_H
