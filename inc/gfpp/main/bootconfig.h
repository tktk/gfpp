#ifndef GFPP_MAIN_BOOTCONFIG_H
#define GFPP_MAIN_BOOTCONFIG_H

namespace gf {
    struct BootConfig;
}

#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace gf {
    FGPPEXPORT BootConfig * newBootConfig(
    );

    FGPPEXPORT void free(
        BootConfig &
    );

    FGPPEXPORT fg::Bool existsBinDir(
        const BootConfig &
    );

    FGPPEXPORT const fg::Utf32 & getBinDir(
        const BootConfig &
    );

    FGPPEXPORT fg::Bool setBinDir(
        BootConfig &
        , const fg::Utf32 &
    );

    FGPPEXPORT void clearBinDir(
        BootConfig &
    );

    FGPPEXPORT fg::Bool existsGLDoubleBuffer(
        const BootConfig &
    );

    FGPPEXPORT fg::Bool getGLDoubleBuffer(
        const BootConfig &
    );

    FGPPEXPORT void setGLDoubleBuffer(
        BootConfig &
        , fg::Bool
    );

    FGPPEXPORT void clearGLDoubleBuffer(
        BootConfig &
    );

    FGPPEXPORT fg::Bool existsGLAuxBuffers(
        const BootConfig &
    );

    FGPPEXPORT fg::Int getGLAuxBuffers(
        const BootConfig &
    );

    FGPPEXPORT void setGLAuxBuffers(
        BootConfig &
        , fg::Int
    );

    FGPPEXPORT void clearGLAuxBuffers(
        BootConfig &
    );

    FGPPEXPORT fg::Bool existsGLRedBits(
        const BootConfig &
    );

    FGPPEXPORT fg::Int getGLRedBits(
        const BootConfig &
    );

    FGPPEXPORT void setGLRedBits(
        BootConfig &
        , fg::Int
    );

    FGPPEXPORT void clearGLRedBits(
        BootConfig &
    );

    FGPPEXPORT fg::Bool existsGLGreenBits(
        const BootConfig &
    );

    FGPPEXPORT fg::Int getGLGreenBits(
        const BootConfig &
    );

    FGPPEXPORT void setGLGreenBits(
        BootConfig &
        , fg::Int
    );

    FGPPEXPORT void clearGLGreenBits(
        BootConfig &
    );

    FGPPEXPORT fg::Bool existsGLBlueBits(
        const BootConfig &
    );

    FGPPEXPORT fg::Int getGLBlueBits(
        const BootConfig &
    );

    FGPPEXPORT void setGLBlueBits(
        BootConfig &
        , fg::Int
    );

    FGPPEXPORT void clearGLBlueBits(
        BootConfig &
    );

    FGPPEXPORT fg::Bool existsGLAlphaBits(
        const BootConfig &
    );

    FGPPEXPORT fg::Int getGLAlphaBits(
        const BootConfig &
    );

    FGPPEXPORT void setGLAlphaBits(
        BootConfig &
        , fg::Int
    );

    FGPPEXPORT void clearGLAlphaBits(
        BootConfig &
    );

    FGPPEXPORT fg::Bool existsGLDepthBits(
        const BootConfig &
    );

    FGPPEXPORT fg::Int getGLDepthBits(
        const BootConfig &
    );

    FGPPEXPORT void setGLDepthBits(
        BootConfig &
        , fg::Int
    );

    FGPPEXPORT void clearGLDepthBits(
        BootConfig &
    );

    FGPPEXPORT fg::Bool existsGLStencilBits(
        const BootConfig &
    );

    FGPPEXPORT fg::Int getGLStencilBits(
        const BootConfig &
    );

    FGPPEXPORT void setGLStencilBits(
        BootConfig &
        , fg::Int
    );

    FGPPEXPORT void clearGLStencilBits(
        BootConfig &
    );

    FGPPEXPORT fg::Bool existsGLAccumRedBits(
        const BootConfig &
    );

    FGPPEXPORT fg::Int getGLAccumRedBits(
        const BootConfig &
    );

    FGPPEXPORT void setGLAccumRedBits(
        BootConfig &
        , fg::Int
    );

    FGPPEXPORT void clearGLAccumRedBits(
        BootConfig &
    );

    FGPPEXPORT fg::Bool existsGLAccumGreenBits(
        const BootConfig &
    );

    FGPPEXPORT fg::Int getGLAccumGreenBits(
        const BootConfig &
    );

    FGPPEXPORT void setGLAccumGreenBits(
        BootConfig &
        , fg::Int
    );

    FGPPEXPORT void clearGLAccumGreenBits(
        BootConfig &
    );

    FGPPEXPORT fg::Bool existsGLAccumBlueBits(
        const BootConfig &
    );

    FGPPEXPORT fg::Int getGLAccumBlueBits(
        const BootConfig &
    );

    FGPPEXPORT void setGLAccumBlueBits(
        BootConfig &
        , fg::Int
    );

    FGPPEXPORT void clearGLAccumBlueBits(
        BootConfig &
    );

    FGPPEXPORT fg::Bool existsGLAccumAlphaBits(
        const BootConfig &
    );

    FGPPEXPORT fg::Int getGLAccumAlphaBits(
        const BootConfig &
    );

    FGPPEXPORT void setGLAccumAlphaBits(
        BootConfig &
        , fg::Int
    );

    FGPPEXPORT void clearGLAccumAlphaBits(
        BootConfig &
    );
}

#endif  // GFPP_MAIN_BOOTCONFIG_H
