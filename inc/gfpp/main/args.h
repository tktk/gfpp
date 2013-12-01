#ifndef GFPP_MAIN_ARGS_H
#define GFPP_MAIN_ARGS_H

#include "fgpp/main/args.h"
#include "fgpp/boot/config.h"
#include "fgpp/util/import.h"

namespace gf {
    FGPPEXPORT fg::Args * newArgs(
        const fg::BootConfig &
    );

    FGPPEXPORT void free(
        fg::Args &
    );
}

#endif  // GFPP_MAIN_ARGS_H
