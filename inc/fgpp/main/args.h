#ifndef FGPP_MAIN_ARGS_H
#define FGPP_MAIN_ARGS_H

namespace fg {
    struct Args;
}

#include "fgpp/gl/config.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT const GLConfig & getGLConfig(
        const Args &
    );
}

#endif  // FGPP_MAIN_ARGS_H
