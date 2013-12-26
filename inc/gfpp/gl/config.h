#ifndef GFPP_GL_CONFIG_H
#define GFPP_GL_CONFIG_H

#include "fgpp/def/gl/config.h"
#include "fgpp/def/gl/version.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import_new.h"

namespace gf {
    FGPP_FUNCTION_PTR(
        fg::GLConfig * newGLConfig(
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            fg::GLConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setVersion(
            fg::GLConfig &
            , fg::GLVersion
        )
    )

    FGPP_FUNCTION_VOID(
        void setDoubleBuffer(
            fg::GLConfig &
            , fg::Bool
        )
    )

    FGPP_FUNCTION_VOID(
        void setAuxBuffers(
            fg::GLConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearAuxBuffers(
            fg::GLConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setRedBits(
            fg::GLConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearRedBits(
            fg::GLConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setGreenBits(
            fg::GLConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGreenBits(
            fg::GLConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setBlueBits(
            fg::GLConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearBlueBits(
            fg::GLConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setAlphaBits(
            fg::GLConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearAlphaBits(
            fg::GLConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setDepthBits(
            fg::GLConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearDepthBits(
            fg::GLConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setStencilBits(
            fg::GLConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearStencilBits(
            fg::GLConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setAccumRedBits(
            fg::GLConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearAccumRedBits(
            fg::GLConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setAccumGreenBits(
            fg::GLConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearAccumGreenBits(
            fg::GLConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setAccumBlueBits(
            fg::GLConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearAccumBlueBits(
            fg::GLConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setAccumAlphaBits(
            fg::GLConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearAccumAlphaBits(
            fg::GLConfig &
        )
    )
}

#endif  // GFPP_GL_CONFIG_H
