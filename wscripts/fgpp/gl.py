# -*- coding: utf-8 -*-

from .. import common
from ..builder import buildShlib

MODULE_NAME = 'gl'
TARGET = common.FGPP + '-' + MODULE_NAME

def build( _context ):
    sources = {
        common.SOURCE_DIR : {
            common.FGPP : {
                MODULE_NAME : {
                    'gl.cpp',
                    'contextinfo.cpp',
                    'context.cpp',
                },
            },
        },
    }

    buildShlib(
        _context,
        TARGET,
        sources = sources,
    )
