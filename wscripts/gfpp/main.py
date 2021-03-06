# -*- coding: utf-8 -*-

from .. import common
from ..builder import buildShlib

MODULE_NAME = 'main'
TARGET = common.GFPP + '-' + MODULE_NAME

def build( _context ):
    sources = {
        common.SOURCE_DIR : {
            common.GFPP : {
                MODULE_NAME : {
                    'args.cpp',
                    'boot.cpp',
                    'bootconfig.cpp',
                    'library.cpp',
                },
            },
        },
    }

    buildShlib(
        _context,
        TARGET,
        sources = sources,
    )
