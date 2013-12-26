#ifndef GFPP_MAIN_BOOTCONFIG_H
#define GFPP_MAIN_BOOTCONFIG_H

#include "gfpp/def/main/bootconfig.h"
#include "fgpp/def/gl/version.h"
#include "fgpp/def/string/utf32.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import.h"

namespace gf {
    FGPP_FUNCTION_PTR(
        BootConfig * newBootConfig(
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsBinDir(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_REF(
        const fg::Utf32 & getBinDir(
            const BootConfig &
        )
        , const fg::Utf32
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool setBinDir(
            BootConfig &
            , const fg::Utf32 &
        )
    )

    FGPP_FUNCTION_VOID(
        void clearBinDir(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsGLVersion(
            const BootConfig &
        )
    )

    FGPP_FUNCTION(
        fg::GLVersion getGLVersion(
            const BootConfig &
        )
        , return fg::GL_VERSION_INVALID;
    )

    FGPP_FUNCTION_VOID(
        void setGLVersion(
            BootConfig &
            , fg::GLVersion
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGLVersion(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsGLDoubleBuffer(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool getGLDoubleBuffer(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setGLDoubleBuffer(
            BootConfig &
            , fg::Bool
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGLDoubleBuffer(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsGLAuxBuffers(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        fg::Int getGLAuxBuffers(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setGLAuxBuffers(
            BootConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGLAuxBuffers(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsGLRedBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        fg::Int getGLRedBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setGLRedBits(
            BootConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGLRedBits(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsGLGreenBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        fg::Int getGLGreenBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setGLGreenBits(
            BootConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGLGreenBits(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsGLBlueBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        fg::Int getGLBlueBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setGLBlueBits(
            BootConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGLBlueBits(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsGLAlphaBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        fg::Int getGLAlphaBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setGLAlphaBits(
            BootConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGLAlphaBits(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsGLDepthBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        fg::Int getGLDepthBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setGLDepthBits(
            BootConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGLDepthBits(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsGLStencilBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        fg::Int getGLStencilBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setGLStencilBits(
            BootConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGLStencilBits(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsGLAccumRedBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        fg::Int getGLAccumRedBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setGLAccumRedBits(
            BootConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGLAccumRedBits(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsGLAccumGreenBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        fg::Int getGLAccumGreenBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setGLAccumGreenBits(
            BootConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGLAccumGreenBits(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsGLAccumBlueBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        fg::Int getGLAccumBlueBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setGLAccumBlueBits(
            BootConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGLAccumBlueBits(
            BootConfig &
        )
    )

    FGPP_FUNCTION_BOOL(
        fg::Bool existsGLAccumAlphaBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_NUM(
        fg::Int getGLAccumAlphaBits(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void setGLAccumAlphaBits(
            BootConfig &
            , fg::Int
        )
    )

    FGPP_FUNCTION_VOID(
        void clearGLAccumAlphaBits(
            BootConfig &
        )
    )
}

#endif  // GFPP_MAIN_BOOTCONFIG_H
