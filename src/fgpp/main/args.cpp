#include "fgpp/util/export.h"
#include "fgpp/main/args.h"

#include "fgpp/gl/config.h"

namespace fg {
    struct GLConfig
    {
        GLConfig(
        )
        {
        }
    };
}

namespace {
    const fg::GLConfig  CONFIG;
}

namespace fg {
    const GLConfig & getGLConfig(
        const Args &
    )
    {
        return CONFIG;
    }
}
