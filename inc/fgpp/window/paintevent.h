#ifndef FGPP_WINDOW_PAINTEVENT_H
#define FGPP_WINDOW_PAINTEVENT_H

#include "fgpp/def/window/paintevent.h"
#include "fgpp/def/window/window.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        WindowPaintEvent * newWindowPaintEvent(
            Window &
            , Int
            , Int
            , Int
            , Int
        )
    )

    FGPP_FUNCTION_PTR(
        WindowPaintEvent * clone(
            const WindowPaintEvent &
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            WindowPaintEvent &
        )
    )

    FGPP_FUNCTION_REF(
        Window & getSource(
            const WindowPaintEvent &
        )
        , Window
    )

    FGPP_FUNCTION_NUM(
        Int getX(
            const WindowPaintEvent &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getY(
            const WindowPaintEvent &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getWidth(
            const WindowPaintEvent &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getHeight(
            const WindowPaintEvent &
        )
    )
}

#endif  // FGPP_WINDOW_PAINTEVENT_H
