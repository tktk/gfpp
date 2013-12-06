#ifndef FGPP_GL_FUNCTIONS_H
#define FGPP_GL_FUNCTIONS_H

#include "fgpp/gl/types.h"
#include "fgpp/util/import.h"

#define FGPP_GL_FUNCTIONS \
    /* GL_VERSION_1_0 */ \
    FGPP_GL_FUNCTION( 0, GLenum, GetError, (), () ) \
    FGPP_GL_FUNCTION( , void, Begin, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, End, (), () ) \
    FGPP_GL_FUNCTION( , void, EdgeFlag, ( GLboolean _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EdgeFlagv, ( const GLboolean * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex2s, ( GLshort _1, GLshort _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex2i, ( GLint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex2f, ( GLfloat _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex2d, ( GLdouble _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3i, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4s, ( GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4i, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4f, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4d, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex2sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex2iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex2fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex2dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1s, ( GLshort _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1i, ( GLint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1f, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1d, ( GLdouble _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2s, ( GLshort _1, GLshort _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2i, ( GLint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2f, ( GLfloat _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2d, ( GLdouble _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3i, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4s, ( GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4i, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4f, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4d, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3b, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3i, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3bv, ( const GLbyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color3b, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Color3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Color3i, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Color3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Color3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Color3ub, ( GLubyte _1, GLubyte _2, GLubyte _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Color3us, ( GLushort _1, GLushort _2, GLushort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Color3ui, ( GLuint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Color4b, ( GLbyte _1, GLbyte _2, GLbyte _3, GLbyte _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Color4s, ( GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Color4i, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Color4f, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Color4d, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Color4ub, ( GLubyte _1, GLubyte _2, GLubyte _3, GLubyte _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Color4us, ( GLushort _1, GLushort _2, GLushort _3, GLushort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Color4ui, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Color3bv, ( const GLbyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color3sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color3iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color3fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color3dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color3ubv, ( const GLubyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color3usv, ( const GLushort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color3uiv, ( const GLuint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color4bv, ( const GLbyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color4sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color4iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color4fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color4dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color4ubv, ( const GLubyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color4usv, ( const GLushort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color4uiv, ( const GLuint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Indexs, ( GLshort _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Indexi, ( GLint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Indexf, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Indexd, ( GLdouble _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Indexsv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Indexiv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Indexfv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Indexdv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Rects, ( GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Recti, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Rectf, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Rectd, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Rectsv, ( const GLshort * _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Rectiv, ( const GLint * _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Rectfv, ( const GLfloat * _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Rectdv, ( const GLdouble * _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DepthRange, ( GLclampd _1, GLclampd _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Viewport, ( GLint _1, GLint _2, GLsizei _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixMode, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, LoadMatrixf, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, LoadMatrixd, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MultMatrixf, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MultMatrixd, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, LoadIdentity, (), () ) \
    FGPP_GL_FUNCTION( , void, Rotatef, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Rotated, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Translatef, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Translated, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Scalef, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Scaled, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Frustum, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, Ortho, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, PushMatrix, (), () ) \
    FGPP_GL_FUNCTION( , void, PopMatrix, (), () ) \
    FGPP_GL_FUNCTION( , void, Enable, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Disable, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexGeni, ( GLenum _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexGenf, ( GLenum _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexGend, ( GLenum _1, GLenum _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexGeniv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexGenfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexGendv, ( GLenum _1, GLenum _2, const GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ClipPlane, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos2s, ( GLshort _1, GLshort _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos2i, ( GLint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos2f, ( GLfloat _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos2d, ( GLdouble _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos2sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos2iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos2fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos2dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos3i, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos3sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos3iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos3fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos3dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos4s, ( GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos4i, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos4f, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos4d, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos4sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos4iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos4fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos4dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FrontFace, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Materiali, ( GLenum _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Materialf, ( GLenum _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Materialiv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Materialfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Lighti, ( GLenum _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Lightf, ( GLenum _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Lightiv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Lightfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, LightModeli, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, LightModelf, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, LightModeliv, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, LightModelfv, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ColorMaterial, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ShadeModel, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PointSize, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, LineWidth, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, LineStipple, ( GLint _1, GLushort _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, CullFace, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PolygonStipple, ( const GLubyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PolygonMode, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PixelStorei, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PixelStoref, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PixelTransferi, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PixelTransferf, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PixelMapuiv, ( GLenum _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PixelMapusv, ( GLenum _1, GLsizei _2, const GLushort * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PixelMapfv, ( GLenum _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, DrawPixels, ( GLsizei _1, GLsizei _2, GLenum _3, GLenum _4, const GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, PixelZoom, ( GLfloat _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Bitmap, ( GLsizei _1, GLsizei _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, const GLubyte * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, TexImage1D, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLint _5, GLenum _6, GLenum _7, const GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, TexImage2D, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLsizei _5, GLint _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, TexParameteri, ( GLenum _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexParameterf, ( GLenum _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexParameteriv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexParameterfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexEnvi, ( GLenum _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexEnvf, ( GLenum _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexEnviv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexEnvfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Fogi, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Fogf, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Fogiv, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Fogfv, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Scissor, ( GLint _1, GLint _2, GLsizei _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, AlphaFunc, ( GLenum _1, GLclampf _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, StencilFunc, ( GLenum _1, GLint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, StencilOp, ( GLenum _1, GLenum _2, GLenum _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, DepthFunc, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BlendFunc, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, LogicOp, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DrawBuffer, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, IndexMask, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ColorMask, ( GLboolean _1, GLboolean _2, GLboolean _3, GLboolean _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, DepthMask, ( GLboolean _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, StencilMask, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Clear, ( GLbitfield _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ClearColor, ( GLclampf _1, GLclampf _2, GLclampf _3, GLclampf _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ClearIndex, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ClearDepth, ( GLclampd _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ClearStencil, ( GLint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ClearAccum, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Accum, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ReadPixels, ( GLint _1, GLint _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, GLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, ReadBuffer, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, CopyPixels, ( GLint _1, GLint _2, GLsizei _3, GLsizei _4, GLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, Map1f, ( GLenum _1, GLfloat _2, GLfloat _3, GLint _4, GLint _5, const GLfloat * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, Map1d, ( GLenum _1, GLdouble _2, GLdouble _3, GLint _4, GLint _5, const GLdouble * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, Map2f, ( GLenum _1, GLfloat _2, GLfloat _3, GLint _4, GLint _5, GLfloat _6, GLfloat _7, GLint _8, GLint _9, const GLfloat * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, Map2d, ( GLenum _1, GLdouble _2, GLdouble _3, GLint _4, GLint _5, GLdouble _6, GLdouble _7, GLint _8, GLint _9, const GLdouble * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, EvalCoord1f, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EvalCoord1d, ( GLdouble _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EvalCoord2f, ( GLfloat _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, EvalCoord2d, ( GLdouble _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, EvalCoord1fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EvalCoord1dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EvalCoord2fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EvalCoord2dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MapGrid1f, ( GLint _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MapGrid1d, ( GLint _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MapGrid2f, ( GLint _1, GLfloat _2, GLfloat _3, GLint _4, GLfloat _5, GLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, MapGrid2d, ( GLint _1, GLdouble _2, GLdouble _3, GLint _4, GLdouble _5, GLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, EvalMesh1, ( GLenum _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, EvalMesh2, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, EvalPoint1, ( GLint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EvalPoint2, ( GLint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, InitNames, (), () ) \
    FGPP_GL_FUNCTION( , void, PopName, (), () ) \
    FGPP_GL_FUNCTION( , void, PushName, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, LoadName, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, RenderMode, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SelectBuffer, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FeedbackBuffer, ( GLsizei _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PassThrough, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, NewList, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, EndList, (), () ) \
    FGPP_GL_FUNCTION( , void, CallList, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, CallLists, ( GLsizei _1, GLenum _2, const GLvoid * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ListBase, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, GenLists, ( GLsizei _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsList, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteLists, ( GLuint _1, GLsizei _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Flush, (), () ) \
    FGPP_GL_FUNCTION( , void, Finish, (), () ) \
    FGPP_GL_FUNCTION( , void, Hint, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetBooleanv, ( GLenum _1, GLboolean * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetIntegerv, ( GLenum _1, GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetFloatv, ( GLenum _1, GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetDoublev, ( GLenum _1, GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsEnabled, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetClipPlane, ( GLenum _1, GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetLightiv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetLightfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetMaterialiv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetMaterialfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexEnviv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexEnvfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexGeniv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexGenfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexParameterfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexLevelParameteriv, ( GLenum _1, GLint _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexLevelParameterfv, ( GLenum _1, GLint _2, GLenum _3, GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetPixelMapuiv, ( GLenum _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetPixelMapusv, ( GLenum _1, GLushort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetPixelMapfv, ( GLenum _1, GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetMapiv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetMapfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetMapdv, ( GLenum _1, GLenum _2, GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexImage, ( GLenum _1, GLint _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetPolygonStipple, ( GLubyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( nullptr, const GLubyte *, GetString, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PushAttrib, ( GLbitfield _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PopAttrib, (), () ) \
\
    /* GL_VERSION_1_1 */ \
    FGPP_GL_FUNCTION( , void, Indexub, ( GLubyte _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Indexubv, ( const GLubyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EdgeFlagPointer, ( GLsizei _1, const GLvoid * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoordPointer, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ColorPointer, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, IndexPointer, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, NormalPointer, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexPointer, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, EnableClientState, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DisableClientState, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ArrayElement, ( GLint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DrawArrays, ( GLenum _1, GLint _2, GLsizei _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, DrawElements, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, InterleavedArrays, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PolygonOffset, ( GLfloat _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTexImage1D, ( GLenum _1, GLint _2, GLenum _3, GLint _4, GLint _5, GLsizei _6, GLint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTexImage2D, ( GLenum _1, GLint _2, GLenum _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLint _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, TexSubImage1D, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, TexSubImage2D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTexSubImage1D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTexSubImage2D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, BindTexture, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteTextures, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenTextures, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, AreTexturesResident, ( GLsizei _1, const GLuint * _2, GLboolean * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PrioritizeTextures, ( GLsizei _1, const GLuint * _2, const GLclampf * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsTexture, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetPointerv, ( GLenum _1, GLvoid ** _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PushClientAttrib, ( GLbitfield _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PopClientAttrib, (), () ) \
\
    /* GL_VERSION_1_2 */ \
    FGPP_GL_FUNCTION( , void, DrawRangeElements, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4, GLenum _5, const GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, TexImage3D, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLsizei _5, GLsizei _6, GLint _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, TexSubImage3D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTexSubImage3D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLsizei _8, GLsizei _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_VERSION_1_3 */ \
    FGPP_GL_FUNCTION( , void, ActiveTexture, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SampleCoverage, ( GLfloat _1, GLboolean _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTexImage3D, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLint _7, GLsizei _8, const GLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTexImage2D, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLint _6, GLsizei _7, const GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTexImage1D, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLint _5, GLsizei _6, const GLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTexSubImage3D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLsizei _10, const GLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTexSubImage2D, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLenum _7, GLsizei _8, const GLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTexSubImage1D, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLenum _5, GLsizei _6, const GLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, GetCompressedTexImage, ( GLenum _1, GLint _2, GLvoid * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ClientActiveTexture, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1d, ( GLenum _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1dv, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1f, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1fv, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1i, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1iv, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1s, ( GLenum _1, GLshort _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1sv, ( GLenum _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2d, ( GLenum _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2dv, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2f, ( GLenum _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2fv, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2i, ( GLenum _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2iv, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2s, ( GLenum _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2sv, ( GLenum _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3d, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3dv, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3f, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3fv, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3i, ( GLenum _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3iv, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3s, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3sv, ( GLenum _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4d, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4dv, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4f, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4fv, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4i, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4iv, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4s, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4sv, ( GLenum _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, LoadTransposeMatrixf, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, LoadTransposeMatrixd, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MultTransposeMatrixf, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MultTransposeMatrixd, ( const GLdouble * _1 ), ( _1 ) ) \
\
    /* GL_VERSION_1_4 */ \
    FGPP_GL_FUNCTION( , void, BlendFuncSeparate, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiDrawArrays, ( GLenum _1, const GLint * _2, const GLsizei * _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiDrawElements, ( GLenum _1, const GLsizei * _2, GLenum _3, const GLvoid *const* _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, PointParameterf, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PointParameterfv, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PointParameteri, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PointParameteriv, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FogCoordf, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FogCoordfv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FogCoordd, ( GLdouble _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FogCoorddv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FogCoordPointer, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3b, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3bv, ( const GLbyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3i, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3ub, ( GLubyte _1, GLubyte _2, GLubyte _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3ubv, ( const GLubyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3ui, ( GLuint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3uiv, ( const GLuint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3us, ( GLushort _1, GLushort _2, GLushort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3usv, ( const GLushort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColorPointer, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2d, ( GLdouble _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2f, ( GLfloat _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2i, ( GLint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2s, ( GLshort _1, GLshort _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3d, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3dv, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3f, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3fv, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3i, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3iv, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3s, ( GLshort _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3sv, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BlendColor, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, BlendEquation, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_VERSION_1_5 */ \
    FGPP_GL_FUNCTION( , void, GenQueries, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteQueries, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsQuery, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BeginQuery, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, EndQuery, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetQueryiv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetQueryObjectiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetQueryObjectuiv, ( GLuint _1, GLenum _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BindBuffer, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteBuffers, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenBuffers, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsBuffer, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BufferData, ( GLenum _1, GLsizeiptr _2, const GLvoid * _3, GLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, BufferSubData, ( GLenum _1, GLintptr _2, GLsizeiptr _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetBufferSubData, ( GLenum _1, GLintptr _2, GLsizeiptr _3, GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( nullptr, void *, MapBuffer, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, UnmapBuffer, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetBufferParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetBufferPointerv, ( GLenum _1, GLenum _2, GLvoid ** _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_VERSION_2_0 */ \
    FGPP_GL_FUNCTION( , void, BlendEquationSeparate, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DrawBuffers, ( GLsizei _1, const GLenum * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, StencilOpSeparate, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, StencilFuncSeparate, ( GLenum _1, GLenum _2, GLint _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, StencilMaskSeparate, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, AttachShader, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, BindAttribLocation, ( GLuint _1, GLuint _2, const GLchar * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, CompileShader, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, CreateProgram, ( ), ( ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, CreateShader, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteProgram, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteShader, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DetachShader, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DisableVertexAttribArray, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EnableVertexAttribArray, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetActiveAttrib, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLint * _5, GLenum * _6, GLchar * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, GetActiveUniform, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLint * _5, GLenum * _6, GLchar * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, GetAttachedShaders, ( GLuint _1, GLsizei _2, GLsizei * _3, GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, GetAttribLocation, ( GLuint _1, const GLchar * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramInfoLog, ( GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetShaderiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetShaderInfoLog, ( GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetShaderSource, ( GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, GetUniformLocation, ( GLuint _1, const GLchar * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetUniformfv, ( GLuint _1, GLint _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetUniformiv, ( GLuint _1, GLint _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribdv, ( GLuint _1, GLenum _2, GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribfv, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribPointerv, ( GLuint _1, GLenum _2, GLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsProgram, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsShader, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, LinkProgram, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ShaderSource, ( GLuint _1, GLsizei _2, const GLchar *const* _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UseProgram, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1f, ( GLint _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2f, ( GLint _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3f, ( GLint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4f, ( GLint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1i, ( GLint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2i, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3i, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4i, ( GLint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1fv, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2fv, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3fv, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4fv, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1iv, ( GLint _1, GLsizei _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2iv, ( GLint _1, GLsizei _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3iv, ( GLint _1, GLsizei _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4iv, ( GLint _1, GLsizei _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix2fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix3fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix4fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ValidateProgram, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1d, ( GLuint _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1dv, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1f, ( GLuint _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1fv, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1s, ( GLuint _1, GLshort _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1sv, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2d, ( GLuint _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2dv, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2f, ( GLuint _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2fv, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2s, ( GLuint _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2sv, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3d, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3dv, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3f, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3fv, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3s, ( GLuint _1, GLshort _2, GLshort _3, GLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3sv, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4Nbv, ( GLuint _1, const GLbyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4Niv, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4Nsv, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4Nub, ( GLuint _1, GLubyte _2, GLubyte _3, GLubyte _4, GLubyte _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4Nubv, ( GLuint _1, const GLubyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4Nuiv, ( GLuint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4Nusv, ( GLuint _1, const GLushort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4bv, ( GLuint _1, const GLbyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4d, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4dv, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4f, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4fv, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4iv, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4s, ( GLuint _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4sv, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4ubv, ( GLuint _1, const GLubyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4uiv, ( GLuint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4usv, ( GLuint _1, const GLushort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribPointer, ( GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLsizei _5, const GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_VERSION_2_1 */ \
    FGPP_GL_FUNCTION( , void, UniformMatrix2x3fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix3x2fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix2x4fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix4x2fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix3x4fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix4x3fv, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_3_0 */ \
    FGPP_GL_FUNCTION( , void, ColorMaski, ( GLuint _1, GLboolean _2, GLboolean _3, GLboolean _4, GLboolean _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetBooleani_v, ( GLenum _1, GLuint _2, GLboolean * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetIntegeri_v, ( GLenum _1, GLuint _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Enablei, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Disablei, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsEnabledi, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, BeginTransformFeedback, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EndTransformFeedback, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, BindBufferRange, ( GLenum _1, GLuint _2, GLuint _3, GLintptr _4, GLsizeiptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, BindBufferBase, ( GLenum _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TransformFeedbackVaryings, ( GLuint _1, GLsizei _2, const GLchar *const* _3, GLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetTransformFeedbackVarying, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLsizei * _5, GLenum * _6, GLchar * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, ClampColor, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, BeginConditionalRender, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, EndConditionalRender, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribIPointer, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribIiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribIuiv, ( GLuint _1, GLenum _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI1i, ( GLuint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI2i, ( GLuint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI3i, ( GLuint _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4i, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI1ui, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI2ui, ( GLuint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI3ui, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4ui, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI1iv, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI2iv, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI3iv, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4iv, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI1uiv, ( GLuint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI2uiv, ( GLuint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI3uiv, ( GLuint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4uiv, ( GLuint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4bv, ( GLuint _1, const GLbyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4sv, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4ubv, ( GLuint _1, const GLubyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4usv, ( GLuint _1, const GLushort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetUniformuiv, ( GLuint _1, GLint _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BindFragDataLocation, ( GLuint _1, GLuint _2, const GLchar * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, GetFragDataLocation, ( GLuint _1, const GLchar * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1ui, ( GLint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2ui, ( GLint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3ui, ( GLint _1, GLuint _2, GLuint _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4ui, ( GLint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1uiv, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2uiv, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3uiv, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4uiv, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexParameterIiv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexParameterIuiv, ( GLenum _1, GLenum _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexParameterIiv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexParameterIuiv, ( GLenum _1, GLenum _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ClearBufferiv, ( GLenum _1, GLint _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ClearBufferuiv, ( GLenum _1, GLint _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ClearBufferfv, ( GLenum _1, GLint _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ClearBufferfi, ( GLenum _1, GLint _2, GLfloat _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( nullptr, const GLubyte *, GetStringi, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsRenderbuffer, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BindRenderbuffer, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteRenderbuffers, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenRenderbuffers, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, RenderbufferStorage, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetRenderbufferParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsFramebuffer, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BindFramebuffer, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteFramebuffers, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenFramebuffers, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLenum, CheckFramebufferStatus, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTexture1D, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTexture2D, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTexture3D, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5, GLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferRenderbuffer, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetFramebufferAttachmentParameteriv, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GenerateMipmap, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BlitFramebuffer, ( GLint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLint _8, GLbitfield _9, GLenum _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, RenderbufferStorageMultisample, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTextureLayer, ( GLenum _1, GLenum _2, GLuint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( nullptr, void *, MapBufferRange, ( GLenum _1, GLintptr _2, GLsizeiptr _3, GLbitfield _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, FlushMappedBufferRange, ( GLenum _1, GLintptr _2, GLsizeiptr _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BindVertexArray, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteVertexArrays, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenVertexArrays, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsVertexArray, ( GLuint _1 ), ( _1 ) ) \
\
    /* GL_VERSION_3_1 */ \
    FGPP_GL_FUNCTION( , void, DrawArraysInstanced, ( GLenum _1, GLint _2, GLsizei _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, DrawElementsInstanced, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, TexBuffer, ( GLenum _1, GLenum _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PrimitiveRestartIndex, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, CopyBufferSubData, ( GLenum _1, GLenum _2, GLintptr _3, GLintptr _4, GLsizeiptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetUniformIndices, ( GLuint _1, GLsizei _2, const GLchar *const* _3, GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetActiveUniformsiv, ( GLuint _1, GLsizei _2, const GLuint * _3, GLenum _4, GLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetActiveUniformName, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, GetUniformBlockIndex, ( GLuint _1, const GLchar * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetActiveUniformBlockiv, ( GLuint _1, GLuint _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetActiveUniformBlockName, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, UniformBlockBinding, ( GLuint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_VERSION_3_2 */ \
    FGPP_GL_FUNCTION( , void, DrawElementsBaseVertex, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, DrawRangeElementsBaseVertex, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4, GLenum _5, const GLvoid * _6, GLint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, DrawElementsInstancedBaseVertex, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLsizei _5, GLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, MultiDrawElementsBaseVertex, ( GLenum _1, const GLsizei * _2, GLenum _3, const GLvoid *const* _4, GLsizei _5, const GLint * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProvokingVertex, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( nullptr, GLsync, FenceSync, ( GLenum _1, GLbitfield _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsSync, ( GLsync _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteSync, ( GLsync _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLenum, ClientWaitSync, ( GLsync _1, GLbitfield _2, GLuint64 _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, WaitSync, ( GLsync _1, GLbitfield _2, GLuint64 _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetInteger64v, ( GLenum _1, GLint64 * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetSynciv, ( GLsync _1, GLenum _2, GLsizei _3, GLsizei * _4, GLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetInteger64i_v, ( GLenum _1, GLuint _2, GLint64 * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetBufferParameteri64v, ( GLenum _1, GLenum _2, GLint64 * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTexture, ( GLenum _1, GLenum _2, GLuint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TexImage2DMultisample, ( GLenum _1, GLsizei _2, GLint _3, GLsizei _4, GLsizei _5, GLboolean _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, TexImage3DMultisample, ( GLenum _1, GLsizei _2, GLint _3, GLsizei _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, GetMultisamplefv, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SampleMaski, ( GLuint _1, GLbitfield _2 ), ( _1, _2 ) ) \
\
    /* GL_VERSION_3_3 */ \
    FGPP_GL_FUNCTION( , void, BindFragDataLocationIndexed, ( GLuint _1, GLuint _2, GLuint _3, const GLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, GetFragDataIndex, ( GLuint _1, const GLchar * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenSamplers, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteSamplers, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsSampler, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BindSampler, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, SamplerParameteri, ( GLuint _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SamplerParameteriv, ( GLuint _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SamplerParameterf, ( GLuint _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SamplerParameterfv, ( GLuint _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SamplerParameterIiv, ( GLuint _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SamplerParameterIuiv, ( GLuint _1, GLenum _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetSamplerParameteriv, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetSamplerParameterIiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetSamplerParameterfv, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetSamplerParameterIuiv, ( GLuint _1, GLenum _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, QueryCounter, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetQueryObjecti64v, ( GLuint _1, GLenum _2, GLint64 * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetQueryObjectui64v, ( GLuint _1, GLenum _2, GLuint64 * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribDivisor, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribP1ui, ( GLuint _1, GLenum _2, GLboolean _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribP1uiv, ( GLuint _1, GLenum _2, GLboolean _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribP2ui, ( GLuint _1, GLenum _2, GLboolean _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribP2uiv, ( GLuint _1, GLenum _2, GLboolean _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribP3ui, ( GLuint _1, GLenum _2, GLboolean _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribP3uiv, ( GLuint _1, GLenum _2, GLboolean _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribP4ui, ( GLuint _1, GLenum _2, GLboolean _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribP4uiv, ( GLuint _1, GLenum _2, GLboolean _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexP2ui, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexP2uiv, ( GLenum _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexP3ui, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexP3uiv, ( GLenum _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexP4ui, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexP4uiv, ( GLenum _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoordP1ui, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoordP1uiv, ( GLenum _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoordP2ui, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoordP2uiv, ( GLenum _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoordP3ui, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoordP3uiv, ( GLenum _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoordP4ui, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoordP4uiv, ( GLenum _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoordP1ui, ( GLenum _1, GLenum _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoordP1uiv, ( GLenum _1, GLenum _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoordP2ui, ( GLenum _1, GLenum _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoordP2uiv, ( GLenum _1, GLenum _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoordP3ui, ( GLenum _1, GLenum _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoordP3uiv, ( GLenum _1, GLenum _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoordP4ui, ( GLenum _1, GLenum _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoordP4uiv, ( GLenum _1, GLenum _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, NormalP3ui, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, NormalP3uiv, ( GLenum _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ColorP3ui, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ColorP3uiv, ( GLenum _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ColorP4ui, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ColorP4uiv, ( GLenum _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColorP3ui, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColorP3uiv, ( GLenum _1, const GLuint * _2 ), ( _1, _2 ) ) \
\
    /* GL_VERSION_4_0 */ \
    FGPP_GL_FUNCTION( , void, MinSampleShading, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BlendEquationi, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, BlendEquationSeparatei, ( GLuint _1, GLenum _2, GLenum _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BlendFunci, ( GLuint _1, GLenum _2, GLenum _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BlendFuncSeparatei, ( GLuint _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, DrawArraysIndirect, ( GLenum _1, const GLvoid * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DrawElementsIndirect, ( GLenum _1, GLenum _2, const GLvoid * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1d, ( GLint _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2d, ( GLint _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3d, ( GLint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4d, ( GLint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1dv, ( GLint _1, GLsizei _2, const GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2dv, ( GLint _1, GLsizei _2, const GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3dv, ( GLint _1, GLsizei _2, const GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4dv, ( GLint _1, GLsizei _2, const GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix2dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix3dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix4dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix2x3dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix2x4dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix3x2dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix3x4dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix4x2dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix4x3dv, ( GLint _1, GLsizei _2, GLboolean _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetUniformdv, ( GLuint _1, GLint _2, GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, GetSubroutineUniformLocation, ( GLuint _1, GLenum _2, const GLchar * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, GetSubroutineIndex, ( GLuint _1, GLenum _2, const GLchar * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetActiveSubroutineUniformiv, ( GLuint _1, GLenum _2, GLuint _3, GLenum _4, GLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetActiveSubroutineUniformName, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, GLsizei * _5, GLchar * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, GetActiveSubroutineName, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, GLsizei * _5, GLchar * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, UniformSubroutinesuiv, ( GLenum _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetUniformSubroutineuiv, ( GLenum _1, GLint _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramStageiv, ( GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, PatchParameteri, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PatchParameterfv, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, BindTransformFeedback, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteTransformFeedbacks, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenTransformFeedbacks, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsTransformFeedback, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PauseTransformFeedback, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, ResumeTransformFeedback, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, DrawTransformFeedback, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DrawTransformFeedbackStream, ( GLenum _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BeginQueryIndexed, ( GLenum _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, EndQueryIndexed, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetQueryIndexediv, ( GLenum _1, GLuint _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_4_1 */ \
    FGPP_GL_FUNCTION( , void, ReleaseShaderCompiler, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, ShaderBinary, ( GLsizei _1, const GLuint * _2, GLenum _3, const GLvoid * _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetShaderPrecisionFormat, ( GLenum _1, GLenum _2, GLint * _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, DepthRangef, ( GLfloat _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ClearDepthf, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramBinary, ( GLuint _1, GLsizei _2, GLsizei * _3, GLenum * _4, GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramBinary, ( GLuint _1, GLenum _2, const GLvoid * _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramParameteri, ( GLuint _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, UseProgramStages, ( GLuint _1, GLbitfield _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ActiveShaderProgram, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, CreateShaderProgramv, ( GLenum _1, GLsizei _2, const GLchar *const* _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BindProgramPipeline, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteProgramPipelines, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenProgramPipelines, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsProgramPipeline, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramPipelineiv, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1i, ( GLuint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1iv, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1f, ( GLuint _1, GLint _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1fv, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1d, ( GLuint _1, GLint _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1dv, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1ui, ( GLuint _1, GLint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1uiv, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2i, ( GLuint _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2iv, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2f, ( GLuint _1, GLint _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2fv, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2d, ( GLuint _1, GLint _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2dv, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2ui, ( GLuint _1, GLint _2, GLuint _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2uiv, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3i, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3iv, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3f, ( GLuint _1, GLint _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3fv, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3d, ( GLuint _1, GLint _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3dv, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3ui, ( GLuint _1, GLint _2, GLuint _3, GLuint _4, GLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3uiv, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4i, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4iv, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4f, ( GLuint _1, GLint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4fv, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4d, ( GLuint _1, GLint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4dv, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4ui, ( GLuint _1, GLint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4uiv, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix2fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix3fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix4fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix2dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix3dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix4dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix2x3fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix3x2fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix2x4fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix4x2fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix3x4fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix4x3fv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix2x3dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix3x2dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix2x4dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix4x2dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix3x4dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix4x3dv, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ValidateProgramPipeline, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramPipelineInfoLog, ( GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL1d, ( GLuint _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL2d, ( GLuint _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL3d, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL4d, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL1dv, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL2dv, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL3dv, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL4dv, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribLPointer, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribLdv, ( GLuint _1, GLenum _2, GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ViewportArrayv, ( GLuint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ViewportIndexedf, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ViewportIndexedfv, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ScissorArrayv, ( GLuint _1, GLsizei _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ScissorIndexed, ( GLuint _1, GLint _2, GLint _3, GLsizei _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ScissorIndexedv, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DepthRangeArrayv, ( GLuint _1, GLsizei _2, const GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, DepthRangeIndexed, ( GLuint _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetFloati_v, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetDoublei_v, ( GLenum _1, GLuint _2, GLdouble * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_VERSION_4_2 */ \
    FGPP_GL_FUNCTION( , void, DrawArraysInstancedBaseInstance, ( GLenum _1, GLint _2, GLsizei _3, GLsizei _4, GLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, DrawElementsInstancedBaseInstance, ( GLenum _1, GLsizei _2, GLenum _3, const void * _4, GLsizei _5, GLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, DrawElementsInstancedBaseVertexBaseInstance, ( GLenum _1, GLsizei _2, GLenum _3, const void * _4, GLsizei _5, GLint _6, GLuint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, GetInternalformativ, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetActiveAtomicCounterBufferiv, ( GLuint _1, GLuint _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, BindImageTexture, ( GLuint _1, GLuint _2, GLint _3, GLboolean _4, GLint _5, GLenum _6, GLenum _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, MemoryBarrier, ( GLbitfield _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexStorage1D, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TexStorage2D, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, TexStorage3D, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, DrawTransformFeedbackInstanced, ( GLenum _1, GLuint _2, GLsizei _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, DrawTransformFeedbackStreamInstanced, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_4_3 */ \
    FGPP_GL_FUNCTION( , void, ClearBufferData, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4, const void * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ClearBufferSubData, ( GLenum _1, GLenum _2, GLintptr _3, GLsizeiptr _4, GLenum _5, GLenum _6, const void * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, DispatchCompute, ( GLuint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, DispatchComputeIndirect, ( GLintptr _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, CopyImageSubData, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLuint _7, GLenum _8, GLint _9, GLint _10, GLint _11, GLint _12, GLsizei _13, GLsizei _14, GLsizei _15 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferParameteri, ( GLenum _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetFramebufferParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetInternalformati64v, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLint64 * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, InvalidateTexSubImage, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, InvalidateTexImage, ( GLuint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, InvalidateBufferSubData, ( GLuint _1, GLintptr _2, GLsizeiptr _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, InvalidateBufferData, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, InvalidateFramebuffer, ( GLenum _1, GLsizei _2, const GLenum * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, InvalidateSubFramebuffer, ( GLenum _1, GLsizei _2, const GLenum * _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, MultiDrawArraysIndirect, ( GLenum _1, const void * _2, GLsizei _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiDrawElementsIndirect, ( GLenum _1, GLenum _2, const void * _3, GLsizei _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramInterfaceiv, ( GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, GetProgramResourceIndex, ( GLuint _1, GLenum _2, const GLchar * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramResourceName, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, GLsizei * _5, GLchar * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramResourceiv, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, const GLenum * _5, GLsizei _6, GLsizei * _7, GLint * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, GetProgramResourceLocation, ( GLuint _1, GLenum _2, const GLchar * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, GetProgramResourceLocationIndex, ( GLuint _1, GLenum _2, const GLchar * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ShaderStorageBlockBinding, ( GLuint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexBufferRange, ( GLenum _1, GLenum _2, GLuint _3, GLintptr _4, GLsizeiptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, TexStorage2DMultisample, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5, GLboolean _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, TexStorage3DMultisample, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, TextureView, ( GLuint _1, GLenum _2, GLuint _3, GLenum _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, BindVertexBuffer, ( GLuint _1, GLuint _2, GLintptr _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribFormat, ( GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribIFormat, ( GLuint _1, GLint _2, GLenum _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribLFormat, ( GLuint _1, GLint _2, GLenum _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribBinding, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexBindingDivisor, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DebugMessageControl, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, const GLuint * _5, GLboolean _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, DebugMessageInsert, ( GLenum _1, GLenum _2, GLuint _3, GLenum _4, GLsizei _5, const GLchar * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, DebugMessageCallback, ( GLDebugProc _1, const void * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, GetDebugMessageLog, ( GLuint _1, GLsizei _2, GLenum * _3, GLenum * _4, GLuint * _5, GLenum * _6, GLsizei * _7, GLchar * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, PushDebugGroup, ( GLenum _1, GLuint _2, GLsizei _3, const GLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, PopDebugGroup, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, ObjectLabel, ( GLenum _1, GLuint _2, GLsizei _3, const GLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetObjectLabel, ( GLenum _1, GLuint _2, GLsizei _3, GLsizei * _4, GLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ObjectPtrLabel, ( const void * _1, GLsizei _2, const GLchar * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetObjectPtrLabel, ( const void * _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_VERSION_4_4 */ \
    FGPP_GL_FUNCTION( , void, BufferStorage, ( GLenum _1, GLsizeiptr _2, const void * _3, GLbitfield _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ClearTexImage, ( GLuint _1, GLint _2, GLenum _3, GLenum _4, const void * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ClearTexSubImage, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLenum _10, const void * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FGPP_GL_FUNCTION( , void, BindBuffersBase, ( GLenum _1, GLuint _2, GLsizei _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, BindBuffersRange, ( GLenum _1, GLuint _2, GLsizei _3, const GLuint * _4, const GLintptr * _5, const GLsizeiptr * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, BindTextures, ( GLuint _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BindSamplers, ( GLuint _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BindImageTextures, ( GLuint _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BindVertexBuffers, ( GLuint _1, GLsizei _2, const GLuint * _3, const GLintptr * _4, const GLsizei * _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_ARB_ES2_compatibility */ \
\
    /* GL_ARB_ES3_compatibility */ \
\
    /* GL_ARB_arrays_of_arrays */ \
\
    /* GL_ARB_base_instance */ \
\
    /* GL_ARB_bindless_texture */ \
    FGPP_GL_FUNCTION( 0, GLuint64, GetTextureHandleARB, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint64, GetTextureSamplerHandleARB, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MakeTextureHandleResidentARB, ( GLuint64 _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MakeTextureHandleNonResidentARB, ( GLuint64 _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint64, GetImageHandleARB, ( GLuint _1, GLint _2, GLboolean _3, GLint _4, GLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MakeImageHandleResidentARB, ( GLuint64 _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MakeImageHandleNonResidentARB, ( GLuint64 _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, UniformHandleui64ARB, ( GLint _1, GLuint64 _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, UniformHandleui64vARB, ( GLint _1, GLsizei _2, const GLuint64 * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformHandleui64ARB, ( GLuint _1, GLint _2, GLuint64 _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformHandleui64vARB, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64 * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsTextureHandleResidentARB, ( GLuint64 _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsImageHandleResidentARB, ( GLuint64 _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL1ui64ARB, ( GLuint _1, GLuint64EXT _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL1ui64vARB, ( GLuint _1, const GLuint64EXT * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribLui64vARB, ( GLuint _1, GLenum _2, GLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_blend_func_extended */ \
\
    /* GL_ARB_buffer_storage */ \
\
    /* GL_ARB_cl_event */ \
    FGPP_GL_FUNCTION( nullptr, GLsync, CreateSyncFromCLeventARB, ( struct _cl_context * _1, struct _cl_event * _2, GLbitfield _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_clear_buffer_object */ \
\
    /* GL_ARB_clear_texture */ \
\
    /* GL_ARB_color_buffer_float */ \
    FGPP_GL_FUNCTION( , void, ClampColorARB, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_compatibility */ \
\
    /* GL_ARB_compressed_texture_pixel_storage */ \
\
    /* GL_ARB_compute_shader */ \
\
    /* GL_ARB_compute_variable_group_size */ \
    FGPP_GL_FUNCTION( , void, DispatchComputeGroupSizeARB, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_ARB_conservative_depth */ \
\
    /* GL_ARB_copy_buffer */ \
\
    /* GL_ARB_copy_image */ \
\
    /* GL_ARB_debug_output */ \
    FGPP_GL_FUNCTION( , void, DebugMessageControlARB, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, const GLuint * _5, GLboolean _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, DebugMessageInsertARB, ( GLenum _1, GLenum _2, GLuint _3, GLenum _4, GLsizei _5, const GLchar * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, DebugMessageCallbackARB, ( GLDebugProcARB _1, const void * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, GetDebugMessageLogARB, ( GLuint _1, GLsizei _2, GLenum * _3, GLenum * _4, GLuint * _5, GLenum * _6, GLsizei * _7, GLchar * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_ARB_depth_buffer_float */ \
\
    /* GL_ARB_depth_clamp */ \
\
    /* GL_ARB_depth_texture */ \
\
    /* GL_ARB_draw_buffers */ \
    FGPP_GL_FUNCTION( , void, DrawBuffersARB, ( GLsizei _1, const GLenum * _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_draw_buffers_blend */ \
    FGPP_GL_FUNCTION( , void, BlendEquationiARB, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, BlendEquationSeparateiARB, ( GLuint _1, GLenum _2, GLenum _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BlendFunciARB, ( GLuint _1, GLenum _2, GLenum _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BlendFuncSeparateiARB, ( GLuint _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_ARB_draw_elements_base_vertex */ \
\
    /* GL_ARB_draw_indirect */ \
\
    /* GL_ARB_draw_instanced */ \
    FGPP_GL_FUNCTION( , void, DrawArraysInstancedARB, ( GLenum _1, GLint _2, GLsizei _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, DrawElementsInstancedARB, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_ARB_enhanced_layouts */ \
\
    /* GL_ARB_explicit_attrib_location */ \
\
    /* GL_ARB_explicit_uniform_location */ \
\
    /* GL_ARB_fragment_coord_conventions */ \
\
    /* GL_ARB_fragment_layer_viewport */ \
\
    /* GL_ARB_fragment_program */ \
    FGPP_GL_FUNCTION( , void, ProgramStringARB, ( GLenum _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, BindProgramARB, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteProgramsARB, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenProgramsARB, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramEnvParameter4dARB, ( GLenum _1, GLuint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramEnvParameter4dvARB, ( GLenum _1, GLuint _2, const GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramEnvParameter4fARB, ( GLenum _1, GLuint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramEnvParameter4fvARB, ( GLenum _1, GLuint _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramLocalParameter4dARB, ( GLenum _1, GLuint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramLocalParameter4dvARB, ( GLenum _1, GLuint _2, const GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramLocalParameter4fARB, ( GLenum _1, GLuint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramLocalParameter4fvARB, ( GLenum _1, GLuint _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramEnvParameterdvARB, ( GLenum _1, GLuint _2, GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramEnvParameterfvARB, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramLocalParameterdvARB, ( GLenum _1, GLuint _2, GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramLocalParameterfvARB, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramivARB, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramStringARB, ( GLenum _1, GLenum _2, GLvoid * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsProgramARB, ( GLuint _1 ), ( _1 ) ) \
\
    /* GL_ARB_fragment_program_shadow */ \
\
    /* GL_ARB_fragment_shader */ \
\
    /* GL_ARB_framebuffer_no_attachments */ \
\
    /* GL_ARB_framebuffer_object */ \
\
    /* GL_ARB_framebuffer_sRGB */ \
\
    /* GL_ARB_geometry_shader4 */ \
    FGPP_GL_FUNCTION( , void, ProgramParameteriARB, ( GLuint _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTextureARB, ( GLenum _1, GLenum _2, GLuint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTextureLayerARB, ( GLenum _1, GLenum _2, GLuint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTextureFaceARB, ( GLenum _1, GLenum _2, GLuint _3, GLint _4, GLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_ARB_get_program_binary */ \
\
    /* GL_ARB_gpu_shader5 */ \
\
    /* GL_ARB_gpu_shader_fp64 */ \
\
    /* GL_ARB_half_float_pixel */ \
\
    /* GL_ARB_half_float_vertex */ \
\
    /* GL_ARB_imaging */ \
    FGPP_GL_FUNCTION( , void, ColorTable, ( GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ColorTableParameterfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ColorTableParameteriv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, CopyColorTable, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetColorTable, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetColorTableParameterfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetColorTableParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ColorSubTable, ( GLenum _1, GLsizei _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, CopyColorSubTable, ( GLenum _1, GLsizei _2, GLint _3, GLint _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ConvolutionFilter1D, ( GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ConvolutionFilter2D, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, ConvolutionParameterf, ( GLenum _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ConvolutionParameterfv, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ConvolutionParameteri, ( GLenum _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ConvolutionParameteriv, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, CopyConvolutionFilter1D, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, CopyConvolutionFilter2D, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, GetConvolutionFilter, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetConvolutionParameterfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetConvolutionParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetSeparableFilter, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4, GLvoid * _5, GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, SeparableFilter2D, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7, const GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, GetHistogram, ( GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetHistogramParameterfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetHistogramParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetMinmax, ( GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetMinmaxParameterfv, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetMinmaxParameteriv, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Histogram, ( GLenum _1, GLsizei _2, GLenum _3, GLboolean _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Minmax, ( GLenum _1, GLenum _2, GLboolean _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ResetHistogram, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ResetMinmax, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_ARB_indirect_parameters */ \
    FGPP_GL_FUNCTION( , void, MultiDrawArraysIndirectCountARB, ( GLenum _1, GLintptr _2, GLintptr _3, GLsizei _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiDrawElementsIndirectCountARB, ( GLenum _1, GLenum _2, GLintptr _3, GLintptr _4, GLsizei _5, GLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_ARB_instanced_arrays */ \
    FGPP_GL_FUNCTION( , void, VertexAttribDivisorARB, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_internalformat_query */ \
\
    /* GL_ARB_internalformat_query2 */ \
\
    /* GL_ARB_invalidate_subdata */ \
\
    /* GL_ARB_map_buffer_alignment */ \
\
    /* GL_ARB_map_buffer_range */ \
\
    /* GL_ARB_matrix_palette */ \
    FGPP_GL_FUNCTION( , void, CurrentPaletteMatrixARB, ( GLint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixIndexubvARB, ( GLint _1, const GLubyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixIndexusvARB, ( GLint _1, const GLushort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixIndexuivARB, ( GLint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixIndexPointerARB, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_ARB_multi_bind */ \
\
    /* GL_ARB_multi_draw_indirect */ \
\
    /* GL_ARB_multisample */ \
    FGPP_GL_FUNCTION( , void, SampleCoverageARB, ( GLfloat _1, GLboolean _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_multitexture */ \
    FGPP_GL_FUNCTION( , void, ActiveTextureARB, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ClientActiveTextureARB, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1dARB, ( GLenum _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1dvARB, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1fARB, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1fvARB, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1iARB, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1ivARB, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1sARB, ( GLenum _1, GLshort _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1svARB, ( GLenum _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2dARB, ( GLenum _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2dvARB, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2fARB, ( GLenum _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2fvARB, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2iARB, ( GLenum _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2ivARB, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2sARB, ( GLenum _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2svARB, ( GLenum _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3dARB, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3dvARB, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3fARB, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3fvARB, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3iARB, ( GLenum _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3ivARB, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3sARB, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3svARB, ( GLenum _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4dARB, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4dvARB, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4fARB, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4fvARB, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4iARB, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4ivARB, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4sARB, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4svARB, ( GLenum _1, const GLshort * _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_occlusion_query */ \
    FGPP_GL_FUNCTION( , void, GenQueriesARB, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteQueriesARB, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsQueryARB, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BeginQueryARB, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, EndQueryARB, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetQueryivARB, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetQueryObjectivARB, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetQueryObjectuivARB, ( GLuint _1, GLenum _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_occlusion_query2 */ \
\
    /* GL_ARB_pixel_buffer_object */ \
\
    /* GL_ARB_point_parameters */ \
    FGPP_GL_FUNCTION( , void, PointParameterfARB, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PointParameterfvARB, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_point_sprite */ \
\
    /* GL_ARB_program_interface_query */ \
\
    /* GL_ARB_provoking_vertex */ \
\
    /* GL_ARB_query_buffer_object */ \
\
    /* GL_ARB_robust_buffer_access_behavior */ \
\
    /* GL_ARB_robustness */ \
    FGPP_GL_FUNCTION( 0, GLenum, GetGraphicsResetStatusARB, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, GetnTexImageARB, ( GLenum _1, GLint _2, GLenum _3, GLenum _4, GLsizei _5, GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ReadnPixelsARB, ( GLint _1, GLint _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, GLsizei _7, GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, GetnCompressedTexImageARB, ( GLenum _1, GLint _2, GLsizei _3, GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetnUniformfvARB, ( GLuint _1, GLint _2, GLsizei _3, GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetnUniformivARB, ( GLuint _1, GLint _2, GLsizei _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetnUniformuivARB, ( GLuint _1, GLint _2, GLsizei _3, GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetnUniformdvARB, ( GLuint _1, GLint _2, GLsizei _3, GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetnMapdvARB, ( GLenum _1, GLenum _2, GLsizei _3, GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetnMapfvARB, ( GLenum _1, GLenum _2, GLsizei _3, GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetnMapivARB, ( GLenum _1, GLenum _2, GLsizei _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetnPixelMapfvARB, ( GLenum _1, GLsizei _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetnPixelMapuivARB, ( GLenum _1, GLsizei _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetnPixelMapusvARB, ( GLenum _1, GLsizei _2, GLushort * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetnPolygonStippleARB, ( GLsizei _1, GLubyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetnColorTableARB, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetnConvolutionFilterARB, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetnSeparableFilterARB, ( GLenum _1, GLenum _2, GLenum _3, GLsizei _4, GLvoid * _5, GLsizei _6, GLvoid * _7, GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, GetnHistogramARB, ( GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLsizei _5, GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, GetnMinmaxARB, ( GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLsizei _5, GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_ARB_robustness_isolation */ \
\
    /* GL_ARB_sample_shading */ \
    FGPP_GL_FUNCTION( , void, MinSampleShadingARB, ( GLfloat _1 ), ( _1 ) ) \
\
    /* GL_ARB_sampler_objects */ \
\
    /* GL_ARB_seamless_cube_map */ \
\
    /* GL_ARB_seamless_cubemap_per_texture */ \
\
    /* GL_ARB_separate_shader_objects */ \
\
    /* GL_ARB_shader_atomic_counters */ \
\
    /* GL_ARB_shader_bit_encoding */ \
\
    /* GL_ARB_shader_draw_parameters */ \
\
    /* GL_ARB_shader_group_vote */ \
\
    /* GL_ARB_shader_image_load_store */ \
\
    /* GL_ARB_shader_image_size */ \
\
    /* GL_ARB_shader_objects */ \
    FGPP_GL_FUNCTION( , void, DeleteObjectARB, ( GLhandleARB _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLhandleARB, GetHandleARB, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DetachObjectARB, ( GLhandleARB _1, GLhandleARB _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLhandleARB, CreateShaderObjectARB, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ShaderSourceARB, ( GLhandleARB _1, GLsizei _2, const GLcharARB ** _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, CompileShaderARB, ( GLhandleARB _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLhandleARB, CreateProgramObjectARB, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, AttachObjectARB, ( GLhandleARB _1, GLhandleARB _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, LinkProgramARB, ( GLhandleARB _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, UseProgramObjectARB, ( GLhandleARB _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ValidateProgramARB, ( GLhandleARB _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1fARB, ( GLint _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2fARB, ( GLint _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3fARB, ( GLint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4fARB, ( GLint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1iARB, ( GLint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2iARB, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3iARB, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4iARB, ( GLint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1fvARB, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2fvARB, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3fvARB, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4fvARB, ( GLint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1ivARB, ( GLint _1, GLsizei _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2ivARB, ( GLint _1, GLsizei _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3ivARB, ( GLint _1, GLsizei _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4ivARB, ( GLint _1, GLsizei _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix2fvARB, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix3fvARB, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, UniformMatrix4fvARB, ( GLint _1, GLsizei _2, GLboolean _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetObjectParameterfvARB, ( GLhandleARB _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetObjectParameterivARB, ( GLhandleARB _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetInfoLogARB, ( GLhandleARB _1, GLsizei _2, GLsizei * _3, GLcharARB * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetAttachedObjectsARB, ( GLhandleARB _1, GLsizei _2, GLsizei * _3, GLhandleARB * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, GetUniformLocationARB, ( GLhandleARB _1, const GLcharARB * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetActiveUniformARB, ( GLhandleARB _1, GLuint _2, GLsizei _3, GLsizei * _4, GLint * _5, GLenum * _6, GLcharARB * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, GetUniformfvARB, ( GLhandleARB _1, GLint _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetUniformivARB, ( GLhandleARB _1, GLint _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetShaderSourceARB, ( GLhandleARB _1, GLsizei _2, GLsizei * _3, GLcharARB * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_ARB_shader_precision */ \
\
    /* GL_ARB_shader_stencil_export */ \
\
    /* GL_ARB_shader_storage_buffer_object */ \
\
    /* GL_ARB_shader_subroutine */ \
\
    /* GL_ARB_shader_texture_lod */ \
\
    /* GL_ARB_shading_language_100 */ \
\
    /* GL_ARB_shading_language_420pack */ \
\
    /* GL_ARB_shading_language_include */ \
    FGPP_GL_FUNCTION( , void, NamedStringARB, ( GLenum _1, GLint _2, const GLchar * _3, GLint _4, const GLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteNamedStringARB, ( GLint _1, const GLchar * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, CompileShaderIncludeARB, ( GLuint _1, GLsizei _2, const GLchar *const* _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsNamedStringARB, ( GLint _1, const GLchar * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedStringARB, ( GLint _1, const GLchar * _2, GLsizei _3, GLint * _4, GLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedStringivARB, ( GLint _1, const GLchar * _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_ARB_shading_language_packing */ \
\
    /* GL_ARB_shadow */ \
\
    /* GL_ARB_shadow_ambient */ \
\
    /* GL_ARB_sparse_texture */ \
    FGPP_GL_FUNCTION( , void, TexPageCommitmentARB, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLboolean _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_ARB_stencil_texturing */ \
\
    /* GL_ARB_sync */ \
\
    /* GL_ARB_tessellation_shader */ \
\
    /* GL_ARB_texture_border_clamp */ \
\
    /* GL_ARB_texture_buffer_object */ \
    FGPP_GL_FUNCTION( , void, TexBufferARB, ( GLenum _1, GLenum _2, GLuint _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_texture_buffer_object_rgb32 */ \
\
    /* GL_ARB_texture_buffer_range */ \
\
    /* GL_ARB_texture_compression */ \
    FGPP_GL_FUNCTION( , void, CompressedTexImage3DARB, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLint _7, GLsizei _8, const GLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTexImage2DARB, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLint _6, GLsizei _7, const GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTexImage1DARB, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLint _5, GLsizei _6, const GLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTexSubImage3DARB, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLsizei _10, const GLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTexSubImage2DARB, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLenum _7, GLsizei _8, const GLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTexSubImage1DARB, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLenum _5, GLsizei _6, const GLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, GetCompressedTexImageARB, ( GLenum _1, GLint _2, GLvoid * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_texture_compression_bptc */ \
\
    /* GL_ARB_texture_compression_rgtc */ \
\
    /* GL_ARB_texture_cube_map */ \
\
    /* GL_ARB_texture_cube_map_array */ \
\
    /* GL_ARB_texture_env_add */ \
\
    /* GL_ARB_texture_env_combine */ \
\
    /* GL_ARB_texture_env_crossbar */ \
\
    /* GL_ARB_texture_env_dot3 */ \
\
    /* GL_ARB_texture_float */ \
\
    /* GL_ARB_texture_gather */ \
\
    /* GL_ARB_texture_mirror_clamp_to_edge */ \
\
    /* GL_ARB_texture_mirrored_repeat */ \
\
    /* GL_ARB_texture_multisample */ \
\
    /* GL_ARB_texture_non_power_of_two */ \
\
    /* GL_ARB_texture_query_levels */ \
\
    /* GL_ARB_texture_query_lod */ \
\
    /* GL_ARB_texture_rectangle */ \
\
    /* GL_ARB_texture_rg */ \
\
    /* GL_ARB_texture_rgb10_a2ui */ \
\
    /* GL_ARB_texture_stencil8 */ \
\
    /* GL_ARB_texture_storage */ \
\
    /* GL_ARB_texture_storage_multisample */ \
\
    /* GL_ARB_texture_swizzle */ \
\
    /* GL_ARB_texture_view */ \
\
    /* GL_ARB_timer_query */ \
\
    /* GL_ARB_transform_feedback2 */ \
\
    /* GL_ARB_transform_feedback3 */ \
\
    /* GL_ARB_transform_feedback_instanced */ \
\
    /* GL_ARB_transpose_matrix */ \
    FGPP_GL_FUNCTION( , void, LoadTransposeMatrixfARB, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, LoadTransposeMatrixdARB, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MultTransposeMatrixfARB, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MultTransposeMatrixdARB, ( const GLdouble * _1 ), ( _1 ) ) \
\
    /* GL_ARB_uniform_buffer_object */ \
\
    /* GL_ARB_vertex_array_bgra */ \
\
    /* GL_ARB_vertex_array_object */ \
\
    /* GL_ARB_vertex_attrib_64bit */ \
\
    /* GL_ARB_vertex_attrib_binding */ \
\
    /* GL_ARB_vertex_blend */ \
    FGPP_GL_FUNCTION( , void, WeightbvARB, ( GLint _1, const GLbyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WeightsvARB, ( GLint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WeightivARB, ( GLint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WeightfvARB, ( GLint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WeightdvARB, ( GLint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WeightubvARB, ( GLint _1, const GLubyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WeightusvARB, ( GLint _1, const GLushort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WeightuivARB, ( GLint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WeightPointerARB, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexBlendARB, ( GLint _1 ), ( _1 ) ) \
\
    /* GL_ARB_vertex_buffer_object */ \
    FGPP_GL_FUNCTION( , void, BindBufferARB, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteBuffersARB, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenBuffersARB, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsBufferARB, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BufferDataARB, ( GLenum _1, GLsizeiptrARB _2, const GLvoid * _3, GLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, BufferSubDataARB, ( GLenum _1, GLintptrARB _2, GLsizeiptrARB _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetBufferSubDataARB, ( GLenum _1, GLintptrARB _2, GLsizeiptrARB _3, GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( nullptr, void *, MapBufferARB, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, UnmapBufferARB, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetBufferParameterivARB, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetBufferPointervARB, ( GLenum _1, GLenum _2, GLvoid ** _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_vertex_program */ \
    FGPP_GL_FUNCTION( , void, VertexAttrib1dARB, ( GLuint _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1dvARB, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1fARB, ( GLuint _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1fvARB, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1sARB, ( GLuint _1, GLshort _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1svARB, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2dARB, ( GLuint _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2dvARB, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2fARB, ( GLuint _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2fvARB, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2sARB, ( GLuint _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2svARB, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3dARB, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3dvARB, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3fARB, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3fvARB, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3sARB, ( GLuint _1, GLshort _2, GLshort _3, GLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3svARB, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4NbvARB, ( GLuint _1, const GLbyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4NivARB, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4NsvARB, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4NubARB, ( GLuint _1, GLubyte _2, GLubyte _3, GLubyte _4, GLubyte _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4NubvARB, ( GLuint _1, const GLubyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4NuivARB, ( GLuint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4NusvARB, ( GLuint _1, const GLushort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4bvARB, ( GLuint _1, const GLbyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4dARB, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4dvARB, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4fARB, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4fvARB, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4ivARB, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4sARB, ( GLuint _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4svARB, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4ubvARB, ( GLuint _1, const GLubyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4uivARB, ( GLuint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4usvARB, ( GLuint _1, const GLushort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribPointerARB, ( GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLsizei _5, const GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, EnableVertexAttribArrayARB, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DisableVertexAttribArrayARB, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribdvARB, ( GLuint _1, GLenum _2, GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribfvARB, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribivARB, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribPointervARB, ( GLuint _1, GLenum _2, GLvoid ** _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ARB_vertex_shader */ \
    FGPP_GL_FUNCTION( , void, BindAttribLocationARB, ( GLhandleARB _1, GLuint _2, const GLcharARB * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetActiveAttribARB, ( GLhandleARB _1, GLuint _2, GLsizei _3, GLsizei * _4, GLint * _5, GLenum * _6, GLcharARB * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, GetAttribLocationARB, ( GLhandleARB _1, const GLcharARB * _2 ), ( _1, _2 ) ) \
\
    /* GL_ARB_vertex_type_10f_11f_11f_rev */ \
\
    /* GL_ARB_vertex_type_2_10_10_10_rev */ \
\
    /* GL_ARB_viewport_array */ \
\
    /* GL_ARB_window_pos */ \
    FGPP_GL_FUNCTION( , void, WindowPos2dARB, ( GLdouble _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2dvARB, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2fARB, ( GLfloat _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2fvARB, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2iARB, ( GLint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2ivARB, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2sARB, ( GLshort _1, GLshort _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2svARB, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3dARB, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3dvARB, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3fARB, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3fvARB, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3iARB, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3ivARB, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3sARB, ( GLshort _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3svARB, ( const GLshort * _1 ), ( _1 ) ) \
\
    /* GL_KHR_debug */ \
\
    /* GL_KHR_texture_compression_astc_ldr */ \
\
    /* GL_OES_byte_coordinates */ \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1bOES, ( GLenum _1, GLbyte _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1bvOES, ( GLenum _1, const GLbyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2bOES, ( GLenum _1, GLbyte _2, GLbyte _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2bvOES, ( GLenum _1, const GLbyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3bOES, ( GLenum _1, GLbyte _2, GLbyte _3, GLbyte _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3bvOES, ( GLenum _1, const GLbyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4bOES, ( GLenum _1, GLbyte _2, GLbyte _3, GLbyte _4, GLbyte _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4bvOES, ( GLenum _1, const GLbyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1bOES, ( GLbyte _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1bvOES, ( const GLbyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2bOES, ( GLbyte _1, GLbyte _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2bvOES, ( const GLbyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3bOES, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3bvOES, ( const GLbyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4bOES, ( GLbyte _1, GLbyte _2, GLbyte _3, GLbyte _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4bvOES, ( const GLbyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex2bOES, ( GLbyte _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex2bvOES, ( const GLbyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3bOES, ( GLbyte _1, GLbyte _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3bvOES, ( const GLbyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4bOES, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4bvOES, ( const GLbyte * _1 ), ( _1 ) ) \
\
    /* GL_OES_compressed_paletted_texture */ \
\
    /* GL_OES_fixed_point */ \
    FGPP_GL_FUNCTION( , void, AlphaFuncxOES, ( GLenum _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ClearColorxOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ClearDepthxOES, ( GLfixed _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ClipPlanexOES, ( GLenum _1, const GLfixed * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Color4xOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, DepthRangexOES, ( GLfixed _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FogxOES, ( GLenum _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FogxvOES, ( GLenum _1, const GLfixed * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FrustumxOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4, GLfixed _5, GLfixed _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, GetClipPlanexOES, ( GLenum _1, GLfixed * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetFixedvOES, ( GLenum _1, GLfixed * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexEnvxvOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexParameterxvOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, LightModelxOES, ( GLenum _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, LightModelxvOES, ( GLenum _1, const GLfixed * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, LightxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, LightxvOES, ( GLenum _1, GLenum _2, const GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, LineWidthxOES, ( GLfixed _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, LoadMatrixxOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MaterialxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MaterialxvOES, ( GLenum _1, GLenum _2, const GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultMatrixxOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4xOES, ( GLenum _1, GLfixed _2, GLfixed _3, GLfixed _4, GLfixed _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3xOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, OrthoxOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4, GLfixed _5, GLfixed _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, PointParameterxvOES, ( GLenum _1, const GLfixed * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PointSizexOES, ( GLfixed _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PolygonOffsetxOES, ( GLfixed _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, RotatexOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, SampleCoverageOES, ( GLfixed _1, GLboolean _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ScalexOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexEnvxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexEnvxvOES, ( GLenum _1, GLenum _2, const GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexParameterxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexParameterxvOES, ( GLenum _1, GLenum _2, const GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TranslatexOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, AccumxOES, ( GLenum _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, BitmapxOES, ( GLsizei _1, GLsizei _2, GLfixed _3, GLfixed _4, GLfixed _5, GLfixed _6, const GLubyte * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, BlendColorxOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ClearAccumxOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Color3xOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Color3xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color4xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ConvolutionParameterxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ConvolutionParameterxvOES, ( GLenum _1, GLenum _2, const GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, EvalCoord1xOES, ( GLfixed _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EvalCoord1xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EvalCoord2xOES, ( GLfixed _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, EvalCoord2xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FeedbackBufferxOES, ( GLsizei _1, GLenum _2, const GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetConvolutionParameterxvOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetHistogramParameterxvOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetLightxOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetMapxvOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetMaterialxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetPixelMapxv, ( GLenum _1, GLint _2, GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexGenxvOES, ( GLenum _1, GLenum _2, GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexLevelParameterxvOES, ( GLenum _1, GLint _2, GLenum _3, GLfixed * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, IndexxOES, ( GLfixed _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, IndexxvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, LoadTransposeMatrixxOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Map1xOES, ( GLenum _1, GLfixed _2, GLfixed _3, GLint _4, GLint _5, GLfixed _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, Map2xOES, ( GLenum _1, GLfixed _2, GLfixed _3, GLint _4, GLint _5, GLfixed _6, GLfixed _7, GLint _8, GLint _9, GLfixed _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, MapGrid1xOES, ( GLint _1, GLfixed _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MapGrid2xOES, ( GLint _1, GLfixed _2, GLfixed _3, GLfixed _4, GLfixed _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultTransposeMatrixxOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1xOES, ( GLenum _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1xvOES, ( GLenum _1, const GLfixed * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2xOES, ( GLenum _1, GLfixed _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2xvOES, ( GLenum _1, const GLfixed * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3xOES, ( GLenum _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3xvOES, ( GLenum _1, const GLfixed * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4xvOES, ( GLenum _1, const GLfixed * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PassThroughxOES, ( GLfixed _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PixelMapx, ( GLenum _1, GLint _2, const GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PixelStorex, ( GLenum _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PixelTransferxOES, ( GLenum _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PixelZoomxOES, ( GLfixed _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PrioritizeTexturesxOES, ( GLsizei _1, const GLuint * _2, const GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos2xOES, ( GLfixed _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos2xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos3xOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos3xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos4xOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, RasterPos4xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, RectxOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, RectxvOES, ( const GLfixed * _1, const GLfixed * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1xOES, ( GLfixed _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2xOES, ( GLfixed _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3xOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4xOES, ( GLfixed _1, GLfixed _2, GLfixed _3, GLfixed _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexGenxOES, ( GLenum _1, GLenum _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexGenxvOES, ( GLenum _1, GLenum _2, const GLfixed * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex2xOES, ( GLfixed _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex2xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3xOES, ( GLfixed _1, GLfixed _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4xOES, ( GLfixed _1, GLfixed _2, GLfixed _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4xvOES, ( const GLfixed * _1 ), ( _1 ) ) \
\
    /* GL_OES_query_matrix */ \
    FGPP_GL_FUNCTION( 0, GLbitfield, QueryMatrixxOES, ( GLfixed * _1, GLint * _2 ), ( _1, _2 ) ) \
\
    /* GL_OES_read_format */ \
\
    /* GL_OES_single_precision */ \
    FGPP_GL_FUNCTION( , void, ClearDepthfOES, ( GLclampf _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ClipPlanefOES, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DepthRangefOES, ( GLclampf _1, GLclampf _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FrustumfOES, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, GetClipPlanefOES, ( GLenum _1, GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, OrthofOES, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_3DFX_multisample */ \
\
    /* GL_3DFX_tbuffer */ \
    FGPP_GL_FUNCTION( , void, TbufferMask3DFX, ( GLuint _1 ), ( _1 ) ) \
\
    /* GL_3DFX_texture_compression_FXT1 */ \
\
    /* GL_AMD_blend_minmax_factor */ \
\
    /* GL_AMD_conservative_depth */ \
\
    /* GL_AMD_debug_output */ \
    FGPP_GL_FUNCTION( , void, DebugMessageEnableAMD, ( GLenum _1, GLenum _2, GLsizei _3, const GLuint * _4, GLboolean _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, DebugMessageInsertAMD, ( GLenum _1, GLenum _2, GLuint _3, GLsizei _4, const GLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, DebugMessageCallbackAMD, ( GLDebugProcAMD _1, void * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, GetDebugMessageLogAMD, ( GLuint _1, GLsizei _2, GLenum * _3, GLuint * _4, GLuint * _5, GLsizei * _6, GLchar * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
\
    /* GL_AMD_depth_clamp_separate */ \
\
    /* GL_AMD_draw_buffers_blend */ \
    FGPP_GL_FUNCTION( , void, BlendFuncIndexedAMD, ( GLuint _1, GLenum _2, GLenum _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BlendFuncSeparateIndexedAMD, ( GLuint _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, BlendEquationIndexedAMD, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, BlendEquationSeparateIndexedAMD, ( GLuint _1, GLenum _2, GLenum _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_AMD_interleaved_elements */ \
    FGPP_GL_FUNCTION( , void, VertexAttribParameteriAMD, ( GLuint _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_AMD_multi_draw_indirect */ \
    FGPP_GL_FUNCTION( , void, MultiDrawArraysIndirectAMD, ( GLenum _1, const GLvoid * _2, GLsizei _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiDrawElementsIndirectAMD, ( GLenum _1, GLenum _2, const GLvoid * _3, GLsizei _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_AMD_name_gen_delete */ \
    FGPP_GL_FUNCTION( , void, GenNamesAMD, ( GLenum _1, GLuint _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteNamesAMD, ( GLenum _1, GLuint _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsNameAMD, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
\
    /* GL_AMD_performance_monitor */ \
    FGPP_GL_FUNCTION( , void, GetPerfMonitorGroupsAMD, ( GLint * _1, GLsizei _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetPerfMonitorCountersAMD, ( GLuint _1, GLint * _2, GLint * _3, GLsizei _4, GLuint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetPerfMonitorGroupStringAMD, ( GLuint _1, GLsizei _2, GLsizei * _3, GLchar * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetPerfMonitorCounterStringAMD, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLchar * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetPerfMonitorCounterInfoAMD, ( GLuint _1, GLuint _2, GLenum _3, GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GenPerfMonitorsAMD, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeletePerfMonitorsAMD, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, SelectPerfMonitorCountersAMD, ( GLuint _1, GLboolean _2, GLuint _3, GLint _4, GLuint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, BeginPerfMonitorAMD, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EndPerfMonitorAMD, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetPerfMonitorCounterDataAMD, ( GLuint _1, GLenum _2, GLsizei _3, GLuint * _4, GLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_AMD_pinned_memory */ \
\
    /* GL_AMD_query_buffer_object */ \
\
    /* GL_AMD_sample_positions */ \
    FGPP_GL_FUNCTION( , void, SetMultisamplefvAMD, ( GLenum _1, GLuint _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_AMD_seamless_cubemap_per_texture */ \
\
    /* GL_AMD_shader_atomic_counter_ops */ \
\
    /* GL_AMD_shader_stencil_export */ \
\
    /* GL_AMD_shader_trinary_minmax */ \
\
    /* GL_AMD_sparse_texture */ \
    FGPP_GL_FUNCTION( , void, TexStorageSparseAMD, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLsizei _5, GLsizei _6, GLbitfield _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, TextureStorageSparseAMD, ( GLuint _1, GLenum _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLsizei _7, GLbitfield _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_AMD_stencil_operation_extended */ \
    FGPP_GL_FUNCTION( , void, StencilOpValueAMD, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
\
    /* GL_AMD_texture_texture4 */ \
\
    /* GL_AMD_transform_feedback3_lines_triangles */ \
\
    /* GL_AMD_vertex_shader_layer */ \
\
    /* GL_AMD_vertex_shader_tessellator */ \
    FGPP_GL_FUNCTION( , void, TessellationFactorAMD, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TessellationModeAMD, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_AMD_vertex_shader_viewport_index */ \
\
    /* GL_APPLE_aux_depth_stencil */ \
\
    /* GL_APPLE_client_storage */ \
\
    /* GL_APPLE_element_array */ \
    FGPP_GL_FUNCTION( , void, ElementPointerAPPLE, ( GLenum _1, const GLvoid * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DrawElementArrayAPPLE, ( GLenum _1, GLint _2, GLsizei _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, DrawRangeElementArrayAPPLE, ( GLenum _1, GLuint _2, GLuint _3, GLint _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiDrawElementArrayAPPLE, ( GLenum _1, const GLint * _2, const GLsizei * _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiDrawRangeElementArrayAPPLE, ( GLenum _1, GLuint _2, GLuint _3, const GLint * _4, const GLsizei * _5, GLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_APPLE_fence */ \
    FGPP_GL_FUNCTION( , void, GenFencesAPPLE, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteFencesAPPLE, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, SetFenceAPPLE, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsFenceAPPLE, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, TestFenceAPPLE, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FinishFenceAPPLE, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, TestObjectAPPLE, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FinishObjectAPPLE, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
\
    /* GL_APPLE_float_pixels */ \
\
    /* GL_APPLE_flush_buffer_range */ \
    FGPP_GL_FUNCTION( , void, BufferParameteriAPPLE, ( GLenum _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FlushMappedBufferRangeAPPLE, ( GLenum _1, GLintptr _2, GLsizeiptr _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_APPLE_object_purgeable */ \
    FGPP_GL_FUNCTION( 0, GLenum, ObjectPurgeableAPPLE, ( GLenum _1, GLuint _2, GLenum _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLenum, ObjectUnpurgeableAPPLE, ( GLenum _1, GLuint _2, GLenum _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetObjectParameterivAPPLE, ( GLenum _1, GLuint _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_APPLE_rgb_422 */ \
\
    /* GL_APPLE_row_bytes */ \
\
    /* GL_APPLE_specular_vector */ \
\
    /* GL_APPLE_texture_range */ \
    FGPP_GL_FUNCTION( , void, TextureRangeAPPLE, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexParameterPointervAPPLE, ( GLenum _1, GLenum _2, GLvoid ** _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_APPLE_transform_hint */ \
\
    /* GL_APPLE_vertex_array_object */ \
    FGPP_GL_FUNCTION( , void, BindVertexArrayAPPLE, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteVertexArraysAPPLE, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenVertexArraysAPPLE, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsVertexArrayAPPLE, ( GLuint _1 ), ( _1 ) ) \
\
    /* GL_APPLE_vertex_array_range */ \
    FGPP_GL_FUNCTION( , void, VertexArrayRangeAPPLE, ( GLsizei _1, GLvoid * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FlushVertexArrayRangeAPPLE, ( GLsizei _1, GLvoid * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayParameteriAPPLE, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
\
    /* GL_APPLE_vertex_program_evaluators */ \
    FGPP_GL_FUNCTION( , void, EnableVertexAttribAPPLE, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DisableVertexAttribAPPLE, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsVertexAttribEnabledAPPLE, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MapVertexAttrib1dAPPLE, ( GLuint _1, GLuint _2, GLdouble _3, GLdouble _4, GLint _5, GLint _6, const GLdouble * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, MapVertexAttrib1fAPPLE, ( GLuint _1, GLuint _2, GLfloat _3, GLfloat _4, GLint _5, GLint _6, const GLfloat * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, MapVertexAttrib2dAPPLE, ( GLuint _1, GLuint _2, GLdouble _3, GLdouble _4, GLint _5, GLint _6, GLdouble _7, GLdouble _8, GLint _9, GLint _10, const GLdouble * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FGPP_GL_FUNCTION( , void, MapVertexAttrib2fAPPLE, ( GLuint _1, GLuint _2, GLfloat _3, GLfloat _4, GLint _5, GLint _6, GLfloat _7, GLfloat _8, GLint _9, GLint _10, const GLfloat * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
\
    /* GL_APPLE_ycbcr_422 */ \
\
    /* GL_ATI_draw_buffers */ \
    FGPP_GL_FUNCTION( , void, DrawBuffersATI, ( GLsizei _1, const GLenum * _2 ), ( _1, _2 ) ) \
\
    /* GL_ATI_element_array */ \
    FGPP_GL_FUNCTION( , void, ElementPointerATI, ( GLenum _1, const GLvoid * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DrawElementArrayATI, ( GLenum _1, GLsizei _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DrawRangeElementArrayATI, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_ATI_envmap_bumpmap */ \
    FGPP_GL_FUNCTION( , void, TexBumpParameterivATI, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexBumpParameterfvATI, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexBumpParameterivATI, ( GLenum _1, GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexBumpParameterfvATI, ( GLenum _1, GLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_ATI_fragment_shader */ \
    FGPP_GL_FUNCTION( 0, GLuint, GenFragmentShadersATI, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BindFragmentShaderATI, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteFragmentShaderATI, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BeginFragmentShaderATI, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, EndFragmentShaderATI, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, PassTexCoordATI, ( GLuint _1, GLuint _2, GLenum _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SampleMapATI, ( GLuint _1, GLuint _2, GLenum _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ColorFragmentOp1ATI, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, ColorFragmentOp2ATI, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8, GLuint _9, GLuint _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, ColorFragmentOp3ATI, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8, GLuint _9, GLuint _10, GLuint _11, GLuint _12, GLuint _13 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
    FGPP_GL_FUNCTION( , void, AlphaFragmentOp1ATI, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, AlphaFragmentOp2ATI, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8, GLuint _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, AlphaFragmentOp3ATI, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7, GLuint _8, GLuint _9, GLuint _10, GLuint _11, GLuint _12 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FGPP_GL_FUNCTION( , void, SetFragmentShaderConstantATI, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_ATI_map_object_buffer */ \
    FGPP_GL_FUNCTION( nullptr, void *, MapObjectBufferATI, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, UnmapObjectBufferATI, ( GLuint _1 ), ( _1 ) ) \
\
    /* GL_ATI_meminfo */ \
\
    /* GL_ATI_pixel_format_float */ \
\
    /* GL_ATI_pn_triangles */ \
    FGPP_GL_FUNCTION( , void, PNTrianglesiATI, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PNTrianglesfATI, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
\
    /* GL_ATI_separate_stencil */ \
    FGPP_GL_FUNCTION( , void, StencilOpSeparateATI, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, StencilFuncSeparateATI, ( GLenum _1, GLenum _2, GLint _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_ATI_text_fragment_shader */ \
\
    /* GL_ATI_texture_env_combine3 */ \
\
    /* GL_ATI_texture_float */ \
\
    /* GL_ATI_texture_mirror_once */ \
\
    /* GL_ATI_vertex_array_object */ \
    FGPP_GL_FUNCTION( 0, GLuint, NewObjectBufferATI, ( GLsizei _1, const GLvoid * _2, GLenum _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsObjectBufferATI, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, UpdateObjectBufferATI, ( GLuint _1, GLuint _2, GLsizei _3, const GLvoid * _4, GLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetObjectBufferfvATI, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetObjectBufferivATI, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FreeObjectBufferATI, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ArrayObjectATI, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLuint _5, GLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, GetArrayObjectfvATI, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetArrayObjectivATI, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VariantArrayObjectATI, ( GLuint _1, GLenum _2, GLsizei _3, GLuint _4, GLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetVariantArrayObjectfvATI, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVariantArrayObjectivATI, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ATI_vertex_attrib_array_object */ \
    FGPP_GL_FUNCTION( , void, VertexAttribArrayObjectATI, ( GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLsizei _5, GLuint _6, GLuint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribArrayObjectfvATI, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribArrayObjectivATI, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_ATI_vertex_streams */ \
    FGPP_GL_FUNCTION( , void, VertexStream1sATI, ( GLenum _1, GLshort _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream1svATI, ( GLenum _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream1iATI, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream1ivATI, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream1fATI, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream1fvATI, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream1dATI, ( GLenum _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream1dvATI, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream2sATI, ( GLenum _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream2svATI, ( GLenum _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream2iATI, ( GLenum _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream2ivATI, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream2fATI, ( GLenum _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream2fvATI, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream2dATI, ( GLenum _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream2dvATI, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream3sATI, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream3svATI, ( GLenum _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream3iATI, ( GLenum _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream3ivATI, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream3fATI, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream3fvATI, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream3dATI, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream3dvATI, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream4sATI, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream4svATI, ( GLenum _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream4iATI, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream4ivATI, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream4fATI, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream4fvATI, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream4dATI, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexStream4dvATI, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, NormalStream3bATI, ( GLenum _1, GLbyte _2, GLbyte _3, GLbyte _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NormalStream3bvATI, ( GLenum _1, const GLbyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, NormalStream3sATI, ( GLenum _1, GLshort _2, GLshort _3, GLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NormalStream3svATI, ( GLenum _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, NormalStream3iATI, ( GLenum _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NormalStream3ivATI, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, NormalStream3fATI, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NormalStream3fvATI, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, NormalStream3dATI, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NormalStream3dvATI, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ClientActiveVertexStreamATI, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, VertexBlendEnviATI, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexBlendEnvfATI, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_422_pixels */ \
\
    /* GL_EXT_abgr */ \
\
    /* GL_EXT_bgra */ \
\
    /* GL_EXT_bindable_uniform */ \
    FGPP_GL_FUNCTION( , void, UniformBufferEXT, ( GLuint _1, GLint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, GetUniformBufferSizeEXT, ( GLuint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLintptr, GetUniformOffsetEXT, ( GLuint _1, GLint _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_blend_color */ \
    FGPP_GL_FUNCTION( , void, BlendColorEXT, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_blend_equation_separate */ \
    FGPP_GL_FUNCTION( , void, BlendEquationSeparateEXT, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_blend_func_separate */ \
    FGPP_GL_FUNCTION( , void, BlendFuncSeparateEXT, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_blend_logic_op */ \
\
    /* GL_EXT_blend_minmax */ \
    FGPP_GL_FUNCTION( , void, BlendEquationEXT, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_blend_subtract */ \
\
    /* GL_EXT_clip_volume_hint */ \
\
    /* GL_EXT_cmyka */ \
\
    /* GL_EXT_color_subtable */ \
    FGPP_GL_FUNCTION( , void, ColorSubTableEXT, ( GLenum _1, GLsizei _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, CopyColorSubTableEXT, ( GLenum _1, GLsizei _2, GLint _3, GLint _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_compiled_vertex_array */ \
    FGPP_GL_FUNCTION( , void, LockArraysEXT, ( GLint _1, GLsizei _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, UnlockArraysEXT, ( ), ( ) ) \
\
    /* GL_EXT_convolution */ \
    FGPP_GL_FUNCTION( , void, ConvolutionFilter1DEXT, ( GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ConvolutionFilter2DEXT, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, ConvolutionParameterfEXT, ( GLenum _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ConvolutionParameterfvEXT, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ConvolutionParameteriEXT, ( GLenum _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ConvolutionParameterivEXT, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, CopyConvolutionFilter1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, CopyConvolutionFilter2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, GetConvolutionFilterEXT, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetConvolutionParameterfvEXT, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetConvolutionParameterivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetSeparableFilterEXT, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4, GLvoid * _5, GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, SeparableFilter2DEXT, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7, const GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_EXT_coordinate_frame */ \
    FGPP_GL_FUNCTION( , void, Tangent3bEXT, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Tangent3bvEXT, ( const GLbyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Tangent3dEXT, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Tangent3dvEXT, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Tangent3fEXT, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Tangent3fvEXT, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Tangent3iEXT, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Tangent3ivEXT, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Tangent3sEXT, ( GLshort _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Tangent3svEXT, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Binormal3bEXT, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Binormal3bvEXT, ( const GLbyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Binormal3dEXT, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Binormal3dvEXT, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Binormal3fEXT, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Binormal3fvEXT, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Binormal3iEXT, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Binormal3ivEXT, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Binormal3sEXT, ( GLshort _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Binormal3svEXT, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TangentPointerEXT, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BinormalPointerEXT, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_copy_texture */ \
    FGPP_GL_FUNCTION( , void, CopyTexImage1DEXT, ( GLenum _1, GLint _2, GLenum _3, GLint _4, GLint _5, GLsizei _6, GLint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTexImage2DEXT, ( GLenum _1, GLint _2, GLenum _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLint _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTexSubImage1DEXT, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTexSubImage2DEXT, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTexSubImage3DEXT, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLsizei _8, GLsizei _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_EXT_cull_vertex */ \
    FGPP_GL_FUNCTION( , void, CullParameterdvEXT, ( GLenum _1, GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, CullParameterfvEXT, ( GLenum _1, GLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_depth_bounds_test */ \
    FGPP_GL_FUNCTION( , void, DepthBoundsEXT, ( GLclampd _1, GLclampd _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_direct_state_access */ \
    FGPP_GL_FUNCTION( , void, MatrixLoadfEXT, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixLoaddEXT, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixMultfEXT, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixMultdEXT, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixLoadIdentityEXT, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixRotatefEXT, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixRotatedEXT, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixScalefEXT, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixScaledEXT, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixTranslatefEXT, ( GLenum _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixTranslatedEXT, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixFrustumEXT, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6, GLdouble _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixOrthoEXT, ( GLenum _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6, GLdouble _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixPopEXT, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixPushEXT, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ClientAttribDefaultEXT, ( GLbitfield _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PushClientAttribDefaultEXT, ( GLbitfield _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TextureParameterfEXT, ( GLuint _1, GLenum _2, GLenum _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TextureParameterfvEXT, ( GLuint _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TextureParameteriEXT, ( GLuint _1, GLenum _2, GLenum _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TextureParameterivEXT, ( GLuint _1, GLenum _2, GLenum _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TextureImage1DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLint _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, TextureImage2DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLint _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, TextureSubImage1DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLenum _6, GLenum _7, const GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, TextureSubImage2DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTextureImage1DEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLint _5, GLint _6, GLsizei _7, GLint _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTextureImage2DEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLint _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTextureSubImage1DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTextureSubImage2DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLsizei _8, GLsizei _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, GetTextureImageEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLenum _5, GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, GetTextureParameterfvEXT, ( GLuint _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetTextureParameterivEXT, ( GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetTextureLevelParameterfvEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetTextureLevelParameterivEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, TextureImage3DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FGPP_GL_FUNCTION( , void, TextureSubImage3DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLenum _10, GLenum _11, const GLvoid * _12 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FGPP_GL_FUNCTION( , void, CopyTextureSubImage3DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLint _8, GLsizei _9, GLsizei _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, BindMultiTextureEXT, ( GLenum _1, GLenum _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoordPointerEXT, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexEnvfEXT, ( GLenum _1, GLenum _2, GLenum _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexEnvfvEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexEnviEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexEnvivEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexGendEXT, ( GLenum _1, GLenum _2, GLenum _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexGendvEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexGenfEXT, ( GLenum _1, GLenum _2, GLenum _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexGenfvEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexGeniEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexGenivEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetMultiTexEnvfvEXT, ( GLenum _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetMultiTexEnvivEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetMultiTexGendvEXT, ( GLenum _1, GLenum _2, GLenum _3, GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetMultiTexGenfvEXT, ( GLenum _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetMultiTexGenivEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexParameteriEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexParameterivEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexParameterfEXT, ( GLenum _1, GLenum _2, GLenum _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexParameterfvEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexImage1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLint _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexImage2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLint _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexSubImage1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLenum _6, GLenum _7, const GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexSubImage2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, CopyMultiTexImage1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLint _5, GLint _6, GLsizei _7, GLint _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, CopyMultiTexImage2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLint _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, CopyMultiTexSubImage1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, CopyMultiTexSubImage2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLsizei _8, GLsizei _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, GetMultiTexImageEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLenum _5, GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, GetMultiTexParameterfvEXT, ( GLenum _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetMultiTexParameterivEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetMultiTexLevelParameterfvEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetMultiTexLevelParameterivEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexImage3DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexSubImage3DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLenum _10, GLenum _11, const GLvoid * _12 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FGPP_GL_FUNCTION( , void, CopyMultiTexSubImage3DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLint _8, GLsizei _9, GLsizei _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, EnableClientStateIndexedEXT, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DisableClientStateIndexedEXT, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetFloatIndexedvEXT, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetDoubleIndexedvEXT, ( GLenum _1, GLuint _2, GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetPointerIndexedvEXT, ( GLenum _1, GLuint _2, GLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, EnableIndexedEXT, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DisableIndexedEXT, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsEnabledIndexedEXT, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetIntegerIndexedvEXT, ( GLenum _1, GLuint _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetBooleanIndexedvEXT, ( GLenum _1, GLuint _2, GLboolean * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTextureImage3DEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLsizei _9, const GLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTextureImage2DEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLsizei _6, GLint _7, GLsizei _8, const GLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTextureImage1DEXT, ( GLuint _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLint _6, GLsizei _7, const GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTextureSubImage3DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLenum _10, GLsizei _11, const GLvoid * _12 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTextureSubImage2DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLenum _8, GLsizei _9, const GLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedTextureSubImage1DEXT, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLenum _6, GLsizei _7, const GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, GetCompressedTextureImageEXT, ( GLuint _1, GLenum _2, GLint _3, GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedMultiTexImage3DEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLsizei _9, const GLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedMultiTexImage2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLsizei _6, GLint _7, GLsizei _8, const GLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedMultiTexImage1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLenum _4, GLsizei _5, GLint _6, GLsizei _7, const GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedMultiTexSubImage3DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLenum _10, GLsizei _11, const GLvoid * _12 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedMultiTexSubImage2DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLenum _8, GLsizei _9, const GLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, CompressedMultiTexSubImage1DEXT, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5, GLenum _6, GLsizei _7, const GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, GetCompressedMultiTexImageEXT, ( GLenum _1, GLenum _2, GLint _3, GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixLoadTransposefEXT, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixLoadTransposedEXT, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixMultTransposefEXT, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MatrixMultTransposedEXT, ( GLenum _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, NamedBufferDataEXT, ( GLuint _1, GLsizeiptr _2, const GLvoid * _3, GLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NamedBufferSubDataEXT, ( GLuint _1, GLintptr _2, GLsizeiptr _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( nullptr, void *, MapNamedBufferEXT, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, UnmapNamedBufferEXT, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedBufferParameterivEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedBufferPointervEXT, ( GLuint _1, GLenum _2, GLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedBufferSubDataEXT, ( GLuint _1, GLintptr _2, GLsizeiptr _3, GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1fEXT, ( GLuint _1, GLint _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2fEXT, ( GLuint _1, GLint _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3fEXT, ( GLuint _1, GLint _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4fEXT, ( GLuint _1, GLint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1iEXT, ( GLuint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2iEXT, ( GLuint _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3iEXT, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4iEXT, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1fvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2fvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3fvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4fvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1ivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2ivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3ivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4ivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix2fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix3fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix4fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix2x3fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix3x2fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix2x4fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix4x2fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix3x4fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix4x3fvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, TextureBufferEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexBufferEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TextureParameterIivEXT, ( GLuint _1, GLenum _2, GLenum _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TextureParameterIuivEXT, ( GLuint _1, GLenum _2, GLenum _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetTextureParameterIivEXT, ( GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetTextureParameterIuivEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexParameterIivEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexParameterIuivEXT, ( GLenum _1, GLenum _2, GLenum _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetMultiTexParameterIivEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetMultiTexParameterIuivEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1uiEXT, ( GLuint _1, GLint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2uiEXT, ( GLuint _1, GLint _2, GLuint _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3uiEXT, ( GLuint _1, GLint _2, GLuint _3, GLuint _4, GLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4uiEXT, ( GLuint _1, GLint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1uivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2uivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3uivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4uivEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NamedProgramLocalParameters4fvEXT, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, NamedProgramLocalParameterI4iEXT, ( GLuint _1, GLenum _2, GLuint _3, GLint _4, GLint _5, GLint _6, GLint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, NamedProgramLocalParameterI4ivEXT, ( GLuint _1, GLenum _2, GLuint _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NamedProgramLocalParametersI4ivEXT, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, const GLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, NamedProgramLocalParameterI4uiEXT, ( GLuint _1, GLenum _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6, GLuint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, NamedProgramLocalParameterI4uivEXT, ( GLuint _1, GLenum _2, GLuint _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NamedProgramLocalParametersI4uivEXT, ( GLuint _1, GLenum _2, GLuint _3, GLsizei _4, const GLuint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedProgramLocalParameterIivEXT, ( GLuint _1, GLenum _2, GLuint _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedProgramLocalParameterIuivEXT, ( GLuint _1, GLenum _2, GLuint _3, GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, EnableClientStateiEXT, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DisableClientStateiEXT, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetFloati_vEXT, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetDoublei_vEXT, ( GLenum _1, GLuint _2, GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetPointeri_vEXT, ( GLenum _1, GLuint _2, GLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, NamedProgramStringEXT, ( GLuint _1, GLenum _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, NamedProgramLocalParameter4dEXT, ( GLuint _1, GLenum _2, GLuint _3, GLdouble _4, GLdouble _5, GLdouble _6, GLdouble _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, NamedProgramLocalParameter4dvEXT, ( GLuint _1, GLenum _2, GLuint _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NamedProgramLocalParameter4fEXT, ( GLuint _1, GLenum _2, GLuint _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, NamedProgramLocalParameter4fvEXT, ( GLuint _1, GLenum _2, GLuint _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedProgramLocalParameterdvEXT, ( GLuint _1, GLenum _2, GLuint _3, GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedProgramLocalParameterfvEXT, ( GLuint _1, GLenum _2, GLuint _3, GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedProgramivEXT, ( GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedProgramStringEXT, ( GLuint _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NamedRenderbufferStorageEXT, ( GLuint _1, GLenum _2, GLsizei _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedRenderbufferParameterivEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, NamedRenderbufferStorageMultisampleEXT, ( GLuint _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, NamedRenderbufferStorageMultisampleCoverageEXT, ( GLuint _1, GLsizei _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( 0, GLenum, CheckNamedFramebufferStatusEXT, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, NamedFramebufferTexture1DEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, NamedFramebufferTexture2DEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, NamedFramebufferTexture3DEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint _4, GLint _5, GLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, NamedFramebufferRenderbufferEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedFramebufferAttachmentParameterivEXT, ( GLuint _1, GLenum _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GenerateTextureMipmapEXT, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenerateMultiTexMipmapEXT, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferDrawBufferEXT, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferDrawBuffersEXT, ( GLuint _1, GLsizei _2, const GLenum * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferReadBufferEXT, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetFramebufferParameterivEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, NamedCopyBufferSubDataEXT, ( GLuint _1, GLuint _2, GLintptr _3, GLintptr _4, GLsizeiptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, NamedFramebufferTextureEXT, ( GLuint _1, GLenum _2, GLuint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NamedFramebufferTextureLayerEXT, ( GLuint _1, GLenum _2, GLuint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, NamedFramebufferTextureFaceEXT, ( GLuint _1, GLenum _2, GLuint _3, GLint _4, GLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, TextureRenderbufferEXT, ( GLuint _1, GLenum _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexRenderbufferEXT, ( GLenum _1, GLenum _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayVertexOffsetEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLsizei _5, GLintptr _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayColorOffsetEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLsizei _5, GLintptr _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayEdgeFlagOffsetEXT, ( GLuint _1, GLuint _2, GLsizei _3, GLintptr _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayIndexOffsetEXT, ( GLuint _1, GLuint _2, GLenum _3, GLsizei _4, GLintptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayNormalOffsetEXT, ( GLuint _1, GLuint _2, GLenum _3, GLsizei _4, GLintptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayTexCoordOffsetEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLsizei _5, GLintptr _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayMultiTexCoordOffsetEXT, ( GLuint _1, GLuint _2, GLenum _3, GLint _4, GLenum _5, GLsizei _6, GLintptr _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayFogCoordOffsetEXT, ( GLuint _1, GLuint _2, GLenum _3, GLsizei _4, GLintptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArraySecondaryColorOffsetEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLsizei _5, GLintptr _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayVertexAttribOffsetEXT, ( GLuint _1, GLuint _2, GLuint _3, GLint _4, GLenum _5, GLboolean _6, GLsizei _7, GLintptr _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayVertexAttribIOffsetEXT, ( GLuint _1, GLuint _2, GLuint _3, GLint _4, GLenum _5, GLsizei _6, GLintptr _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, EnableVertexArrayEXT, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DisableVertexArrayEXT, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, EnableVertexArrayAttribEXT, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DisableVertexArrayAttribEXT, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexArrayIntegervEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexArrayPointervEXT, ( GLuint _1, GLenum _2, GLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexArrayIntegeri_vEXT, ( GLuint _1, GLuint _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexArrayPointeri_vEXT, ( GLuint _1, GLuint _2, GLenum _3, GLvoid ** _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( nullptr, void *, MapNamedBufferRangeEXT, ( GLuint _1, GLintptr _2, GLsizeiptr _3, GLbitfield _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, FlushMappedNamedBufferRangeEXT, ( GLuint _1, GLintptr _2, GLsizeiptr _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, NamedBufferStorageEXT, ( GLuint _1, GLsizeiptr _2, const void * _3, GLbitfield _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ClearNamedBufferDataEXT, ( GLuint _1, GLenum _2, GLenum _3, GLenum _4, const void * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ClearNamedBufferSubDataEXT, ( GLuint _1, GLenum _2, GLenum _3, GLenum _4, GLsizeiptr _5, GLsizeiptr _6, const void * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, NamedFramebufferParameteriEXT, ( GLuint _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedFramebufferParameterivEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1dEXT, ( GLuint _1, GLint _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2dEXT, ( GLuint _1, GLint _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3dEXT, ( GLuint _1, GLint _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4dEXT, ( GLuint _1, GLint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1dvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2dvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3dvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4dvEXT, ( GLuint _1, GLint _2, GLsizei _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix2dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix3dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix4dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix2x3dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix2x4dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix3x2dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix3x4dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix4x2dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformMatrix4x3dvEXT, ( GLuint _1, GLint _2, GLsizei _3, GLboolean _4, const GLdouble * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, TextureBufferRangeEXT, ( GLuint _1, GLenum _2, GLenum _3, GLuint _4, GLintptr _5, GLsizeiptr _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, TextureStorage1DEXT, ( GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, TextureStorage2DEXT, ( GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, TextureStorage3DEXT, ( GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6, GLsizei _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, TextureStorage2DMultisampleEXT, ( GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, TextureStorage3DMultisampleEXT, ( GLuint _1, GLenum _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6, GLsizei _7, GLboolean _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayBindVertexBufferEXT, ( GLuint _1, GLuint _2, GLuint _3, GLintptr _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayVertexAttribFormatEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLboolean _5, GLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayVertexAttribIFormatEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayVertexAttribLFormatEXT, ( GLuint _1, GLuint _2, GLint _3, GLenum _4, GLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayVertexAttribBindingEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayVertexBindingDivisorEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayVertexAttribLOffsetEXT, ( GLuint _1, GLuint _2, GLuint _3, GLint _4, GLenum _5, GLsizei _6, GLintptr _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, TexturePageCommitmentEXT, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLboolean _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayVertexAttribDivisorEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_draw_buffers2 */ \
    FGPP_GL_FUNCTION( , void, ColorMaskIndexedEXT, ( GLuint _1, GLboolean _2, GLboolean _3, GLboolean _4, GLboolean _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_draw_instanced */ \
    FGPP_GL_FUNCTION( , void, DrawArraysInstancedEXT, ( GLenum _1, GLint _2, GLsizei _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, DrawElementsInstancedEXT, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_draw_range_elements */ \
    FGPP_GL_FUNCTION( , void, DrawRangeElementsEXT, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4, GLenum _5, const GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_EXT_fog_coord */ \
    FGPP_GL_FUNCTION( , void, FogCoordfEXT, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FogCoordfvEXT, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FogCoorddEXT, ( GLdouble _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FogCoorddvEXT, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FogCoordPointerEXT, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_framebuffer_blit */ \
    FGPP_GL_FUNCTION( , void, BlitFramebufferEXT, ( GLint _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLint _7, GLint _8, GLbitfield _9, GLenum _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
\
    /* GL_EXT_framebuffer_multisample */ \
    FGPP_GL_FUNCTION( , void, RenderbufferStorageMultisampleEXT, ( GLenum _1, GLsizei _2, GLenum _3, GLsizei _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_framebuffer_multisample_blit_scaled */ \
\
    /* GL_EXT_framebuffer_object */ \
    FGPP_GL_FUNCTION( 0, GLboolean, IsRenderbufferEXT, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BindRenderbufferEXT, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteRenderbuffersEXT, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenRenderbuffersEXT, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, RenderbufferStorageEXT, ( GLenum _1, GLenum _2, GLsizei _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetRenderbufferParameterivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsFramebufferEXT, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BindFramebufferEXT, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteFramebuffersEXT, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenFramebuffersEXT, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLenum, CheckFramebufferStatusEXT, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTexture1DEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTexture2DEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTexture3DEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4, GLint _5, GLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferRenderbufferEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetFramebufferAttachmentParameterivEXT, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GenerateMipmapEXT, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_framebuffer_sRGB */ \
\
    /* GL_EXT_geometry_shader4 */ \
    FGPP_GL_FUNCTION( , void, ProgramParameteriEXT, ( GLuint _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_gpu_program_parameters */ \
    FGPP_GL_FUNCTION( , void, ProgramEnvParameters4fvEXT, ( GLenum _1, GLuint _2, GLsizei _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramLocalParameters4fvEXT, ( GLenum _1, GLuint _2, GLsizei _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_gpu_shader4 */ \
    FGPP_GL_FUNCTION( , void, GetUniformuivEXT, ( GLuint _1, GLint _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BindFragDataLocationEXT, ( GLuint _1, GLuint _2, const GLchar * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, GetFragDataLocationEXT, ( GLuint _1, const GLchar * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1uiEXT, ( GLint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2uiEXT, ( GLint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3uiEXT, ( GLint _1, GLuint _2, GLuint _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4uiEXT, ( GLint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1uivEXT, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2uivEXT, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3uivEXT, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4uivEXT, ( GLint _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_histogram */ \
    FGPP_GL_FUNCTION( , void, GetHistogramEXT, ( GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetHistogramParameterfvEXT, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetHistogramParameterivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetMinmaxEXT, ( GLenum _1, GLboolean _2, GLenum _3, GLenum _4, GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetMinmaxParameterfvEXT, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetMinmaxParameterivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, HistogramEXT, ( GLenum _1, GLsizei _2, GLenum _3, GLboolean _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MinmaxEXT, ( GLenum _1, GLenum _2, GLboolean _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ResetHistogramEXT, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ResetMinmaxEXT, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_index_array_formats */ \
\
    /* GL_EXT_index_func */ \
    FGPP_GL_FUNCTION( , void, IndexFuncEXT, ( GLenum _1, GLclampf _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_index_material */ \
    FGPP_GL_FUNCTION( , void, IndexMaterialEXT, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_index_texture */ \
\
    /* GL_EXT_light_texture */ \
    FGPP_GL_FUNCTION( , void, ApplyTextureEXT, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TextureLightEXT, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TextureMaterialEXT, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_misc_attribute */ \
\
    /* GL_EXT_multi_draw_arrays */ \
    FGPP_GL_FUNCTION( , void, MultiDrawArraysEXT, ( GLenum _1, const GLint * _2, const GLsizei * _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiDrawElementsEXT, ( GLenum _1, const GLsizei * _2, GLenum _3, const GLvoid *const* _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_multisample */ \
    FGPP_GL_FUNCTION( , void, SampleMaskEXT, ( GLclampf _1, GLboolean _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, SamplePatternEXT, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_packed_depth_stencil */ \
\
    /* GL_EXT_packed_float */ \
\
    /* GL_EXT_packed_pixels */ \
\
    /* GL_EXT_paletted_texture */ \
    FGPP_GL_FUNCTION( , void, ColorTableEXT, ( GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, GetColorTableEXT, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetColorTableParameterivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetColorTableParameterfvEXT, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_pixel_buffer_object */ \
\
    /* GL_EXT_pixel_transform */ \
    FGPP_GL_FUNCTION( , void, PixelTransformParameteriEXT, ( GLenum _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PixelTransformParameterfEXT, ( GLenum _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PixelTransformParameterivEXT, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PixelTransformParameterfvEXT, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetPixelTransformParameterivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetPixelTransformParameterfvEXT, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_pixel_transform_color_table */ \
\
    /* GL_EXT_point_parameters */ \
    FGPP_GL_FUNCTION( , void, PointParameterfEXT, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PointParameterfvEXT, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_polygon_offset */ \
    FGPP_GL_FUNCTION( , void, PolygonOffsetEXT, ( GLfloat _1, GLfloat _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_provoking_vertex */ \
    FGPP_GL_FUNCTION( , void, ProvokingVertexEXT, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_rescale_normal */ \
\
    /* GL_EXT_secondary_color */ \
    FGPP_GL_FUNCTION( , void, SecondaryColor3bEXT, ( GLbyte _1, GLbyte _2, GLbyte _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3bvEXT, ( const GLbyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3dEXT, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3dvEXT, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3fEXT, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3fvEXT, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3iEXT, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3ivEXT, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3sEXT, ( GLshort _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3svEXT, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3ubEXT, ( GLubyte _1, GLubyte _2, GLubyte _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3ubvEXT, ( const GLubyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3uiEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3uivEXT, ( const GLuint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3usEXT, ( GLushort _1, GLushort _2, GLushort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3usvEXT, ( const GLushort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColorPointerEXT, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_separate_shader_objects */ \
    FGPP_GL_FUNCTION( , void, UseShaderProgramEXT, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ActiveProgramEXT, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, CreateShaderProgramEXT, ( GLenum _1, const GLchar * _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_separate_specular_color */ \
\
    /* GL_EXT_shader_image_load_store */ \
    FGPP_GL_FUNCTION( , void, BindImageTextureEXT, ( GLuint _1, GLuint _2, GLint _3, GLboolean _4, GLint _5, GLenum _6, GLint _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, MemoryBarrierEXT, ( GLbitfield _1 ), ( _1 ) ) \
\
    /* GL_EXT_shadow_funcs */ \
\
    /* GL_EXT_shared_texture_palette */ \
\
    /* GL_EXT_stencil_clear_tag */ \
    FGPP_GL_FUNCTION( , void, StencilClearTagEXT, ( GLsizei _1, GLuint _2 ), ( _1, _2 ) ) \
\
    /* GL_EXT_stencil_two_side */ \
    FGPP_GL_FUNCTION( , void, ActiveStencilFaceEXT, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_stencil_wrap */ \
\
    /* GL_EXT_subtexture */ \
    FGPP_GL_FUNCTION( , void, TexSubImage1DEXT, ( GLenum _1, GLint _2, GLint _3, GLsizei _4, GLenum _5, GLenum _6, const GLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, TexSubImage2DEXT, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLsizei _5, GLsizei _6, GLenum _7, GLenum _8, const GLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_EXT_texture */ \
\
    /* GL_EXT_texture3D */ \
    FGPP_GL_FUNCTION( , void, TexImage3DEXT, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLint _7, GLenum _8, GLenum _9, const GLvoid * _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, TexSubImage3DEXT, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
\
    /* GL_EXT_texture_array */ \
\
    /* GL_EXT_texture_buffer_object */ \
    FGPP_GL_FUNCTION( , void, TexBufferEXT, ( GLenum _1, GLenum _2, GLuint _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_texture_compression_latc */ \
\
    /* GL_EXT_texture_compression_rgtc */ \
\
    /* GL_EXT_texture_compression_s3tc */ \
\
    /* GL_EXT_texture_cube_map */ \
\
    /* GL_EXT_texture_env_add */ \
\
    /* GL_EXT_texture_env_combine */ \
\
    /* GL_EXT_texture_env_dot3 */ \
\
    /* GL_EXT_texture_filter_anisotropic */ \
\
    /* GL_EXT_texture_integer */ \
    FGPP_GL_FUNCTION( , void, TexParameterIivEXT, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexParameterIuivEXT, ( GLenum _1, GLenum _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexParameterIivEXT, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTexParameterIuivEXT, ( GLenum _1, GLenum _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ClearColorIiEXT, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ClearColorIuiEXT, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_texture_lod_bias */ \
\
    /* GL_EXT_texture_mirror_clamp */ \
\
    /* GL_EXT_texture_object */ \
    FGPP_GL_FUNCTION( 0, GLboolean, AreTexturesResidentEXT, ( GLsizei _1, const GLuint * _2, GLboolean * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BindTextureEXT, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteTexturesEXT, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenTexturesEXT, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsTextureEXT, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PrioritizeTexturesEXT, ( GLsizei _1, const GLuint * _2, const GLclampf * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_texture_perturb_normal */ \
    FGPP_GL_FUNCTION( , void, TextureNormalEXT, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_EXT_texture_sRGB */ \
\
    /* GL_EXT_texture_sRGB_decode */ \
\
    /* GL_EXT_texture_shared_exponent */ \
\
    /* GL_EXT_texture_snorm */ \
\
    /* GL_EXT_texture_swizzle */ \
\
    /* GL_EXT_timer_query */ \
    FGPP_GL_FUNCTION( , void, GetQueryObjecti64vEXT, ( GLuint _1, GLenum _2, GLint64 * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetQueryObjectui64vEXT, ( GLuint _1, GLenum _2, GLuint64 * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_transform_feedback */ \
    FGPP_GL_FUNCTION( , void, BeginTransformFeedbackEXT, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EndTransformFeedbackEXT, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, BindBufferRangeEXT, ( GLenum _1, GLuint _2, GLuint _3, GLintptr _4, GLsizeiptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, BindBufferOffsetEXT, ( GLenum _1, GLuint _2, GLuint _3, GLintptr _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, BindBufferBaseEXT, ( GLenum _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TransformFeedbackVaryingsEXT, ( GLuint _1, GLsizei _2, const GLchar *const* _3, GLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetTransformFeedbackVaryingEXT, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLsizei * _5, GLenum * _6, GLchar * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
\
    /* GL_EXT_vertex_array */ \
    FGPP_GL_FUNCTION( , void, ArrayElementEXT, ( GLint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ColorPointerEXT, ( GLint _1, GLenum _2, GLsizei _3, GLsizei _4, const GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, DrawArraysEXT, ( GLenum _1, GLint _2, GLsizei _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, EdgeFlagPointerEXT, ( GLsizei _1, GLsizei _2, const GLboolean * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetPointervEXT, ( GLenum _1, GLvoid ** _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, IndexPointerEXT, ( GLenum _1, GLsizei _2, GLsizei _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NormalPointerEXT, ( GLenum _1, GLsizei _2, GLsizei _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoordPointerEXT, ( GLint _1, GLenum _2, GLsizei _3, GLsizei _4, const GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexPointerEXT, ( GLint _1, GLenum _2, GLsizei _3, GLsizei _4, const GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_EXT_vertex_array_bgra */ \
\
    /* GL_EXT_vertex_attrib_64bit */ \
    FGPP_GL_FUNCTION( , void, VertexAttribL1dEXT, ( GLuint _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL2dEXT, ( GLuint _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL3dEXT, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL4dEXT, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL1dvEXT, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL2dvEXT, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL3dvEXT, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL4dvEXT, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribLPointerEXT, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribLdvEXT, ( GLuint _1, GLenum _2, GLdouble * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_vertex_shader */ \
    FGPP_GL_FUNCTION( , void, BeginVertexShaderEXT, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, EndVertexShaderEXT, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, BindVertexShaderEXT, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, GenVertexShadersEXT, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteVertexShaderEXT, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ShaderOp1EXT, ( GLenum _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ShaderOp2EXT, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ShaderOp3EXT, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, SwizzleEXT, ( GLuint _1, GLuint _2, GLenum _3, GLenum _4, GLenum _5, GLenum _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, WriteMaskEXT, ( GLuint _1, GLuint _2, GLenum _3, GLenum _4, GLenum _5, GLenum _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, InsertComponentEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ExtractComponentEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, GenSymbolsEXT, ( GLenum _1, GLenum _2, GLenum _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, SetInvariantEXT, ( GLuint _1, GLenum _2, const GLvoid * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SetLocalConstantEXT, ( GLuint _1, GLenum _2, const GLvoid * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VariantbvEXT, ( GLuint _1, const GLbyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VariantsvEXT, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VariantivEXT, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VariantfvEXT, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VariantdvEXT, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VariantubvEXT, ( GLuint _1, const GLubyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VariantusvEXT, ( GLuint _1, const GLushort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VariantuivEXT, ( GLuint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VariantPointerEXT, ( GLuint _1, GLenum _2, GLuint _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, EnableVariantClientStateEXT, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DisableVariantClientStateEXT, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, BindLightParameterEXT, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, BindMaterialParameterEXT, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, BindTexGenParameterEXT, ( GLenum _1, GLenum _2, GLenum _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, BindTextureUnitParameterEXT, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, BindParameterEXT, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsVariantEnabledEXT, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetVariantBooleanvEXT, ( GLuint _1, GLenum _2, GLboolean * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVariantIntegervEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVariantFloatvEXT, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVariantPointervEXT, ( GLuint _1, GLenum _2, GLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetInvariantBooleanvEXT, ( GLuint _1, GLenum _2, GLboolean * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetInvariantIntegervEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetInvariantFloatvEXT, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetLocalConstantBooleanvEXT, ( GLuint _1, GLenum _2, GLboolean * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetLocalConstantIntegervEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetLocalConstantFloatvEXT, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_EXT_vertex_weighting */ \
    FGPP_GL_FUNCTION( , void, VertexWeightfEXT, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, VertexWeightfvEXT, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, VertexWeightPointerEXT, ( GLint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_EXT_x11_sync_object */ \
    FGPP_GL_FUNCTION( nullptr, GLsync, ImportSyncEXT, ( GLenum _1, GLintptr _2, GLbitfield _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_GREMEDY_frame_terminator */ \
    FGPP_GL_FUNCTION( , void, FrameTerminatorGREMEDY, ( ), ( ) ) \
\
    /* GL_GREMEDY_string_marker */ \
    FGPP_GL_FUNCTION( , void, StringMarkerGREMEDY, ( GLsizei _1, const GLvoid * _2 ), ( _1, _2 ) ) \
\
    /* GL_HP_convolution_border_modes */ \
\
    /* GL_HP_image_transform */ \
    FGPP_GL_FUNCTION( , void, ImageTransformParameteriHP, ( GLenum _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ImageTransformParameterfHP, ( GLenum _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ImageTransformParameterivHP, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ImageTransformParameterfvHP, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetImageTransformParameterivHP, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetImageTransformParameterfvHP, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_HP_occlusion_test */ \
\
    /* GL_HP_texture_lighting */ \
\
    /* GL_IBM_cull_vertex */ \
\
    /* GL_IBM_multimode_draw_arrays */ \
    FGPP_GL_FUNCTION( , void, MultiModeDrawArraysIBM, ( const GLenum * _1, const GLint * _2, const GLsizei * _3, GLsizei _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiModeDrawElementsIBM, ( const GLenum * _1, const GLsizei * _2, GLenum _3, const GLvoid *const* _4, GLsizei _5, GLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_IBM_rasterpos_clip */ \
\
    /* GL_IBM_static_data */ \
    FGPP_GL_FUNCTION( , void, FlushStaticDataIBM, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_IBM_texture_mirrored_repeat */ \
\
    /* GL_IBM_vertex_array_lists */ \
    FGPP_GL_FUNCTION( , void, ColorPointerListIBM, ( GLint _1, GLenum _2, GLint _3, const GLvoid ** _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColorPointerListIBM, ( GLint _1, GLenum _2, GLint _3, const GLvoid ** _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, EdgeFlagPointerListIBM, ( GLint _1, const GLboolean ** _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FogCoordPointerListIBM, ( GLenum _1, GLint _2, const GLvoid ** _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, IndexPointerListIBM, ( GLenum _1, GLint _2, const GLvoid ** _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, NormalPointerListIBM, ( GLenum _1, GLint _2, const GLvoid ** _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoordPointerListIBM, ( GLint _1, GLenum _2, GLint _3, const GLvoid ** _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexPointerListIBM, ( GLint _1, GLenum _2, GLint _3, const GLvoid ** _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_INGR_blend_func_separate */ \
    FGPP_GL_FUNCTION( , void, BlendFuncSeparateINGR, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_INGR_color_clamp */ \
\
    /* GL_INGR_interlace_read */ \
\
    /* GL_INTEL_map_texture */ \
    FGPP_GL_FUNCTION( , void, SyncTextureINTEL, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, UnmapTexture2DINTEL, ( GLuint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( nullptr, void *, MapTexture2DINTEL, ( GLuint _1, GLint _2, GLbitfield _3, const GLint * _4, const GLenum * _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_INTEL_parallel_arrays */ \
    FGPP_GL_FUNCTION( , void, VertexPointervINTEL, ( GLint _1, GLenum _2, const GLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, NormalPointervINTEL, ( GLenum _1, const GLvoid ** _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ColorPointervINTEL, ( GLint _1, GLenum _2, const GLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoordPointervINTEL, ( GLint _1, GLenum _2, const GLvoid ** _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_MESAX_texture_stack */ \
\
    /* GL_MESA_pack_invert */ \
\
    /* GL_MESA_resize_buffers */ \
    FGPP_GL_FUNCTION( , void, ResizeBuffersMESA, ( ), ( ) ) \
\
    /* GL_MESA_window_pos */ \
    FGPP_GL_FUNCTION( , void, WindowPos2dMESA, ( GLdouble _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2dvMESA, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2fMESA, ( GLfloat _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2fvMESA, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2iMESA, ( GLint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2ivMESA, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2sMESA, ( GLshort _1, GLshort _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos2svMESA, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3dMESA, ( GLdouble _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3dvMESA, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3fMESA, ( GLfloat _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3fvMESA, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3iMESA, ( GLint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3ivMESA, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3sMESA, ( GLshort _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos3svMESA, ( const GLshort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos4dMESA, ( GLdouble _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos4dvMESA, ( const GLdouble * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos4fMESA, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos4fvMESA, ( const GLfloat * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos4iMESA, ( GLint _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos4ivMESA, ( const GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos4sMESA, ( GLshort _1, GLshort _2, GLshort _3, GLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, WindowPos4svMESA, ( const GLshort * _1 ), ( _1 ) ) \
\
    /* GL_MESA_ycbcr_texture */ \
\
    /* GL_NVX_conditional_render */ \
    FGPP_GL_FUNCTION( , void, BeginConditionalRenderNVX, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EndConditionalRenderNVX, ( ), ( ) ) \
\
    /* GL_NV_bindless_multi_draw_indirect */ \
    FGPP_GL_FUNCTION( , void, MultiDrawArraysIndirectBindlessNV, ( GLenum _1, const GLvoid * _2, GLsizei _3, GLsizei _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiDrawElementsIndirectBindlessNV, ( GLenum _1, GLenum _2, const GLvoid * _3, GLsizei _4, GLsizei _5, GLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_NV_bindless_texture */ \
    FGPP_GL_FUNCTION( 0, GLuint64, GetTextureHandleNV, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint64, GetTextureSamplerHandleNV, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MakeTextureHandleResidentNV, ( GLuint64 _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MakeTextureHandleNonResidentNV, ( GLuint64 _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint64, GetImageHandleNV, ( GLuint _1, GLint _2, GLboolean _3, GLint _4, GLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MakeImageHandleResidentNV, ( GLuint64 _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MakeImageHandleNonResidentNV, ( GLuint64 _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, UniformHandleui64NV, ( GLint _1, GLuint64 _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, UniformHandleui64vNV, ( GLint _1, GLsizei _2, const GLuint64 * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformHandleui64NV, ( GLuint _1, GLint _2, GLuint64 _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformHandleui64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64 * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsTextureHandleResidentNV, ( GLuint64 _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsImageHandleResidentNV, ( GLuint64 _1 ), ( _1 ) ) \
\
    /* GL_NV_blend_equation_advanced */ \
    FGPP_GL_FUNCTION( , void, BlendParameteriNV, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, BlendBarrierNV, ( ), ( ) ) \
\
    /* GL_NV_blend_equation_advanced_coherent */ \
\
    /* GL_NV_blend_square */ \
\
    /* GL_NV_compute_program5 */ \
\
    /* GL_NV_conditional_render */ \
    FGPP_GL_FUNCTION( , void, BeginConditionalRenderNV, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, EndConditionalRenderNV, ( ), ( ) ) \
\
    /* GL_NV_copy_depth_to_color */ \
\
    /* GL_NV_copy_image */ \
    FGPP_GL_FUNCTION( , void, CopyImageSubDataNV, ( GLuint _1, GLenum _2, GLint _3, GLint _4, GLint _5, GLint _6, GLuint _7, GLenum _8, GLint _9, GLint _10, GLint _11, GLint _12, GLsizei _13, GLsizei _14, GLsizei _15 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 ) ) \
\
    /* GL_NV_deep_texture3D */ \
\
    /* GL_NV_depth_buffer_float */ \
    FGPP_GL_FUNCTION( , void, DepthRangedNV, ( GLdouble _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ClearDepthdNV, ( GLdouble _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DepthBoundsdNV, ( GLdouble _1, GLdouble _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_depth_clamp */ \
\
    /* GL_NV_draw_texture */ \
    FGPP_GL_FUNCTION( , void, DrawTextureNV, ( GLuint _1, GLuint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
\
    /* GL_NV_evaluators */ \
    FGPP_GL_FUNCTION( , void, MapControlPointsNV, ( GLenum _1, GLuint _2, GLenum _3, GLsizei _4, GLsizei _5, GLint _6, GLint _7, GLboolean _8, const GLvoid * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, MapParameterivNV, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MapParameterfvNV, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetMapControlPointsNV, ( GLenum _1, GLuint _2, GLenum _3, GLsizei _4, GLsizei _5, GLboolean _6, GLvoid * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, GetMapParameterivNV, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetMapParameterfvNV, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetMapAttribParameterivNV, ( GLenum _1, GLuint _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetMapAttribParameterfvNV, ( GLenum _1, GLuint _2, GLenum _3, GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, EvalMapsNV, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_explicit_multisample */ \
    FGPP_GL_FUNCTION( , void, GetMultisamplefvNV, ( GLenum _1, GLuint _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SampleMaskIndexedNV, ( GLuint _1, GLbitfield _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexRenderbufferNV, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_fence */ \
    FGPP_GL_FUNCTION( , void, DeleteFencesNV, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenFencesNV, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsFenceNV, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, TestFenceNV, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetFenceivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FinishFenceNV, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SetFenceNV, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_float_buffer */ \
\
    /* GL_NV_fog_distance */ \
\
    /* GL_NV_fragment_program */ \
    FGPP_GL_FUNCTION( , void, ProgramNamedParameter4fNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramNamedParameter4fvNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramNamedParameter4dNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, GLdouble _4, GLdouble _5, GLdouble _6, GLdouble _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramNamedParameter4dvNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramNamedParameterfvNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramNamedParameterdvNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_NV_fragment_program2 */ \
\
    /* GL_NV_fragment_program4 */ \
\
    /* GL_NV_fragment_program_option */ \
\
    /* GL_NV_framebuffer_multisample_coverage */ \
    FGPP_GL_FUNCTION( , void, RenderbufferStorageMultisampleCoverageNV, ( GLenum _1, GLsizei _2, GLsizei _3, GLenum _4, GLsizei _5, GLsizei _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
\
    /* GL_NV_geometry_program4 */ \
    FGPP_GL_FUNCTION( , void, ProgramVertexLimitNV, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTextureEXT, ( GLenum _1, GLenum _2, GLuint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTextureLayerEXT, ( GLenum _1, GLenum _2, GLuint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, FramebufferTextureFaceEXT, ( GLenum _1, GLenum _2, GLuint _3, GLint _4, GLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_NV_geometry_shader4 */ \
\
    /* GL_NV_gpu_program4 */ \
    FGPP_GL_FUNCTION( , void, ProgramLocalParameterI4iNV, ( GLenum _1, GLuint _2, GLint _3, GLint _4, GLint _5, GLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramLocalParameterI4ivNV, ( GLenum _1, GLuint _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramLocalParametersI4ivNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramLocalParameterI4uiNV, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramLocalParameterI4uivNV, ( GLenum _1, GLuint _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramLocalParametersI4uivNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramEnvParameterI4iNV, ( GLenum _1, GLuint _2, GLint _3, GLint _4, GLint _5, GLint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramEnvParameterI4ivNV, ( GLenum _1, GLuint _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramEnvParametersI4ivNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramEnvParameterI4uiNV, ( GLenum _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5, GLuint _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramEnvParameterI4uivNV, ( GLenum _1, GLuint _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramEnvParametersI4uivNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramLocalParameterIivNV, ( GLenum _1, GLuint _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramLocalParameterIuivNV, ( GLenum _1, GLuint _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramEnvParameterIivNV, ( GLenum _1, GLuint _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramEnvParameterIuivNV, ( GLenum _1, GLuint _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_gpu_program5 */ \
    FGPP_GL_FUNCTION( , void, ProgramSubroutineParametersuivNV, ( GLenum _1, GLsizei _2, const GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramSubroutineParameteruivNV, ( GLenum _1, GLuint _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_gpu_program5_mem_extended */ \
\
    /* GL_NV_gpu_shader5 */ \
    FGPP_GL_FUNCTION( , void, Uniform1i64NV, ( GLint _1, GLint64EXT _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2i64NV, ( GLint _1, GLint64EXT _2, GLint64EXT _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3i64NV, ( GLint _1, GLint64EXT _2, GLint64EXT _3, GLint64EXT _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4i64NV, ( GLint _1, GLint64EXT _2, GLint64EXT _3, GLint64EXT _4, GLint64EXT _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1i64vNV, ( GLint _1, GLsizei _2, const GLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2i64vNV, ( GLint _1, GLsizei _2, const GLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3i64vNV, ( GLint _1, GLsizei _2, const GLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4i64vNV, ( GLint _1, GLsizei _2, const GLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1ui64NV, ( GLint _1, GLuint64EXT _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2ui64NV, ( GLint _1, GLuint64EXT _2, GLuint64EXT _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3ui64NV, ( GLint _1, GLuint64EXT _2, GLuint64EXT _3, GLuint64EXT _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4ui64NV, ( GLint _1, GLuint64EXT _2, GLuint64EXT _3, GLuint64EXT _4, GLuint64EXT _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform1ui64vNV, ( GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform2ui64vNV, ( GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform3ui64vNV, ( GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Uniform4ui64vNV, ( GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetUniformi64vNV, ( GLuint _1, GLint _2, GLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1i64NV, ( GLuint _1, GLint _2, GLint64EXT _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2i64NV, ( GLuint _1, GLint _2, GLint64EXT _3, GLint64EXT _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3i64NV, ( GLuint _1, GLint _2, GLint64EXT _3, GLint64EXT _4, GLint64EXT _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4i64NV, ( GLuint _1, GLint _2, GLint64EXT _3, GLint64EXT _4, GLint64EXT _5, GLint64EXT _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1i64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2i64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3i64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4i64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1ui64NV, ( GLuint _1, GLint _2, GLuint64EXT _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2ui64NV, ( GLuint _1, GLint _2, GLuint64EXT _3, GLuint64EXT _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3ui64NV, ( GLuint _1, GLint _2, GLuint64EXT _3, GLuint64EXT _4, GLuint64EXT _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4ui64NV, ( GLuint _1, GLint _2, GLuint64EXT _3, GLuint64EXT _4, GLuint64EXT _5, GLuint64EXT _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform1ui64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform2ui64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform3ui64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniform4ui64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_NV_half_float */ \
    FGPP_GL_FUNCTION( , void, Vertex2hNV, ( GLhalfNV _1, GLhalfNV _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex2hvNV, ( const GLhalfNV * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex3hvNV, ( const GLhalfNV * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Vertex4hvNV, ( const GLhalfNV * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3hvNV, ( const GLhalfNV * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color3hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, Color3hvNV, ( const GLhalfNV * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, Color4hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, Color4hvNV, ( const GLhalfNV * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1hNV, ( GLhalfNV _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord1hvNV, ( const GLhalfNV * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2hNV, ( GLhalfNV _1, GLhalfNV _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2hvNV, ( const GLhalfNV * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord3hvNV, ( const GLhalfNV * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4hvNV, ( const GLhalfNV * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1hNV, ( GLenum _1, GLhalfNV _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord1hvNV, ( GLenum _1, const GLhalfNV * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2hNV, ( GLenum _1, GLhalfNV _2, GLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord2hvNV, ( GLenum _1, const GLhalfNV * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3hNV, ( GLenum _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord3hvNV, ( GLenum _1, const GLhalfNV * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4hNV, ( GLenum _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4, GLhalfNV _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, MultiTexCoord4hvNV, ( GLenum _1, const GLhalfNV * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FogCoordhNV, ( GLhalfNV _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, FogCoordhvNV, ( const GLhalfNV * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3hNV, ( GLhalfNV _1, GLhalfNV _2, GLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColor3hvNV, ( const GLhalfNV * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, VertexWeighthNV, ( GLhalfNV _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, VertexWeighthvNV, ( const GLhalfNV * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1hNV, ( GLuint _1, GLhalfNV _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1hvNV, ( GLuint _1, const GLhalfNV * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2hNV, ( GLuint _1, GLhalfNV _2, GLhalfNV _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2hvNV, ( GLuint _1, const GLhalfNV * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3hNV, ( GLuint _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3hvNV, ( GLuint _1, const GLhalfNV * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4hNV, ( GLuint _1, GLhalfNV _2, GLhalfNV _3, GLhalfNV _4, GLhalfNV _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4hvNV, ( GLuint _1, const GLhalfNV * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs1hvNV, ( GLuint _1, GLsizei _2, const GLhalfNV * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs2hvNV, ( GLuint _1, GLsizei _2, const GLhalfNV * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs3hvNV, ( GLuint _1, GLsizei _2, const GLhalfNV * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs4hvNV, ( GLuint _1, GLsizei _2, const GLhalfNV * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_light_max_exponent */ \
\
    /* GL_NV_multisample_coverage */ \
\
    /* GL_NV_multisample_filter_hint */ \
\
    /* GL_NV_occlusion_query */ \
    FGPP_GL_FUNCTION( , void, GenOcclusionQueriesNV, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteOcclusionQueriesNV, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsOcclusionQueryNV, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BeginOcclusionQueryNV, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EndOcclusionQueryNV, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, GetOcclusionQueryivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetOcclusionQueryuivNV, ( GLuint _1, GLenum _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_packed_depth_stencil */ \
\
    /* GL_NV_parameter_buffer_object */ \
    FGPP_GL_FUNCTION( , void, ProgramBufferParametersfvNV, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramBufferParametersIivNV, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4, const GLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramBufferParametersIuivNV, ( GLenum _1, GLuint _2, GLuint _3, GLsizei _4, const GLuint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_NV_parameter_buffer_object2 */ \
\
    /* GL_NV_path_rendering */ \
    FGPP_GL_FUNCTION( 0, GLuint, GenPathsNV, ( GLsizei _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DeletePathsNV, ( GLuint _1, GLsizei _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsPathNV, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PathCommandsNV, ( GLuint _1, GLsizei _2, const GLubyte * _3, GLsizei _4, GLenum _5, const GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, PathCoordsNV, ( GLuint _1, GLsizei _2, GLenum _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, PathSubCommandsNV, ( GLuint _1, GLsizei _2, GLsizei _3, GLsizei _4, const GLubyte * _5, GLsizei _6, GLenum _7, const GLvoid * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, PathSubCoordsNV, ( GLuint _1, GLsizei _2, GLsizei _3, GLenum _4, const GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, PathStringNV, ( GLuint _1, GLenum _2, GLsizei _3, const GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, PathGlyphsNV, ( GLuint _1, GLenum _2, const GLvoid * _3, GLbitfield _4, GLsizei _5, GLenum _6, const GLvoid * _7, GLenum _8, GLuint _9, GLfloat _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, PathGlyphRangeNV, ( GLuint _1, GLenum _2, const GLvoid * _3, GLbitfield _4, GLuint _5, GLsizei _6, GLenum _7, GLuint _8, GLfloat _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, WeightPathsNV, ( GLuint _1, GLsizei _2, const GLuint * _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, CopyPathNV, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, InterpolatePathsNV, ( GLuint _1, GLuint _2, GLuint _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TransformPathNV, ( GLuint _1, GLuint _2, GLenum _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, PathParameterivNV, ( GLuint _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PathParameteriNV, ( GLuint _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PathParameterfvNV, ( GLuint _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PathParameterfNV, ( GLuint _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PathDashArrayNV, ( GLuint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PathStencilFuncNV, ( GLenum _1, GLint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, PathStencilDepthOffsetNV, ( GLfloat _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, StencilFillPathNV, ( GLuint _1, GLenum _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, StencilStrokePathNV, ( GLuint _1, GLint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, StencilFillPathInstancedNV, ( GLsizei _1, GLenum _2, const GLvoid * _3, GLuint _4, GLenum _5, GLuint _6, GLenum _7, const GLfloat * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, StencilStrokePathInstancedNV, ( GLsizei _1, GLenum _2, const GLvoid * _3, GLuint _4, GLint _5, GLuint _6, GLenum _7, const GLfloat * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, PathCoverDepthFuncNV, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PathColorGenNV, ( GLenum _1, GLenum _2, GLenum _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, PathTexGenNV, ( GLenum _1, GLenum _2, GLint _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, PathFogGenNV, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, CoverFillPathNV, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, CoverStrokePathNV, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, CoverFillPathInstancedNV, ( GLsizei _1, GLenum _2, const GLvoid * _3, GLuint _4, GLenum _5, GLenum _6, const GLfloat * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, CoverStrokePathInstancedNV, ( GLsizei _1, GLenum _2, const GLvoid * _3, GLuint _4, GLenum _5, GLenum _6, const GLfloat * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, GetPathParameterivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetPathParameterfvNV, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetPathCommandsNV, ( GLuint _1, GLubyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetPathCoordsNV, ( GLuint _1, GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetPathDashArrayNV, ( GLuint _1, GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetPathMetricsNV, ( GLbitfield _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLuint _5, GLsizei _6, GLfloat * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, GetPathMetricRangeNV, ( GLbitfield _1, GLuint _2, GLsizei _3, GLsizei _4, GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetPathSpacingNV, ( GLenum _1, GLsizei _2, GLenum _3, const GLvoid * _4, GLuint _5, GLfloat _6, GLfloat _7, GLenum _8, GLfloat * _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, GetPathColorGenivNV, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetPathColorGenfvNV, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetPathTexGenivNV, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetPathTexGenfvNV, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsPointInFillPathNV, ( GLuint _1, GLuint _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsPointInStrokePathNV, ( GLuint _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLfloat, GetPathLengthNV, ( GLuint _1, GLsizei _2, GLsizei _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, PointAlongPathNV, ( GLuint _1, GLsizei _2, GLsizei _3, GLfloat _4, GLfloat * _5, GLfloat * _6, GLfloat * _7, GLfloat * _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
\
    /* GL_NV_pixel_data_range */ \
    FGPP_GL_FUNCTION( , void, PixelDataRangeNV, ( GLenum _1, GLsizei _2, const GLvoid * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FlushPixelDataRangeNV, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_NV_point_sprite */ \
    FGPP_GL_FUNCTION( , void, PointParameteriNV, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PointParameterivNV, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_present_video */ \
    FGPP_GL_FUNCTION( , void, PresentFrameKeyedNV, ( GLuint _1, GLuint64EXT _2, GLuint _3, GLuint _4, GLenum _5, GLenum _6, GLuint _7, GLuint _8, GLenum _9, GLuint _10, GLuint _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FGPP_GL_FUNCTION( , void, PresentFrameDualFillNV, ( GLuint _1, GLuint64EXT _2, GLuint _3, GLuint _4, GLenum _5, GLenum _6, GLuint _7, GLenum _8, GLuint _9, GLenum _10, GLuint _11, GLenum _12, GLuint _13 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
    FGPP_GL_FUNCTION( , void, GetVideoivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVideouivNV, ( GLuint _1, GLenum _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVideoi64vNV, ( GLuint _1, GLenum _2, GLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVideoui64vNV, ( GLuint _1, GLenum _2, GLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_primitive_restart */ \
    FGPP_GL_FUNCTION( , void, PrimitiveRestartNV, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, PrimitiveRestartIndexNV, ( GLuint _1 ), ( _1 ) ) \
\
    /* GL_NV_register_combiners */ \
    FGPP_GL_FUNCTION( , void, CombinerParameterfvNV, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, CombinerParameterfNV, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, CombinerParameterivNV, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, CombinerParameteriNV, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, CombinerInputNV, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5, GLenum _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, CombinerOutputNV, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4, GLenum _5, GLenum _6, GLenum _7, GLboolean _8, GLboolean _9, GLboolean _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, FinalCombinerInputNV, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetCombinerInputParameterfvNV, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4, GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetCombinerInputParameterivNV, ( GLenum _1, GLenum _2, GLenum _3, GLenum _4, GLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetCombinerOutputParameterfvNV, ( GLenum _1, GLenum _2, GLenum _3, GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetCombinerOutputParameterivNV, ( GLenum _1, GLenum _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetFinalCombinerInputParameterfvNV, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetFinalCombinerInputParameterivNV, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_register_combiners2 */ \
    FGPP_GL_FUNCTION( , void, CombinerStageParameterfvNV, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetCombinerStageParameterfvNV, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_shader_atomic_counters */ \
\
    /* GL_NV_shader_atomic_float */ \
\
    /* GL_NV_shader_buffer_load */ \
    FGPP_GL_FUNCTION( , void, MakeBufferResidentNV, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MakeBufferNonResidentNV, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsBufferResidentNV, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, MakeNamedBufferResidentNV, ( GLuint _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, MakeNamedBufferNonResidentNV, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsNamedBufferResidentNV, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetBufferParameterui64vNV, ( GLenum _1, GLenum _2, GLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetNamedBufferParameterui64vNV, ( GLuint _1, GLenum _2, GLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetIntegerui64vNV, ( GLenum _1, GLuint64EXT * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Uniformui64NV, ( GLint _1, GLuint64EXT _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Uniformui64vNV, ( GLint _1, GLsizei _2, const GLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetUniformui64vNV, ( GLuint _1, GLint _2, GLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformui64NV, ( GLuint _1, GLint _2, GLuint64EXT _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramUniformui64vNV, ( GLuint _1, GLint _2, GLsizei _3, const GLuint64EXT * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_NV_shader_buffer_store */ \
\
    /* GL_NV_shader_storage_buffer_object */ \
\
    /* GL_NV_tessellation_program5 */ \
\
    /* GL_NV_texgen_emboss */ \
\
    /* GL_NV_texgen_reflection */ \
\
    /* GL_NV_texture_barrier */ \
    FGPP_GL_FUNCTION( , void, TextureBarrierNV, ( ), ( ) ) \
\
    /* GL_NV_texture_compression_vtc */ \
\
    /* GL_NV_texture_env_combine4 */ \
\
    /* GL_NV_texture_expand_normal */ \
\
    /* GL_NV_texture_multisample */ \
    FGPP_GL_FUNCTION( , void, TexImage2DMultisampleCoverageNV, ( GLenum _1, GLsizei _2, GLsizei _3, GLint _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, TexImage3DMultisampleCoverageNV, ( GLenum _1, GLsizei _2, GLsizei _3, GLint _4, GLsizei _5, GLsizei _6, GLsizei _7, GLboolean _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, TextureImage2DMultisampleNV, ( GLuint _1, GLenum _2, GLsizei _3, GLint _4, GLsizei _5, GLsizei _6, GLboolean _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, TextureImage3DMultisampleNV, ( GLuint _1, GLenum _2, GLsizei _3, GLint _4, GLsizei _5, GLsizei _6, GLsizei _7, GLboolean _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, TextureImage2DMultisampleCoverageNV, ( GLuint _1, GLenum _2, GLsizei _3, GLsizei _4, GLint _5, GLsizei _6, GLsizei _7, GLboolean _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, TextureImage3DMultisampleCoverageNV, ( GLuint _1, GLenum _2, GLsizei _3, GLsizei _4, GLint _5, GLsizei _6, GLsizei _7, GLsizei _8, GLboolean _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
\
    /* GL_NV_texture_rectangle */ \
\
    /* GL_NV_texture_shader */ \
\
    /* GL_NV_texture_shader2 */ \
\
    /* GL_NV_texture_shader3 */ \
\
    /* GL_NV_transform_feedback */ \
    FGPP_GL_FUNCTION( , void, BeginTransformFeedbackNV, ( GLenum _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, EndTransformFeedbackNV, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, TransformFeedbackAttribsNV, ( GLuint _1, const GLint * _2, GLenum _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BindBufferRangeNV, ( GLenum _1, GLuint _2, GLuint _3, GLintptr _4, GLsizeiptr _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, BindBufferOffsetNV, ( GLenum _1, GLuint _2, GLuint _3, GLintptr _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, BindBufferBaseNV, ( GLenum _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TransformFeedbackVaryingsNV, ( GLuint _1, GLsizei _2, const GLint * _3, GLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ActiveVaryingNV, ( GLuint _1, const GLchar * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, GetVaryingLocationNV, ( GLuint _1, const GLchar * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetActiveVaryingNV, ( GLuint _1, GLuint _2, GLsizei _3, GLsizei * _4, GLsizei * _5, GLenum * _6, GLchar * _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, GetTransformFeedbackVaryingNV, ( GLuint _1, GLuint _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TransformFeedbackStreamAttribsNV, ( GLsizei _1, const GLint * _2, GLsizei _3, const GLint * _4, GLenum _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_NV_transform_feedback2 */ \
    FGPP_GL_FUNCTION( , void, BindTransformFeedbackNV, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteTransformFeedbacksNV, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GenTransformFeedbacksNV, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsTransformFeedbackNV, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, PauseTransformFeedbackNV, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, ResumeTransformFeedbackNV, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, DrawTransformFeedbackNV, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_vdpau_interop */ \
    FGPP_GL_FUNCTION( , void, VDPAUInitNV, ( const GLvoid * _1, const GLvoid * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VDPAUFiniNV, ( ), ( ) ) \
    FGPP_GL_FUNCTION( 0, GLvdpauSurfaceNV, VDPAURegisterVideoSurfaceNV, ( const GLvoid * _1, GLenum _2, GLsizei _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( 0, GLvdpauSurfaceNV, VDPAURegisterOutputSurfaceNV, ( const GLvoid * _1, GLenum _2, GLsizei _3, const GLuint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VDPAUIsSurfaceNV, ( GLvdpauSurfaceNV _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, VDPAUUnregisterSurfaceNV, ( GLvdpauSurfaceNV _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, VDPAUGetSurfaceivNV, ( GLvdpauSurfaceNV _1, GLenum _2, GLsizei _3, GLsizei * _4, GLint * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VDPAUSurfaceAccessNV, ( GLvdpauSurfaceNV _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VDPAUMapSurfacesNV, ( GLsizei _1, const GLvdpauSurfaceNV * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VDPAUUnmapSurfacesNV, ( GLsizei _1, const GLvdpauSurfaceNV * _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_vertex_array_range */ \
    FGPP_GL_FUNCTION( , void, FlushVertexArrayRangeNV, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, VertexArrayRangeNV, ( GLsizei _1, const GLvoid * _2 ), ( _1, _2 ) ) \
\
    /* GL_NV_vertex_array_range2 */ \
\
    /* GL_NV_vertex_attrib_integer_64bit */ \
    FGPP_GL_FUNCTION( , void, VertexAttribL1i64NV, ( GLuint _1, GLint64EXT _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL2i64NV, ( GLuint _1, GLint64EXT _2, GLint64EXT _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL3i64NV, ( GLuint _1, GLint64EXT _2, GLint64EXT _3, GLint64EXT _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL4i64NV, ( GLuint _1, GLint64EXT _2, GLint64EXT _3, GLint64EXT _4, GLint64EXT _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL1i64vNV, ( GLuint _1, const GLint64EXT * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL2i64vNV, ( GLuint _1, const GLint64EXT * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL3i64vNV, ( GLuint _1, const GLint64EXT * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL4i64vNV, ( GLuint _1, const GLint64EXT * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL1ui64NV, ( GLuint _1, GLuint64EXT _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL2ui64NV, ( GLuint _1, GLuint64EXT _2, GLuint64EXT _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL3ui64NV, ( GLuint _1, GLuint64EXT _2, GLuint64EXT _3, GLuint64EXT _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL4ui64NV, ( GLuint _1, GLuint64EXT _2, GLuint64EXT _3, GLuint64EXT _4, GLuint64EXT _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL1ui64vNV, ( GLuint _1, const GLuint64EXT * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL2ui64vNV, ( GLuint _1, const GLuint64EXT * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL3ui64vNV, ( GLuint _1, const GLuint64EXT * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribL4ui64vNV, ( GLuint _1, const GLuint64EXT * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribLi64vNV, ( GLuint _1, GLenum _2, GLint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribLui64vNV, ( GLuint _1, GLenum _2, GLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribLFormatNV, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_NV_vertex_buffer_unified_memory */ \
    FGPP_GL_FUNCTION( , void, BufferAddressRangeNV, ( GLenum _1, GLuint _2, GLuint64EXT _3, GLsizeiptr _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexFormatNV, ( GLint _1, GLenum _2, GLsizei _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, NormalFormatNV, ( GLenum _1, GLsizei _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ColorFormatNV, ( GLint _1, GLenum _2, GLsizei _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, IndexFormatNV, ( GLenum _1, GLsizei _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoordFormatNV, ( GLint _1, GLenum _2, GLsizei _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, EdgeFlagFormatNV, ( GLsizei _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, SecondaryColorFormatNV, ( GLint _1, GLenum _2, GLsizei _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FogCoordFormatNV, ( GLenum _1, GLsizei _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribFormatNV, ( GLuint _1, GLint _2, GLenum _3, GLboolean _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribIFormatNV, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetIntegerui64i_vNV, ( GLenum _1, GLuint _2, GLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_vertex_program */ \
    FGPP_GL_FUNCTION( 0, GLboolean, AreProgramsResidentNV, ( GLsizei _1, const GLuint * _2, GLboolean * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, BindProgramNV, ( GLenum _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteProgramsNV, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ExecuteProgramNV, ( GLenum _1, GLuint _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GenProgramsNV, ( GLsizei _1, GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramParameterdvNV, ( GLenum _1, GLuint _2, GLenum _3, GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramParameterfvNV, ( GLenum _1, GLuint _2, GLenum _3, GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetProgramStringNV, ( GLuint _1, GLenum _2, GLubyte * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetTrackMatrixivNV, ( GLenum _1, GLuint _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribdvNV, ( GLuint _1, GLenum _2, GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribfvNV, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribPointervNV, ( GLuint _1, GLenum _2, GLvoid ** _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsProgramNV, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, LoadProgramNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLubyte * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramParameter4dNV, ( GLenum _1, GLuint _2, GLdouble _3, GLdouble _4, GLdouble _5, GLdouble _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramParameter4dvNV, ( GLenum _1, GLuint _2, const GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramParameter4fNV, ( GLenum _1, GLuint _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramParameter4fvNV, ( GLenum _1, GLuint _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramParameters4dvNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ProgramParameters4fvNV, ( GLenum _1, GLuint _2, GLsizei _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, RequestResidentProgramsNV, ( GLsizei _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TrackMatrixNV, ( GLenum _1, GLuint _2, GLenum _3, GLenum _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribPointerNV, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1dNV, ( GLuint _1, GLdouble _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1dvNV, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1fNV, ( GLuint _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1fvNV, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1sNV, ( GLuint _1, GLshort _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib1svNV, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2dNV, ( GLuint _1, GLdouble _2, GLdouble _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2dvNV, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2fNV, ( GLuint _1, GLfloat _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2fvNV, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2sNV, ( GLuint _1, GLshort _2, GLshort _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib2svNV, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3dNV, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3dvNV, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3fNV, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3fvNV, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3sNV, ( GLuint _1, GLshort _2, GLshort _3, GLshort _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib3svNV, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4dNV, ( GLuint _1, GLdouble _2, GLdouble _3, GLdouble _4, GLdouble _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4dvNV, ( GLuint _1, const GLdouble * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4fNV, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4fvNV, ( GLuint _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4sNV, ( GLuint _1, GLshort _2, GLshort _3, GLshort _4, GLshort _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4svNV, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4ubNV, ( GLuint _1, GLubyte _2, GLubyte _3, GLubyte _4, GLubyte _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttrib4ubvNV, ( GLuint _1, const GLubyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs1dvNV, ( GLuint _1, GLsizei _2, const GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs1fvNV, ( GLuint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs1svNV, ( GLuint _1, GLsizei _2, const GLshort * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs2dvNV, ( GLuint _1, GLsizei _2, const GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs2fvNV, ( GLuint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs2svNV, ( GLuint _1, GLsizei _2, const GLshort * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs3dvNV, ( GLuint _1, GLsizei _2, const GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs3fvNV, ( GLuint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs3svNV, ( GLuint _1, GLsizei _2, const GLshort * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs4dvNV, ( GLuint _1, GLsizei _2, const GLdouble * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs4fvNV, ( GLuint _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs4svNV, ( GLuint _1, GLsizei _2, const GLshort * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribs4ubvNV, ( GLuint _1, GLsizei _2, const GLubyte * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_vertex_program1_1 */ \
\
    /* GL_NV_vertex_program2 */ \
\
    /* GL_NV_vertex_program2_option */ \
\
    /* GL_NV_vertex_program3 */ \
\
    /* GL_NV_vertex_program4 */ \
    FGPP_GL_FUNCTION( , void, VertexAttribI1iEXT, ( GLuint _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI2iEXT, ( GLuint _1, GLint _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI3iEXT, ( GLuint _1, GLint _2, GLint _3, GLint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4iEXT, ( GLuint _1, GLint _2, GLint _3, GLint _4, GLint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI1uiEXT, ( GLuint _1, GLuint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI2uiEXT, ( GLuint _1, GLuint _2, GLuint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI3uiEXT, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4uiEXT, ( GLuint _1, GLuint _2, GLuint _3, GLuint _4, GLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI1ivEXT, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI2ivEXT, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI3ivEXT, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4ivEXT, ( GLuint _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI1uivEXT, ( GLuint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI2uivEXT, ( GLuint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI3uivEXT, ( GLuint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4uivEXT, ( GLuint _1, const GLuint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4bvEXT, ( GLuint _1, const GLbyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4svEXT, ( GLuint _1, const GLshort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4ubvEXT, ( GLuint _1, const GLubyte * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribI4usvEXT, ( GLuint _1, const GLushort * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, VertexAttribIPointerEXT, ( GLuint _1, GLint _2, GLenum _3, GLsizei _4, const GLvoid * _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribIivEXT, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVertexAttribIuivEXT, ( GLuint _1, GLenum _2, GLuint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_NV_video_capture */ \
    FGPP_GL_FUNCTION( , void, BeginVideoCaptureNV, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, BindVideoCaptureStreamBufferNV, ( GLuint _1, GLuint _2, GLenum _3, GLintptrARB _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, BindVideoCaptureStreamTextureNV, ( GLuint _1, GLuint _2, GLenum _3, GLenum _4, GLuint _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, EndVideoCaptureNV, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GetVideoCaptureivNV, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetVideoCaptureStreamivNV, ( GLuint _1, GLuint _2, GLenum _3, GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetVideoCaptureStreamfvNV, ( GLuint _1, GLuint _2, GLenum _3, GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetVideoCaptureStreamdvNV, ( GLuint _1, GLuint _2, GLenum _3, GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( 0, GLenum, VideoCaptureNV, ( GLuint _1, GLuint * _2, GLuint64EXT * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, VideoCaptureStreamParameterivNV, ( GLuint _1, GLuint _2, GLenum _3, const GLint * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VideoCaptureStreamParameterfvNV, ( GLuint _1, GLuint _2, GLenum _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, VideoCaptureStreamParameterdvNV, ( GLuint _1, GLuint _2, GLenum _3, const GLdouble * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_OML_interlace */ \
\
    /* GL_OML_resample */ \
\
    /* GL_OML_subsample */ \
\
    /* GL_PGI_misc_hints */ \
    FGPP_GL_FUNCTION( , void, HintPGI, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
\
    /* GL_PGI_vertex_hints */ \
\
    /* GL_REND_screen_coordinates */ \
\
    /* GL_S3_s3tc */ \
\
    /* GL_SGIS_detail_texture */ \
    FGPP_GL_FUNCTION( , void, DetailTexFuncSGIS, ( GLenum _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetDetailTexFuncSGIS, ( GLenum _1, GLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIS_fog_function */ \
    FGPP_GL_FUNCTION( , void, FogFuncSGIS, ( GLsizei _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetFogFuncSGIS, ( GLfloat * _1 ), ( _1 ) ) \
\
    /* GL_SGIS_generate_mipmap */ \
\
    /* GL_SGIS_multisample */ \
    FGPP_GL_FUNCTION( , void, SampleMaskSGIS, ( GLclampf _1, GLboolean _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, SamplePatternSGIS, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_SGIS_pixel_texture */ \
    FGPP_GL_FUNCTION( , void, PixelTexGenParameteriSGIS, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PixelTexGenParameterivSGIS, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PixelTexGenParameterfSGIS, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PixelTexGenParameterfvSGIS, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetPixelTexGenParameterivSGIS, ( GLenum _1, GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, GetPixelTexGenParameterfvSGIS, ( GLenum _1, GLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIS_point_line_texgen */ \
\
    /* GL_SGIS_point_parameters */ \
    FGPP_GL_FUNCTION( , void, PointParameterfSGIS, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, PointParameterfvSGIS, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIS_sharpen_texture */ \
    FGPP_GL_FUNCTION( , void, SharpenTexFuncSGIS, ( GLenum _1, GLsizei _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetSharpenTexFuncSGIS, ( GLenum _1, GLfloat * _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIS_texture4D */ \
    FGPP_GL_FUNCTION( , void, TexImage4DSGIS, ( GLenum _1, GLint _2, GLenum _3, GLsizei _4, GLsizei _5, GLsizei _6, GLsizei _7, GLint _8, GLenum _9, GLenum _10, const GLvoid * _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FGPP_GL_FUNCTION( , void, TexSubImage4DSGIS, ( GLenum _1, GLint _2, GLint _3, GLint _4, GLint _5, GLint _6, GLsizei _7, GLsizei _8, GLsizei _9, GLsizei _10, GLenum _11, GLenum _12, const GLvoid * _13 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
\
    /* GL_SGIS_texture_border_clamp */ \
\
    /* GL_SGIS_texture_color_mask */ \
    FGPP_GL_FUNCTION( , void, TextureColorMaskSGIS, ( GLboolean _1, GLboolean _2, GLboolean _3, GLboolean _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_SGIS_texture_edge_clamp */ \
\
    /* GL_SGIS_texture_filter4 */ \
    FGPP_GL_FUNCTION( , void, GetTexFilterFuncSGIS, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexFilterFuncSGIS, ( GLenum _1, GLenum _2, GLsizei _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_SGIS_texture_lod */ \
\
    /* GL_SGIS_texture_select */ \
\
    /* GL_SGIX_async */ \
    FGPP_GL_FUNCTION( , void, AsyncMarkerSGIX, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, FinishAsyncSGIX, ( GLuint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, PollAsyncSGIX, ( GLuint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( 0, GLuint, GenAsyncMarkersSGIX, ( GLsizei _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, DeleteAsyncMarkersSGIX, ( GLuint _1, GLsizei _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLboolean, IsAsyncMarkerSGIX, ( GLuint _1 ), ( _1 ) ) \
\
    /* GL_SGIX_async_histogram */ \
\
    /* GL_SGIX_async_pixel */ \
\
    /* GL_SGIX_blend_alpha_minmax */ \
\
    /* GL_SGIX_calligraphic_fragment */ \
\
    /* GL_SGIX_clipmap */ \
\
    /* GL_SGIX_convolution_accuracy */ \
\
    /* GL_SGIX_depth_pass_instrument */ \
\
    /* GL_SGIX_depth_texture */ \
\
    /* GL_SGIX_flush_raster */ \
    FGPP_GL_FUNCTION( , void, FlushRasterSGIX, ( ), ( ) ) \
\
    /* GL_SGIX_fog_offset */ \
\
    /* GL_SGIX_fragment_lighting */ \
    FGPP_GL_FUNCTION( , void, FragmentColorMaterialSGIX, ( GLenum _1, GLenum _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FragmentLightfSGIX, ( GLenum _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FragmentLightfvSGIX, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FragmentLightiSGIX, ( GLenum _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FragmentLightivSGIX, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FragmentLightModelfSGIX, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FragmentLightModelfvSGIX, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FragmentLightModeliSGIX, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FragmentLightModelivSGIX, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, FragmentMaterialfSGIX, ( GLenum _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FragmentMaterialfvSGIX, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FragmentMaterialiSGIX, ( GLenum _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, FragmentMaterialivSGIX, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetFragmentLightfvSGIX, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetFragmentLightivSGIX, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetFragmentMaterialfvSGIX, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetFragmentMaterialivSGIX, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, LightEnviSGIX, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIX_framezoom */ \
    FGPP_GL_FUNCTION( , void, FrameZoomSGIX, ( GLint _1 ), ( _1 ) ) \
\
    /* GL_SGIX_igloo_interface */ \
    FGPP_GL_FUNCTION( , void, IglooInterfaceSGIX, ( GLenum _1, const GLvoid * _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIX_instruments */ \
    FGPP_GL_FUNCTION( 0, GLint, GetInstrumentsSGIX, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, InstrumentsBufferSGIX, ( GLsizei _1, GLint * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( 0, GLint, PollInstrumentsSGIX, ( GLint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ReadInstrumentsSGIX, ( GLint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, StartInstrumentsSGIX, ( ), ( ) ) \
    FGPP_GL_FUNCTION( , void, StopInstrumentsSGIX, ( GLint _1 ), ( _1 ) ) \
\
    /* GL_SGIX_interlace */ \
\
    /* GL_SGIX_ir_instrument1 */ \
\
    /* GL_SGIX_list_priority */ \
    FGPP_GL_FUNCTION( , void, GetListParameterfvSGIX, ( GLuint _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetListParameterivSGIX, ( GLuint _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ListParameterfSGIX, ( GLuint _1, GLenum _2, GLfloat _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ListParameterfvSGIX, ( GLuint _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ListParameteriSGIX, ( GLuint _1, GLenum _2, GLint _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ListParameterivSGIX, ( GLuint _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_SGIX_pixel_texture */ \
    FGPP_GL_FUNCTION( , void, PixelTexGenSGIX, ( GLenum _1 ), ( _1 ) ) \
\
    /* GL_SGIX_pixel_tiles */ \
\
    /* GL_SGIX_polynomial_ffd */ \
    FGPP_GL_FUNCTION( , void, DeformationMap3dSGIX, ( GLenum _1, GLdouble _2, GLdouble _3, GLint _4, GLint _5, GLdouble _6, GLdouble _7, GLint _8, GLint _9, GLdouble _10, GLdouble _11, GLint _12, GLint _13, const GLdouble * _14 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 ) ) \
    FGPP_GL_FUNCTION( , void, DeformationMap3fSGIX, ( GLenum _1, GLfloat _2, GLfloat _3, GLint _4, GLint _5, GLfloat _6, GLfloat _7, GLint _8, GLint _9, GLfloat _10, GLfloat _11, GLint _12, GLint _13, const GLfloat * _14 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14 ) ) \
    FGPP_GL_FUNCTION( , void, DeformSGIX, ( GLbitfield _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, LoadIdentityDeformationMapSGIX, ( GLbitfield _1 ), ( _1 ) ) \
\
    /* GL_SGIX_reference_plane */ \
    FGPP_GL_FUNCTION( , void, ReferencePlaneSGIX, ( const GLdouble * _1 ), ( _1 ) ) \
\
    /* GL_SGIX_resample */ \
\
    /* GL_SGIX_scalebias_hint */ \
\
    /* GL_SGIX_shadow */ \
\
    /* GL_SGIX_shadow_ambient */ \
\
    /* GL_SGIX_sprite */ \
    FGPP_GL_FUNCTION( , void, SpriteParameterfSGIX, ( GLenum _1, GLfloat _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, SpriteParameterfvSGIX, ( GLenum _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, SpriteParameteriSGIX, ( GLenum _1, GLint _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, SpriteParameterivSGIX, ( GLenum _1, const GLint * _2 ), ( _1, _2 ) ) \
\
    /* GL_SGIX_subsample */ \
\
    /* GL_SGIX_tag_sample_buffer */ \
    FGPP_GL_FUNCTION( , void, TagSampleBufferSGIX, ( ), ( ) ) \
\
    /* GL_SGIX_texture_add_env */ \
\
    /* GL_SGIX_texture_coordinate_clamp */ \
\
    /* GL_SGIX_texture_lod_bias */ \
\
    /* GL_SGIX_texture_multi_buffer */ \
\
    /* GL_SGIX_texture_scale_bias */ \
\
    /* GL_SGIX_vertex_preclip */ \
\
    /* GL_SGIX_ycrcb */ \
\
    /* GL_SGIX_ycrcb_subsample */ \
\
    /* GL_SGIX_ycrcba */ \
\
    /* GL_SGI_color_matrix */ \
\
    /* GL_SGI_color_table */ \
    FGPP_GL_FUNCTION( , void, ColorTableSGI, ( GLenum _1, GLenum _2, GLsizei _3, GLenum _4, GLenum _5, const GLvoid * _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ColorTableParameterfvSGI, ( GLenum _1, GLenum _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ColorTableParameterivSGI, ( GLenum _1, GLenum _2, const GLint * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, CopyColorTableSGI, ( GLenum _1, GLenum _2, GLint _3, GLint _4, GLsizei _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, GetColorTableSGI, ( GLenum _1, GLenum _2, GLenum _3, GLvoid * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, GetColorTableParameterfvSGI, ( GLenum _1, GLenum _2, GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, GetColorTableParameterivSGI, ( GLenum _1, GLenum _2, GLint * _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_SGI_texture_color_table */ \
\
    /* GL_SUNX_constant_data */ \
    FGPP_GL_FUNCTION( , void, FinishTextureSUNX, ( ), ( ) ) \
\
    /* GL_SUN_convolution_border_modes */ \
\
    /* GL_SUN_global_alpha */ \
    FGPP_GL_FUNCTION( , void, GlobalAlphaFactorbSUN, ( GLbyte _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GlobalAlphaFactorsSUN, ( GLshort _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GlobalAlphaFactoriSUN, ( GLint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GlobalAlphaFactorfSUN, ( GLfloat _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GlobalAlphaFactordSUN, ( GLdouble _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GlobalAlphaFactorubSUN, ( GLubyte _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GlobalAlphaFactorusSUN, ( GLushort _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, GlobalAlphaFactoruiSUN, ( GLuint _1 ), ( _1 ) ) \
\
    /* GL_SUN_mesh_array */ \
    FGPP_GL_FUNCTION( , void, DrawMeshArraysSUN, ( GLenum _1, GLint _2, GLsizei _3, GLsizei _4 ), ( _1, _2, _3, _4 ) ) \
\
    /* GL_SUN_slice_accum */ \
\
    /* GL_SUN_triangle_list */ \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiSUN, ( GLuint _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeusSUN, ( GLushort _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeubSUN, ( GLubyte _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuivSUN, ( const GLuint * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeusvSUN, ( const GLushort * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeubvSUN, ( const GLubyte * _1 ), ( _1 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodePointerSUN, ( GLenum _1, GLsizei _2, const GLvoid ** _3 ), ( _1, _2, _3 ) ) \
\
    /* GL_SUN_vertex */ \
    FGPP_GL_FUNCTION( , void, Color4ubVertex2fSUN, ( GLubyte _1, GLubyte _2, GLubyte _3, GLubyte _4, GLfloat _5, GLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, Color4ubVertex2fvSUN, ( const GLubyte * _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Color4ubVertex3fSUN, ( GLubyte _1, GLubyte _2, GLubyte _3, GLubyte _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, Color4ubVertex3fvSUN, ( const GLubyte * _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Color3fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, Color3fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, Normal3fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, Color4fNormal3fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10 ) ) \
    FGPP_GL_FUNCTION( , void, Color4fNormal3fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5 ), ( _1, _2, _3, _4, _5 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4fVertex4fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4fVertex4fvSUN, ( const GLfloat * _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2fColor4ubVertex3fSUN, ( GLfloat _1, GLfloat _2, GLubyte _3, GLubyte _4, GLubyte _5, GLubyte _6, GLfloat _7, GLfloat _8, GLfloat _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2fColor4ubVertex3fvSUN, ( const GLfloat * _1, const GLubyte * _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2fColor3fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2fColor3fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2fNormal3fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2fNormal3fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2fColor4fNormal3fVertex3fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11, GLfloat _12 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord2fColor4fNormal3fVertex3fvSUN, ( const GLfloat * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4fColor4fNormal3fVertex4fSUN, ( GLfloat _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11, GLfloat _12, GLfloat _13, GLfloat _14, GLfloat _15 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15 ) ) \
    FGPP_GL_FUNCTION( , void, TexCoord4fColor4fNormal3fVertex4fvSUN, ( const GLfloat * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2 ), ( _1, _2 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiColor4ubVertex3fSUN, ( GLuint _1, GLubyte _2, GLubyte _3, GLubyte _4, GLubyte _5, GLfloat _6, GLfloat _7, GLfloat _8 ), ( _1, _2, _3, _4, _5, _6, _7, _8 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiColor4ubVertex3fvSUN, ( const GLuint * _1, const GLubyte * _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiColor3fVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiColor3fVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiNormal3fVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7 ), ( _1, _2, _3, _4, _5, _6, _7 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiNormal3fVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiColor4fNormal3fVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiColor4fNormal3fVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiTexCoord2fVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6 ), ( _1, _2, _3, _4, _5, _6 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiTexCoord2fVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2, const GLfloat * _3 ), ( _1, _2, _3 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4 ), ( _1, _2, _3, _4 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, ( GLuint _1, GLfloat _2, GLfloat _3, GLfloat _4, GLfloat _5, GLfloat _6, GLfloat _7, GLfloat _8, GLfloat _9, GLfloat _10, GLfloat _11, GLfloat _12, GLfloat _13 ), ( _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13 ) ) \
    FGPP_GL_FUNCTION( , void, ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, ( const GLuint * _1, const GLfloat * _2, const GLfloat * _3, const GLfloat * _4, const GLfloat * _5 ), ( _1, _2, _3, _4, _5 ) ) \
\
    /* GL_WIN_phong_shading */ \
\
    /* GL_WIN_specular_fog */ \

namespace fg {
    typedef void ( * GLDebugProc )(
        GLenum
        , GLenum
        , GLuint
        , GLenum
        , GLsizei
        , const GLchar *
        , const void *
    );
    typedef void ( * GLDebugProcARB )(
        GLenum
        , GLenum
        , GLuint
        , GLenum
        , GLsizei
        , const GLchar *
        , const void *
    );
    typedef void ( * GLDebugProcAMD )(
        GLuint
        , GLenum
        , GLenum
        , GLsizei
        , const GLchar *
        , void *
    );
}

#define GL_DECLARE_FUNCTION( _dummyReturnValue, _returnType, _name, _args, _argValues ) \
    FGPPEXPORT _returnType gl##_name _args; \

#define FGPP_GL_FUNCTION GL_DECLARE_FUNCTION
namespace fg {
    FGPP_GL_FUNCTIONS
}
#undef  FGPP_GL_FUNCTION

#undef  GL_DECLARE_FUNCTION

#endif  // FGPP_GL_FUNCTIONS_H
