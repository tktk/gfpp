#ifndef GFPP_MAIN_ARGS_H
#define GFPP_MAIN_ARGS_H

#include "fgpp/main/args.h"
#include "fgpp/boot/gameconfig.h"
#include "fgpp/util/import.h"

namespace gf {
    FGPPEXPORT fg::Args * newArgs(
        const fg::GameConfig &
    );

    FGPPEXPORT void free(
        fg::Args &
    );
}

#endif  // GFPP_MAIN_ARGS_H
