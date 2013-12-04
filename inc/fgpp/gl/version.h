﻿#ifndef FGPP_GL_VERSION_H
#define FGPP_GL_VERSION_H

namespace fg {
    enum GLVersion
    {
        GL_VERSION_INVALID = 0x0,

        _GL_VERSION_SUBSET = 0x10000,
        _GL_VERSION_MAJOR = 0x100,

        GL_VERSION = _GL_VERSION_SUBSET,
        GL_VERSION_1_0 = GL_VERSION + _GL_VERSION_MAJOR,
        GL_VERSION_1_1,
        GL_VERSION_1_2,
        GL_VERSION_1_3,
        GL_VERSION_1_4,
        GL_VERSION_1_5,
        GL_VERSION_2_0 = GL_VERSION_1_0 + _GL_VERSION_MAJOR,
        GL_VERSION_2_1,
        GL_VERSION_3_0 = GL_VERSION_2_0 + _GL_VERSION_MAJOR,
        GL_VERSION_3_1,
        GL_VERSION_3_2,
        GL_VERSION_3_3,
        GL_VERSION_4_0 = GL_VERSION_3_0 + _GL_VERSION_MAJOR,
        GL_VERSION_4_1,
        GL_VERSION_4_2,
        GL_VERSION_4_3,

        GLES_VERSION = GL_VERSION + _GL_VERSION_SUBSET,
        GLES_VERSION_1_0 = GLES_VERSION + _GL_VERSION_MAJOR,
        GLES_VERSION_1_1,
        GLES_VERSION_2_0 = GLES_VERSION_1_0 + _GL_VERSION_MAJOR,
        GLES_VERSION_3_0 = GLES_VERSION_2_0 + _GL_VERSION_MAJOR,
    };
}

#endif  // FGPP_GL_VERSION_H
