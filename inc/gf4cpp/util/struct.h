#ifndef GF4CPP_UTIL_STRUCT_H
#define GF4CPP_UTIL_STRUCT_H

#include "gf4cpp/common/functional.h"
#include "gf4cpp/common/primitives.h"
#include "gf/util/struct.h"

#define GF4CPPSTRUCT(   \
    _namespace  \
    , _struct   \
)   \
    GFSTRUCT(   \
        _namespace  \
        , _struct   \
    )   \
    namespace _namespace {  \
        typedef _namespace##_struct _struct;    \
    }   \
    template<>  \
    inline void gfFree( \
        _namespace::_struct * & _obj    \
    )   \
    {   \
        _namespace##_struct##Free( _obj );  \
    }   \


#define GF4CPPKEYSTRUCT(    \
    _namespace  \
    , _struct   \
)   \
    GF4CPPSTRUCT(   \
        _namespace  \
        , _struct   \
    )   \
    template<>  \
    inline gf::Bool gfLess( \
        const _namespace::_struct &     _KEY1   \
        , const _namespace::_struct &   _KEY2   \
    )   \
    {   \
        return _namespace##_struct##Less(   \
            &_KEY1   \
            , &_KEY2 \
        );  \
    }   \


#endif  // GF4CPP_UTIL_STRUCT_H
