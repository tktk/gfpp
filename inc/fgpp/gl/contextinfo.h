#ifndef FGPP_GL_CONTEXTINFO_H
#define FGPP_GL_CONTEXTINFO_H

namespace fg {
    struct GLContextInfo;
}

#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT GLContextInfo * newGLContextInfo(
    );

    FGPPEXPORT GLContextInfo * clone(
        const GLContextInfo &
    );

    FGPPEXPORT void free(
        GLContextInfo &
    );

    FGPPEXPORT Bool getDoubleBuffer(
        const GLContextInfo &
    );

    FGPPEXPORT void setDoubleBuffer(
        GLContextInfo &
        , Bool
    );

    FGPPEXPORT Bool existsAuxBuffers(
        const GLContextInfo &
    );

    FGPPEXPORT Int getAuxBuffers(
        const GLContextInfo &
    );

    FGPPEXPORT void setAuxBuffers(
        GLContextInfo &
        , Int
    );

    FGPPEXPORT void clearAuxBuffers(
        GLContextInfo &
    );

    FGPPEXPORT Bool existsRedBits(
        const GLContextInfo &
    );

    FGPPEXPORT Int getRedBits(
        const GLContextInfo &
    );

    FGPPEXPORT void setRedBits(
        GLContextInfo &
        , Int
    );

    FGPPEXPORT void clearRedBits(
        GLContextInfo &
    );

    FGPPEXPORT Bool existsGreenBits(
        const GLContextInfo &
    );

    FGPPEXPORT Int getGreenBits(
        const GLContextInfo &
    );

    FGPPEXPORT void setGreenBits(
        GLContextInfo &
        , Int
    );

    FGPPEXPORT void clearGreenBits(
        GLContextInfo &
    );

    FGPPEXPORT Bool existsBlueBits(
        const GLContextInfo &
    );

    FGPPEXPORT Int getBlueBits(
        const GLContextInfo &
    );

    FGPPEXPORT void setBlueBits(
        GLContextInfo &
        , Int
    );

    FGPPEXPORT void clearBlueBits(
        GLContextInfo &
    );

    FGPPEXPORT Bool existsAlphaBits(
        const GLContextInfo &
    );

    FGPPEXPORT Int getAlphaBits(
        const GLContextInfo &
    );

    FGPPEXPORT void setAlphaBits(
        GLContextInfo &
        , Int
    );

    FGPPEXPORT void clearAlphaBits(
        GLContextInfo &
    );

    FGPPEXPORT Bool existsDepthBits(
        const GLContextInfo &
    );

    FGPPEXPORT Int getDepthBits(
        const GLContextInfo &
    );

    FGPPEXPORT void setDepthBits(
        GLContextInfo &
        , Int
    );

    FGPPEXPORT void clearDepthBits(
        GLContextInfo &
    );

    FGPPEXPORT Bool existsStencilBits(
        const GLContextInfo &
    );

    FGPPEXPORT Int getStencilBits(
        const GLContextInfo &
    );

    FGPPEXPORT void setStencilBits(
        GLContextInfo &
        , Int
    );

    FGPPEXPORT void clearStencilBits(
        GLContextInfo &
    );

    FGPPEXPORT Bool existsAccumRedBits(
        const GLContextInfo &
    );

    FGPPEXPORT Int getAccumRedBits(
        const GLContextInfo &
    );

    FGPPEXPORT void setAccumRedBits(
        GLContextInfo &
        , Int
    );

    FGPPEXPORT void clearAccumRedBits(
        GLContextInfo &
    );

    FGPPEXPORT Bool existsAccumGreenBits(
        const GLContextInfo &
    );

    FGPPEXPORT Int getAccumGreenBits(
        const GLContextInfo &
    );

    FGPPEXPORT void setAccumGreenBits(
        GLContextInfo &
        , Int
    );

    FGPPEXPORT void clearAccumGreenBits(
        GLContextInfo &
    );

    FGPPEXPORT Bool existsAccumBlueBits(
        const GLContextInfo &
    );

    FGPPEXPORT Int getAccumBlueBits(
        const GLContextInfo &
    );

    FGPPEXPORT void setAccumBlueBits(
        GLContextInfo &
        , Int
    );

    FGPPEXPORT void clearAccumBlueBits(
        GLContextInfo &
    );

    FGPPEXPORT Bool existsAccumAlphaBits(
        const GLContextInfo &
    );

    FGPPEXPORT Int getAccumAlphaBits(
        const GLContextInfo &
    );

    FGPPEXPORT void setAccumAlphaBits(
        GLContextInfo &
        , Int
    );

    FGPPEXPORT void clearAccumAlphaBits(
        GLContextInfo &
    );
}

#endif  // FGPP_GL_CONTEXTINFO_H
