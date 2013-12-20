# -*- coding: utf-8 -*-

from .. import common
from ..builder import buildShlib

MODULE_NAME = 'window'
TARGET = common.FGPP + '-' + MODULE_NAME

def build( _context ):
    sources = {
        common.SOURCE_DIR : {
            common.FGPP : {
                MODULE_NAME : {
                    'window.cpp',
                    'eventhandlers.cpp',
                    'closeevent.cpp',
                    'positionevent.cpp',
                    'sizeevent.cpp',
                    'paintevent.cpp',
                    'keyevent.cpp',
                    'mousebuttonevent.cpp',
                },
            },
        },
    }

    buildShlib(
        _context,
        TARGET,
        sources = sources,
    )
