﻿#ifndef FGPP_BOOT_BOOT_H
#define FGPP_BOOT_BOOT_H

#include "fgpp/boot/gameconfig.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT Int boot(
        const GameConfig &
    );
}

#endif  // FGPP_BOOT_BOOT_H
