#ifndef GFPP_MAIN_ARGS_H
#define GFPP_MAIN_ARGS_H

#include "fgpp/def/main/args.h"
#include "gfpp/def/main/bootconfig.h"
#include "fgpp/util/import_new.h"

namespace gf {
    FGPP_FUNCTION_PTR(
        fg::Args * newArgs(
            const BootConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            fg::Args &
        )
    )
}

#endif  // GFPP_MAIN_ARGS_H
