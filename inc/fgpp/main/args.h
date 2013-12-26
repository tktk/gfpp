#ifndef FGPP_MAIN_ARGS_H
#define FGPP_MAIN_ARGS_H

#include "fgpp/def/main/args.h"
#include "fgpp/def/gl/config.h"
#include "fgpp/util/import_new.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        const GLConfig * getGLConfig(
            const Args &
        )
    )
}

#endif  // FGPP_MAIN_ARGS_H
