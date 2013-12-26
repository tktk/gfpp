#ifndef FGPP_DEF_WINDOW_PAINTEVENT_H
#define FGPP_DEF_WINDOW_PAINTEVENT_H

#include <functional>

namespace fg {
    struct WindowPaintEvent;

    typedef std::function<
        void(
            const WindowPaintEvent &
        )
    > WindowPaintEventHandler;
}

#endif  // FGPP_DEF_WINDOW_PAINTEVENT_H
