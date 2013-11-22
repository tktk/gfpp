# -*- coding: utf-8 -*-

from .. import common
from ..builder import buildShlib

MODULE_NAME = 'string'
TARGET = common.GFPP + '-' + MODULE_NAME

def build( _context ):
    sources = {
        common.SOURCE_DIR : {
            common.GFPP : {
                MODULE_NAME : {
                    'string.cpp',
                    'utf8.cpp',
                    'utf16.cpp',
                    'utf32.cpp',
                },
            },
        },
    }

    buildShlib(
        _context,
        TARGET,
        sources = sources,
    )
