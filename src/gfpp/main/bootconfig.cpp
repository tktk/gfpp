#include "fgpp/util/export.h"
#include "gfpp/main/bootconfig.h"

#include "fgpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace fg {
    struct Utf32
    {
        Utf32(
        )
        {
        }
    };
}

namespace {
    const fg::Utf32 UTF32;
}

namespace gf {
    BootConfig * newBootConfig(
    )
    {
        return nullptr;
    }

    void free(
        BootConfig &
    )
    {
    }

    fg::Bool existsBinDir(
        const BootConfig &
    )
    {
        return false;
    }

    const fg::Utf32 & getBinDir(
        const BootConfig &
    )
    {
        return UTF32;
    }

    fg::Bool setBinDir(
        BootConfig &
        , const fg::Utf32 &
    )
    {
        return false;
    }

    void clearBinDir(
        BootConfig &
    )
    {
    }

    fg::Bool existsGLDoubleBuffer(
        const BootConfig &
    )
    {
        return false;
    }

    fg::Bool getGLDoubleBuffer(
        const BootConfig &
    )
    {
        return false;
    }

    void setGLDoubleBuffer(
        BootConfig &
        , fg::Bool
    )
    {
    }

    void clearGLDoubleBuffer(
        BootConfig &
    )
    {
    }

    fg::Bool existsGLAuxBuffers(
        const BootConfig &
    )
    {
        return false;
    }

    fg::Int getGLAuxBuffers(
        const BootConfig &
    )
    {
        return 0;
    }

    void setGLAuxBuffers(
        BootConfig &
        , fg::Int
    )
    {
    }

    void clearGLAuxBuffers(
        BootConfig &
    )
    {
    }

    fg::Bool existsGLRedBits(
        const BootConfig &
    )
    {
        return false;
    }

    fg::Int getGLRedBits(
        const BootConfig &
    )
    {
        return 0;
    }

    void setGLRedBits(
        BootConfig &
        , fg::Int
    )
    {
    }

    void clearGLRedBits(
        BootConfig &
    )
    {
    }

    fg::Bool existsGLGreenBits(
        const BootConfig &
    )
    {
        return false;
    }

    fg::Int getGLGreenBits(
        const BootConfig &
    )
    {
        return 0;
    }

    void setGLGreenBits(
        BootConfig &
        , fg::Int
    )
    {
    }

    void clearGLGreenBits(
        BootConfig &
    )
    {
    }

    fg::Bool existsGLBlueBits(
        const BootConfig &
    )
    {
        return false;
    }

    fg::Int getGLBlueBits(
        const BootConfig &
    )
    {
        return 0;
    }

    void setGLBlueBits(
        BootConfig &
        , fg::Int
    )
    {
    }

    void clearGLBlueBits(
        BootConfig &
    )
    {
    }

    fg::Bool existsGLAlphaBits(
        const BootConfig &
    )
    {
        return false;
    }

    fg::Int getGLAlphaBits(
        const BootConfig &
    )
    {
        return 0;
    }

    void setGLAlphaBits(
        BootConfig &
        , fg::Int
    )
    {
    }

    void clearGLAlphaBits(
        BootConfig &
    )
    {
    }

    fg::Bool existsGLDepthBits(
        const BootConfig &
    )
    {
        return false;
    }

    fg::Int getGLDepthBits(
        const BootConfig &
    )
    {
        return 0;
    }

    void setGLDepthBits(
        BootConfig &
        , fg::Int
    )
    {
    }

    void clearGLDepthBits(
        BootConfig &
    )
    {
    }

    fg::Bool existsGLStencilBits(
        const BootConfig &
    )
    {
        return false;
    }

    fg::Int getGLStencilBits(
        const BootConfig &
    )
    {
        return 0;
    }

    void setGLStencilBits(
        BootConfig &
        , fg::Int
    )
    {
    }

    void clearGLStencilBits(
        BootConfig &
    )
    {
    }

    fg::Bool existsGLAccumRedBits(
        const BootConfig &
    )
    {
        return false;
    }

    fg::Int getGLAccumRedBits(
        const BootConfig &
    )
    {
        return 0;
    }

    void setGLAccumRedBits(
        BootConfig &
        , fg::Int
    )
    {
    }

    void clearGLAccumRedBits(
        BootConfig &
    )
    {
    }

    fg::Bool existsGLAccumGreenBits(
        const BootConfig &
    )
    {
        return false;
    }

    fg::Int getGLAccumGreenBits(
        const BootConfig &
    )
    {
        return 0;
    }

    void setGLAccumGreenBits(
        BootConfig &
        , fg::Int
    )
    {
    }

    void clearGLAccumGreenBits(
        BootConfig &
    )
    {
    }

    fg::Bool existsGLAccumBlueBits(
        const BootConfig &
    )
    {
        return false;
    }

    fg::Int getGLAccumBlueBits(
        const BootConfig &
    )
    {
        return 0;
    }

    void setGLAccumBlueBits(
        BootConfig &
        , fg::Int
    )
    {
    }

    void clearGLAccumBlueBits(
        BootConfig &
    )
    {
    }

    fg::Bool existsGLAccumAlphaBits(
        const BootConfig &
    )
    {
        return false;
    }

    fg::Int getGLAccumAlphaBits(
        const BootConfig &
    )
    {
        return 0;
    }

    void setGLAccumAlphaBits(
        BootConfig &
        , fg::Int
    )
    {
    }

    void clearGLAccumAlphaBits(
        BootConfig &
    )
    {
    }
}
