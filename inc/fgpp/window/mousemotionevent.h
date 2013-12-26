#ifndef FGPP_WINDOW_MOUSEMOTIONEVENT_H
#define FGPP_WINDOW_MOUSEMOTIONEVENT_H

#include "fgpp/def/window/mousemotionevent.h"
#include "fgpp/def/window/window.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        WindowMouseMotionEvent * newWindowMouseMotionEvent(
            Window &
            , Int
            , Int
        )
    )

    FGPP_FUNCTION_PTR(
        WindowMouseMotionEvent * clone(
            const WindowMouseMotionEvent &
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            WindowMouseMotionEvent &
        )
    )

    FGPP_FUNCTION_REF(
        Window & getSource(
            const WindowMouseMotionEvent &
        )
        , Window
    )

    FGPP_FUNCTION_NUM(
        Int getX(
            const WindowMouseMotionEvent &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getY(
            const WindowMouseMotionEvent &
        )
    )
}

#endif  // FGPP_WINDOW_MOUSEMOTIONEVENT_H
