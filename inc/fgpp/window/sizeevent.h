#ifndef FGPP_WINDOW_SIZEEVENT_H
#define FGPP_WINDOW_SIZEEVENT_H

#include "fgpp/def/window/sizeevent.h"
#include "fgpp/def/window/window.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        WindowSizeEvent * newWindowSizeEvent(
            Window &
            , Int
            , Int
        )
    )

    FGPP_FUNCTION_PTR(
        WindowSizeEvent * clone(
            const WindowSizeEvent &
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            WindowSizeEvent &
        )
    )

    FGPP_FUNCTION_REF(
        Window & getSource(
            const WindowSizeEvent &
        )
        , Window
    )

    FGPP_FUNCTION_NUM(
        Int getWidth(
            const WindowSizeEvent &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getHeight(
            const WindowSizeEvent &
        )
    )
}

#endif  // FGPP_WINDOW_SIZEEVENT_H
