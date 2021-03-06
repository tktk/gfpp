﻿#ifndef FGPP_WINDOW_POSITIONEVENT_H
#define FGPP_WINDOW_POSITIONEVENT_H

#include "fgpp/def/window/positionevent.h"
#include "fgpp/def/window/window.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/def/common/functional.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        WindowPositionEvent * newWindowPositionEvent(
            Window &
            , Int
            , Int
        )
    )

    FGPP_FUNCTION_PTR(
        WindowPositionEvent * clone(
            const WindowPositionEvent &
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            WindowPositionEvent &
        )
    )

    FGPP_FUNCTION_REF(
        Window & getSource(
            const WindowPositionEvent &
        )
        , Window
    )

    FGPP_FUNCTION_NUM(
        Int getX(
            const WindowPositionEvent &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getY(
            const WindowPositionEvent &
        )
    )
}

template<>
inline void fgFree(
    fg::WindowPositionEvent &   _event
)
{
    fg::free( _event );
}

#endif  // FGPP_WINDOW_POSITIONEVENT_H
