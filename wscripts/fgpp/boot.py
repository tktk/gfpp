# -*- coding: utf-8 -*-

from .. import common
from ..builder import buildShlib

MODULE_NAME = 'boot'
TARGET = common.FGPP + '-' + MODULE_NAME

def build( _context ):
    sources = {
        common.SOURCE_DIR : {
            common.FGPP : {
                MODULE_NAME : {
                    'boot.cpp',
                    'config.cpp',
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
