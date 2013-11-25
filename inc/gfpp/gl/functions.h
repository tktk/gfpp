﻿#ifndef GFPP_GL_FUNCTIONS_H
#define GFPP_GL_FUNCTIONS_H

#include "gfpp/gl/types.h"
#include "gfpp/util/import.h"

#define GFPP_GL_FUNCTIONS \
    /* GL_VERSION_1_0 */ \
    GFPP_GL_FUNCTION( GLenum, GetError, () ) \
    GFPP_GL_FUNCTION( void, Begin, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, End, () ) \
    GFPP_GL_FUNCTION( void, EdgeFlag, ( GLboolean ) ) \
    GFPP_GL_FUNCTION( void, EdgeFlagv, ( const GLboolean * ) ) \
    GFPP_GL_FUNCTION( void, Vertex2s, ( GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, Vertex2i, ( GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Vertex2f, ( GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Vertex2d, ( GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Vertex3s, ( GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, Vertex3i, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Vertex3f, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Vertex3d, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Vertex4s, ( GLshort, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, Vertex4i, ( GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Vertex4f, ( GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Vertex4d, ( GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Vertex2sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, Vertex2iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Vertex2fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Vertex2dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, Vertex3sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, Vertex3iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Vertex3fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Vertex3dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, Vertex4sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, Vertex4iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Vertex4fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Vertex4dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1s, ( GLshort ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1i, ( GLint ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1f, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1d, ( GLdouble ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2s, ( GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2i, ( GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2f, ( GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2d, ( GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3s, ( GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3i, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3f, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3d, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4s, ( GLshort, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4i, ( GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4f, ( GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4d, ( GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, Normal3b, ( GLbyte, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, Normal3s, ( GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, Normal3i, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Normal3f, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Normal3d, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Normal3bv, ( const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, Normal3sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, Normal3iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Normal3fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Normal3dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, Color3b, ( GLbyte, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, Color3s, ( GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, Color3i, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Color3f, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Color3d, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Color3ub, ( GLubyte, GLubyte, GLubyte ) ) \
    GFPP_GL_FUNCTION( void, Color3us, ( GLushort, GLushort, GLushort ) ) \
    GFPP_GL_FUNCTION( void, Color3ui, ( GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, Color4b, ( GLbyte, GLbyte, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, Color4s, ( GLshort, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, Color4i, ( GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Color4f, ( GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Color4d, ( GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Color4ub, ( GLubyte, GLubyte, GLubyte, GLubyte ) ) \
    GFPP_GL_FUNCTION( void, Color4us, ( GLushort, GLushort, GLushort, GLushort ) ) \
    GFPP_GL_FUNCTION( void, Color4ui, ( GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, Color3bv, ( const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, Color3sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, Color3iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Color3fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Color3dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, Color3ubv, ( const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, Color3usv, ( const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, Color3uiv, ( const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, Color4bv, ( const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, Color4sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, Color4iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Color4fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Color4dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, Color4ubv, ( const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, Color4usv, ( const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, Color4uiv, ( const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, Indexs, ( GLshort ) ) \
    GFPP_GL_FUNCTION( void, Indexi, ( GLint ) ) \
    GFPP_GL_FUNCTION( void, Indexf, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Indexd, ( GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Indexsv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, Indexiv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Indexfv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Indexdv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, Rects, ( GLshort, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, Recti, ( GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Rectf, ( GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Rectd, ( GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Rectsv, ( const GLshort *, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, Rectiv, ( const GLint *, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Rectfv, ( const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Rectdv, ( const GLdouble *, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, DepthRange, ( GLclampd, GLclampd ) ) \
    GFPP_GL_FUNCTION( void, Viewport, ( GLint, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, MatrixMode, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, LoadMatrixf, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, LoadMatrixd, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MultMatrixf, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultMatrixd, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, LoadIdentity, () ) \
    GFPP_GL_FUNCTION( void, Rotatef, ( GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Rotated, ( GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Translatef, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Translated, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Scalef, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Scaled, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Frustum, ( GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Ortho, ( GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, PushMatrix, () ) \
    GFPP_GL_FUNCTION( void, PopMatrix, () ) \
    GFPP_GL_FUNCTION( void, Enable, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, Disable, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, TexGeni, ( GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, TexGenf, ( GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexGend, ( GLenum, GLenum, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, TexGeniv, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, TexGenfv, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexGendv, ( GLenum, GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ClipPlane, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos2s, ( GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, RasterPos2i, ( GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, RasterPos2f, ( GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, RasterPos2d, ( GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, RasterPos2sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos2iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos2fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos2dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos3s, ( GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, RasterPos3i, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, RasterPos3f, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, RasterPos3d, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, RasterPos3sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos3iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos3fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos3dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos4s, ( GLshort, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, RasterPos4i, ( GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, RasterPos4f, ( GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, RasterPos4d, ( GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, RasterPos4sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos4iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos4fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos4dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, FrontFace, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, Materiali, ( GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, Materialf, ( GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Materialiv, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Materialfv, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Lighti, ( GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, Lightf, ( GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Lightiv, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Lightfv, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, LightModeli, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, LightModelf, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, LightModeliv, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, LightModelfv, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ColorMaterial, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, ShadeModel, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, PointSize, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, LineWidth, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, LineStipple, ( GLint, GLushort ) ) \
    GFPP_GL_FUNCTION( void, CullFace, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, PolygonStipple, ( const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, PolygonMode, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, PixelStorei, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, PixelStoref, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, PixelTransferi, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, PixelTransferf, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, PixelMapuiv, ( GLenum, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, PixelMapusv, ( GLenum, GLsizei, const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, PixelMapfv, ( GLenum, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, DrawPixels, ( GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, PixelZoom, ( GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Bitmap, ( GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, TexImage1D, ( GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TexImage2D, ( GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TexParameteri, ( GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, TexParameterf, ( GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexParameteriv, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, TexParameterfv, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexEnvi, ( GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, TexEnvf, ( GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexEnviv, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, TexEnvfv, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Fogi, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, Fogf, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Fogiv, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Fogfv, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Scissor, ( GLint, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, AlphaFunc, ( GLenum, GLclampf ) ) \
    GFPP_GL_FUNCTION( void, StencilFunc, ( GLenum, GLint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, StencilOp, ( GLenum, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, DepthFunc, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, BlendFunc, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, LogicOp, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, DrawBuffer, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, IndexMask, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, ColorMask, ( GLboolean, GLboolean, GLboolean, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, DepthMask, ( GLboolean ) ) \
    GFPP_GL_FUNCTION( void, StencilMask, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, Clear, ( GLbitfield ) ) \
    GFPP_GL_FUNCTION( void, ClearColor, ( GLclampf, GLclampf, GLclampf, GLclampf ) ) \
    GFPP_GL_FUNCTION( void, ClearIndex, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ClearDepth, ( GLclampd ) ) \
    GFPP_GL_FUNCTION( void, ClearStencil, ( GLint ) ) \
    GFPP_GL_FUNCTION( void, ClearAccum, ( GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Accum, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ReadPixels, ( GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, ReadBuffer, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, CopyPixels, ( GLint, GLint, GLsizei, GLsizei, GLenum ) ) \
    GFPP_GL_FUNCTION( void, Map1f, ( GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Map1d, ( GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, Map2f, ( GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Map2d, ( GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, EvalCoord1f, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, EvalCoord1d, ( GLdouble ) ) \
    GFPP_GL_FUNCTION( void, EvalCoord2f, ( GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, EvalCoord2d, ( GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, EvalCoord1fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, EvalCoord1dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, EvalCoord2fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, EvalCoord2dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MapGrid1f, ( GLint, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MapGrid1d, ( GLint, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MapGrid2f, ( GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MapGrid2d, ( GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, EvalMesh1, ( GLenum, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, EvalMesh2, ( GLenum, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, EvalPoint1, ( GLint ) ) \
    GFPP_GL_FUNCTION( void, EvalPoint2, ( GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, InitNames, () ) \
    GFPP_GL_FUNCTION( void, PopName, () ) \
    GFPP_GL_FUNCTION( void, PushName, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, LoadName, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLint, RenderMode, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, SelectBuffer, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, FeedbackBuffer, ( GLsizei, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, PassThrough, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, NewList, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, EndList, () ) \
    GFPP_GL_FUNCTION( void, CallList, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, CallLists, ( GLsizei, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, ListBase, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLuint, GenLists, ( GLsizei ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsList, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteLists, ( GLuint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, Flush, () ) \
    GFPP_GL_FUNCTION( void, Finish, () ) \
    GFPP_GL_FUNCTION( void, Hint, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetBooleanv, ( GLenum, GLboolean * ) ) \
    GFPP_GL_FUNCTION( void, GetIntegerv, ( GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetFloatv, ( GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetDoublev, ( GLenum, GLdouble * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsEnabled, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetClipPlane, ( GLenum, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetLightiv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetLightfv, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetMaterialiv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetMaterialfv, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetTexEnviv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetTexEnvfv, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetTexGeniv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetTexGenfv, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetTexParameteriv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetTexParameterfv, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetTexLevelParameteriv, ( GLenum, GLint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetTexLevelParameterfv, ( GLenum, GLint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetPixelMapuiv, ( GLenum, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetPixelMapusv, ( GLenum, GLushort * ) ) \
    GFPP_GL_FUNCTION( void, GetPixelMapfv, ( GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetMapiv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetMapfv, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetMapdv, ( GLenum, GLenum, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetTexImage, ( GLenum, GLint, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetPolygonStipple, ( GLubyte * ) ) \
    GFPP_GL_FUNCTION( const GLubyte *, GetString, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, PushAttrib, ( GLbitfield ) ) \
    GFPP_GL_FUNCTION( void, PopAttrib, () ) \
    \
    /* GL_VERSION_1_1 */ \
    GFPP_GL_FUNCTION( void, Indexub, ( GLubyte ) ) \
    GFPP_GL_FUNCTION( void, Indexubv, ( const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, EdgeFlagPointer, ( GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TexCoordPointer, ( GLint, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, ColorPointer, ( GLint, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, IndexPointer, ( GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, NormalPointer, ( GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, VertexPointer, ( GLint, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, EnableClientState, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, DisableClientState, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, ArrayElement, ( GLint ) ) \
    GFPP_GL_FUNCTION( void, DrawArrays, ( GLenum, GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, DrawElements, ( GLenum, GLsizei, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, InterleavedArrays, ( GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, PolygonOffset, ( GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, CopyTexImage1D, ( GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint ) ) \
    GFPP_GL_FUNCTION( void, CopyTexImage2D, ( GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint ) ) \
    GFPP_GL_FUNCTION( void, TexSubImage1D, ( GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TexSubImage2D, ( GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CopyTexSubImage1D, ( GLenum, GLint, GLint, GLint, GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, CopyTexSubImage2D, ( GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, BindTexture, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteTextures, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenTextures, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, AreTexturesResident, ( GLsizei, const GLuint *, GLboolean * ) ) \
    GFPP_GL_FUNCTION( void, PrioritizeTextures, ( GLsizei, const GLuint *, const GLclampf * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsTexture, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetPointerv, ( GLenum, GLvoid ** ) ) \
    GFPP_GL_FUNCTION( void, PushClientAttrib, ( GLbitfield ) ) \
    GFPP_GL_FUNCTION( void, PopClientAttrib, () ) \
    \
    /* GL_VERSION_1_2 */ \
    GFPP_GL_FUNCTION( void, DrawRangeElements, ( GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TexImage3D, ( GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TexSubImage3D, ( GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CopyTexSubImage3D, ( GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) ) \
    \
    /* GL_VERSION_1_3 */ \
    GFPP_GL_FUNCTION( void, ActiveTexture, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, SampleCoverage, ( GLfloat, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, CompressedTexImage3D, ( GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTexImage2D, ( GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTexImage1D, ( GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTexSubImage3D, ( GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTexSubImage2D, ( GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTexSubImage1D, ( GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetCompressedTexImage, ( GLenum, GLint, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, ClientActiveTexture, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1d, ( GLenum, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1dv, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1f, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1fv, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1i, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1iv, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1s, ( GLenum, GLshort ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1sv, ( GLenum, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2d, ( GLenum, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2dv, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2f, ( GLenum, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2fv, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2i, ( GLenum, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2iv, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2s, ( GLenum, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2sv, ( GLenum, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3d, ( GLenum, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3dv, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3f, ( GLenum, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3fv, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3i, ( GLenum, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3iv, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3s, ( GLenum, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3sv, ( GLenum, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4d, ( GLenum, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4dv, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4f, ( GLenum, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4fv, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4i, ( GLenum, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4iv, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4s, ( GLenum, GLshort, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4sv, ( GLenum, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, LoadTransposeMatrixf, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, LoadTransposeMatrixd, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MultTransposeMatrixf, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultTransposeMatrixd, ( const GLdouble * ) ) \
    \
    /* GL_VERSION_1_4 */ \
    GFPP_GL_FUNCTION( void, BlendFuncSeparate, ( GLenum, GLenum, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, MultiDrawArrays, ( GLenum, const GLint *, const GLsizei *, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, MultiDrawElements, ( GLenum, const GLsizei *, GLenum, const GLvoid *const*, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, PointParameterf, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, PointParameterfv, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, PointParameteri, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, PointParameteriv, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, FogCoordf, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, FogCoordfv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, FogCoordd, ( GLdouble ) ) \
    GFPP_GL_FUNCTION( void, FogCoorddv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, FogCoordPointer, ( GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3b, ( GLbyte, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3bv, ( const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3d, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3f, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3i, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3s, ( GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3ub, ( GLubyte, GLubyte, GLubyte ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3ubv, ( const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3ui, ( GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3uiv, ( const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3us, ( GLushort, GLushort, GLushort ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3usv, ( const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColorPointer, ( GLint, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2d, ( GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2f, ( GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2i, ( GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2s, ( GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3d, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3dv, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3f, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3fv, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3i, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3iv, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3s, ( GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3sv, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, BlendColor, ( GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, BlendEquation, ( GLenum ) ) \
    \
    /* GL_VERSION_1_5 */ \
    GFPP_GL_FUNCTION( void, GenQueries, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, DeleteQueries, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsQuery, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, BeginQuery, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, EndQuery, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetQueryiv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetQueryObjectiv, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetQueryObjectuiv, ( GLuint, GLenum, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, BindBuffer, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteBuffers, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenBuffers, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsBuffer, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, BufferData, ( GLenum, GLsizeiptr, const GLvoid *, GLenum ) ) \
    GFPP_GL_FUNCTION( void, BufferSubData, ( GLenum, GLintptr, GLsizeiptr, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetBufferSubData, ( GLenum, GLintptr, GLsizeiptr, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void *, MapBuffer, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( GLboolean, UnmapBuffer, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetBufferParameteriv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetBufferPointerv, ( GLenum, GLenum, GLvoid ** ) ) \
    \
    /* GL_VERSION_2_0 */ \
    GFPP_GL_FUNCTION( void, BlendEquationSeparate, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, DrawBuffers, ( GLsizei, const GLenum * ) ) \
    GFPP_GL_FUNCTION( void, StencilOpSeparate, ( GLenum, GLenum, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, StencilFuncSeparate, ( GLenum, GLenum, GLint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, StencilMaskSeparate, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, AttachShader, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, BindAttribLocation, ( GLuint, GLuint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, CompileShader, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLuint, CreateProgram, ( ) ) \
    GFPP_GL_FUNCTION( GLuint, CreateShader, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, DeleteProgram, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteShader, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, DetachShader, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DisableVertexAttribArray, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, EnableVertexAttribArray, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetActiveAttrib, ( GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetActiveUniform, ( GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetAttachedShaders, ( GLuint, GLsizei, GLsizei *, GLuint * ) ) \
    GFPP_GL_FUNCTION( GLint, GetAttribLocation, ( GLuint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramiv, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramInfoLog, ( GLuint, GLsizei, GLsizei *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetShaderiv, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetShaderInfoLog, ( GLuint, GLsizei, GLsizei *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetShaderSource, ( GLuint, GLsizei, GLsizei *, GLchar * ) ) \
    GFPP_GL_FUNCTION( GLint, GetUniformLocation, ( GLuint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetUniformfv, ( GLuint, GLint, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetUniformiv, ( GLuint, GLint, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribdv, ( GLuint, GLenum, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribfv, ( GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribiv, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribPointerv, ( GLuint, GLenum, GLvoid ** ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsProgram, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsShader, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, LinkProgram, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, ShaderSource, ( GLuint, GLsizei, const GLchar *const*, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, UseProgram, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, Uniform1f, ( GLint, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Uniform2f, ( GLint, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Uniform3f, ( GLint, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Uniform4f, ( GLint, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Uniform1i, ( GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Uniform2i, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Uniform3i, ( GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Uniform4i, ( GLint, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Uniform1fv, ( GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Uniform2fv, ( GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Uniform3fv, ( GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Uniform4fv, ( GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Uniform1iv, ( GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Uniform2iv, ( GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Uniform3iv, ( GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Uniform4iv, ( GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix2fv, ( GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix3fv, ( GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix4fv, ( GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ValidateProgram, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1d, ( GLuint, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1dv, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1f, ( GLuint, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1fv, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1s, ( GLuint, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1sv, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2d, ( GLuint, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2dv, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2f, ( GLuint, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2fv, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2s, ( GLuint, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2sv, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3d, ( GLuint, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3dv, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3f, ( GLuint, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3fv, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3s, ( GLuint, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3sv, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4Nbv, ( GLuint, const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4Niv, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4Nsv, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4Nub, ( GLuint, GLubyte, GLubyte, GLubyte, GLubyte ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4Nubv, ( GLuint, const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4Nuiv, ( GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4Nusv, ( GLuint, const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4bv, ( GLuint, const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4d, ( GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4dv, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4f, ( GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4fv, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4iv, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4s, ( GLuint, GLshort, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4sv, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4ubv, ( GLuint, const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4uiv, ( GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4usv, ( GLuint, const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribPointer, ( GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid * ) ) \
    \
    /* GL_VERSION_2_1 */ \
    GFPP_GL_FUNCTION( void, UniformMatrix2x3fv, ( GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix3x2fv, ( GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix2x4fv, ( GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix4x2fv, ( GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix3x4fv, ( GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix4x3fv, ( GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    \
    /* GL_VERSION_3_0 */ \
    GFPP_GL_FUNCTION( void, ColorMaski, ( GLuint, GLboolean, GLboolean, GLboolean, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, GetBooleani_v, ( GLenum, GLuint, GLboolean * ) ) \
    GFPP_GL_FUNCTION( void, GetIntegeri_v, ( GLenum, GLuint, GLint * ) ) \
    GFPP_GL_FUNCTION( void, Enablei, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, Disablei, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsEnabledi, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, BeginTransformFeedback, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, EndTransformFeedback, ( ) ) \
    GFPP_GL_FUNCTION( void, BindBufferRange, ( GLenum, GLuint, GLuint, GLintptr, GLsizeiptr ) ) \
    GFPP_GL_FUNCTION( void, BindBufferBase, ( GLenum, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, TransformFeedbackVaryings, ( GLuint, GLsizei, const GLchar *const*, GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetTransformFeedbackVarying, ( GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, ClampColor, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, BeginConditionalRender, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, EndConditionalRender, ( ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribIPointer, ( GLuint, GLint, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribIiv, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribIuiv, ( GLuint, GLenum, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI1i, ( GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI2i, ( GLuint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI3i, ( GLuint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4i, ( GLuint, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI1ui, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI2ui, ( GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI3ui, ( GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4ui, ( GLuint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI1iv, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI2iv, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI3iv, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4iv, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI1uiv, ( GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI2uiv, ( GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI3uiv, ( GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4uiv, ( GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4bv, ( GLuint, const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4sv, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4ubv, ( GLuint, const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4usv, ( GLuint, const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, GetUniformuiv, ( GLuint, GLint, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, BindFragDataLocation, ( GLuint, GLuint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( GLint, GetFragDataLocation, ( GLuint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, Uniform1ui, ( GLint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, Uniform2ui, ( GLint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, Uniform3ui, ( GLint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, Uniform4ui, ( GLint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, Uniform1uiv, ( GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, Uniform2uiv, ( GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, Uniform3uiv, ( GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, Uniform4uiv, ( GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, TexParameterIiv, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, TexParameterIuiv, ( GLenum, GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetTexParameterIiv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetTexParameterIuiv, ( GLenum, GLenum, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ClearBufferiv, ( GLenum, GLint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ClearBufferuiv, ( GLenum, GLint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ClearBufferfv, ( GLenum, GLint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ClearBufferfi, ( GLenum, GLint, GLfloat, GLint ) ) \
    GFPP_GL_FUNCTION( const GLubyte *, GetStringi, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsRenderbuffer, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, BindRenderbuffer, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteRenderbuffers, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenRenderbuffers, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, RenderbufferStorage, ( GLenum, GLenum, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, GetRenderbufferParameteriv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsFramebuffer, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, BindFramebuffer, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteFramebuffers, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenFramebuffers, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( GLenum, CheckFramebufferStatus, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTexture1D, ( GLenum, GLenum, GLenum, GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTexture2D, ( GLenum, GLenum, GLenum, GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTexture3D, ( GLenum, GLenum, GLenum, GLuint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, FramebufferRenderbuffer, ( GLenum, GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetFramebufferAttachmentParameteriv, ( GLenum, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GenerateMipmap, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, BlitFramebuffer, ( GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum ) ) \
    GFPP_GL_FUNCTION( void, RenderbufferStorageMultisample, ( GLenum, GLsizei, GLenum, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTextureLayer, ( GLenum, GLenum, GLuint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void *, MapBufferRange, ( GLenum, GLintptr, GLsizeiptr, GLbitfield ) ) \
    GFPP_GL_FUNCTION( void, FlushMappedBufferRange, ( GLenum, GLintptr, GLsizeiptr ) ) \
    GFPP_GL_FUNCTION( void, BindVertexArray, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteVertexArrays, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenVertexArrays, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsVertexArray, ( GLuint ) ) \
    \
    /* GL_VERSION_3_1 */ \
    GFPP_GL_FUNCTION( void, DrawArraysInstanced, ( GLenum, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, DrawElementsInstanced, ( GLenum, GLsizei, GLenum, const GLvoid *, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, TexBuffer, ( GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, PrimitiveRestartIndex, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, CopyBufferSubData, ( GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr ) ) \
    GFPP_GL_FUNCTION( void, GetUniformIndices, ( GLuint, GLsizei, const GLchar *const*, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetActiveUniformsiv, ( GLuint, GLsizei, const GLuint *, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetActiveUniformName, ( GLuint, GLuint, GLsizei, GLsizei *, GLchar * ) ) \
    GFPP_GL_FUNCTION( GLuint, GetUniformBlockIndex, ( GLuint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetActiveUniformBlockiv, ( GLuint, GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetActiveUniformBlockName, ( GLuint, GLuint, GLsizei, GLsizei *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, UniformBlockBinding, ( GLuint, GLuint, GLuint ) ) \
    \
    /* GL_VERSION_3_2 */ \
    GFPP_GL_FUNCTION( void, DrawElementsBaseVertex, ( GLenum, GLsizei, GLenum, const GLvoid *, GLint ) ) \
    GFPP_GL_FUNCTION( void, DrawRangeElementsBaseVertex, ( GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *, GLint ) ) \
    GFPP_GL_FUNCTION( void, DrawElementsInstancedBaseVertex, ( GLenum, GLsizei, GLenum, const GLvoid *, GLsizei, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiDrawElementsBaseVertex, ( GLenum, const GLsizei *, GLenum, const GLvoid *const*, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProvokingVertex, ( GLenum ) ) \
    GFPP_GL_FUNCTION( GLsync, FenceSync, ( GLenum, GLbitfield ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsSync, ( GLsync ) ) \
    GFPP_GL_FUNCTION( void, DeleteSync, ( GLsync ) ) \
    GFPP_GL_FUNCTION( GLenum, ClientWaitSync, ( GLsync, GLbitfield, GLuint64 ) ) \
    GFPP_GL_FUNCTION( void, WaitSync, ( GLsync, GLbitfield, GLuint64 ) ) \
    GFPP_GL_FUNCTION( void, GetInteger64v, ( GLenum, GLint64 * ) ) \
    GFPP_GL_FUNCTION( void, GetSynciv, ( GLsync, GLenum, GLsizei, GLsizei *, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetInteger64i_v, ( GLenum, GLuint, GLint64 * ) ) \
    GFPP_GL_FUNCTION( void, GetBufferParameteri64v, ( GLenum, GLenum, GLint64 * ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTexture, ( GLenum, GLenum, GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void, TexImage2DMultisample, ( GLenum, GLsizei, GLint, GLsizei, GLsizei, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, TexImage3DMultisample, ( GLenum, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, GetMultisamplefv, ( GLenum, GLuint, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, SampleMaski, ( GLuint, GLbitfield ) ) \
    \
    /* GL_VERSION_3_3 */ \
    GFPP_GL_FUNCTION( void, BindFragDataLocationIndexed, ( GLuint, GLuint, GLuint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( GLint, GetFragDataIndex, ( GLuint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GenSamplers, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, DeleteSamplers, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsSampler, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, BindSampler, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, SamplerParameteri, ( GLuint, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, SamplerParameteriv, ( GLuint, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, SamplerParameterf, ( GLuint, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, SamplerParameterfv, ( GLuint, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, SamplerParameterIiv, ( GLuint, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, SamplerParameterIuiv, ( GLuint, GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetSamplerParameteriv, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetSamplerParameterIiv, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetSamplerParameterfv, ( GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetSamplerParameterIuiv, ( GLuint, GLenum, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, QueryCounter, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetQueryObjecti64v, ( GLuint, GLenum, GLint64 * ) ) \
    GFPP_GL_FUNCTION( void, GetQueryObjectui64v, ( GLuint, GLenum, GLuint64 * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribDivisor, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribP1ui, ( GLuint, GLenum, GLboolean, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribP1uiv, ( GLuint, GLenum, GLboolean, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribP2ui, ( GLuint, GLenum, GLboolean, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribP2uiv, ( GLuint, GLenum, GLboolean, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribP3ui, ( GLuint, GLenum, GLboolean, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribP3uiv, ( GLuint, GLenum, GLboolean, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribP4ui, ( GLuint, GLenum, GLboolean, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribP4uiv, ( GLuint, GLenum, GLboolean, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexP2ui, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexP2uiv, ( GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexP3ui, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexP3uiv, ( GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexP4ui, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexP4uiv, ( GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, TexCoordP1ui, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, TexCoordP1uiv, ( GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, TexCoordP2ui, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, TexCoordP2uiv, ( GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, TexCoordP3ui, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, TexCoordP3uiv, ( GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, TexCoordP4ui, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, TexCoordP4uiv, ( GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoordP1ui, ( GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoordP1uiv, ( GLenum, GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoordP2ui, ( GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoordP2uiv, ( GLenum, GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoordP3ui, ( GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoordP3uiv, ( GLenum, GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoordP4ui, ( GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoordP4uiv, ( GLenum, GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, NormalP3ui, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, NormalP3uiv, ( GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ColorP3ui, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ColorP3uiv, ( GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ColorP4ui, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ColorP4uiv, ( GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColorP3ui, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColorP3uiv, ( GLenum, const GLuint * ) ) \
    \
    /* GL_VERSION_4_0 */ \
    GFPP_GL_FUNCTION( void, MinSampleShading, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, BlendEquationi, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, BlendEquationSeparatei, ( GLuint, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, BlendFunci, ( GLuint, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, BlendFuncSeparatei, ( GLuint, GLenum, GLenum, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, DrawArraysIndirect, ( GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, DrawElementsIndirect, ( GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, Uniform1d, ( GLint, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Uniform2d, ( GLint, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Uniform3d, ( GLint, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Uniform4d, ( GLint, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Uniform1dv, ( GLint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, Uniform2dv, ( GLint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, Uniform3dv, ( GLint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, Uniform4dv, ( GLint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix2dv, ( GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix3dv, ( GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix4dv, ( GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix2x3dv, ( GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix2x4dv, ( GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix3x2dv, ( GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix3x4dv, ( GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix4x2dv, ( GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix4x3dv, ( GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetUniformdv, ( GLuint, GLint, GLdouble * ) ) \
    GFPP_GL_FUNCTION( GLint, GetSubroutineUniformLocation, ( GLuint, GLenum, const GLchar * ) ) \
    GFPP_GL_FUNCTION( GLuint, GetSubroutineIndex, ( GLuint, GLenum, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetActiveSubroutineUniformiv, ( GLuint, GLenum, GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetActiveSubroutineUniformName, ( GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetActiveSubroutineName, ( GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, UniformSubroutinesuiv, ( GLenum, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetUniformSubroutineuiv, ( GLenum, GLint, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramStageiv, ( GLuint, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, PatchParameteri, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, PatchParameterfv, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, BindTransformFeedback, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteTransformFeedbacks, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenTransformFeedbacks, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsTransformFeedback, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, PauseTransformFeedback, ( ) ) \
    GFPP_GL_FUNCTION( void, ResumeTransformFeedback, ( ) ) \
    GFPP_GL_FUNCTION( void, DrawTransformFeedback, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DrawTransformFeedbackStream, ( GLenum, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, BeginQueryIndexed, ( GLenum, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, EndQueryIndexed, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetQueryIndexediv, ( GLenum, GLuint, GLenum, GLint * ) ) \
    \
    /* GL_VERSION_4_1 */ \
    GFPP_GL_FUNCTION( void, ReleaseShaderCompiler, ( ) ) \
    GFPP_GL_FUNCTION( void, ShaderBinary, ( GLsizei, const GLuint *, GLenum, const GLvoid *, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, GetShaderPrecisionFormat, ( GLenum, GLenum, GLint *, GLint * ) ) \
    GFPP_GL_FUNCTION( void, DepthRangef, ( GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ClearDepthf, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, GetProgramBinary, ( GLuint, GLsizei, GLsizei *, GLenum *, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, ProgramBinary, ( GLuint, GLenum, const GLvoid *, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, ProgramParameteri, ( GLuint, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, UseProgramStages, ( GLuint, GLbitfield, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ActiveShaderProgram, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( GLuint, CreateShaderProgramv, ( GLenum, GLsizei, const GLchar *const* ) ) \
    GFPP_GL_FUNCTION( void, BindProgramPipeline, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteProgramPipelines, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenProgramPipelines, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsProgramPipeline, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetProgramPipelineiv, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1i, ( GLuint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1iv, ( GLuint, GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1f, ( GLuint, GLint, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1fv, ( GLuint, GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1d, ( GLuint, GLint, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1dv, ( GLuint, GLint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1ui, ( GLuint, GLint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1uiv, ( GLuint, GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2i, ( GLuint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2iv, ( GLuint, GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2f, ( GLuint, GLint, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2fv, ( GLuint, GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2d, ( GLuint, GLint, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2dv, ( GLuint, GLint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2ui, ( GLuint, GLint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2uiv, ( GLuint, GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3i, ( GLuint, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3iv, ( GLuint, GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3f, ( GLuint, GLint, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3fv, ( GLuint, GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3d, ( GLuint, GLint, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3dv, ( GLuint, GLint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3ui, ( GLuint, GLint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3uiv, ( GLuint, GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4i, ( GLuint, GLint, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4iv, ( GLuint, GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4f, ( GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4fv, ( GLuint, GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4d, ( GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4dv, ( GLuint, GLint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4ui, ( GLuint, GLint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4uiv, ( GLuint, GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix2fv, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix3fv, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix4fv, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix2dv, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix3dv, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix4dv, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix2x3fv, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix3x2fv, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix2x4fv, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix4x2fv, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix3x4fv, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix4x3fv, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix2x3dv, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix3x2dv, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix2x4dv, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix4x2dv, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix3x4dv, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix4x3dv, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ValidateProgramPipeline, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetProgramPipelineInfoLog, ( GLuint, GLsizei, GLsizei *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL1d, ( GLuint, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL2d, ( GLuint, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL3d, ( GLuint, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL4d, ( GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL1dv, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL2dv, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL3dv, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL4dv, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribLPointer, ( GLuint, GLint, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribLdv, ( GLuint, GLenum, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ViewportArrayv, ( GLuint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ViewportIndexedf, ( GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ViewportIndexedfv, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ScissorArrayv, ( GLuint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ScissorIndexed, ( GLuint, GLint, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, ScissorIndexedv, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, DepthRangeArrayv, ( GLuint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, DepthRangeIndexed, ( GLuint, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, GetFloati_v, ( GLenum, GLuint, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetDoublei_v, ( GLenum, GLuint, GLdouble * ) ) \
    \
    /* GL_VERSION_4_2 */ \
    GFPP_GL_FUNCTION( void, DrawArraysInstancedBaseInstance, ( GLenum, GLint, GLsizei, GLsizei, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DrawElementsInstancedBaseInstance, ( GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DrawElementsInstancedBaseVertexBaseInstance, ( GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetInternalformativ, ( GLenum, GLenum, GLenum, GLsizei, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetActiveAtomicCounterBufferiv, ( GLuint, GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, BindImageTexture, ( GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, MemoryBarrier, ( GLbitfield ) ) \
    GFPP_GL_FUNCTION( void, TexStorage1D, ( GLenum, GLsizei, GLenum, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, TexStorage2D, ( GLenum, GLsizei, GLenum, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, TexStorage3D, ( GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, DrawTransformFeedbackInstanced, ( GLenum, GLuint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, DrawTransformFeedbackStreamInstanced, ( GLenum, GLuint, GLuint, GLsizei ) ) \
    \
    /* GL_VERSION_4_3 */ \
    GFPP_GL_FUNCTION( void, ClearBufferData, ( GLenum, GLenum, GLenum, GLenum, const void * ) ) \
    GFPP_GL_FUNCTION( void, ClearBufferSubData, ( GLenum, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void * ) ) \
    GFPP_GL_FUNCTION( void, DispatchCompute, ( GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DispatchComputeIndirect, ( GLintptr ) ) \
    GFPP_GL_FUNCTION( void, CopyImageSubData, ( GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, FramebufferParameteri, ( GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, GetFramebufferParameteriv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetInternalformati64v, ( GLenum, GLenum, GLenum, GLsizei, GLint64 * ) ) \
    GFPP_GL_FUNCTION( void, InvalidateTexSubImage, ( GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, InvalidateTexImage, ( GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void, InvalidateBufferSubData, ( GLuint, GLintptr, GLsizeiptr ) ) \
    GFPP_GL_FUNCTION( void, InvalidateBufferData, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, InvalidateFramebuffer, ( GLenum, GLsizei, const GLenum * ) ) \
    GFPP_GL_FUNCTION( void, InvalidateSubFramebuffer, ( GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, MultiDrawArraysIndirect, ( GLenum, const void *, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, MultiDrawElementsIndirect, ( GLenum, GLenum, const void *, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, GetProgramInterfaceiv, ( GLuint, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( GLuint, GetProgramResourceIndex, ( GLuint, GLenum, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramResourceName, ( GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramResourceiv, ( GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLint * ) ) \
    GFPP_GL_FUNCTION( GLint, GetProgramResourceLocation, ( GLuint, GLenum, const GLchar * ) ) \
    GFPP_GL_FUNCTION( GLint, GetProgramResourceLocationIndex, ( GLuint, GLenum, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, ShaderStorageBlockBinding, ( GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, TexBufferRange, ( GLenum, GLenum, GLuint, GLintptr, GLsizeiptr ) ) \
    GFPP_GL_FUNCTION( void, TexStorage2DMultisample, ( GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, TexStorage3DMultisample, ( GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, TextureView, ( GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, BindVertexBuffer, ( GLuint, GLuint, GLintptr, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribFormat, ( GLuint, GLint, GLenum, GLboolean, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribIFormat, ( GLuint, GLint, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribLFormat, ( GLuint, GLint, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribBinding, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexBindingDivisor, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DebugMessageControl, ( GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, DebugMessageInsert, ( GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, DebugMessageCallback, ( GLDebugProc, const void * ) ) \
    GFPP_GL_FUNCTION( GLuint, GetDebugMessageLog, ( GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, PushDebugGroup, ( GLenum, GLuint, GLsizei, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, PopDebugGroup, ( ) ) \
    GFPP_GL_FUNCTION( void, ObjectLabel, ( GLenum, GLuint, GLsizei, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetObjectLabel, ( GLenum, GLuint, GLsizei, GLsizei *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, ObjectPtrLabel, ( const void *, GLsizei, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetObjectPtrLabel, ( const void *, GLsizei, GLsizei *, GLchar * ) ) \
    \
    /* GL_VERSION_4_4 */ \
    GFPP_GL_FUNCTION( void, BufferStorage, ( GLenum, GLsizeiptr, const void *, GLbitfield ) ) \
    GFPP_GL_FUNCTION( void, ClearTexImage, ( GLuint, GLint, GLenum, GLenum, const void * ) ) \
    GFPP_GL_FUNCTION( void, ClearTexSubImage, ( GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void * ) ) \
    GFPP_GL_FUNCTION( void, BindBuffersBase, ( GLenum, GLuint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, BindBuffersRange, ( GLenum, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizeiptr * ) ) \
    GFPP_GL_FUNCTION( void, BindTextures, ( GLuint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, BindSamplers, ( GLuint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, BindImageTextures, ( GLuint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, BindVertexBuffers, ( GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei * ) ) \
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
    GFPP_GL_FUNCTION( GLuint64, GetTextureHandleARB, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLuint64, GetTextureSamplerHandleARB, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, MakeTextureHandleResidentARB, ( GLuint64 ) ) \
    GFPP_GL_FUNCTION( void, MakeTextureHandleNonResidentARB, ( GLuint64 ) ) \
    GFPP_GL_FUNCTION( GLuint64, GetImageHandleARB, ( GLuint, GLint, GLboolean, GLint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, MakeImageHandleResidentARB, ( GLuint64, GLenum ) ) \
    GFPP_GL_FUNCTION( void, MakeImageHandleNonResidentARB, ( GLuint64 ) ) \
    GFPP_GL_FUNCTION( void, UniformHandleui64ARB, ( GLint, GLuint64 ) ) \
    GFPP_GL_FUNCTION( void, UniformHandleui64vARB, ( GLint, GLsizei, const GLuint64 * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformHandleui64ARB, ( GLuint, GLint, GLuint64 ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformHandleui64vARB, ( GLuint, GLint, GLsizei, const GLuint64 * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsTextureHandleResidentARB, ( GLuint64 ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsImageHandleResidentARB, ( GLuint64 ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL1ui64ARB, ( GLuint, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL1ui64vARB, ( GLuint, const GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribLui64vARB, ( GLuint, GLenum, GLuint64EXT * ) ) \
    \
    /* GL_ARB_blend_func_extended */ \
    \
    /* GL_ARB_buffer_storage */ \
    \
    /* GL_ARB_cl_event */ \
    GFPP_GL_FUNCTION( GLsync, CreateSyncFromCLeventARB, ( struct _cl_context *, struct _cl_event *, GLbitfield ) ) \
    \
    /* GL_ARB_clear_buffer_object */ \
    \
    /* GL_ARB_clear_texture */ \
    \
    /* GL_ARB_color_buffer_float */ \
    GFPP_GL_FUNCTION( void, ClampColorARB, ( GLenum, GLenum ) ) \
    \
    /* GL_ARB_compatibility */ \
    \
    /* GL_ARB_compressed_texture_pixel_storage */ \
    \
    /* GL_ARB_compute_shader */ \
    \
    /* GL_ARB_compute_variable_group_size */ \
    GFPP_GL_FUNCTION( void, DispatchComputeGroupSizeARB, ( GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) ) \
    \
    /* GL_ARB_conservative_depth */ \
    \
    /* GL_ARB_copy_buffer */ \
    \
    /* GL_ARB_copy_image */ \
    \
    /* GL_ARB_debug_output */ \
    GFPP_GL_FUNCTION( void, DebugMessageControlARB, ( GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, DebugMessageInsertARB, ( GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, DebugMessageCallbackARB, ( GLDebugProcARB, const void * ) ) \
    GFPP_GL_FUNCTION( GLuint, GetDebugMessageLogARB, ( GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar * ) ) \
    \
    /* GL_ARB_depth_buffer_float */ \
    \
    /* GL_ARB_depth_clamp */ \
    \
    /* GL_ARB_depth_texture */ \
    \
    /* GL_ARB_draw_buffers */ \
    GFPP_GL_FUNCTION( void, DrawBuffersARB, ( GLsizei, const GLenum * ) ) \
    \
    /* GL_ARB_draw_buffers_blend */ \
    GFPP_GL_FUNCTION( void, BlendEquationiARB, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, BlendEquationSeparateiARB, ( GLuint, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, BlendFunciARB, ( GLuint, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, BlendFuncSeparateiARB, ( GLuint, GLenum, GLenum, GLenum, GLenum ) ) \
    \
    /* GL_ARB_draw_elements_base_vertex */ \
    \
    /* GL_ARB_draw_indirect */ \
    \
    /* GL_ARB_draw_instanced */ \
    GFPP_GL_FUNCTION( void, DrawArraysInstancedARB, ( GLenum, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, DrawElementsInstancedARB, ( GLenum, GLsizei, GLenum, const GLvoid *, GLsizei ) ) \
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
    GFPP_GL_FUNCTION( void, ProgramStringARB, ( GLenum, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, BindProgramARB, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteProgramsARB, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenProgramsARB, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramEnvParameter4dARB, ( GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, ProgramEnvParameter4dvARB, ( GLenum, GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramEnvParameter4fARB, ( GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ProgramEnvParameter4fvARB, ( GLenum, GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramLocalParameter4dARB, ( GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, ProgramLocalParameter4dvARB, ( GLenum, GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramLocalParameter4fARB, ( GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ProgramLocalParameter4fvARB, ( GLenum, GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramEnvParameterdvARB, ( GLenum, GLuint, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramEnvParameterfvARB, ( GLenum, GLuint, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramLocalParameterdvARB, ( GLenum, GLuint, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramLocalParameterfvARB, ( GLenum, GLuint, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramivARB, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramStringARB, ( GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsProgramARB, ( GLuint ) ) \
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
    GFPP_GL_FUNCTION( void, ProgramParameteriARB, ( GLuint, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTextureARB, ( GLenum, GLenum, GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTextureLayerARB, ( GLenum, GLenum, GLuint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTextureFaceARB, ( GLenum, GLenum, GLuint, GLint, GLenum ) ) \
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
    GFPP_GL_FUNCTION( void, ColorTable, ( GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, ColorTableParameterfv, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ColorTableParameteriv, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, CopyColorTable, ( GLenum, GLenum, GLint, GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, GetColorTable, ( GLenum, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetColorTableParameterfv, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetColorTableParameteriv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, ColorSubTable, ( GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CopyColorSubTable, ( GLenum, GLsizei, GLint, GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, ConvolutionFilter1D, ( GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, ConvolutionFilter2D, ( GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, ConvolutionParameterf, ( GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ConvolutionParameterfv, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ConvolutionParameteri, ( GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, ConvolutionParameteriv, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, CopyConvolutionFilter1D, ( GLenum, GLenum, GLint, GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, CopyConvolutionFilter2D, ( GLenum, GLenum, GLint, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, GetConvolutionFilter, ( GLenum, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetConvolutionParameterfv, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetConvolutionParameteriv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetSeparableFilter, ( GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, SeparableFilter2D, ( GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetHistogram, ( GLenum, GLboolean, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetHistogramParameterfv, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetHistogramParameteriv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetMinmax, ( GLenum, GLboolean, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetMinmaxParameterfv, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetMinmaxParameteriv, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, Histogram, ( GLenum, GLsizei, GLenum, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, Minmax, ( GLenum, GLenum, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, ResetHistogram, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, ResetMinmax, ( GLenum ) ) \
    \
    /* GL_ARB_indirect_parameters */ \
    GFPP_GL_FUNCTION( void, MultiDrawArraysIndirectCountARB, ( GLenum, GLintptr, GLintptr, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, MultiDrawElementsIndirectCountARB, ( GLenum, GLenum, GLintptr, GLintptr, GLsizei, GLsizei ) ) \
    \
    /* GL_ARB_instanced_arrays */ \
    GFPP_GL_FUNCTION( void, VertexAttribDivisorARB, ( GLuint, GLuint ) ) \
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
    GFPP_GL_FUNCTION( void, CurrentPaletteMatrixARB, ( GLint ) ) \
    GFPP_GL_FUNCTION( void, MatrixIndexubvARB, ( GLint, const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, MatrixIndexusvARB, ( GLint, const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, MatrixIndexuivARB, ( GLint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, MatrixIndexPointerARB, ( GLint, GLenum, GLsizei, const GLvoid * ) ) \
    \
    /* GL_ARB_multi_bind */ \
    \
    /* GL_ARB_multi_draw_indirect */ \
    \
    /* GL_ARB_multisample */ \
    GFPP_GL_FUNCTION( void, SampleCoverageARB, ( GLfloat, GLboolean ) ) \
    \
    /* GL_ARB_multitexture */ \
    GFPP_GL_FUNCTION( void, ActiveTextureARB, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, ClientActiveTextureARB, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1dARB, ( GLenum, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1dvARB, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1fARB, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1fvARB, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1iARB, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1ivARB, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1sARB, ( GLenum, GLshort ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1svARB, ( GLenum, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2dARB, ( GLenum, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2dvARB, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2fARB, ( GLenum, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2fvARB, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2iARB, ( GLenum, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2ivARB, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2sARB, ( GLenum, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2svARB, ( GLenum, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3dARB, ( GLenum, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3dvARB, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3fARB, ( GLenum, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3fvARB, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3iARB, ( GLenum, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3ivARB, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3sARB, ( GLenum, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3svARB, ( GLenum, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4dARB, ( GLenum, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4dvARB, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4fARB, ( GLenum, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4fvARB, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4iARB, ( GLenum, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4ivARB, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4sARB, ( GLenum, GLshort, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4svARB, ( GLenum, const GLshort * ) ) \
    \
    /* GL_ARB_occlusion_query */ \
    GFPP_GL_FUNCTION( void, GenQueriesARB, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, DeleteQueriesARB, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsQueryARB, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, BeginQueryARB, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, EndQueryARB, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetQueryivARB, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetQueryObjectivARB, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetQueryObjectuivARB, ( GLuint, GLenum, GLuint * ) ) \
    \
    /* GL_ARB_occlusion_query2 */ \
    \
    /* GL_ARB_pixel_buffer_object */ \
    \
    /* GL_ARB_point_parameters */ \
    GFPP_GL_FUNCTION( void, PointParameterfARB, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, PointParameterfvARB, ( GLenum, const GLfloat * ) ) \
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
    GFPP_GL_FUNCTION( GLenum, GetGraphicsResetStatusARB, ( ) ) \
    GFPP_GL_FUNCTION( void, GetnTexImageARB, ( GLenum, GLint, GLenum, GLenum, GLsizei, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, ReadnPixelsARB, ( GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetnCompressedTexImageARB, ( GLenum, GLint, GLsizei, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetnUniformfvARB, ( GLuint, GLint, GLsizei, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetnUniformivARB, ( GLuint, GLint, GLsizei, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetnUniformuivARB, ( GLuint, GLint, GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetnUniformdvARB, ( GLuint, GLint, GLsizei, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetnMapdvARB, ( GLenum, GLenum, GLsizei, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetnMapfvARB, ( GLenum, GLenum, GLsizei, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetnMapivARB, ( GLenum, GLenum, GLsizei, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetnPixelMapfvARB, ( GLenum, GLsizei, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetnPixelMapuivARB, ( GLenum, GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetnPixelMapusvARB, ( GLenum, GLsizei, GLushort * ) ) \
    GFPP_GL_FUNCTION( void, GetnPolygonStippleARB, ( GLsizei, GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, GetnColorTableARB, ( GLenum, GLenum, GLenum, GLsizei, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetnConvolutionFilterARB, ( GLenum, GLenum, GLenum, GLsizei, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetnSeparableFilterARB, ( GLenum, GLenum, GLenum, GLsizei, GLvoid *, GLsizei, GLvoid *, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetnHistogramARB, ( GLenum, GLboolean, GLenum, GLenum, GLsizei, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetnMinmaxARB, ( GLenum, GLboolean, GLenum, GLenum, GLsizei, GLvoid * ) ) \
    \
    /* GL_ARB_robustness_isolation */ \
    \
    /* GL_ARB_sample_shading */ \
    GFPP_GL_FUNCTION( void, MinSampleShadingARB, ( GLfloat ) ) \
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
    GFPP_GL_FUNCTION( void, DeleteObjectARB, ( GLhandleARB ) ) \
    GFPP_GL_FUNCTION( GLhandleARB, GetHandleARB, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, DetachObjectARB, ( GLhandleARB, GLhandleARB ) ) \
    GFPP_GL_FUNCTION( GLhandleARB, CreateShaderObjectARB, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, ShaderSourceARB, ( GLhandleARB, GLsizei, const GLcharARB **, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, CompileShaderARB, ( GLhandleARB ) ) \
    GFPP_GL_FUNCTION( GLhandleARB, CreateProgramObjectARB, ( ) ) \
    GFPP_GL_FUNCTION( void, AttachObjectARB, ( GLhandleARB, GLhandleARB ) ) \
    GFPP_GL_FUNCTION( void, LinkProgramARB, ( GLhandleARB ) ) \
    GFPP_GL_FUNCTION( void, UseProgramObjectARB, ( GLhandleARB ) ) \
    GFPP_GL_FUNCTION( void, ValidateProgramARB, ( GLhandleARB ) ) \
    GFPP_GL_FUNCTION( void, Uniform1fARB, ( GLint, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Uniform2fARB, ( GLint, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Uniform3fARB, ( GLint, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Uniform4fARB, ( GLint, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Uniform1iARB, ( GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Uniform2iARB, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Uniform3iARB, ( GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Uniform4iARB, ( GLint, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Uniform1fvARB, ( GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Uniform2fvARB, ( GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Uniform3fvARB, ( GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Uniform4fvARB, ( GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Uniform1ivARB, ( GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Uniform2ivARB, ( GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Uniform3ivARB, ( GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Uniform4ivARB, ( GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix2fvARB, ( GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix3fvARB, ( GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, UniformMatrix4fvARB, ( GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetObjectParameterfvARB, ( GLhandleARB, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetObjectParameterivARB, ( GLhandleARB, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetInfoLogARB, ( GLhandleARB, GLsizei, GLsizei *, GLcharARB * ) ) \
    GFPP_GL_FUNCTION( void, GetAttachedObjectsARB, ( GLhandleARB, GLsizei, GLsizei *, GLhandleARB * ) ) \
    GFPP_GL_FUNCTION( GLint, GetUniformLocationARB, ( GLhandleARB, const GLcharARB * ) ) \
    GFPP_GL_FUNCTION( void, GetActiveUniformARB, ( GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB * ) ) \
    GFPP_GL_FUNCTION( void, GetUniformfvARB, ( GLhandleARB, GLint, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetUniformivARB, ( GLhandleARB, GLint, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetShaderSourceARB, ( GLhandleARB, GLsizei, GLsizei *, GLcharARB * ) ) \
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
    GFPP_GL_FUNCTION( void, NamedStringARB, ( GLenum, GLint, const GLchar *, GLint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, DeleteNamedStringARB, ( GLint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, CompileShaderIncludeARB, ( GLuint, GLsizei, const GLchar *const*, const GLint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsNamedStringARB, ( GLint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetNamedStringARB, ( GLint, const GLchar *, GLsizei, GLint *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetNamedStringivARB, ( GLint, const GLchar *, GLenum, GLint * ) ) \
    \
    /* GL_ARB_shading_language_packing */ \
    \
    /* GL_ARB_shadow */ \
    \
    /* GL_ARB_shadow_ambient */ \
    \
    /* GL_ARB_sparse_texture */ \
    GFPP_GL_FUNCTION( void, TexPageCommitmentARB, ( GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) ) \
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
    GFPP_GL_FUNCTION( void, TexBufferARB, ( GLenum, GLenum, GLuint ) ) \
    \
    /* GL_ARB_texture_buffer_object_rgb32 */ \
    \
    /* GL_ARB_texture_buffer_range */ \
    \
    /* GL_ARB_texture_compression */ \
    GFPP_GL_FUNCTION( void, CompressedTexImage3DARB, ( GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTexImage2DARB, ( GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTexImage1DARB, ( GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTexSubImage3DARB, ( GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTexSubImage2DARB, ( GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTexSubImage1DARB, ( GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetCompressedTexImageARB, ( GLenum, GLint, GLvoid * ) ) \
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
    GFPP_GL_FUNCTION( void, LoadTransposeMatrixfARB, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, LoadTransposeMatrixdARB, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MultTransposeMatrixfARB, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultTransposeMatrixdARB, ( const GLdouble * ) ) \
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
    GFPP_GL_FUNCTION( void, WeightbvARB, ( GLint, const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, WeightsvARB, ( GLint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, WeightivARB, ( GLint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, WeightfvARB, ( GLint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, WeightdvARB, ( GLint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, WeightubvARB, ( GLint, const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, WeightusvARB, ( GLint, const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, WeightuivARB, ( GLint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, WeightPointerARB, ( GLint, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, VertexBlendARB, ( GLint ) ) \
    \
    /* GL_ARB_vertex_buffer_object */ \
    GFPP_GL_FUNCTION( void, BindBufferARB, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteBuffersARB, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenBuffersARB, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsBufferARB, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, BufferDataARB, ( GLenum, GLsizeiptrARB, const GLvoid *, GLenum ) ) \
    GFPP_GL_FUNCTION( void, BufferSubDataARB, ( GLenum, GLintptrARB, GLsizeiptrARB, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetBufferSubDataARB, ( GLenum, GLintptrARB, GLsizeiptrARB, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void *, MapBufferARB, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( GLboolean, UnmapBufferARB, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetBufferParameterivARB, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetBufferPointervARB, ( GLenum, GLenum, GLvoid ** ) ) \
    \
    /* GL_ARB_vertex_program */ \
    GFPP_GL_FUNCTION( void, VertexAttrib1dARB, ( GLuint, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1dvARB, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1fARB, ( GLuint, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1fvARB, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1sARB, ( GLuint, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1svARB, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2dARB, ( GLuint, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2dvARB, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2fARB, ( GLuint, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2fvARB, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2sARB, ( GLuint, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2svARB, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3dARB, ( GLuint, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3dvARB, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3fARB, ( GLuint, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3fvARB, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3sARB, ( GLuint, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3svARB, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4NbvARB, ( GLuint, const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4NivARB, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4NsvARB, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4NubARB, ( GLuint, GLubyte, GLubyte, GLubyte, GLubyte ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4NubvARB, ( GLuint, const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4NuivARB, ( GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4NusvARB, ( GLuint, const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4bvARB, ( GLuint, const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4dARB, ( GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4dvARB, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4fARB, ( GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4fvARB, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4ivARB, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4sARB, ( GLuint, GLshort, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4svARB, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4ubvARB, ( GLuint, const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4uivARB, ( GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4usvARB, ( GLuint, const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribPointerARB, ( GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, EnableVertexAttribArrayARB, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, DisableVertexAttribArrayARB, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribdvARB, ( GLuint, GLenum, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribfvARB, ( GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribivARB, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribPointervARB, ( GLuint, GLenum, GLvoid ** ) ) \
    \
    /* GL_ARB_vertex_shader */ \
    GFPP_GL_FUNCTION( void, BindAttribLocationARB, ( GLhandleARB, GLuint, const GLcharARB * ) ) \
    GFPP_GL_FUNCTION( void, GetActiveAttribARB, ( GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB * ) ) \
    GFPP_GL_FUNCTION( GLint, GetAttribLocationARB, ( GLhandleARB, const GLcharARB * ) ) \
    \
    /* GL_ARB_vertex_type_10f_11f_11f_rev */ \
    \
    /* GL_ARB_vertex_type_2_10_10_10_rev */ \
    \
    /* GL_ARB_viewport_array */ \
    \
    /* GL_ARB_window_pos */ \
    GFPP_GL_FUNCTION( void, WindowPos2dARB, ( GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2dvARB, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2fARB, ( GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2fvARB, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2iARB, ( GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2ivARB, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2sARB, ( GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2svARB, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3dARB, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3dvARB, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3fARB, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3fvARB, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3iARB, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3ivARB, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3sARB, ( GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3svARB, ( const GLshort * ) ) \
    \
    /* GL_KHR_debug */ \
    \
    /* GL_KHR_texture_compression_astc_ldr */ \
    \
    /* GL_OES_byte_coordinates */ \
    GFPP_GL_FUNCTION( void, MultiTexCoord1bOES, ( GLenum, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1bvOES, ( GLenum, const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2bOES, ( GLenum, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2bvOES, ( GLenum, const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3bOES, ( GLenum, GLbyte, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3bvOES, ( GLenum, const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4bOES, ( GLenum, GLbyte, GLbyte, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4bvOES, ( GLenum, const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1bOES, ( GLbyte ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1bvOES, ( const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2bOES, ( GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2bvOES, ( const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3bOES, ( GLbyte, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3bvOES, ( const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4bOES, ( GLbyte, GLbyte, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4bvOES, ( const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, Vertex2bOES, ( GLbyte ) ) \
    GFPP_GL_FUNCTION( void, Vertex2bvOES, ( const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, Vertex3bOES, ( GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, Vertex3bvOES, ( const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, Vertex4bOES, ( GLbyte, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, Vertex4bvOES, ( const GLbyte * ) ) \
    \
    /* GL_OES_compressed_paletted_texture */ \
    \
    /* GL_OES_fixed_point */ \
    GFPP_GL_FUNCTION( void, AlphaFuncxOES, ( GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, ClearColorxOES, ( GLfixed, GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, ClearDepthxOES, ( GLfixed ) ) \
    GFPP_GL_FUNCTION( void, ClipPlanexOES, ( GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, Color4xOES, ( GLfixed, GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, DepthRangexOES, ( GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, FogxOES, ( GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, FogxvOES, ( GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, FrustumxOES, ( GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, GetClipPlanexOES, ( GLenum, GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, GetFixedvOES, ( GLenum, GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, GetTexEnvxvOES, ( GLenum, GLenum, GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, GetTexParameterxvOES, ( GLenum, GLenum, GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, LightModelxOES, ( GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, LightModelxvOES, ( GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, LightxOES, ( GLenum, GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, LightxvOES, ( GLenum, GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, LineWidthxOES, ( GLfixed ) ) \
    GFPP_GL_FUNCTION( void, LoadMatrixxOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, MaterialxOES, ( GLenum, GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, MaterialxvOES, ( GLenum, GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, MultMatrixxOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4xOES, ( GLenum, GLfixed, GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, Normal3xOES, ( GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, OrthoxOES, ( GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, PointParameterxvOES, ( GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, PointSizexOES, ( GLfixed ) ) \
    GFPP_GL_FUNCTION( void, PolygonOffsetxOES, ( GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, RotatexOES, ( GLfixed, GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, SampleCoverageOES, ( GLfixed, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, ScalexOES, ( GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, TexEnvxOES, ( GLenum, GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, TexEnvxvOES, ( GLenum, GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, TexParameterxOES, ( GLenum, GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, TexParameterxvOES, ( GLenum, GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, TranslatexOES, ( GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, AccumxOES, ( GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, BitmapxOES, ( GLsizei, GLsizei, GLfixed, GLfixed, GLfixed, GLfixed, const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, BlendColorxOES, ( GLfixed, GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, ClearAccumxOES, ( GLfixed, GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, Color3xOES, ( GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, Color3xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, Color4xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, ConvolutionParameterxOES, ( GLenum, GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, ConvolutionParameterxvOES, ( GLenum, GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, EvalCoord1xOES, ( GLfixed ) ) \
    GFPP_GL_FUNCTION( void, EvalCoord1xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, EvalCoord2xOES, ( GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, EvalCoord2xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, FeedbackBufferxOES, ( GLsizei, GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, GetConvolutionParameterxvOES, ( GLenum, GLenum, GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, GetHistogramParameterxvOES, ( GLenum, GLenum, GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, GetLightxOES, ( GLenum, GLenum, GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, GetMapxvOES, ( GLenum, GLenum, GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, GetMaterialxOES, ( GLenum, GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, GetPixelMapxv, ( GLenum, GLint, GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, GetTexGenxvOES, ( GLenum, GLenum, GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, GetTexLevelParameterxvOES, ( GLenum, GLint, GLenum, GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, IndexxOES, ( GLfixed ) ) \
    GFPP_GL_FUNCTION( void, IndexxvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, LoadTransposeMatrixxOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, Map1xOES, ( GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, Map2xOES, ( GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed, GLfixed, GLint, GLint, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, MapGrid1xOES, ( GLint, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, MapGrid2xOES, ( GLint, GLfixed, GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, MultTransposeMatrixxOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1xOES, ( GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1xvOES, ( GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2xOES, ( GLenum, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2xvOES, ( GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3xOES, ( GLenum, GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3xvOES, ( GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4xvOES, ( GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, Normal3xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, PassThroughxOES, ( GLfixed ) ) \
    GFPP_GL_FUNCTION( void, PixelMapx, ( GLenum, GLint, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, PixelStorex, ( GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, PixelTransferxOES, ( GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, PixelZoomxOES, ( GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, PrioritizeTexturesxOES, ( GLsizei, const GLuint *, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos2xOES, ( GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, RasterPos2xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos3xOES, ( GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, RasterPos3xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, RasterPos4xOES, ( GLfixed, GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, RasterPos4xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, RectxOES, ( GLfixed, GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, RectxvOES, ( const GLfixed *, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1xOES, ( GLfixed ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2xOES, ( GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3xOES, ( GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4xOES, ( GLfixed, GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, TexGenxOES, ( GLenum, GLenum, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, TexGenxvOES, ( GLenum, GLenum, const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, Vertex2xOES, ( GLfixed ) ) \
    GFPP_GL_FUNCTION( void, Vertex2xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, Vertex3xOES, ( GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, Vertex3xvOES, ( const GLfixed * ) ) \
    GFPP_GL_FUNCTION( void, Vertex4xOES, ( GLfixed, GLfixed, GLfixed ) ) \
    GFPP_GL_FUNCTION( void, Vertex4xvOES, ( const GLfixed * ) ) \
    \
    /* GL_OES_query_matrix */ \
    GFPP_GL_FUNCTION( GLbitfield, QueryMatrixxOES, ( GLfixed *, GLint * ) ) \
    \
    /* GL_OES_read_format */ \
    \
    /* GL_OES_single_precision */ \
    GFPP_GL_FUNCTION( void, ClearDepthfOES, ( GLclampf ) ) \
    GFPP_GL_FUNCTION( void, ClipPlanefOES, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, DepthRangefOES, ( GLclampf, GLclampf ) ) \
    GFPP_GL_FUNCTION( void, FrustumfOES, ( GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, GetClipPlanefOES, ( GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, OrthofOES, ( GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    \
    /* GL_3DFX_multisample */ \
    \
    /* GL_3DFX_tbuffer */ \
    GFPP_GL_FUNCTION( void, TbufferMask3DFX, ( GLuint ) ) \
    \
    /* GL_3DFX_texture_compression_FXT1 */ \
    \
    /* GL_AMD_blend_minmax_factor */ \
    \
    /* GL_AMD_conservative_depth */ \
    \
    /* GL_AMD_debug_output */ \
    GFPP_GL_FUNCTION( void, DebugMessageEnableAMD, ( GLenum, GLenum, GLsizei, const GLuint *, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, DebugMessageInsertAMD, ( GLenum, GLenum, GLuint, GLsizei, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, DebugMessageCallbackAMD, ( GLDebugProcAMD, void * ) ) \
    GFPP_GL_FUNCTION( GLuint, GetDebugMessageLogAMD, ( GLuint, GLsizei, GLenum *, GLuint *, GLuint *, GLsizei *, GLchar * ) ) \
    \
    /* GL_AMD_depth_clamp_separate */ \
    \
    /* GL_AMD_draw_buffers_blend */ \
    GFPP_GL_FUNCTION( void, BlendFuncIndexedAMD, ( GLuint, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, BlendFuncSeparateIndexedAMD, ( GLuint, GLenum, GLenum, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, BlendEquationIndexedAMD, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, BlendEquationSeparateIndexedAMD, ( GLuint, GLenum, GLenum ) ) \
    \
    /* GL_AMD_interleaved_elements */ \
    GFPP_GL_FUNCTION( void, VertexAttribParameteriAMD, ( GLuint, GLenum, GLint ) ) \
    \
    /* GL_AMD_multi_draw_indirect */ \
    GFPP_GL_FUNCTION( void, MultiDrawArraysIndirectAMD, ( GLenum, const GLvoid *, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, MultiDrawElementsIndirectAMD, ( GLenum, GLenum, const GLvoid *, GLsizei, GLsizei ) ) \
    \
    /* GL_AMD_name_gen_delete */ \
    GFPP_GL_FUNCTION( void, GenNamesAMD, ( GLenum, GLuint, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, DeleteNamesAMD, ( GLenum, GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsNameAMD, ( GLenum, GLuint ) ) \
    \
    /* GL_AMD_performance_monitor */ \
    GFPP_GL_FUNCTION( void, GetPerfMonitorGroupsAMD, ( GLint *, GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetPerfMonitorCountersAMD, ( GLuint, GLint *, GLint *, GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetPerfMonitorGroupStringAMD, ( GLuint, GLsizei, GLsizei *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetPerfMonitorCounterStringAMD, ( GLuint, GLuint, GLsizei, GLsizei *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetPerfMonitorCounterInfoAMD, ( GLuint, GLuint, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GenPerfMonitorsAMD, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, DeletePerfMonitorsAMD, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, SelectPerfMonitorCountersAMD, ( GLuint, GLboolean, GLuint, GLint, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, BeginPerfMonitorAMD, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, EndPerfMonitorAMD, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetPerfMonitorCounterDataAMD, ( GLuint, GLenum, GLsizei, GLuint *, GLint * ) ) \
    \
    /* GL_AMD_pinned_memory */ \
    \
    /* GL_AMD_query_buffer_object */ \
    \
    /* GL_AMD_sample_positions */ \
    GFPP_GL_FUNCTION( void, SetMultisamplefvAMD, ( GLenum, GLuint, const GLfloat * ) ) \
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
    GFPP_GL_FUNCTION( void, TexStorageSparseAMD, ( GLenum, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLbitfield ) ) \
    GFPP_GL_FUNCTION( void, TextureStorageSparseAMD, ( GLuint, GLenum, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLbitfield ) ) \
    \
    /* GL_AMD_stencil_operation_extended */ \
    GFPP_GL_FUNCTION( void, StencilOpValueAMD, ( GLenum, GLuint ) ) \
    \
    /* GL_AMD_texture_texture4 */ \
    \
    /* GL_AMD_transform_feedback3_lines_triangles */ \
    \
    /* GL_AMD_vertex_shader_layer */ \
    \
    /* GL_AMD_vertex_shader_tessellator */ \
    GFPP_GL_FUNCTION( void, TessellationFactorAMD, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TessellationModeAMD, ( GLenum ) ) \
    \
    /* GL_AMD_vertex_shader_viewport_index */ \
    \
    /* GL_APPLE_aux_depth_stencil */ \
    \
    /* GL_APPLE_client_storage */ \
    \
    /* GL_APPLE_element_array */ \
    GFPP_GL_FUNCTION( void, ElementPointerAPPLE, ( GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, DrawElementArrayAPPLE, ( GLenum, GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, DrawRangeElementArrayAPPLE, ( GLenum, GLuint, GLuint, GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, MultiDrawElementArrayAPPLE, ( GLenum, const GLint *, const GLsizei *, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, MultiDrawRangeElementArrayAPPLE, ( GLenum, GLuint, GLuint, const GLint *, const GLsizei *, GLsizei ) ) \
    \
    /* GL_APPLE_fence */ \
    GFPP_GL_FUNCTION( void, GenFencesAPPLE, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, DeleteFencesAPPLE, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, SetFenceAPPLE, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsFenceAPPLE, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLboolean, TestFenceAPPLE, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, FinishFenceAPPLE, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLboolean, TestObjectAPPLE, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, FinishObjectAPPLE, ( GLenum, GLint ) ) \
    \
    /* GL_APPLE_float_pixels */ \
    \
    /* GL_APPLE_flush_buffer_range */ \
    GFPP_GL_FUNCTION( void, BufferParameteriAPPLE, ( GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, FlushMappedBufferRangeAPPLE, ( GLenum, GLintptr, GLsizeiptr ) ) \
    \
    /* GL_APPLE_object_purgeable */ \
    GFPP_GL_FUNCTION( GLenum, ObjectPurgeableAPPLE, ( GLenum, GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( GLenum, ObjectUnpurgeableAPPLE, ( GLenum, GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetObjectParameterivAPPLE, ( GLenum, GLuint, GLenum, GLint * ) ) \
    \
    /* GL_APPLE_rgb_422 */ \
    \
    /* GL_APPLE_row_bytes */ \
    \
    /* GL_APPLE_specular_vector */ \
    \
    /* GL_APPLE_texture_range */ \
    GFPP_GL_FUNCTION( void, TextureRangeAPPLE, ( GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetTexParameterPointervAPPLE, ( GLenum, GLenum, GLvoid ** ) ) \
    \
    /* GL_APPLE_transform_hint */ \
    \
    /* GL_APPLE_vertex_array_object */ \
    GFPP_GL_FUNCTION( void, BindVertexArrayAPPLE, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteVertexArraysAPPLE, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenVertexArraysAPPLE, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsVertexArrayAPPLE, ( GLuint ) ) \
    \
    /* GL_APPLE_vertex_array_range */ \
    GFPP_GL_FUNCTION( void, VertexArrayRangeAPPLE, ( GLsizei, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, FlushVertexArrayRangeAPPLE, ( GLsizei, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayParameteriAPPLE, ( GLenum, GLint ) ) \
    \
    /* GL_APPLE_vertex_program_evaluators */ \
    GFPP_GL_FUNCTION( void, EnableVertexAttribAPPLE, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, DisableVertexAttribAPPLE, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsVertexAttribEnabledAPPLE, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, MapVertexAttrib1dAPPLE, ( GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MapVertexAttrib1fAPPLE, ( GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MapVertexAttrib2dAPPLE, ( GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MapVertexAttrib2fAPPLE, ( GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) ) \
    \
    /* GL_APPLE_ycbcr_422 */ \
    \
    /* GL_ATI_draw_buffers */ \
    GFPP_GL_FUNCTION( void, DrawBuffersATI, ( GLsizei, const GLenum * ) ) \
    \
    /* GL_ATI_element_array */ \
    GFPP_GL_FUNCTION( void, ElementPointerATI, ( GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, DrawElementArrayATI, ( GLenum, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, DrawRangeElementArrayATI, ( GLenum, GLuint, GLuint, GLsizei ) ) \
    \
    /* GL_ATI_envmap_bumpmap */ \
    GFPP_GL_FUNCTION( void, TexBumpParameterivATI, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, TexBumpParameterfvATI, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetTexBumpParameterivATI, ( GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetTexBumpParameterfvATI, ( GLenum, GLfloat * ) ) \
    \
    /* GL_ATI_fragment_shader */ \
    GFPP_GL_FUNCTION( GLuint, GenFragmentShadersATI, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, BindFragmentShaderATI, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteFragmentShaderATI, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, BeginFragmentShaderATI, ( ) ) \
    GFPP_GL_FUNCTION( void, EndFragmentShaderATI, ( ) ) \
    GFPP_GL_FUNCTION( void, PassTexCoordATI, ( GLuint, GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, SampleMapATI, ( GLuint, GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, ColorFragmentOp1ATI, ( GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ColorFragmentOp2ATI, ( GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ColorFragmentOp3ATI, ( GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, AlphaFragmentOp1ATI, ( GLenum, GLuint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, AlphaFragmentOp2ATI, ( GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, AlphaFragmentOp3ATI, ( GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, SetFragmentShaderConstantATI, ( GLuint, const GLfloat * ) ) \
    \
    /* GL_ATI_map_object_buffer */ \
    GFPP_GL_FUNCTION( void *, MapObjectBufferATI, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, UnmapObjectBufferATI, ( GLuint ) ) \
    \
    /* GL_ATI_meminfo */ \
    \
    /* GL_ATI_pixel_format_float */ \
    \
    /* GL_ATI_pn_triangles */ \
    GFPP_GL_FUNCTION( void, PNTrianglesiATI, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, PNTrianglesfATI, ( GLenum, GLfloat ) ) \
    \
    /* GL_ATI_separate_stencil */ \
    GFPP_GL_FUNCTION( void, StencilOpSeparateATI, ( GLenum, GLenum, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, StencilFuncSeparateATI, ( GLenum, GLenum, GLint, GLuint ) ) \
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
    GFPP_GL_FUNCTION( GLuint, NewObjectBufferATI, ( GLsizei, const GLvoid *, GLenum ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsObjectBufferATI, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, UpdateObjectBufferATI, ( GLuint, GLuint, GLsizei, const GLvoid *, GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetObjectBufferfvATI, ( GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetObjectBufferivATI, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, FreeObjectBufferATI, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, ArrayObjectATI, ( GLenum, GLint, GLenum, GLsizei, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetArrayObjectfvATI, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetArrayObjectivATI, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, VariantArrayObjectATI, ( GLuint, GLenum, GLsizei, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetVariantArrayObjectfvATI, ( GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetVariantArrayObjectivATI, ( GLuint, GLenum, GLint * ) ) \
    \
    /* GL_ATI_vertex_attrib_array_object */ \
    GFPP_GL_FUNCTION( void, VertexAttribArrayObjectATI, ( GLuint, GLint, GLenum, GLboolean, GLsizei, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribArrayObjectfvATI, ( GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribArrayObjectivATI, ( GLuint, GLenum, GLint * ) ) \
    \
    /* GL_ATI_vertex_streams */ \
    GFPP_GL_FUNCTION( void, VertexStream1sATI, ( GLenum, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexStream1svATI, ( GLenum, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream1iATI, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexStream1ivATI, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream1fATI, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexStream1fvATI, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream1dATI, ( GLenum, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexStream1dvATI, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream2sATI, ( GLenum, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexStream2svATI, ( GLenum, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream2iATI, ( GLenum, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexStream2ivATI, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream2fATI, ( GLenum, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexStream2fvATI, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream2dATI, ( GLenum, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexStream2dvATI, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream3sATI, ( GLenum, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexStream3svATI, ( GLenum, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream3iATI, ( GLenum, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexStream3ivATI, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream3fATI, ( GLenum, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexStream3fvATI, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream3dATI, ( GLenum, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexStream3dvATI, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream4sATI, ( GLenum, GLshort, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexStream4svATI, ( GLenum, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream4iATI, ( GLenum, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexStream4ivATI, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream4fATI, ( GLenum, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexStream4fvATI, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexStream4dATI, ( GLenum, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexStream4dvATI, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, NormalStream3bATI, ( GLenum, GLbyte, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, NormalStream3bvATI, ( GLenum, const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, NormalStream3sATI, ( GLenum, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, NormalStream3svATI, ( GLenum, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, NormalStream3iATI, ( GLenum, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, NormalStream3ivATI, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, NormalStream3fATI, ( GLenum, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, NormalStream3fvATI, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, NormalStream3dATI, ( GLenum, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, NormalStream3dvATI, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ClientActiveVertexStreamATI, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, VertexBlendEnviATI, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexBlendEnvfATI, ( GLenum, GLfloat ) ) \
    \
    /* GL_EXT_422_pixels */ \
    \
    /* GL_EXT_abgr */ \
    \
    /* GL_EXT_bgra */ \
    \
    /* GL_EXT_bindable_uniform */ \
    GFPP_GL_FUNCTION( void, UniformBufferEXT, ( GLuint, GLint, GLuint ) ) \
    GFPP_GL_FUNCTION( GLint, GetUniformBufferSizeEXT, ( GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( GLintptr, GetUniformOffsetEXT, ( GLuint, GLint ) ) \
    \
    /* GL_EXT_blend_color */ \
    GFPP_GL_FUNCTION( void, BlendColorEXT, ( GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    \
    /* GL_EXT_blend_equation_separate */ \
    GFPP_GL_FUNCTION( void, BlendEquationSeparateEXT, ( GLenum, GLenum ) ) \
    \
    /* GL_EXT_blend_func_separate */ \
    GFPP_GL_FUNCTION( void, BlendFuncSeparateEXT, ( GLenum, GLenum, GLenum, GLenum ) ) \
    \
    /* GL_EXT_blend_logic_op */ \
    \
    /* GL_EXT_blend_minmax */ \
    GFPP_GL_FUNCTION( void, BlendEquationEXT, ( GLenum ) ) \
    \
    /* GL_EXT_blend_subtract */ \
    \
    /* GL_EXT_clip_volume_hint */ \
    \
    /* GL_EXT_cmyka */ \
    \
    /* GL_EXT_color_subtable */ \
    GFPP_GL_FUNCTION( void, ColorSubTableEXT, ( GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CopyColorSubTableEXT, ( GLenum, GLsizei, GLint, GLint, GLsizei ) ) \
    \
    /* GL_EXT_compiled_vertex_array */ \
    GFPP_GL_FUNCTION( void, LockArraysEXT, ( GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, UnlockArraysEXT, ( ) ) \
    \
    /* GL_EXT_convolution */ \
    GFPP_GL_FUNCTION( void, ConvolutionFilter1DEXT, ( GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, ConvolutionFilter2DEXT, ( GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, ConvolutionParameterfEXT, ( GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ConvolutionParameterfvEXT, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ConvolutionParameteriEXT, ( GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, ConvolutionParameterivEXT, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, CopyConvolutionFilter1DEXT, ( GLenum, GLenum, GLint, GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, CopyConvolutionFilter2DEXT, ( GLenum, GLenum, GLint, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, GetConvolutionFilterEXT, ( GLenum, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetConvolutionParameterfvEXT, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetConvolutionParameterivEXT, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetSeparableFilterEXT, ( GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, SeparableFilter2DEXT, ( GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid * ) ) \
    \
    /* GL_EXT_coordinate_frame */ \
    GFPP_GL_FUNCTION( void, Tangent3bEXT, ( GLbyte, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, Tangent3bvEXT, ( const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, Tangent3dEXT, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Tangent3dvEXT, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, Tangent3fEXT, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Tangent3fvEXT, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Tangent3iEXT, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Tangent3ivEXT, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Tangent3sEXT, ( GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, Tangent3svEXT, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, Binormal3bEXT, ( GLbyte, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, Binormal3bvEXT, ( const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, Binormal3dEXT, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, Binormal3dvEXT, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, Binormal3fEXT, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Binormal3fvEXT, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Binormal3iEXT, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, Binormal3ivEXT, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, Binormal3sEXT, ( GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, Binormal3svEXT, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, TangentPointerEXT, ( GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, BinormalPointerEXT, ( GLenum, GLsizei, const GLvoid * ) ) \
    \
    /* GL_EXT_copy_texture */ \
    GFPP_GL_FUNCTION( void, CopyTexImage1DEXT, ( GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint ) ) \
    GFPP_GL_FUNCTION( void, CopyTexImage2DEXT, ( GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint ) ) \
    GFPP_GL_FUNCTION( void, CopyTexSubImage1DEXT, ( GLenum, GLint, GLint, GLint, GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, CopyTexSubImage2DEXT, ( GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, CopyTexSubImage3DEXT, ( GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) ) \
    \
    /* GL_EXT_cull_vertex */ \
    GFPP_GL_FUNCTION( void, CullParameterdvEXT, ( GLenum, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, CullParameterfvEXT, ( GLenum, GLfloat * ) ) \
    \
    /* GL_EXT_depth_bounds_test */ \
    GFPP_GL_FUNCTION( void, DepthBoundsEXT, ( GLclampd, GLclampd ) ) \
    \
    /* GL_EXT_direct_state_access */ \
    GFPP_GL_FUNCTION( void, MatrixLoadfEXT, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MatrixLoaddEXT, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MatrixMultfEXT, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MatrixMultdEXT, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MatrixLoadIdentityEXT, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, MatrixRotatefEXT, ( GLenum, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MatrixRotatedEXT, ( GLenum, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MatrixScalefEXT, ( GLenum, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MatrixScaledEXT, ( GLenum, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MatrixTranslatefEXT, ( GLenum, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MatrixTranslatedEXT, ( GLenum, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MatrixFrustumEXT, ( GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MatrixOrthoEXT, ( GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MatrixPopEXT, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, MatrixPushEXT, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, ClientAttribDefaultEXT, ( GLbitfield ) ) \
    GFPP_GL_FUNCTION( void, PushClientAttribDefaultEXT, ( GLbitfield ) ) \
    GFPP_GL_FUNCTION( void, TextureParameterfEXT, ( GLuint, GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TextureParameterfvEXT, ( GLuint, GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TextureParameteriEXT, ( GLuint, GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, TextureParameterivEXT, ( GLuint, GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, TextureImage1DEXT, ( GLuint, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TextureImage2DEXT, ( GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TextureSubImage1DEXT, ( GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TextureSubImage2DEXT, ( GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CopyTextureImage1DEXT, ( GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint ) ) \
    GFPP_GL_FUNCTION( void, CopyTextureImage2DEXT, ( GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint ) ) \
    GFPP_GL_FUNCTION( void, CopyTextureSubImage1DEXT, ( GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, CopyTextureSubImage2DEXT, ( GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, GetTextureImageEXT, ( GLuint, GLenum, GLint, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetTextureParameterfvEXT, ( GLuint, GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetTextureParameterivEXT, ( GLuint, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetTextureLevelParameterfvEXT, ( GLuint, GLenum, GLint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetTextureLevelParameterivEXT, ( GLuint, GLenum, GLint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, TextureImage3DEXT, ( GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TextureSubImage3DEXT, ( GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CopyTextureSubImage3DEXT, ( GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, BindMultiTextureEXT, ( GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoordPointerEXT, ( GLenum, GLint, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexEnvfEXT, ( GLenum, GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MultiTexEnvfvEXT, ( GLenum, GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexEnviEXT, ( GLenum, GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexEnvivEXT, ( GLenum, GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexGendEXT, ( GLenum, GLenum, GLenum, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, MultiTexGendvEXT, ( GLenum, GLenum, GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexGenfEXT, ( GLenum, GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MultiTexGenfvEXT, ( GLenum, GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexGeniEXT, ( GLenum, GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexGenivEXT, ( GLenum, GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetMultiTexEnvfvEXT, ( GLenum, GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetMultiTexEnvivEXT, ( GLenum, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetMultiTexGendvEXT, ( GLenum, GLenum, GLenum, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetMultiTexGenfvEXT, ( GLenum, GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetMultiTexGenivEXT, ( GLenum, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexParameteriEXT, ( GLenum, GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexParameterivEXT, ( GLenum, GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexParameterfEXT, ( GLenum, GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, MultiTexParameterfvEXT, ( GLenum, GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexImage1DEXT, ( GLenum, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexImage2DEXT, ( GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexSubImage1DEXT, ( GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexSubImage2DEXT, ( GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CopyMultiTexImage1DEXT, ( GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint ) ) \
    GFPP_GL_FUNCTION( void, CopyMultiTexImage2DEXT, ( GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint ) ) \
    GFPP_GL_FUNCTION( void, CopyMultiTexSubImage1DEXT, ( GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, CopyMultiTexSubImage2DEXT, ( GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, GetMultiTexImageEXT, ( GLenum, GLenum, GLint, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetMultiTexParameterfvEXT, ( GLenum, GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetMultiTexParameterivEXT, ( GLenum, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetMultiTexLevelParameterfvEXT, ( GLenum, GLenum, GLint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetMultiTexLevelParameterivEXT, ( GLenum, GLenum, GLint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexImage3DEXT, ( GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexSubImage3DEXT, ( GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CopyMultiTexSubImage3DEXT, ( GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, EnableClientStateIndexedEXT, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DisableClientStateIndexedEXT, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetFloatIndexedvEXT, ( GLenum, GLuint, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetDoubleIndexedvEXT, ( GLenum, GLuint, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetPointerIndexedvEXT, ( GLenum, GLuint, GLvoid ** ) ) \
    GFPP_GL_FUNCTION( void, EnableIndexedEXT, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DisableIndexedEXT, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsEnabledIndexedEXT, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetIntegerIndexedvEXT, ( GLenum, GLuint, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetBooleanIndexedvEXT, ( GLenum, GLuint, GLboolean * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTextureImage3DEXT, ( GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTextureImage2DEXT, ( GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTextureImage1DEXT, ( GLuint, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTextureSubImage3DEXT, ( GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTextureSubImage2DEXT, ( GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedTextureSubImage1DEXT, ( GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetCompressedTextureImageEXT, ( GLuint, GLenum, GLint, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedMultiTexImage3DEXT, ( GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedMultiTexImage2DEXT, ( GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedMultiTexImage1DEXT, ( GLenum, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedMultiTexSubImage3DEXT, ( GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedMultiTexSubImage2DEXT, ( GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, CompressedMultiTexSubImage1DEXT, ( GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetCompressedMultiTexImageEXT, ( GLenum, GLenum, GLint, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, MatrixLoadTransposefEXT, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MatrixLoadTransposedEXT, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, MatrixMultTransposefEXT, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, MatrixMultTransposedEXT, ( GLenum, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, NamedBufferDataEXT, ( GLuint, GLsizeiptr, const GLvoid *, GLenum ) ) \
    GFPP_GL_FUNCTION( void, NamedBufferSubDataEXT, ( GLuint, GLintptr, GLsizeiptr, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void *, MapNamedBufferEXT, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( GLboolean, UnmapNamedBufferEXT, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetNamedBufferParameterivEXT, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetNamedBufferPointervEXT, ( GLuint, GLenum, GLvoid ** ) ) \
    GFPP_GL_FUNCTION( void, GetNamedBufferSubDataEXT, ( GLuint, GLintptr, GLsizeiptr, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1fEXT, ( GLuint, GLint, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2fEXT, ( GLuint, GLint, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3fEXT, ( GLuint, GLint, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4fEXT, ( GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1iEXT, ( GLuint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2iEXT, ( GLuint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3iEXT, ( GLuint, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4iEXT, ( GLuint, GLint, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1fvEXT, ( GLuint, GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2fvEXT, ( GLuint, GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3fvEXT, ( GLuint, GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4fvEXT, ( GLuint, GLint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1ivEXT, ( GLuint, GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2ivEXT, ( GLuint, GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3ivEXT, ( GLuint, GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4ivEXT, ( GLuint, GLint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix2fvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix3fvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix4fvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix2x3fvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix3x2fvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix2x4fvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix4x2fvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix3x4fvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix4x3fvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TextureBufferEXT, ( GLuint, GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexBufferEXT, ( GLenum, GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, TextureParameterIivEXT, ( GLuint, GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, TextureParameterIuivEXT, ( GLuint, GLenum, GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetTextureParameterIivEXT, ( GLuint, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetTextureParameterIuivEXT, ( GLuint, GLenum, GLenum, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexParameterIivEXT, ( GLenum, GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexParameterIuivEXT, ( GLenum, GLenum, GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetMultiTexParameterIivEXT, ( GLenum, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetMultiTexParameterIuivEXT, ( GLenum, GLenum, GLenum, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1uiEXT, ( GLuint, GLint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2uiEXT, ( GLuint, GLint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3uiEXT, ( GLuint, GLint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4uiEXT, ( GLuint, GLint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1uivEXT, ( GLuint, GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2uivEXT, ( GLuint, GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3uivEXT, ( GLuint, GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4uivEXT, ( GLuint, GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, NamedProgramLocalParameters4fvEXT, ( GLuint, GLenum, GLuint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, NamedProgramLocalParameterI4iEXT, ( GLuint, GLenum, GLuint, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, NamedProgramLocalParameterI4ivEXT, ( GLuint, GLenum, GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, NamedProgramLocalParametersI4ivEXT, ( GLuint, GLenum, GLuint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, NamedProgramLocalParameterI4uiEXT, ( GLuint, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, NamedProgramLocalParameterI4uivEXT, ( GLuint, GLenum, GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, NamedProgramLocalParametersI4uivEXT, ( GLuint, GLenum, GLuint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetNamedProgramLocalParameterIivEXT, ( GLuint, GLenum, GLuint, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetNamedProgramLocalParameterIuivEXT, ( GLuint, GLenum, GLuint, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, EnableClientStateiEXT, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DisableClientStateiEXT, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetFloati_vEXT, ( GLenum, GLuint, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetDoublei_vEXT, ( GLenum, GLuint, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetPointeri_vEXT, ( GLenum, GLuint, GLvoid ** ) ) \
    GFPP_GL_FUNCTION( void, NamedProgramStringEXT, ( GLuint, GLenum, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, NamedProgramLocalParameter4dEXT, ( GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, NamedProgramLocalParameter4dvEXT, ( GLuint, GLenum, GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, NamedProgramLocalParameter4fEXT, ( GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, NamedProgramLocalParameter4fvEXT, ( GLuint, GLenum, GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetNamedProgramLocalParameterdvEXT, ( GLuint, GLenum, GLuint, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetNamedProgramLocalParameterfvEXT, ( GLuint, GLenum, GLuint, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetNamedProgramivEXT, ( GLuint, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetNamedProgramStringEXT, ( GLuint, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, NamedRenderbufferStorageEXT, ( GLuint, GLenum, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, GetNamedRenderbufferParameterivEXT, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, NamedRenderbufferStorageMultisampleEXT, ( GLuint, GLsizei, GLenum, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, NamedRenderbufferStorageMultisampleCoverageEXT, ( GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( GLenum, CheckNamedFramebufferStatusEXT, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, NamedFramebufferTexture1DEXT, ( GLuint, GLenum, GLenum, GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void, NamedFramebufferTexture2DEXT, ( GLuint, GLenum, GLenum, GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void, NamedFramebufferTexture3DEXT, ( GLuint, GLenum, GLenum, GLuint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, NamedFramebufferRenderbufferEXT, ( GLuint, GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetNamedFramebufferAttachmentParameterivEXT, ( GLuint, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GenerateTextureMipmapEXT, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, GenerateMultiTexMipmapEXT, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, FramebufferDrawBufferEXT, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, FramebufferDrawBuffersEXT, ( GLuint, GLsizei, const GLenum * ) ) \
    GFPP_GL_FUNCTION( void, FramebufferReadBufferEXT, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetFramebufferParameterivEXT, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, NamedCopyBufferSubDataEXT, ( GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr ) ) \
    GFPP_GL_FUNCTION( void, NamedFramebufferTextureEXT, ( GLuint, GLenum, GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void, NamedFramebufferTextureLayerEXT, ( GLuint, GLenum, GLuint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, NamedFramebufferTextureFaceEXT, ( GLuint, GLenum, GLuint, GLint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, TextureRenderbufferEXT, ( GLuint, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, MultiTexRenderbufferEXT, ( GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayVertexOffsetEXT, ( GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayColorOffsetEXT, ( GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayEdgeFlagOffsetEXT, ( GLuint, GLuint, GLsizei, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayIndexOffsetEXT, ( GLuint, GLuint, GLenum, GLsizei, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayNormalOffsetEXT, ( GLuint, GLuint, GLenum, GLsizei, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayTexCoordOffsetEXT, ( GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayMultiTexCoordOffsetEXT, ( GLuint, GLuint, GLenum, GLint, GLenum, GLsizei, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayFogCoordOffsetEXT, ( GLuint, GLuint, GLenum, GLsizei, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, VertexArraySecondaryColorOffsetEXT, ( GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayVertexAttribOffsetEXT, ( GLuint, GLuint, GLuint, GLint, GLenum, GLboolean, GLsizei, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayVertexAttribIOffsetEXT, ( GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, EnableVertexArrayEXT, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, DisableVertexArrayEXT, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, EnableVertexArrayAttribEXT, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DisableVertexArrayAttribEXT, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetVertexArrayIntegervEXT, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexArrayPointervEXT, ( GLuint, GLenum, GLvoid ** ) ) \
    GFPP_GL_FUNCTION( void, GetVertexArrayIntegeri_vEXT, ( GLuint, GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexArrayPointeri_vEXT, ( GLuint, GLuint, GLenum, GLvoid ** ) ) \
    GFPP_GL_FUNCTION( void *, MapNamedBufferRangeEXT, ( GLuint, GLintptr, GLsizeiptr, GLbitfield ) ) \
    GFPP_GL_FUNCTION( void, FlushMappedNamedBufferRangeEXT, ( GLuint, GLintptr, GLsizeiptr ) ) \
    GFPP_GL_FUNCTION( void, NamedBufferStorageEXT, ( GLuint, GLsizeiptr, const void *, GLbitfield ) ) \
    GFPP_GL_FUNCTION( void, ClearNamedBufferDataEXT, ( GLuint, GLenum, GLenum, GLenum, const void * ) ) \
    GFPP_GL_FUNCTION( void, ClearNamedBufferSubDataEXT, ( GLuint, GLenum, GLenum, GLenum, GLsizeiptr, GLsizeiptr, const void * ) ) \
    GFPP_GL_FUNCTION( void, NamedFramebufferParameteriEXT, ( GLuint, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, GetNamedFramebufferParameterivEXT, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1dEXT, ( GLuint, GLint, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2dEXT, ( GLuint, GLint, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3dEXT, ( GLuint, GLint, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4dEXT, ( GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1dvEXT, ( GLuint, GLint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2dvEXT, ( GLuint, GLint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3dvEXT, ( GLuint, GLint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4dvEXT, ( GLuint, GLint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix2dvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix3dvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix4dvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix2x3dvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix2x4dvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix3x2dvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix3x4dvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix4x2dvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformMatrix4x3dvEXT, ( GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, TextureBufferRangeEXT, ( GLuint, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr ) ) \
    GFPP_GL_FUNCTION( void, TextureStorage1DEXT, ( GLuint, GLenum, GLsizei, GLenum, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, TextureStorage2DEXT, ( GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, TextureStorage3DEXT, ( GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, TextureStorage2DMultisampleEXT, ( GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, TextureStorage3DMultisampleEXT, ( GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayBindVertexBufferEXT, ( GLuint, GLuint, GLuint, GLintptr, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayVertexAttribFormatEXT, ( GLuint, GLuint, GLint, GLenum, GLboolean, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayVertexAttribIFormatEXT, ( GLuint, GLuint, GLint, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayVertexAttribLFormatEXT, ( GLuint, GLuint, GLint, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayVertexAttribBindingEXT, ( GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayVertexBindingDivisorEXT, ( GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayVertexAttribLOffsetEXT, ( GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, TexturePageCommitmentEXT, ( GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayVertexAttribDivisorEXT, ( GLuint, GLuint, GLuint ) ) \
    \
    /* GL_EXT_draw_buffers2 */ \
    GFPP_GL_FUNCTION( void, ColorMaskIndexedEXT, ( GLuint, GLboolean, GLboolean, GLboolean, GLboolean ) ) \
    \
    /* GL_EXT_draw_instanced */ \
    GFPP_GL_FUNCTION( void, DrawArraysInstancedEXT, ( GLenum, GLint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, DrawElementsInstancedEXT, ( GLenum, GLsizei, GLenum, const GLvoid *, GLsizei ) ) \
    \
    /* GL_EXT_draw_range_elements */ \
    GFPP_GL_FUNCTION( void, DrawRangeElementsEXT, ( GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid * ) ) \
    \
    /* GL_EXT_fog_coord */ \
    GFPP_GL_FUNCTION( void, FogCoordfEXT, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, FogCoordfvEXT, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, FogCoorddEXT, ( GLdouble ) ) \
    GFPP_GL_FUNCTION( void, FogCoorddvEXT, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, FogCoordPointerEXT, ( GLenum, GLsizei, const GLvoid * ) ) \
    \
    /* GL_EXT_framebuffer_blit */ \
    GFPP_GL_FUNCTION( void, BlitFramebufferEXT, ( GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum ) ) \
    \
    /* GL_EXT_framebuffer_multisample */ \
    GFPP_GL_FUNCTION( void, RenderbufferStorageMultisampleEXT, ( GLenum, GLsizei, GLenum, GLsizei, GLsizei ) ) \
    \
    /* GL_EXT_framebuffer_multisample_blit_scaled */ \
    \
    /* GL_EXT_framebuffer_object */ \
    GFPP_GL_FUNCTION( GLboolean, IsRenderbufferEXT, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, BindRenderbufferEXT, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteRenderbuffersEXT, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenRenderbuffersEXT, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, RenderbufferStorageEXT, ( GLenum, GLenum, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, GetRenderbufferParameterivEXT, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsFramebufferEXT, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, BindFramebufferEXT, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteFramebuffersEXT, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenFramebuffersEXT, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( GLenum, CheckFramebufferStatusEXT, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTexture1DEXT, ( GLenum, GLenum, GLenum, GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTexture2DEXT, ( GLenum, GLenum, GLenum, GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTexture3DEXT, ( GLenum, GLenum, GLenum, GLuint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, FramebufferRenderbufferEXT, ( GLenum, GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetFramebufferAttachmentParameterivEXT, ( GLenum, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GenerateMipmapEXT, ( GLenum ) ) \
    \
    /* GL_EXT_framebuffer_sRGB */ \
    \
    /* GL_EXT_geometry_shader4 */ \
    GFPP_GL_FUNCTION( void, ProgramParameteriEXT, ( GLuint, GLenum, GLint ) ) \
    \
    /* GL_EXT_gpu_program_parameters */ \
    GFPP_GL_FUNCTION( void, ProgramEnvParameters4fvEXT, ( GLenum, GLuint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramLocalParameters4fvEXT, ( GLenum, GLuint, GLsizei, const GLfloat * ) ) \
    \
    /* GL_EXT_gpu_shader4 */ \
    GFPP_GL_FUNCTION( void, GetUniformuivEXT, ( GLuint, GLint, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, BindFragDataLocationEXT, ( GLuint, GLuint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( GLint, GetFragDataLocationEXT, ( GLuint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, Uniform1uiEXT, ( GLint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, Uniform2uiEXT, ( GLint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, Uniform3uiEXT, ( GLint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, Uniform4uiEXT, ( GLint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, Uniform1uivEXT, ( GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, Uniform2uivEXT, ( GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, Uniform3uivEXT, ( GLint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, Uniform4uivEXT, ( GLint, GLsizei, const GLuint * ) ) \
    \
    /* GL_EXT_histogram */ \
    GFPP_GL_FUNCTION( void, GetHistogramEXT, ( GLenum, GLboolean, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetHistogramParameterfvEXT, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetHistogramParameterivEXT, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetMinmaxEXT, ( GLenum, GLboolean, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetMinmaxParameterfvEXT, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetMinmaxParameterivEXT, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, HistogramEXT, ( GLenum, GLsizei, GLenum, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, MinmaxEXT, ( GLenum, GLenum, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, ResetHistogramEXT, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, ResetMinmaxEXT, ( GLenum ) ) \
    \
    /* GL_EXT_index_array_formats */ \
    \
    /* GL_EXT_index_func */ \
    GFPP_GL_FUNCTION( void, IndexFuncEXT, ( GLenum, GLclampf ) ) \
    \
    /* GL_EXT_index_material */ \
    GFPP_GL_FUNCTION( void, IndexMaterialEXT, ( GLenum, GLenum ) ) \
    \
    /* GL_EXT_index_texture */ \
    \
    /* GL_EXT_light_texture */ \
    GFPP_GL_FUNCTION( void, ApplyTextureEXT, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, TextureLightEXT, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, TextureMaterialEXT, ( GLenum, GLenum ) ) \
    \
    /* GL_EXT_misc_attribute */ \
    \
    /* GL_EXT_multi_draw_arrays */ \
    GFPP_GL_FUNCTION( void, MultiDrawArraysEXT, ( GLenum, const GLint *, const GLsizei *, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, MultiDrawElementsEXT, ( GLenum, const GLsizei *, GLenum, const GLvoid *const*, GLsizei ) ) \
    \
    /* GL_EXT_multisample */ \
    GFPP_GL_FUNCTION( void, SampleMaskEXT, ( GLclampf, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, SamplePatternEXT, ( GLenum ) ) \
    \
    /* GL_EXT_packed_depth_stencil */ \
    \
    /* GL_EXT_packed_float */ \
    \
    /* GL_EXT_packed_pixels */ \
    \
    /* GL_EXT_paletted_texture */ \
    GFPP_GL_FUNCTION( void, ColorTableEXT, ( GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetColorTableEXT, ( GLenum, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetColorTableParameterivEXT, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetColorTableParameterfvEXT, ( GLenum, GLenum, GLfloat * ) ) \
    \
    /* GL_EXT_pixel_buffer_object */ \
    \
    /* GL_EXT_pixel_transform */ \
    GFPP_GL_FUNCTION( void, PixelTransformParameteriEXT, ( GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, PixelTransformParameterfEXT, ( GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, PixelTransformParameterivEXT, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, PixelTransformParameterfvEXT, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetPixelTransformParameterivEXT, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetPixelTransformParameterfvEXT, ( GLenum, GLenum, GLfloat * ) ) \
    \
    /* GL_EXT_pixel_transform_color_table */ \
    \
    /* GL_EXT_point_parameters */ \
    GFPP_GL_FUNCTION( void, PointParameterfEXT, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, PointParameterfvEXT, ( GLenum, const GLfloat * ) ) \
    \
    /* GL_EXT_polygon_offset */ \
    GFPP_GL_FUNCTION( void, PolygonOffsetEXT, ( GLfloat, GLfloat ) ) \
    \
    /* GL_EXT_provoking_vertex */ \
    GFPP_GL_FUNCTION( void, ProvokingVertexEXT, ( GLenum ) ) \
    \
    /* GL_EXT_rescale_normal */ \
    \
    /* GL_EXT_secondary_color */ \
    GFPP_GL_FUNCTION( void, SecondaryColor3bEXT, ( GLbyte, GLbyte, GLbyte ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3bvEXT, ( const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3dEXT, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3dvEXT, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3fEXT, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3fvEXT, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3iEXT, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3ivEXT, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3sEXT, ( GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3svEXT, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3ubEXT, ( GLubyte, GLubyte, GLubyte ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3ubvEXT, ( const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3uiEXT, ( GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3uivEXT, ( const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3usEXT, ( GLushort, GLushort, GLushort ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3usvEXT, ( const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColorPointerEXT, ( GLint, GLenum, GLsizei, const GLvoid * ) ) \
    \
    /* GL_EXT_separate_shader_objects */ \
    GFPP_GL_FUNCTION( void, UseShaderProgramEXT, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ActiveProgramEXT, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLuint, CreateShaderProgramEXT, ( GLenum, const GLchar * ) ) \
    \
    /* GL_EXT_separate_specular_color */ \
    \
    /* GL_EXT_shader_image_load_store */ \
    GFPP_GL_FUNCTION( void, BindImageTextureEXT, ( GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, MemoryBarrierEXT, ( GLbitfield ) ) \
    \
    /* GL_EXT_shadow_funcs */ \
    \
    /* GL_EXT_shared_texture_palette */ \
    \
    /* GL_EXT_stencil_clear_tag */ \
    GFPP_GL_FUNCTION( void, StencilClearTagEXT, ( GLsizei, GLuint ) ) \
    \
    /* GL_EXT_stencil_two_side */ \
    GFPP_GL_FUNCTION( void, ActiveStencilFaceEXT, ( GLenum ) ) \
    \
    /* GL_EXT_stencil_wrap */ \
    \
    /* GL_EXT_subtexture */ \
    GFPP_GL_FUNCTION( void, TexSubImage1DEXT, ( GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TexSubImage2DEXT, ( GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    \
    /* GL_EXT_texture */ \
    \
    /* GL_EXT_texture3D */ \
    GFPP_GL_FUNCTION( void, TexImage3DEXT, ( GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TexSubImage3DEXT, ( GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    \
    /* GL_EXT_texture_array */ \
    \
    /* GL_EXT_texture_buffer_object */ \
    GFPP_GL_FUNCTION( void, TexBufferEXT, ( GLenum, GLenum, GLuint ) ) \
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
    GFPP_GL_FUNCTION( void, TexParameterIivEXT, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, TexParameterIuivEXT, ( GLenum, GLenum, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetTexParameterIivEXT, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetTexParameterIuivEXT, ( GLenum, GLenum, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ClearColorIiEXT, ( GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, ClearColorIuiEXT, ( GLuint, GLuint, GLuint, GLuint ) ) \
    \
    /* GL_EXT_texture_lod_bias */ \
    \
    /* GL_EXT_texture_mirror_clamp */ \
    \
    /* GL_EXT_texture_object */ \
    GFPP_GL_FUNCTION( GLboolean, AreTexturesResidentEXT, ( GLsizei, const GLuint *, GLboolean * ) ) \
    GFPP_GL_FUNCTION( void, BindTextureEXT, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteTexturesEXT, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenTexturesEXT, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsTextureEXT, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, PrioritizeTexturesEXT, ( GLsizei, const GLuint *, const GLclampf * ) ) \
    \
    /* GL_EXT_texture_perturb_normal */ \
    GFPP_GL_FUNCTION( void, TextureNormalEXT, ( GLenum ) ) \
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
    GFPP_GL_FUNCTION( void, GetQueryObjecti64vEXT, ( GLuint, GLenum, GLint64 * ) ) \
    GFPP_GL_FUNCTION( void, GetQueryObjectui64vEXT, ( GLuint, GLenum, GLuint64 * ) ) \
    \
    /* GL_EXT_transform_feedback */ \
    GFPP_GL_FUNCTION( void, BeginTransformFeedbackEXT, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, EndTransformFeedbackEXT, ( ) ) \
    GFPP_GL_FUNCTION( void, BindBufferRangeEXT, ( GLenum, GLuint, GLuint, GLintptr, GLsizeiptr ) ) \
    GFPP_GL_FUNCTION( void, BindBufferOffsetEXT, ( GLenum, GLuint, GLuint, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, BindBufferBaseEXT, ( GLenum, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, TransformFeedbackVaryingsEXT, ( GLuint, GLsizei, const GLchar *const*, GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetTransformFeedbackVaryingEXT, ( GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar * ) ) \
    \
    /* GL_EXT_vertex_array */ \
    GFPP_GL_FUNCTION( void, ArrayElementEXT, ( GLint ) ) \
    GFPP_GL_FUNCTION( void, ColorPointerEXT, ( GLint, GLenum, GLsizei, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, DrawArraysEXT, ( GLenum, GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, EdgeFlagPointerEXT, ( GLsizei, GLsizei, const GLboolean * ) ) \
    GFPP_GL_FUNCTION( void, GetPointervEXT, ( GLenum, GLvoid ** ) ) \
    GFPP_GL_FUNCTION( void, IndexPointerEXT, ( GLenum, GLsizei, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, NormalPointerEXT, ( GLenum, GLsizei, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TexCoordPointerEXT, ( GLint, GLenum, GLsizei, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, VertexPointerEXT, ( GLint, GLenum, GLsizei, GLsizei, const GLvoid * ) ) \
    \
    /* GL_EXT_vertex_array_bgra */ \
    \
    /* GL_EXT_vertex_attrib_64bit */ \
    GFPP_GL_FUNCTION( void, VertexAttribL1dEXT, ( GLuint, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL2dEXT, ( GLuint, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL3dEXT, ( GLuint, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL4dEXT, ( GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL1dvEXT, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL2dvEXT, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL3dvEXT, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL4dvEXT, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribLPointerEXT, ( GLuint, GLint, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribLdvEXT, ( GLuint, GLenum, GLdouble * ) ) \
    \
    /* GL_EXT_vertex_shader */ \
    GFPP_GL_FUNCTION( void, BeginVertexShaderEXT, ( ) ) \
    GFPP_GL_FUNCTION( void, EndVertexShaderEXT, ( ) ) \
    GFPP_GL_FUNCTION( void, BindVertexShaderEXT, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLuint, GenVertexShadersEXT, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteVertexShaderEXT, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, ShaderOp1EXT, ( GLenum, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ShaderOp2EXT, ( GLenum, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ShaderOp3EXT, ( GLenum, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, SwizzleEXT, ( GLuint, GLuint, GLenum, GLenum, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, WriteMaskEXT, ( GLuint, GLuint, GLenum, GLenum, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, InsertComponentEXT, ( GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ExtractComponentEXT, ( GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( GLuint, GenSymbolsEXT, ( GLenum, GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, SetInvariantEXT, ( GLuint, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, SetLocalConstantEXT, ( GLuint, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, VariantbvEXT, ( GLuint, const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, VariantsvEXT, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VariantivEXT, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VariantfvEXT, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VariantdvEXT, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VariantubvEXT, ( GLuint, const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, VariantusvEXT, ( GLuint, const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, VariantuivEXT, ( GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VariantPointerEXT, ( GLuint, GLenum, GLuint, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, EnableVariantClientStateEXT, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, DisableVariantClientStateEXT, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLuint, BindLightParameterEXT, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( GLuint, BindMaterialParameterEXT, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( GLuint, BindTexGenParameterEXT, ( GLenum, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( GLuint, BindTextureUnitParameterEXT, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( GLuint, BindParameterEXT, ( GLenum ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsVariantEnabledEXT, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetVariantBooleanvEXT, ( GLuint, GLenum, GLboolean * ) ) \
    GFPP_GL_FUNCTION( void, GetVariantIntegervEXT, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetVariantFloatvEXT, ( GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetVariantPointervEXT, ( GLuint, GLenum, GLvoid ** ) ) \
    GFPP_GL_FUNCTION( void, GetInvariantBooleanvEXT, ( GLuint, GLenum, GLboolean * ) ) \
    GFPP_GL_FUNCTION( void, GetInvariantIntegervEXT, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetInvariantFloatvEXT, ( GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetLocalConstantBooleanvEXT, ( GLuint, GLenum, GLboolean * ) ) \
    GFPP_GL_FUNCTION( void, GetLocalConstantIntegervEXT, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetLocalConstantFloatvEXT, ( GLuint, GLenum, GLfloat * ) ) \
    \
    /* GL_EXT_vertex_weighting */ \
    GFPP_GL_FUNCTION( void, VertexWeightfEXT, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexWeightfvEXT, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexWeightPointerEXT, ( GLint, GLenum, GLsizei, const GLvoid * ) ) \
    \
    /* GL_EXT_x11_sync_object */ \
    GFPP_GL_FUNCTION( GLsync, ImportSyncEXT, ( GLenum, GLintptr, GLbitfield ) ) \
    \
    /* GL_GREMEDY_frame_terminator */ \
    GFPP_GL_FUNCTION( void, FrameTerminatorGREMEDY, ( ) ) \
    \
    /* GL_GREMEDY_string_marker */ \
    GFPP_GL_FUNCTION( void, StringMarkerGREMEDY, ( GLsizei, const GLvoid * ) ) \
    \
    /* GL_HP_convolution_border_modes */ \
    \
    /* GL_HP_image_transform */ \
    GFPP_GL_FUNCTION( void, ImageTransformParameteriHP, ( GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, ImageTransformParameterfHP, ( GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ImageTransformParameterivHP, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ImageTransformParameterfvHP, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetImageTransformParameterivHP, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetImageTransformParameterfvHP, ( GLenum, GLenum, GLfloat * ) ) \
    \
    /* GL_HP_occlusion_test */ \
    \
    /* GL_HP_texture_lighting */ \
    \
    /* GL_IBM_cull_vertex */ \
    \
    /* GL_IBM_multimode_draw_arrays */ \
    GFPP_GL_FUNCTION( void, MultiModeDrawArraysIBM, ( const GLenum *, const GLint *, const GLsizei *, GLsizei, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiModeDrawElementsIBM, ( const GLenum *, const GLsizei *, GLenum, const GLvoid *const*, GLsizei, GLint ) ) \
    \
    /* GL_IBM_rasterpos_clip */ \
    \
    /* GL_IBM_static_data */ \
    GFPP_GL_FUNCTION( void, FlushStaticDataIBM, ( GLenum ) ) \
    \
    /* GL_IBM_texture_mirrored_repeat */ \
    \
    /* GL_IBM_vertex_array_lists */ \
    GFPP_GL_FUNCTION( void, ColorPointerListIBM, ( GLint, GLenum, GLint, const GLvoid **, GLint ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColorPointerListIBM, ( GLint, GLenum, GLint, const GLvoid **, GLint ) ) \
    GFPP_GL_FUNCTION( void, EdgeFlagPointerListIBM, ( GLint, const GLboolean **, GLint ) ) \
    GFPP_GL_FUNCTION( void, FogCoordPointerListIBM, ( GLenum, GLint, const GLvoid **, GLint ) ) \
    GFPP_GL_FUNCTION( void, IndexPointerListIBM, ( GLenum, GLint, const GLvoid **, GLint ) ) \
    GFPP_GL_FUNCTION( void, NormalPointerListIBM, ( GLenum, GLint, const GLvoid **, GLint ) ) \
    GFPP_GL_FUNCTION( void, TexCoordPointerListIBM, ( GLint, GLenum, GLint, const GLvoid **, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexPointerListIBM, ( GLint, GLenum, GLint, const GLvoid **, GLint ) ) \
    \
    /* GL_INGR_blend_func_separate */ \
    GFPP_GL_FUNCTION( void, BlendFuncSeparateINGR, ( GLenum, GLenum, GLenum, GLenum ) ) \
    \
    /* GL_INGR_color_clamp */ \
    \
    /* GL_INGR_interlace_read */ \
    \
    /* GL_INTEL_map_texture */ \
    GFPP_GL_FUNCTION( void, SyncTextureINTEL, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, UnmapTexture2DINTEL, ( GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void *, MapTexture2DINTEL, ( GLuint, GLint, GLbitfield, const GLint *, const GLenum * ) ) \
    \
    /* GL_INTEL_parallel_arrays */ \
    GFPP_GL_FUNCTION( void, VertexPointervINTEL, ( GLint, GLenum, const GLvoid ** ) ) \
    GFPP_GL_FUNCTION( void, NormalPointervINTEL, ( GLenum, const GLvoid ** ) ) \
    GFPP_GL_FUNCTION( void, ColorPointervINTEL, ( GLint, GLenum, const GLvoid ** ) ) \
    GFPP_GL_FUNCTION( void, TexCoordPointervINTEL, ( GLint, GLenum, const GLvoid ** ) ) \
    \
    /* GL_MESAX_texture_stack */ \
    \
    /* GL_MESA_pack_invert */ \
    \
    /* GL_MESA_resize_buffers */ \
    GFPP_GL_FUNCTION( void, ResizeBuffersMESA, ( ) ) \
    \
    /* GL_MESA_window_pos */ \
    GFPP_GL_FUNCTION( void, WindowPos2dMESA, ( GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2dvMESA, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2fMESA, ( GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2fvMESA, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2iMESA, ( GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2ivMESA, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2sMESA, ( GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, WindowPos2svMESA, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3dMESA, ( GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3dvMESA, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3fMESA, ( GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3fvMESA, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3iMESA, ( GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3ivMESA, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3sMESA, ( GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, WindowPos3svMESA, ( const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos4dMESA, ( GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, WindowPos4dvMESA, ( const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos4fMESA, ( GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, WindowPos4fvMESA, ( const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos4iMESA, ( GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, WindowPos4ivMESA, ( const GLint * ) ) \
    GFPP_GL_FUNCTION( void, WindowPos4sMESA, ( GLshort, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, WindowPos4svMESA, ( const GLshort * ) ) \
    \
    /* GL_MESA_ycbcr_texture */ \
    \
    /* GL_NVX_conditional_render */ \
    GFPP_GL_FUNCTION( void, BeginConditionalRenderNVX, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, EndConditionalRenderNVX, ( ) ) \
    \
    /* GL_NV_bindless_multi_draw_indirect */ \
    GFPP_GL_FUNCTION( void, MultiDrawArraysIndirectBindlessNV, ( GLenum, const GLvoid *, GLsizei, GLsizei, GLint ) ) \
    GFPP_GL_FUNCTION( void, MultiDrawElementsIndirectBindlessNV, ( GLenum, GLenum, const GLvoid *, GLsizei, GLsizei, GLint ) ) \
    \
    /* GL_NV_bindless_texture */ \
    GFPP_GL_FUNCTION( GLuint64, GetTextureHandleNV, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLuint64, GetTextureSamplerHandleNV, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, MakeTextureHandleResidentNV, ( GLuint64 ) ) \
    GFPP_GL_FUNCTION( void, MakeTextureHandleNonResidentNV, ( GLuint64 ) ) \
    GFPP_GL_FUNCTION( GLuint64, GetImageHandleNV, ( GLuint, GLint, GLboolean, GLint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, MakeImageHandleResidentNV, ( GLuint64, GLenum ) ) \
    GFPP_GL_FUNCTION( void, MakeImageHandleNonResidentNV, ( GLuint64 ) ) \
    GFPP_GL_FUNCTION( void, UniformHandleui64NV, ( GLint, GLuint64 ) ) \
    GFPP_GL_FUNCTION( void, UniformHandleui64vNV, ( GLint, GLsizei, const GLuint64 * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformHandleui64NV, ( GLuint, GLint, GLuint64 ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformHandleui64vNV, ( GLuint, GLint, GLsizei, const GLuint64 * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsTextureHandleResidentNV, ( GLuint64 ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsImageHandleResidentNV, ( GLuint64 ) ) \
    \
    /* GL_NV_blend_equation_advanced */ \
    GFPP_GL_FUNCTION( void, BlendParameteriNV, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, BlendBarrierNV, ( ) ) \
    \
    /* GL_NV_blend_equation_advanced_coherent */ \
    \
    /* GL_NV_blend_square */ \
    \
    /* GL_NV_compute_program5 */ \
    \
    /* GL_NV_conditional_render */ \
    GFPP_GL_FUNCTION( void, BeginConditionalRenderNV, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, EndConditionalRenderNV, ( ) ) \
    \
    /* GL_NV_copy_depth_to_color */ \
    \
    /* GL_NV_copy_image */ \
    GFPP_GL_FUNCTION( void, CopyImageSubDataNV, ( GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei ) ) \
    \
    /* GL_NV_deep_texture3D */ \
    \
    /* GL_NV_depth_buffer_float */ \
    GFPP_GL_FUNCTION( void, DepthRangedNV, ( GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, ClearDepthdNV, ( GLdouble ) ) \
    GFPP_GL_FUNCTION( void, DepthBoundsdNV, ( GLdouble, GLdouble ) ) \
    \
    /* GL_NV_depth_clamp */ \
    \
    /* GL_NV_draw_texture */ \
    GFPP_GL_FUNCTION( void, DrawTextureNV, ( GLuint, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    \
    /* GL_NV_evaluators */ \
    GFPP_GL_FUNCTION( void, MapControlPointsNV, ( GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, MapParameterivNV, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, MapParameterfvNV, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetMapControlPointsNV, ( GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetMapParameterivNV, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetMapParameterfvNV, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetMapAttribParameterivNV, ( GLenum, GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetMapAttribParameterfvNV, ( GLenum, GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, EvalMapsNV, ( GLenum, GLenum ) ) \
    \
    /* GL_NV_explicit_multisample */ \
    GFPP_GL_FUNCTION( void, GetMultisamplefvNV, ( GLenum, GLuint, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, SampleMaskIndexedNV, ( GLuint, GLbitfield ) ) \
    GFPP_GL_FUNCTION( void, TexRenderbufferNV, ( GLenum, GLuint ) ) \
    \
    /* GL_NV_fence */ \
    GFPP_GL_FUNCTION( void, DeleteFencesNV, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenFencesNV, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsFenceNV, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLboolean, TestFenceNV, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetFenceivNV, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, FinishFenceNV, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, SetFenceNV, ( GLuint, GLenum ) ) \
    \
    /* GL_NV_float_buffer */ \
    \
    /* GL_NV_fog_distance */ \
    \
    /* GL_NV_fragment_program */ \
    GFPP_GL_FUNCTION( void, ProgramNamedParameter4fNV, ( GLuint, GLsizei, const GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ProgramNamedParameter4fvNV, ( GLuint, GLsizei, const GLubyte *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramNamedParameter4dNV, ( GLuint, GLsizei, const GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, ProgramNamedParameter4dvNV, ( GLuint, GLsizei, const GLubyte *, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramNamedParameterfvNV, ( GLuint, GLsizei, const GLubyte *, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramNamedParameterdvNV, ( GLuint, GLsizei, const GLubyte *, GLdouble * ) ) \
    \
    /* GL_NV_fragment_program2 */ \
    \
    /* GL_NV_fragment_program4 */ \
    \
    /* GL_NV_fragment_program_option */ \
    \
    /* GL_NV_framebuffer_multisample_coverage */ \
    GFPP_GL_FUNCTION( void, RenderbufferStorageMultisampleCoverageNV, ( GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei ) ) \
    \
    /* GL_NV_geometry_program4 */ \
    GFPP_GL_FUNCTION( void, ProgramVertexLimitNV, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTextureEXT, ( GLenum, GLenum, GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTextureLayerEXT, ( GLenum, GLenum, GLuint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, FramebufferTextureFaceEXT, ( GLenum, GLenum, GLuint, GLint, GLenum ) ) \
    \
    /* GL_NV_geometry_shader4 */ \
    \
    /* GL_NV_gpu_program4 */ \
    GFPP_GL_FUNCTION( void, ProgramLocalParameterI4iNV, ( GLenum, GLuint, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, ProgramLocalParameterI4ivNV, ( GLenum, GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramLocalParametersI4ivNV, ( GLenum, GLuint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramLocalParameterI4uiNV, ( GLenum, GLuint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ProgramLocalParameterI4uivNV, ( GLenum, GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramLocalParametersI4uivNV, ( GLenum, GLuint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramEnvParameterI4iNV, ( GLenum, GLuint, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, ProgramEnvParameterI4ivNV, ( GLenum, GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramEnvParametersI4ivNV, ( GLenum, GLuint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramEnvParameterI4uiNV, ( GLenum, GLuint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, ProgramEnvParameterI4uivNV, ( GLenum, GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramEnvParametersI4uivNV, ( GLenum, GLuint, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramLocalParameterIivNV, ( GLenum, GLuint, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramLocalParameterIuivNV, ( GLenum, GLuint, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramEnvParameterIivNV, ( GLenum, GLuint, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramEnvParameterIuivNV, ( GLenum, GLuint, GLuint * ) ) \
    \
    /* GL_NV_gpu_program5 */ \
    GFPP_GL_FUNCTION( void, ProgramSubroutineParametersuivNV, ( GLenum, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramSubroutineParameteruivNV, ( GLenum, GLuint, GLuint * ) ) \
    \
    /* GL_NV_gpu_program5_mem_extended */ \
    \
    /* GL_NV_gpu_shader5 */ \
    GFPP_GL_FUNCTION( void, Uniform1i64NV, ( GLint, GLint64EXT ) ) \
    GFPP_GL_FUNCTION( void, Uniform2i64NV, ( GLint, GLint64EXT, GLint64EXT ) ) \
    GFPP_GL_FUNCTION( void, Uniform3i64NV, ( GLint, GLint64EXT, GLint64EXT, GLint64EXT ) ) \
    GFPP_GL_FUNCTION( void, Uniform4i64NV, ( GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT ) ) \
    GFPP_GL_FUNCTION( void, Uniform1i64vNV, ( GLint, GLsizei, const GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, Uniform2i64vNV, ( GLint, GLsizei, const GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, Uniform3i64vNV, ( GLint, GLsizei, const GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, Uniform4i64vNV, ( GLint, GLsizei, const GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, Uniform1ui64NV, ( GLint, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, Uniform2ui64NV, ( GLint, GLuint64EXT, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, Uniform3ui64NV, ( GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, Uniform4ui64NV, ( GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, Uniform1ui64vNV, ( GLint, GLsizei, const GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, Uniform2ui64vNV, ( GLint, GLsizei, const GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, Uniform3ui64vNV, ( GLint, GLsizei, const GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, Uniform4ui64vNV, ( GLint, GLsizei, const GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, GetUniformi64vNV, ( GLuint, GLint, GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1i64NV, ( GLuint, GLint, GLint64EXT ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2i64NV, ( GLuint, GLint, GLint64EXT, GLint64EXT ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3i64NV, ( GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4i64NV, ( GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1i64vNV, ( GLuint, GLint, GLsizei, const GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2i64vNV, ( GLuint, GLint, GLsizei, const GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3i64vNV, ( GLuint, GLint, GLsizei, const GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4i64vNV, ( GLuint, GLint, GLsizei, const GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1ui64NV, ( GLuint, GLint, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2ui64NV, ( GLuint, GLint, GLuint64EXT, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3ui64NV, ( GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4ui64NV, ( GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform1ui64vNV, ( GLuint, GLint, GLsizei, const GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform2ui64vNV, ( GLuint, GLint, GLsizei, const GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform3ui64vNV, ( GLuint, GLint, GLsizei, const GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniform4ui64vNV, ( GLuint, GLint, GLsizei, const GLuint64EXT * ) ) \
    \
    /* GL_NV_half_float */ \
    GFPP_GL_FUNCTION( void, Vertex2hNV, ( GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, Vertex2hvNV, ( const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, Vertex3hNV, ( GLhalfNV, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, Vertex3hvNV, ( const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, Vertex4hNV, ( GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, Vertex4hvNV, ( const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, Normal3hNV, ( GLhalfNV, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, Normal3hvNV, ( const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, Color3hNV, ( GLhalfNV, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, Color3hvNV, ( const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, Color4hNV, ( GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, Color4hvNV, ( const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1hNV, ( GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, TexCoord1hvNV, ( const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2hNV, ( GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2hvNV, ( const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3hNV, ( GLhalfNV, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, TexCoord3hvNV, ( const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4hNV, ( GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4hvNV, ( const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1hNV, ( GLenum, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord1hvNV, ( GLenum, const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2hNV, ( GLenum, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord2hvNV, ( GLenum, const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3hNV, ( GLenum, GLhalfNV, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord3hvNV, ( GLenum, const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4hNV, ( GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, MultiTexCoord4hvNV, ( GLenum, const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, FogCoordhNV, ( GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, FogCoordhvNV, ( const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3hNV, ( GLhalfNV, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColor3hvNV, ( const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, VertexWeighthNV, ( GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, VertexWeighthvNV, ( const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1hNV, ( GLuint, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1hvNV, ( GLuint, const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2hNV, ( GLuint, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2hvNV, ( GLuint, const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3hNV, ( GLuint, GLhalfNV, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3hvNV, ( GLuint, const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4hNV, ( GLuint, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4hvNV, ( GLuint, const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs1hvNV, ( GLuint, GLsizei, const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs2hvNV, ( GLuint, GLsizei, const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs3hvNV, ( GLuint, GLsizei, const GLhalfNV * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs4hvNV, ( GLuint, GLsizei, const GLhalfNV * ) ) \
    \
    /* GL_NV_light_max_exponent */ \
    \
    /* GL_NV_multisample_coverage */ \
    \
    /* GL_NV_multisample_filter_hint */ \
    \
    /* GL_NV_occlusion_query */ \
    GFPP_GL_FUNCTION( void, GenOcclusionQueriesNV, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, DeleteOcclusionQueriesNV, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsOcclusionQueryNV, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, BeginOcclusionQueryNV, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, EndOcclusionQueryNV, ( ) ) \
    GFPP_GL_FUNCTION( void, GetOcclusionQueryivNV, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetOcclusionQueryuivNV, ( GLuint, GLenum, GLuint * ) ) \
    \
    /* GL_NV_packed_depth_stencil */ \
    \
    /* GL_NV_parameter_buffer_object */ \
    GFPP_GL_FUNCTION( void, ProgramBufferParametersfvNV, ( GLenum, GLuint, GLuint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramBufferParametersIivNV, ( GLenum, GLuint, GLuint, GLsizei, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, ProgramBufferParametersIuivNV, ( GLenum, GLuint, GLuint, GLsizei, const GLuint * ) ) \
    \
    /* GL_NV_parameter_buffer_object2 */ \
    \
    /* GL_NV_path_rendering */ \
    GFPP_GL_FUNCTION( GLuint, GenPathsNV, ( GLsizei ) ) \
    GFPP_GL_FUNCTION( void, DeletePathsNV, ( GLuint, GLsizei ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsPathNV, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, PathCommandsNV, ( GLuint, GLsizei, const GLubyte *, GLsizei, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, PathCoordsNV, ( GLuint, GLsizei, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, PathSubCommandsNV, ( GLuint, GLsizei, GLsizei, GLsizei, const GLubyte *, GLsizei, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, PathSubCoordsNV, ( GLuint, GLsizei, GLsizei, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, PathStringNV, ( GLuint, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, PathGlyphsNV, ( GLuint, GLenum, const GLvoid *, GLbitfield, GLsizei, GLenum, const GLvoid *, GLenum, GLuint, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, PathGlyphRangeNV, ( GLuint, GLenum, const GLvoid *, GLbitfield, GLuint, GLsizei, GLenum, GLuint, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, WeightPathsNV, ( GLuint, GLsizei, const GLuint *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, CopyPathNV, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, InterpolatePathsNV, ( GLuint, GLuint, GLuint, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TransformPathNV, ( GLuint, GLuint, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, PathParameterivNV, ( GLuint, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, PathParameteriNV, ( GLuint, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, PathParameterfvNV, ( GLuint, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, PathParameterfNV, ( GLuint, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, PathDashArrayNV, ( GLuint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, PathStencilFuncNV, ( GLenum, GLint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, PathStencilDepthOffsetNV, ( GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, StencilFillPathNV, ( GLuint, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, StencilStrokePathNV, ( GLuint, GLint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, StencilFillPathInstancedNV, ( GLsizei, GLenum, const GLvoid *, GLuint, GLenum, GLuint, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, StencilStrokePathInstancedNV, ( GLsizei, GLenum, const GLvoid *, GLuint, GLint, GLuint, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, PathCoverDepthFuncNV, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, PathColorGenNV, ( GLenum, GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, PathTexGenNV, ( GLenum, GLenum, GLint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, PathFogGenNV, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, CoverFillPathNV, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, CoverStrokePathNV, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, CoverFillPathInstancedNV, ( GLsizei, GLenum, const GLvoid *, GLuint, GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, CoverStrokePathInstancedNV, ( GLsizei, GLenum, const GLvoid *, GLuint, GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetPathParameterivNV, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetPathParameterfvNV, ( GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetPathCommandsNV, ( GLuint, GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, GetPathCoordsNV, ( GLuint, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetPathDashArrayNV, ( GLuint, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetPathMetricsNV, ( GLbitfield, GLsizei, GLenum, const GLvoid *, GLuint, GLsizei, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetPathMetricRangeNV, ( GLbitfield, GLuint, GLsizei, GLsizei, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetPathSpacingNV, ( GLenum, GLsizei, GLenum, const GLvoid *, GLuint, GLfloat, GLfloat, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetPathColorGenivNV, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetPathColorGenfvNV, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetPathTexGenivNV, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetPathTexGenfvNV, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsPointInFillPathNV, ( GLuint, GLuint, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsPointInStrokePathNV, ( GLuint, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( GLfloat, GetPathLengthNV, ( GLuint, GLsizei, GLsizei ) ) \
    GFPP_GL_FUNCTION( GLboolean, PointAlongPathNV, ( GLuint, GLsizei, GLsizei, GLfloat, GLfloat *, GLfloat *, GLfloat *, GLfloat * ) ) \
    \
    /* GL_NV_pixel_data_range */ \
    GFPP_GL_FUNCTION( void, PixelDataRangeNV, ( GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, FlushPixelDataRangeNV, ( GLenum ) ) \
    \
    /* GL_NV_point_sprite */ \
    GFPP_GL_FUNCTION( void, PointParameteriNV, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, PointParameterivNV, ( GLenum, const GLint * ) ) \
    \
    /* GL_NV_present_video */ \
    GFPP_GL_FUNCTION( void, PresentFrameKeyedNV, ( GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLuint, GLenum, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, PresentFrameDualFillNV, ( GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetVideoivNV, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetVideouivNV, ( GLuint, GLenum, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetVideoi64vNV, ( GLuint, GLenum, GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, GetVideoui64vNV, ( GLuint, GLenum, GLuint64EXT * ) ) \
    \
    /* GL_NV_primitive_restart */ \
    GFPP_GL_FUNCTION( void, PrimitiveRestartNV, ( ) ) \
    GFPP_GL_FUNCTION( void, PrimitiveRestartIndexNV, ( GLuint ) ) \
    \
    /* GL_NV_register_combiners */ \
    GFPP_GL_FUNCTION( void, CombinerParameterfvNV, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, CombinerParameterfNV, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, CombinerParameterivNV, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, CombinerParameteriNV, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, CombinerInputNV, ( GLenum, GLenum, GLenum, GLenum, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, CombinerOutputNV, ( GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, FinalCombinerInputNV, ( GLenum, GLenum, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, GetCombinerInputParameterfvNV, ( GLenum, GLenum, GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetCombinerInputParameterivNV, ( GLenum, GLenum, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetCombinerOutputParameterfvNV, ( GLenum, GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetCombinerOutputParameterivNV, ( GLenum, GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetFinalCombinerInputParameterfvNV, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetFinalCombinerInputParameterivNV, ( GLenum, GLenum, GLint * ) ) \
    \
    /* GL_NV_register_combiners2 */ \
    GFPP_GL_FUNCTION( void, CombinerStageParameterfvNV, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetCombinerStageParameterfvNV, ( GLenum, GLenum, GLfloat * ) ) \
    \
    /* GL_NV_shader_atomic_counters */ \
    \
    /* GL_NV_shader_atomic_float */ \
    \
    /* GL_NV_shader_buffer_load */ \
    GFPP_GL_FUNCTION( void, MakeBufferResidentNV, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, MakeBufferNonResidentNV, ( GLenum ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsBufferResidentNV, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, MakeNamedBufferResidentNV, ( GLuint, GLenum ) ) \
    GFPP_GL_FUNCTION( void, MakeNamedBufferNonResidentNV, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsNamedBufferResidentNV, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetBufferParameterui64vNV, ( GLenum, GLenum, GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, GetNamedBufferParameterui64vNV, ( GLuint, GLenum, GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, GetIntegerui64vNV, ( GLenum, GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, Uniformui64NV, ( GLint, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, Uniformui64vNV, ( GLint, GLsizei, const GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, GetUniformui64vNV, ( GLuint, GLint, GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformui64NV, ( GLuint, GLint, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, ProgramUniformui64vNV, ( GLuint, GLint, GLsizei, const GLuint64EXT * ) ) \
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
    GFPP_GL_FUNCTION( void, TextureBarrierNV, ( ) ) \
    \
    /* GL_NV_texture_compression_vtc */ \
    \
    /* GL_NV_texture_env_combine4 */ \
    \
    /* GL_NV_texture_expand_normal */ \
    \
    /* GL_NV_texture_multisample */ \
    GFPP_GL_FUNCTION( void, TexImage2DMultisampleCoverageNV, ( GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, TexImage3DMultisampleCoverageNV, ( GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, TextureImage2DMultisampleNV, ( GLuint, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, TextureImage3DMultisampleNV, ( GLuint, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, TextureImage2DMultisampleCoverageNV, ( GLuint, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, TextureImage3DMultisampleCoverageNV, ( GLuint, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) ) \
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
    GFPP_GL_FUNCTION( void, BeginTransformFeedbackNV, ( GLenum ) ) \
    GFPP_GL_FUNCTION( void, EndTransformFeedbackNV, ( ) ) \
    GFPP_GL_FUNCTION( void, TransformFeedbackAttribsNV, ( GLuint, const GLint *, GLenum ) ) \
    GFPP_GL_FUNCTION( void, BindBufferRangeNV, ( GLenum, GLuint, GLuint, GLintptr, GLsizeiptr ) ) \
    GFPP_GL_FUNCTION( void, BindBufferOffsetNV, ( GLenum, GLuint, GLuint, GLintptr ) ) \
    GFPP_GL_FUNCTION( void, BindBufferBaseNV, ( GLenum, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, TransformFeedbackVaryingsNV, ( GLuint, GLsizei, const GLint *, GLenum ) ) \
    GFPP_GL_FUNCTION( void, ActiveVaryingNV, ( GLuint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( GLint, GetVaryingLocationNV, ( GLuint, const GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetActiveVaryingNV, ( GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar * ) ) \
    GFPP_GL_FUNCTION( void, GetTransformFeedbackVaryingNV, ( GLuint, GLuint, GLint * ) ) \
    GFPP_GL_FUNCTION( void, TransformFeedbackStreamAttribsNV, ( GLsizei, const GLint *, GLsizei, const GLint *, GLenum ) ) \
    \
    /* GL_NV_transform_feedback2 */ \
    GFPP_GL_FUNCTION( void, BindTransformFeedbackNV, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteTransformFeedbacksNV, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GenTransformFeedbacksNV, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsTransformFeedbackNV, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, PauseTransformFeedbackNV, ( ) ) \
    GFPP_GL_FUNCTION( void, ResumeTransformFeedbackNV, ( ) ) \
    GFPP_GL_FUNCTION( void, DrawTransformFeedbackNV, ( GLenum, GLuint ) ) \
    \
    /* GL_NV_vdpau_interop */ \
    GFPP_GL_FUNCTION( void, VDPAUInitNV, ( const GLvoid *, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, VDPAUFiniNV, ( ) ) \
    GFPP_GL_FUNCTION( GLvdpauSurfaceNV, VDPAURegisterVideoSurfaceNV, ( const GLvoid *, GLenum, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( GLvdpauSurfaceNV, VDPAURegisterOutputSurfaceNV, ( const GLvoid *, GLenum, GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VDPAUIsSurfaceNV, ( GLvdpauSurfaceNV ) ) \
    GFPP_GL_FUNCTION( void, VDPAUUnregisterSurfaceNV, ( GLvdpauSurfaceNV ) ) \
    GFPP_GL_FUNCTION( void, VDPAUGetSurfaceivNV, ( GLvdpauSurfaceNV, GLenum, GLsizei, GLsizei *, GLint * ) ) \
    GFPP_GL_FUNCTION( void, VDPAUSurfaceAccessNV, ( GLvdpauSurfaceNV, GLenum ) ) \
    GFPP_GL_FUNCTION( void, VDPAUMapSurfacesNV, ( GLsizei, const GLvdpauSurfaceNV * ) ) \
    GFPP_GL_FUNCTION( void, VDPAUUnmapSurfacesNV, ( GLsizei, const GLvdpauSurfaceNV * ) ) \
    \
    /* GL_NV_vertex_array_range */ \
    GFPP_GL_FUNCTION( void, FlushVertexArrayRangeNV, ( ) ) \
    GFPP_GL_FUNCTION( void, VertexArrayRangeNV, ( GLsizei, const GLvoid * ) ) \
    \
    /* GL_NV_vertex_array_range2 */ \
    \
    /* GL_NV_vertex_attrib_integer_64bit */ \
    GFPP_GL_FUNCTION( void, VertexAttribL1i64NV, ( GLuint, GLint64EXT ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL2i64NV, ( GLuint, GLint64EXT, GLint64EXT ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL3i64NV, ( GLuint, GLint64EXT, GLint64EXT, GLint64EXT ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL4i64NV, ( GLuint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL1i64vNV, ( GLuint, const GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL2i64vNV, ( GLuint, const GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL3i64vNV, ( GLuint, const GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL4i64vNV, ( GLuint, const GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL1ui64NV, ( GLuint, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL2ui64NV, ( GLuint, GLuint64EXT, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL3ui64NV, ( GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL4ui64NV, ( GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL1ui64vNV, ( GLuint, const GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL2ui64vNV, ( GLuint, const GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL3ui64vNV, ( GLuint, const GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribL4ui64vNV, ( GLuint, const GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribLi64vNV, ( GLuint, GLenum, GLint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribLui64vNV, ( GLuint, GLenum, GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribLFormatNV, ( GLuint, GLint, GLenum, GLsizei ) ) \
    \
    /* GL_NV_vertex_buffer_unified_memory */ \
    GFPP_GL_FUNCTION( void, BufferAddressRangeNV, ( GLenum, GLuint, GLuint64EXT, GLsizeiptr ) ) \
    GFPP_GL_FUNCTION( void, VertexFormatNV, ( GLint, GLenum, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, NormalFormatNV, ( GLenum, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, ColorFormatNV, ( GLint, GLenum, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, IndexFormatNV, ( GLenum, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, TexCoordFormatNV, ( GLint, GLenum, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, EdgeFlagFormatNV, ( GLsizei ) ) \
    GFPP_GL_FUNCTION( void, SecondaryColorFormatNV, ( GLint, GLenum, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, FogCoordFormatNV, ( GLenum, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribFormatNV, ( GLuint, GLint, GLenum, GLboolean, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribIFormatNV, ( GLuint, GLint, GLenum, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, GetIntegerui64i_vNV, ( GLenum, GLuint, GLuint64EXT * ) ) \
    \
    /* GL_NV_vertex_program */ \
    GFPP_GL_FUNCTION( GLboolean, AreProgramsResidentNV, ( GLsizei, const GLuint *, GLboolean * ) ) \
    GFPP_GL_FUNCTION( void, BindProgramNV, ( GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, DeleteProgramsNV, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ExecuteProgramNV, ( GLenum, GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GenProgramsNV, ( GLsizei, GLuint * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramParameterdvNV, ( GLenum, GLuint, GLenum, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramParameterfvNV, ( GLenum, GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramivNV, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetProgramStringNV, ( GLuint, GLenum, GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, GetTrackMatrixivNV, ( GLenum, GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribdvNV, ( GLuint, GLenum, GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribfvNV, ( GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribivNV, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribPointervNV, ( GLuint, GLenum, GLvoid ** ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsProgramNV, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, LoadProgramNV, ( GLenum, GLuint, GLsizei, const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, ProgramParameter4dNV, ( GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, ProgramParameter4dvNV, ( GLenum, GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramParameter4fNV, ( GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ProgramParameter4fvNV, ( GLenum, GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ProgramParameters4dvNV, ( GLenum, GLuint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, ProgramParameters4fvNV, ( GLenum, GLuint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, RequestResidentProgramsNV, ( GLsizei, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, TrackMatrixNV, ( GLenum, GLuint, GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribPointerNV, ( GLuint, GLint, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1dNV, ( GLuint, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1dvNV, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1fNV, ( GLuint, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1fvNV, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1sNV, ( GLuint, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib1svNV, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2dNV, ( GLuint, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2dvNV, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2fNV, ( GLuint, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2fvNV, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2sNV, ( GLuint, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib2svNV, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3dNV, ( GLuint, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3dvNV, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3fNV, ( GLuint, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3fvNV, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3sNV, ( GLuint, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib3svNV, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4dNV, ( GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4dvNV, ( GLuint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4fNV, ( GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4fvNV, ( GLuint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4sNV, ( GLuint, GLshort, GLshort, GLshort, GLshort ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4svNV, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4ubNV, ( GLuint, GLubyte, GLubyte, GLubyte, GLubyte ) ) \
    GFPP_GL_FUNCTION( void, VertexAttrib4ubvNV, ( GLuint, const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs1dvNV, ( GLuint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs1fvNV, ( GLuint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs1svNV, ( GLuint, GLsizei, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs2dvNV, ( GLuint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs2fvNV, ( GLuint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs2svNV, ( GLuint, GLsizei, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs3dvNV, ( GLuint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs3fvNV, ( GLuint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs3svNV, ( GLuint, GLsizei, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs4dvNV, ( GLuint, GLsizei, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs4fvNV, ( GLuint, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs4svNV, ( GLuint, GLsizei, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribs4ubvNV, ( GLuint, GLsizei, const GLubyte * ) ) \
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
    GFPP_GL_FUNCTION( void, VertexAttribI1iEXT, ( GLuint, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI2iEXT, ( GLuint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI3iEXT, ( GLuint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4iEXT, ( GLuint, GLint, GLint, GLint, GLint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI1uiEXT, ( GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI2uiEXT, ( GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI3uiEXT, ( GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4uiEXT, ( GLuint, GLuint, GLuint, GLuint, GLuint ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI1ivEXT, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI2ivEXT, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI3ivEXT, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4ivEXT, ( GLuint, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI1uivEXT, ( GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI2uivEXT, ( GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI3uivEXT, ( GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4uivEXT, ( GLuint, const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4bvEXT, ( GLuint, const GLbyte * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4svEXT, ( GLuint, const GLshort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4ubvEXT, ( GLuint, const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribI4usvEXT, ( GLuint, const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, VertexAttribIPointerEXT, ( GLuint, GLint, GLenum, GLsizei, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribIivEXT, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetVertexAttribIuivEXT, ( GLuint, GLenum, GLuint * ) ) \
    \
    /* GL_NV_video_capture */ \
    GFPP_GL_FUNCTION( void, BeginVideoCaptureNV, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, BindVideoCaptureStreamBufferNV, ( GLuint, GLuint, GLenum, GLintptrARB ) ) \
    GFPP_GL_FUNCTION( void, BindVideoCaptureStreamTextureNV, ( GLuint, GLuint, GLenum, GLenum, GLuint ) ) \
    GFPP_GL_FUNCTION( void, EndVideoCaptureNV, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, GetVideoCaptureivNV, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetVideoCaptureStreamivNV, ( GLuint, GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetVideoCaptureStreamfvNV, ( GLuint, GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetVideoCaptureStreamdvNV, ( GLuint, GLuint, GLenum, GLdouble * ) ) \
    GFPP_GL_FUNCTION( GLenum, VideoCaptureNV, ( GLuint, GLuint *, GLuint64EXT * ) ) \
    GFPP_GL_FUNCTION( void, VideoCaptureStreamParameterivNV, ( GLuint, GLuint, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, VideoCaptureStreamParameterfvNV, ( GLuint, GLuint, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, VideoCaptureStreamParameterdvNV, ( GLuint, GLuint, GLenum, const GLdouble * ) ) \
    \
    /* GL_OML_interlace */ \
    \
    /* GL_OML_resample */ \
    \
    /* GL_OML_subsample */ \
    \
    /* GL_PGI_misc_hints */ \
    GFPP_GL_FUNCTION( void, HintPGI, ( GLenum, GLint ) ) \
    \
    /* GL_PGI_vertex_hints */ \
    \
    /* GL_REND_screen_coordinates */ \
    \
    /* GL_S3_s3tc */ \
    \
    /* GL_SGIS_detail_texture */ \
    GFPP_GL_FUNCTION( void, DetailTexFuncSGIS, ( GLenum, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetDetailTexFuncSGIS, ( GLenum, GLfloat * ) ) \
    \
    /* GL_SGIS_fog_function */ \
    GFPP_GL_FUNCTION( void, FogFuncSGIS, ( GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetFogFuncSGIS, ( GLfloat * ) ) \
    \
    /* GL_SGIS_generate_mipmap */ \
    \
    /* GL_SGIS_multisample */ \
    GFPP_GL_FUNCTION( void, SampleMaskSGIS, ( GLclampf, GLboolean ) ) \
    GFPP_GL_FUNCTION( void, SamplePatternSGIS, ( GLenum ) ) \
    \
    /* GL_SGIS_pixel_texture */ \
    GFPP_GL_FUNCTION( void, PixelTexGenParameteriSGIS, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, PixelTexGenParameterivSGIS, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, PixelTexGenParameterfSGIS, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, PixelTexGenParameterfvSGIS, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetPixelTexGenParameterivSGIS, ( GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetPixelTexGenParameterfvSGIS, ( GLenum, GLfloat * ) ) \
    \
    /* GL_SGIS_point_line_texgen */ \
    \
    /* GL_SGIS_point_parameters */ \
    GFPP_GL_FUNCTION( void, PointParameterfSGIS, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, PointParameterfvSGIS, ( GLenum, const GLfloat * ) ) \
    \
    /* GL_SGIS_sharpen_texture */ \
    GFPP_GL_FUNCTION( void, SharpenTexFuncSGIS, ( GLenum, GLsizei, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetSharpenTexFuncSGIS, ( GLenum, GLfloat * ) ) \
    \
    /* GL_SGIS_texture4D */ \
    GFPP_GL_FUNCTION( void, TexImage4DSGIS, ( GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, TexSubImage4DSGIS, ( GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    \
    /* GL_SGIS_texture_border_clamp */ \
    \
    /* GL_SGIS_texture_color_mask */ \
    GFPP_GL_FUNCTION( void, TextureColorMaskSGIS, ( GLboolean, GLboolean, GLboolean, GLboolean ) ) \
    \
    /* GL_SGIS_texture_edge_clamp */ \
    \
    /* GL_SGIS_texture_filter4 */ \
    GFPP_GL_FUNCTION( void, GetTexFilterFuncSGIS, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexFilterFuncSGIS, ( GLenum, GLenum, GLsizei, const GLfloat * ) ) \
    \
    /* GL_SGIS_texture_lod */ \
    \
    /* GL_SGIS_texture_select */ \
    \
    /* GL_SGIX_async */ \
    GFPP_GL_FUNCTION( void, AsyncMarkerSGIX, ( GLuint ) ) \
    GFPP_GL_FUNCTION( GLint, FinishAsyncSGIX, ( GLuint * ) ) \
    GFPP_GL_FUNCTION( GLint, PollAsyncSGIX, ( GLuint * ) ) \
    GFPP_GL_FUNCTION( GLuint, GenAsyncMarkersSGIX, ( GLsizei ) ) \
    GFPP_GL_FUNCTION( void, DeleteAsyncMarkersSGIX, ( GLuint, GLsizei ) ) \
    GFPP_GL_FUNCTION( GLboolean, IsAsyncMarkerSGIX, ( GLuint ) ) \
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
    GFPP_GL_FUNCTION( void, FlushRasterSGIX, ( ) ) \
    \
    /* GL_SGIX_fog_offset */ \
    \
    /* GL_SGIX_fragment_lighting */ \
    GFPP_GL_FUNCTION( void, FragmentColorMaterialSGIX, ( GLenum, GLenum ) ) \
    GFPP_GL_FUNCTION( void, FragmentLightfSGIX, ( GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, FragmentLightfvSGIX, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, FragmentLightiSGIX, ( GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, FragmentLightivSGIX, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, FragmentLightModelfSGIX, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, FragmentLightModelfvSGIX, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, FragmentLightModeliSGIX, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, FragmentLightModelivSGIX, ( GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, FragmentMaterialfSGIX, ( GLenum, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, FragmentMaterialfvSGIX, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, FragmentMaterialiSGIX, ( GLenum, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, FragmentMaterialivSGIX, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetFragmentLightfvSGIX, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetFragmentLightivSGIX, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, GetFragmentMaterialfvSGIX, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetFragmentMaterialivSGIX, ( GLenum, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, LightEnviSGIX, ( GLenum, GLint ) ) \
    \
    /* GL_SGIX_framezoom */ \
    GFPP_GL_FUNCTION( void, FrameZoomSGIX, ( GLint ) ) \
    \
    /* GL_SGIX_igloo_interface */ \
    GFPP_GL_FUNCTION( void, IglooInterfaceSGIX, ( GLenum, const GLvoid * ) ) \
    \
    /* GL_SGIX_instruments */ \
    GFPP_GL_FUNCTION( GLint, GetInstrumentsSGIX, ( ) ) \
    GFPP_GL_FUNCTION( void, InstrumentsBufferSGIX, ( GLsizei, GLint * ) ) \
    GFPP_GL_FUNCTION( GLint, PollInstrumentsSGIX, ( GLint * ) ) \
    GFPP_GL_FUNCTION( void, ReadInstrumentsSGIX, ( GLint ) ) \
    GFPP_GL_FUNCTION( void, StartInstrumentsSGIX, ( ) ) \
    GFPP_GL_FUNCTION( void, StopInstrumentsSGIX, ( GLint ) ) \
    \
    /* GL_SGIX_interlace */ \
    \
    /* GL_SGIX_ir_instrument1 */ \
    \
    /* GL_SGIX_list_priority */ \
    GFPP_GL_FUNCTION( void, GetListParameterfvSGIX, ( GLuint, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetListParameterivSGIX, ( GLuint, GLenum, GLint * ) ) \
    GFPP_GL_FUNCTION( void, ListParameterfSGIX, ( GLuint, GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ListParameterfvSGIX, ( GLuint, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ListParameteriSGIX, ( GLuint, GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, ListParameterivSGIX, ( GLuint, GLenum, const GLint * ) ) \
    \
    /* GL_SGIX_pixel_texture */ \
    GFPP_GL_FUNCTION( void, PixelTexGenSGIX, ( GLenum ) ) \
    \
    /* GL_SGIX_pixel_tiles */ \
    \
    /* GL_SGIX_polynomial_ffd */ \
    GFPP_GL_FUNCTION( void, DeformationMap3dSGIX, ( GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) ) \
    GFPP_GL_FUNCTION( void, DeformationMap3fSGIX, ( GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, DeformSGIX, ( GLbitfield ) ) \
    GFPP_GL_FUNCTION( void, LoadIdentityDeformationMapSGIX, ( GLbitfield ) ) \
    \
    /* GL_SGIX_reference_plane */ \
    GFPP_GL_FUNCTION( void, ReferencePlaneSGIX, ( const GLdouble * ) ) \
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
    GFPP_GL_FUNCTION( void, SpriteParameterfSGIX, ( GLenum, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, SpriteParameterfvSGIX, ( GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, SpriteParameteriSGIX, ( GLenum, GLint ) ) \
    GFPP_GL_FUNCTION( void, SpriteParameterivSGIX, ( GLenum, const GLint * ) ) \
    \
    /* GL_SGIX_subsample */ \
    \
    /* GL_SGIX_tag_sample_buffer */ \
    GFPP_GL_FUNCTION( void, TagSampleBufferSGIX, ( ) ) \
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
    GFPP_GL_FUNCTION( void, ColorTableSGI, ( GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, ColorTableParameterfvSGI, ( GLenum, GLenum, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ColorTableParameterivSGI, ( GLenum, GLenum, const GLint * ) ) \
    GFPP_GL_FUNCTION( void, CopyColorTableSGI, ( GLenum, GLenum, GLint, GLint, GLsizei ) ) \
    GFPP_GL_FUNCTION( void, GetColorTableSGI, ( GLenum, GLenum, GLenum, GLvoid * ) ) \
    GFPP_GL_FUNCTION( void, GetColorTableParameterfvSGI, ( GLenum, GLenum, GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, GetColorTableParameterivSGI, ( GLenum, GLenum, GLint * ) ) \
    \
    /* GL_SGI_texture_color_table */ \
    \
    /* GL_SUNX_constant_data */ \
    GFPP_GL_FUNCTION( void, FinishTextureSUNX, ( ) ) \
    \
    /* GL_SUN_convolution_border_modes */ \
    \
    /* GL_SUN_global_alpha */ \
    GFPP_GL_FUNCTION( void, GlobalAlphaFactorbSUN, ( GLbyte ) ) \
    GFPP_GL_FUNCTION( void, GlobalAlphaFactorsSUN, ( GLshort ) ) \
    GFPP_GL_FUNCTION( void, GlobalAlphaFactoriSUN, ( GLint ) ) \
    GFPP_GL_FUNCTION( void, GlobalAlphaFactorfSUN, ( GLfloat ) ) \
    GFPP_GL_FUNCTION( void, GlobalAlphaFactordSUN, ( GLdouble ) ) \
    GFPP_GL_FUNCTION( void, GlobalAlphaFactorubSUN, ( GLubyte ) ) \
    GFPP_GL_FUNCTION( void, GlobalAlphaFactorusSUN, ( GLushort ) ) \
    GFPP_GL_FUNCTION( void, GlobalAlphaFactoruiSUN, ( GLuint ) ) \
    \
    /* GL_SUN_mesh_array */ \
    GFPP_GL_FUNCTION( void, DrawMeshArraysSUN, ( GLenum, GLint, GLsizei, GLsizei ) ) \
    \
    /* GL_SUN_slice_accum */ \
    \
    /* GL_SUN_triangle_list */ \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiSUN, ( GLuint ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeusSUN, ( GLushort ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeubSUN, ( GLubyte ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuivSUN, ( const GLuint * ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeusvSUN, ( const GLushort * ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeubvSUN, ( const GLubyte * ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodePointerSUN, ( GLenum, GLsizei, const GLvoid ** ) ) \
    \
    /* GL_SUN_vertex */ \
    GFPP_GL_FUNCTION( void, Color4ubVertex2fSUN, ( GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Color4ubVertex2fvSUN, ( const GLubyte *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Color4ubVertex3fSUN, ( GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Color4ubVertex3fvSUN, ( const GLubyte *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Color3fVertex3fSUN, ( GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Color3fVertex3fvSUN, ( const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Normal3fVertex3fSUN, ( GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Normal3fVertex3fvSUN, ( const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, Color4fNormal3fVertex3fSUN, ( GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, Color4fNormal3fVertex3fvSUN, ( const GLfloat *, const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2fVertex3fSUN, ( GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2fVertex3fvSUN, ( const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4fVertex4fSUN, ( GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4fVertex4fvSUN, ( const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2fColor4ubVertex3fSUN, ( GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2fColor4ubVertex3fvSUN, ( const GLfloat *, const GLubyte *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2fColor3fVertex3fSUN, ( GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2fColor3fVertex3fvSUN, ( const GLfloat *, const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2fNormal3fVertex3fSUN, ( GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2fNormal3fVertex3fvSUN, ( const GLfloat *, const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2fColor4fNormal3fVertex3fSUN, ( GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexCoord2fColor4fNormal3fVertex3fvSUN, ( const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4fColor4fNormal3fVertex4fSUN, ( GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, TexCoord4fColor4fNormal3fVertex4fvSUN, ( const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiVertex3fSUN, ( GLuint, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiVertex3fvSUN, ( const GLuint *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiColor4ubVertex3fSUN, ( GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiColor4ubVertex3fvSUN, ( const GLuint *, const GLubyte *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiColor3fVertex3fSUN, ( GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiColor3fVertex3fvSUN, ( const GLuint *, const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiNormal3fVertex3fSUN, ( GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiNormal3fVertex3fvSUN, ( const GLuint *, const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiColor4fNormal3fVertex3fSUN, ( GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiColor4fNormal3fVertex3fvSUN, ( const GLuint *, const GLfloat *, const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fVertex3fSUN, ( GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fVertex3fvSUN, ( const GLuint *, const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, ( GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, ( const GLuint *, const GLfloat *, const GLfloat *, const GLfloat * ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, ( GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) ) \
    GFPP_GL_FUNCTION( void, ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, ( const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat * ) ) \
    \
    /* GL_WIN_phong_shading */ \
    \
    /* GL_WIN_specular_fog */ \

namespace gf {
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

#if defined OS_LINUX    // OS
#   define GFPPSTDCALL
#elif defined OS_WINDOWS    // OS
#   define GFPPSTDCALL __stdcall
#else   // OS
#   error 未対応のOS
#endif  // OS

#define GFPP_GL_EXTERN_FUNCTION_POINTER( _returnType, _name, _args ) \
    GFPPEXPORT _returnType ( GFPPSTDCALL * & gl##_name )_args; \

#define GFPP_GL_FUNCTION GFPP_GL_EXTERN_FUNCTION_POINTER
namespace gf {
    GFPP_GL_FUNCTIONS
}
#undef  GFPP_GL_FUNCTION

#undef  GFPP_GL_EXTERN_FUNCTION_POINTER

#endif  // GFPP_GL_FUNCTIONS_H