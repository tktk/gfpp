#ifndef FGPP_GL_FUNCTIONS_H
#define FGPP_GL_FUNCTIONS_H

#include "fgpp/gl/context.h"
#include "fgpp/gl/types.h"
#include "fgpp/util/import.h"

#define FGPP_GL_FUNCTIONS \
    /* GL_VERSION_1_0 */ \
    FGPP_GL_FUNCTION_NUM( GetError, GLenum, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( Begin, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( End, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( EdgeFlag, GLContext &, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( EdgeFlagv, GLContext &, const GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( Vertex2s, GLContext &, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Vertex2i, GLContext &, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Vertex2f, GLContext &, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Vertex2d, GLContext &, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Vertex3s, GLContext &, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Vertex3i, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Vertex3f, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Vertex3d, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Vertex4s, GLContext &, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Vertex4i, GLContext &, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Vertex4f, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Vertex4d, GLContext &, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Vertex2sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Vertex2iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Vertex2fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Vertex2dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1s, GLContext &, GLshort ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1i, GLContext &, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1f, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1d, GLContext &, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2s, GLContext &, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2i, GLContext &, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2f, GLContext &, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2d, GLContext &, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3s, GLContext &, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3i, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3f, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3d, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4s, GLContext &, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4i, GLContext &, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4f, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4d, GLContext &, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Normal3b, GLContext &, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Normal3s, GLContext &, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Normal3i, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Normal3f, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Normal3d, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Normal3bv, GLContext &, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Normal3sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Normal3iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Normal3fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Normal3dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Color3b, GLContext &, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Color3s, GLContext &, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Color3i, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Color3f, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Color3d, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Color3ub, GLContext &, GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( Color3us, GLContext &, GLushort, GLushort, GLushort ) \
    FGPP_GL_FUNCTION_VOID( Color3ui, GLContext &, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Color4b, GLContext &, GLbyte, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Color4s, GLContext &, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Color4i, GLContext &, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Color4f, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Color4d, GLContext &, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Color4ub, GLContext &, GLubyte, GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( Color4us, GLContext &, GLushort, GLushort, GLushort, GLushort ) \
    FGPP_GL_FUNCTION_VOID( Color4ui, GLContext &, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Color3bv, GLContext &, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Color3sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Color3iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Color3fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Color3dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Color3ubv, GLContext &, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( Color3usv, GLContext &, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( Color3uiv, GLContext &, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Color4bv, GLContext &, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Color4sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Color4iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Color4fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Color4dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Color4ubv, GLContext &, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( Color4usv, GLContext &, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( Color4uiv, GLContext &, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Indexs, GLContext &, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Indexi, GLContext &, GLint ) \
    FGPP_GL_FUNCTION_VOID( Indexf, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Indexd, GLContext &, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Indexsv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Indexiv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Indexfv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Indexdv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Rects, GLContext &, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Recti, GLContext &, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Rectf, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Rectd, GLContext &, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Rectsv, GLContext &, const GLshort *, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Rectiv, GLContext &, const GLint *, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Rectfv, GLContext &, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Rectdv, GLContext &, const GLdouble *, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( DepthRange, GLContext &, GLclampd, GLclampd ) \
    FGPP_GL_FUNCTION_VOID( Viewport, GLContext &, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MatrixMode, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( LoadMatrixf, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( LoadMatrixd, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultMatrixf, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultMatrixd, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( LoadIdentity, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( Rotatef, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Rotated, GLContext &, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Translatef, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Translated, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Scalef, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Scaled, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Frustum, GLContext &, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Ortho, GLContext &, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( PushMatrix, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( PopMatrix, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( Enable, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( Disable, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( TexGeni, GLContext &, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexGenf, GLContext &, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexGend, GLContext &, GLenum, GLenum, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( TexGeniv, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexGenfv, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexGendv, GLContext &, GLenum, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ClipPlane, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2s, GLContext &, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2i, GLContext &, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2f, GLContext &, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2d, GLContext &, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3s, GLContext &, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3i, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3f, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3d, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4s, GLContext &, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4i, GLContext &, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4f, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4d, GLContext &, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( FrontFace, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( Materiali, GLContext &, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( Materialf, GLContext &, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Materialiv, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Materialfv, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Lighti, GLContext &, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( Lightf, GLContext &, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Lightiv, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Lightfv, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( LightModeli, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( LightModelf, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( LightModeliv, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( LightModelfv, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ColorMaterial, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( ShadeModel, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( PointSize, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( LineWidth, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( LineStipple, GLContext &, GLint, GLushort ) \
    FGPP_GL_FUNCTION_VOID( CullFace, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( PolygonStipple, GLContext &, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( PolygonMode, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( PixelStorei, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PixelStoref, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PixelTransferi, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PixelTransferf, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PixelMapuiv, GLContext &, GLenum, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( PixelMapusv, GLContext &, GLenum, GLsizei, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( PixelMapfv, GLContext &, GLenum, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( DrawPixels, GLContext &, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PixelZoom, GLContext &, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Bitmap, GLContext &, GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( TexImage1D, GLContext &, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexImage2D, GLContext &, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexParameteri, GLContext &, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexParameterf, GLContext &, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexParameteriv, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexParameterfv, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexEnvi, GLContext &, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexEnvf, GLContext &, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexEnviv, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexEnvfv, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Fogi, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( Fogf, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Fogiv, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Fogfv, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Scissor, GLContext &, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( AlphaFunc, GLContext &, GLenum, GLclampf ) \
    FGPP_GL_FUNCTION_VOID( StencilFunc, GLContext &, GLenum, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( StencilOp, GLContext &, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DepthFunc, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendFunc, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( LogicOp, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DrawBuffer, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( IndexMask, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ColorMask, GLContext &, GLboolean, GLboolean, GLboolean, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( DepthMask, GLContext &, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( StencilMask, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Clear, GLContext &, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( ClearColor, GLContext &, GLclampf, GLclampf, GLclampf, GLclampf ) \
    FGPP_GL_FUNCTION_VOID( ClearIndex, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ClearDepth, GLContext &, GLclampd ) \
    FGPP_GL_FUNCTION_VOID( ClearStencil, GLContext &, GLint ) \
    FGPP_GL_FUNCTION_VOID( ClearAccum, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Accum, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReadPixels, GLContext &, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ReadBuffer, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( CopyPixels, GLContext &, GLint, GLint, GLsizei, GLsizei, GLenum ) \
    FGPP_GL_FUNCTION_VOID( Map1f, GLContext &, GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Map1d, GLContext &, GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Map2f, GLContext &, GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Map2d, GLContext &, GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord1f, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord1d, GLContext &, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord2f, GLContext &, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord2d, GLContext &, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord1fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord1dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord2fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord2dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MapGrid1f, GLContext &, GLint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MapGrid1d, GLContext &, GLint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MapGrid2f, GLContext &, GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MapGrid2d, GLContext &, GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( EvalMesh1, GLContext &, GLenum, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( EvalMesh2, GLContext &, GLenum, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( EvalPoint1, GLContext &, GLint ) \
    FGPP_GL_FUNCTION_VOID( EvalPoint2, GLContext &, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( InitNames, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( PopName, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( PushName, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( LoadName, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( RenderMode, GLint, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( SelectBuffer, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( FeedbackBuffer, GLContext &, GLsizei, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PassThrough, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( NewList, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( EndList, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( CallList, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( CallLists, GLContext &, GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ListBase, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( GenLists, GLuint, GLContext &, GLsizei ) \
    FGPP_GL_FUNCTION_NUM( IsList, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteLists, GLContext &, GLuint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( Flush, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( Finish, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( Hint, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetBooleanv, GLContext &, GLenum, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( GetIntegerv, GLContext &, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetFloatv, GLContext &, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetDoublev, GLContext &, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_NUM( IsEnabled, GLboolean, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetClipPlane, GLContext &, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetLightiv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetLightfv, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMaterialiv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMaterialfv, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTexEnviv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexEnvfv, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTexGeniv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexGenfv, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameteriv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterfv, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTexLevelParameteriv, GLContext &, GLenum, GLint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexLevelParameterfv, GLContext &, GLenum, GLint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelMapuiv, GLContext &, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelMapusv, GLContext &, GLenum, GLushort * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelMapfv, GLContext &, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMapiv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMapfv, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMapdv, GLContext &, GLenum, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetTexImage, GLContext &, GLenum, GLint, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetPolygonStipple, GLContext &, GLubyte * ) \
    FGPP_GL_FUNCTION_PTR( GetString, const GLubyte *, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( PushAttrib, GLContext &, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( PopAttrib, GLContext & ) \
\
    /* GL_VERSION_1_1 */ \
    FGPP_GL_FUNCTION_VOID( Indexub, GLContext &, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( Indexubv, GLContext &, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( EdgeFlagPointer, GLContext &, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexCoordPointer, GLContext &, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ColorPointer, GLContext &, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( IndexPointer, GLContext &, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( NormalPointer, GLContext &, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VertexPointer, GLContext &, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( EnableClientState, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DisableClientState, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( ArrayElement, GLContext &, GLint ) \
    FGPP_GL_FUNCTION_VOID( DrawArrays, GLContext &, GLenum, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawElements, GLContext &, GLenum, GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( InterleavedArrays, GLContext &, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PolygonOffset, GLContext &, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( CopyTexImage1D, GLContext &, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyTexImage2D, GLContext &, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexSubImage1D, GLContext &, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexSubImage2D, GLContext &, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyTexSubImage1D, GLContext &, GLenum, GLint, GLint, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyTexSubImage2D, GLContext &, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( BindTexture, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteTextures, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenTextures, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( AreTexturesResident, GLboolean, GLContext &, GLsizei, const GLuint *, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( PrioritizeTextures, GLContext &, GLsizei, const GLuint *, const GLclampf * ) \
    FGPP_GL_FUNCTION_NUM( IsTexture, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetPointerv, GLContext &, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( PushClientAttrib, GLContext &, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( PopClientAttrib, GLContext & ) \
\
    /* GL_VERSION_1_2 */ \
    FGPP_GL_FUNCTION_VOID( DrawRangeElements, GLContext &, GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexImage3D, GLContext &, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexSubImage3D, GLContext &, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyTexSubImage3D, GLContext &, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
\
    /* GL_VERSION_1_3 */ \
    FGPP_GL_FUNCTION_VOID( ActiveTexture, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( SampleCoverage, GLContext &, GLfloat, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexImage3D, GLContext &, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexImage2D, GLContext &, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexImage1D, GLContext &, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexSubImage3D, GLContext &, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexSubImage2D, GLContext &, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexSubImage1D, GLContext &, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetCompressedTexImage, GLContext &, GLenum, GLint, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ClientActiveTexture, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1d, GLContext &, GLenum, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1dv, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1f, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1fv, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1i, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1iv, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1s, GLContext &, GLenum, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1sv, GLContext &, GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2d, GLContext &, GLenum, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2dv, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2f, GLContext &, GLenum, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2fv, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2i, GLContext &, GLenum, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2iv, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2s, GLContext &, GLenum, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2sv, GLContext &, GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3d, GLContext &, GLenum, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3dv, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3f, GLContext &, GLenum, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3fv, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3i, GLContext &, GLenum, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3iv, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3s, GLContext &, GLenum, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3sv, GLContext &, GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4d, GLContext &, GLenum, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4dv, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4f, GLContext &, GLenum, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4fv, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4i, GLContext &, GLenum, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4iv, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4s, GLContext &, GLenum, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4sv, GLContext &, GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( LoadTransposeMatrixf, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( LoadTransposeMatrixd, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultTransposeMatrixf, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultTransposeMatrixd, GLContext &, const GLdouble * ) \
\
    /* GL_VERSION_1_4 */ \
    FGPP_GL_FUNCTION_VOID( BlendFuncSeparate, GLContext &, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawArrays, GLContext &, GLenum, const GLint *, const GLsizei *, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElements, GLContext &, GLenum, const GLsizei *, GLenum, const GLvoid *const*, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( PointParameterf, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PointParameterfv, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PointParameteri, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PointParameteriv, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( FogCoordf, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( FogCoordfv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( FogCoordd, GLContext &, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( FogCoorddv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( FogCoordPointer, GLContext &, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3b, GLContext &, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3bv, GLContext &, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3d, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3f, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3i, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3s, GLContext &, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3ub, GLContext &, GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3ubv, GLContext &, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3ui, GLContext &, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3uiv, GLContext &, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3us, GLContext &, GLushort, GLushort, GLushort ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3usv, GLContext &, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColorPointer, GLContext &, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2d, GLContext &, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2f, GLContext &, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2i, GLContext &, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2s, GLContext &, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3d, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3dv, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3f, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3fv, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3i, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3iv, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3s, GLContext &, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3sv, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( BlendColor, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( BlendEquation, GLContext &, GLenum ) \
\
    /* GL_VERSION_1_5 */ \
    FGPP_GL_FUNCTION_VOID( GenQueries, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeleteQueries, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsQuery, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BeginQuery, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndQuery, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetQueryiv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjectiv, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjectuiv, GLContext &, GLuint, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindBuffer, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteBuffers, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenBuffers, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsBuffer, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BufferData, GLContext &, GLenum, GLsizeiptr, const GLvoid *, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BufferSubData, GLContext &, GLenum, GLintptr, GLsizeiptr, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetBufferSubData, GLContext &, GLenum, GLintptr, GLsizeiptr, GLvoid * ) \
    FGPP_GL_FUNCTION_PTR( MapBuffer, void *, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_NUM( UnmapBuffer, GLboolean, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetBufferParameteriv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetBufferPointerv, GLContext &, GLenum, GLenum, GLvoid ** ) \
\
    /* GL_VERSION_2_0 */ \
    FGPP_GL_FUNCTION_VOID( BlendEquationSeparate, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DrawBuffers, GLContext &, GLsizei, const GLenum * ) \
    FGPP_GL_FUNCTION_VOID( StencilOpSeparate, GLContext &, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( StencilFuncSeparate, GLContext &, GLenum, GLenum, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( StencilMaskSeparate, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( AttachShader, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindAttribLocation, GLContext &, GLuint, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( CompileShader, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( CreateProgram, GLuint, GLContext & ) \
    FGPP_GL_FUNCTION_NUM( CreateShader, GLuint, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DeleteProgram, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteShader, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DetachShader, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableVertexAttribArray, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( EnableVertexAttribArray, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetActiveAttrib, GLContext &, GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveUniform, GLContext &, GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetAttachedShaders, GLContext &, GLuint, GLsizei, GLsizei *, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( GetAttribLocation, GLint, GLContext &, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramiv, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramInfoLog, GLContext &, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetShaderiv, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetShaderInfoLog, GLContext &, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetShaderSource, GLContext &, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetUniformLocation, GLint, GLContext &, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformfv, GLContext &, GLuint, GLint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformiv, GLContext &, GLuint, GLint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribdv, GLContext &, GLuint, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribfv, GLContext &, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribiv, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribPointerv, GLContext &, GLuint, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_NUM( IsProgram, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( IsShader, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( LinkProgram, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ShaderSource, GLContext &, GLuint, GLsizei, const GLchar *const*, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( UseProgram, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform1f, GLContext &, GLint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform2f, GLContext &, GLint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform3f, GLContext &, GLint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform4f, GLContext &, GLint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform1i, GLContext &, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform2i, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform3i, GLContext &, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform4i, GLContext &, GLint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform1fv, GLContext &, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2fv, GLContext &, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3fv, GLContext &, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4fv, GLContext &, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform1iv, GLContext &, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2iv, GLContext &, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3iv, GLContext &, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4iv, GLContext &, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2fv, GLContext &, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3fv, GLContext &, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4fv, GLContext &, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ValidateProgram, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1d, GLContext &, GLuint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1dv, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1f, GLContext &, GLuint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1fv, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1s, GLContext &, GLuint, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1sv, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2d, GLContext &, GLuint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2dv, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2f, GLContext &, GLuint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2fv, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2s, GLContext &, GLuint, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2sv, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3d, GLContext &, GLuint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3dv, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3f, GLContext &, GLuint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3fv, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3s, GLContext &, GLuint, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3sv, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Nbv, GLContext &, GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Niv, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Nsv, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Nub, GLContext &, GLuint, GLubyte, GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Nubv, GLContext &, GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Nuiv, GLContext &, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Nusv, GLContext &, GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4bv, GLContext &, GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4d, GLContext &, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4dv, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4f, GLContext &, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4fv, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4iv, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4s, GLContext &, GLuint, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4sv, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4ubv, GLContext &, GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4uiv, GLContext &, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4usv, GLContext &, GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribPointer, GLContext &, GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid * ) \
\
    /* GL_VERSION_2_1 */ \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2x3fv, GLContext &, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3x2fv, GLContext &, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2x4fv, GLContext &, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4x2fv, GLContext &, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3x4fv, GLContext &, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4x3fv, GLContext &, GLint, GLsizei, GLboolean, const GLfloat * ) \
\
    /* GL_VERSION_3_0 */ \
    FGPP_GL_FUNCTION_VOID( ColorMaski, GLContext &, GLuint, GLboolean, GLboolean, GLboolean, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( GetBooleani_v, GLContext &, GLenum, GLuint, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( GetIntegeri_v, GLContext &, GLenum, GLuint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( Enablei, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Disablei, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_NUM( IsEnabledi, GLboolean, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BeginTransformFeedback, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( EndTransformFeedback, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( BindBufferRange, GLContext &, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( BindBufferBase, GLContext &, GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TransformFeedbackVaryings, GLContext &, GLuint, GLsizei, const GLchar *const*, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetTransformFeedbackVarying, GLContext &, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( ClampColor, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BeginConditionalRender, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( EndConditionalRender, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribIPointer, GLContext &, GLuint, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribIiv, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribIuiv, GLContext &, GLuint, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1i, GLContext &, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2i, GLContext &, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3i, GLContext &, GLuint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4i, GLContext &, GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1ui, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2ui, GLContext &, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3ui, GLContext &, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4ui, GLContext &, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1iv, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2iv, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3iv, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4iv, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1uiv, GLContext &, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2uiv, GLContext &, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3uiv, GLContext &, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4uiv, GLContext &, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4bv, GLContext &, GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4sv, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4ubv, GLContext &, GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4usv, GLContext &, GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformuiv, GLContext &, GLuint, GLint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindFragDataLocation, GLContext &, GLuint, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetFragDataLocation, GLint, GLContext &, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( Uniform1ui, GLContext &, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform2ui, GLContext &, GLint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform3ui, GLContext &, GLint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform4ui, GLContext &, GLint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform1uiv, GLContext &, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2uiv, GLContext &, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3uiv, GLContext &, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4uiv, GLContext &, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( TexParameterIiv, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexParameterIuiv, GLContext &, GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterIiv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterIuiv, GLContext &, GLenum, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ClearBufferiv, GLContext &, GLenum, GLint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ClearBufferuiv, GLContext &, GLenum, GLint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ClearBufferfv, GLContext &, GLenum, GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ClearBufferfi, GLContext &, GLenum, GLint, GLfloat, GLint ) \
    FGPP_GL_FUNCTION_PTR( GetStringi, const GLubyte *, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_NUM( IsRenderbuffer, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindRenderbuffer, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteRenderbuffers, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenRenderbuffers, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( RenderbufferStorage, GLContext &, GLenum, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetRenderbufferParameteriv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_NUM( IsFramebuffer, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindFramebuffer, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteFramebuffers, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenFramebuffers, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( CheckFramebufferStatus, GLenum, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture1D, GLContext &, GLenum, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture2D, GLContext &, GLenum, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture3D, GLContext &, GLenum, GLenum, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferRenderbuffer, GLContext &, GLenum, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetFramebufferAttachmentParameteriv, GLContext &, GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GenerateMipmap, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlitFramebuffer, GLContext &, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum ) \
    FGPP_GL_FUNCTION_VOID( RenderbufferStorageMultisample, GLContext &, GLenum, GLsizei, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureLayer, GLContext &, GLenum, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_PTR( MapBufferRange, void *, GLContext &, GLenum, GLintptr, GLsizeiptr, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( FlushMappedBufferRange, GLContext &, GLenum, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( BindVertexArray, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteVertexArrays, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenVertexArrays, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsVertexArray, GLboolean, GLContext &, GLuint ) \
\
    /* GL_VERSION_3_1 */ \
    FGPP_GL_FUNCTION_VOID( DrawArraysInstanced, GLContext &, GLenum, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsInstanced, GLContext &, GLenum, GLsizei, GLenum, const GLvoid *, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TexBuffer, GLContext &, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( PrimitiveRestartIndex, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( CopyBufferSubData, GLContext &, GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( GetUniformIndices, GLContext &, GLuint, GLsizei, const GLchar *const*, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveUniformsiv, GLContext &, GLuint, GLsizei, const GLuint *, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveUniformName, GLContext &, GLuint, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetUniformBlockIndex, GLuint, GLContext &, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveUniformBlockiv, GLContext &, GLuint, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveUniformBlockName, GLContext &, GLuint, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( UniformBlockBinding, GLContext &, GLuint, GLuint, GLuint ) \
\
    /* GL_VERSION_3_2 */ \
    FGPP_GL_FUNCTION_VOID( DrawElementsBaseVertex, GLContext &, GLenum, GLsizei, GLenum, const GLvoid *, GLint ) \
    FGPP_GL_FUNCTION_VOID( DrawRangeElementsBaseVertex, GLContext &, GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *, GLint ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsInstancedBaseVertex, GLContext &, GLenum, GLsizei, GLenum, const GLvoid *, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementsBaseVertex, GLContext &, GLenum, const GLsizei *, GLenum, const GLvoid *const*, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProvokingVertex, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_PTR( FenceSync, GLsync, GLContext &, GLenum, GLbitfield ) \
    FGPP_GL_FUNCTION_NUM( IsSync, GLboolean, GLContext &, GLsync ) \
    FGPP_GL_FUNCTION_VOID( DeleteSync, GLContext &, GLsync ) \
    FGPP_GL_FUNCTION_NUM( ClientWaitSync, GLenum, GLContext &, GLsync, GLbitfield, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( WaitSync, GLContext &, GLsync, GLbitfield, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( GetInteger64v, GLContext &, GLenum, GLint64 * ) \
    FGPP_GL_FUNCTION_VOID( GetSynciv, GLContext &, GLsync, GLenum, GLsizei, GLsizei *, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetInteger64i_v, GLContext &, GLenum, GLuint, GLint64 * ) \
    FGPP_GL_FUNCTION_VOID( GetBufferParameteri64v, GLContext &, GLenum, GLenum, GLint64 * ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture, GLContext &, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexImage2DMultisample, GLContext &, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TexImage3DMultisample, GLContext &, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( GetMultisamplefv, GLContext &, GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( SampleMaski, GLContext &, GLuint, GLbitfield ) \
\
    /* GL_VERSION_3_3 */ \
    FGPP_GL_FUNCTION_VOID( BindFragDataLocationIndexed, GLContext &, GLuint, GLuint, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetFragDataIndex, GLint, GLContext &, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GenSamplers, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeleteSamplers, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsSampler, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindSampler, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SamplerParameteri, GLContext &, GLuint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( SamplerParameteriv, GLContext &, GLuint, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( SamplerParameterf, GLContext &, GLuint, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( SamplerParameterfv, GLContext &, GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( SamplerParameterIiv, GLContext &, GLuint, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( SamplerParameterIuiv, GLContext &, GLuint, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetSamplerParameteriv, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetSamplerParameterIiv, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetSamplerParameterfv, GLContext &, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetSamplerParameterIuiv, GLContext &, GLuint, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( QueryCounter, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjecti64v, GLContext &, GLuint, GLenum, GLint64 * ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjectui64v, GLContext &, GLuint, GLenum, GLuint64 * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribDivisor, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP1ui, GLContext &, GLuint, GLenum, GLboolean, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP1uiv, GLContext &, GLuint, GLenum, GLboolean, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP2ui, GLContext &, GLuint, GLenum, GLboolean, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP2uiv, GLContext &, GLuint, GLenum, GLboolean, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP3ui, GLContext &, GLuint, GLenum, GLboolean, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP3uiv, GLContext &, GLuint, GLenum, GLboolean, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP4ui, GLContext &, GLuint, GLenum, GLboolean, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP4uiv, GLContext &, GLuint, GLenum, GLboolean, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexP2ui, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexP2uiv, GLContext &, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexP3ui, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexP3uiv, GLContext &, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexP4ui, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexP4uiv, GLContext &, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP1ui, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP1uiv, GLContext &, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP2ui, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP2uiv, GLContext &, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP3ui, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP3uiv, GLContext &, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP4ui, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP4uiv, GLContext &, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP1ui, GLContext &, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP1uiv, GLContext &, GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP2ui, GLContext &, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP2uiv, GLContext &, GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP3ui, GLContext &, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP3uiv, GLContext &, GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP4ui, GLContext &, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP4uiv, GLContext &, GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( NormalP3ui, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( NormalP3uiv, GLContext &, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ColorP3ui, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ColorP3uiv, GLContext &, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ColorP4ui, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ColorP4uiv, GLContext &, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColorP3ui, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColorP3uiv, GLContext &, GLenum, const GLuint * ) \
\
    /* GL_VERSION_4_0 */ \
    FGPP_GL_FUNCTION_VOID( MinSampleShading, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( BlendEquationi, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendEquationSeparatei, GLContext &, GLuint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendFunci, GLContext &, GLuint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendFuncSeparatei, GLContext &, GLuint, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DrawArraysIndirect, GLContext &, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsIndirect, GLContext &, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( Uniform1d, GLContext &, GLint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Uniform2d, GLContext &, GLint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Uniform3d, GLContext &, GLint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Uniform4d, GLContext &, GLint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Uniform1dv, GLContext &, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2dv, GLContext &, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3dv, GLContext &, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4dv, GLContext &, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2dv, GLContext &, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3dv, GLContext &, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4dv, GLContext &, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2x3dv, GLContext &, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2x4dv, GLContext &, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3x2dv, GLContext &, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3x4dv, GLContext &, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4x2dv, GLContext &, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4x3dv, GLContext &, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformdv, GLContext &, GLuint, GLint, GLdouble * ) \
    FGPP_GL_FUNCTION_NUM( GetSubroutineUniformLocation, GLint, GLContext &, GLuint, GLenum, const GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetSubroutineIndex, GLuint, GLContext &, GLuint, GLenum, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveSubroutineUniformiv, GLContext &, GLuint, GLenum, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveSubroutineUniformName, GLContext &, GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveSubroutineName, GLContext &, GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( UniformSubroutinesuiv, GLContext &, GLenum, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformSubroutineuiv, GLContext &, GLenum, GLint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramStageiv, GLContext &, GLuint, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( PatchParameteri, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PatchParameterfv, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( BindTransformFeedback, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteTransformFeedbacks, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenTransformFeedbacks, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsTransformFeedback, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( PauseTransformFeedback, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( ResumeTransformFeedback, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( DrawTransformFeedback, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DrawTransformFeedbackStream, GLContext &, GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BeginQueryIndexed, GLContext &, GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndQueryIndexed, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetQueryIndexediv, GLContext &, GLenum, GLuint, GLenum, GLint * ) \
\
    /* GL_VERSION_4_1 */ \
    FGPP_GL_FUNCTION_VOID( ReleaseShaderCompiler, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( ShaderBinary, GLContext &, GLsizei, const GLuint *, GLenum, const GLvoid *, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetShaderPrecisionFormat, GLContext &, GLenum, GLenum, GLint *, GLint * ) \
    FGPP_GL_FUNCTION_VOID( DepthRangef, GLContext &, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ClearDepthf, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( GetProgramBinary, GLContext &, GLuint, GLsizei, GLsizei *, GLenum *, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ProgramBinary, GLContext &, GLuint, GLenum, const GLvoid *, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameteri, GLContext &, GLuint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( UseProgramStages, GLContext &, GLuint, GLbitfield, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ActiveShaderProgram, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_NUM( CreateShaderProgramv, GLuint, GLContext &, GLenum, GLsizei, const GLchar *const* ) \
    FGPP_GL_FUNCTION_VOID( BindProgramPipeline, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteProgramPipelines, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenProgramPipelines, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsProgramPipeline, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetProgramPipelineiv, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1i, GLContext &, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1iv, GLContext &, GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1f, GLContext &, GLuint, GLint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1fv, GLContext &, GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1d, GLContext &, GLuint, GLint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1dv, GLContext &, GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1ui, GLContext &, GLuint, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1uiv, GLContext &, GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2i, GLContext &, GLuint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2iv, GLContext &, GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2f, GLContext &, GLuint, GLint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2fv, GLContext &, GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2d, GLContext &, GLuint, GLint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2dv, GLContext &, GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2ui, GLContext &, GLuint, GLint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2uiv, GLContext &, GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3i, GLContext &, GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3iv, GLContext &, GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3f, GLContext &, GLuint, GLint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3fv, GLContext &, GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3d, GLContext &, GLuint, GLint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3dv, GLContext &, GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3ui, GLContext &, GLuint, GLint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3uiv, GLContext &, GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4i, GLContext &, GLuint, GLint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4iv, GLContext &, GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4f, GLContext &, GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4fv, GLContext &, GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4d, GLContext &, GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4dv, GLContext &, GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4ui, GLContext &, GLuint, GLint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4uiv, GLContext &, GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2fv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3fv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4fv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2dv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3dv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4dv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x3fv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x2fv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x4fv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x2fv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x4fv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x3fv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x3dv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x2dv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x4dv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x2dv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x4dv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x3dv, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ValidateProgramPipeline, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetProgramPipelineInfoLog, GLContext &, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1d, GLContext &, GLuint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2d, GLContext &, GLuint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3d, GLContext &, GLuint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4d, GLContext &, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1dv, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2dv, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3dv, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4dv, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribLPointer, GLContext &, GLuint, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribLdv, GLContext &, GLuint, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ViewportArrayv, GLContext &, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ViewportIndexedf, GLContext &, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ViewportIndexedfv, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ScissorArrayv, GLContext &, GLuint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ScissorIndexed, GLContext &, GLuint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( ScissorIndexedv, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( DepthRangeArrayv, GLContext &, GLuint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( DepthRangeIndexed, GLContext &, GLuint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( GetFloati_v, GLContext &, GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetDoublei_v, GLContext &, GLenum, GLuint, GLdouble * ) \
\
    /* GL_VERSION_4_2 */ \
    FGPP_GL_FUNCTION_VOID( DrawArraysInstancedBaseInstance, GLContext &, GLenum, GLint, GLsizei, GLsizei, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsInstancedBaseInstance, GLContext &, GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsInstancedBaseVertexBaseInstance, GLContext &, GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetInternalformativ, GLContext &, GLenum, GLenum, GLenum, GLsizei, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveAtomicCounterBufferiv, GLContext &, GLuint, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( BindImageTexture, GLContext &, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MemoryBarrier, GLContext &, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( TexStorage1D, GLContext &, GLenum, GLsizei, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TexStorage2D, GLContext &, GLenum, GLsizei, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TexStorage3D, GLContext &, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawTransformFeedbackInstanced, GLContext &, GLenum, GLuint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawTransformFeedbackStreamInstanced, GLContext &, GLenum, GLuint, GLuint, GLsizei ) \
\
    /* GL_VERSION_4_3 */ \
    FGPP_GL_FUNCTION_VOID( ClearBufferData, GLContext &, GLenum, GLenum, GLenum, GLenum, const void * ) \
    FGPP_GL_FUNCTION_VOID( ClearBufferSubData, GLContext &, GLenum, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void * ) \
    FGPP_GL_FUNCTION_VOID( DispatchCompute, GLContext &, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DispatchComputeIndirect, GLContext &, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( CopyImageSubData, GLContext &, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( FramebufferParameteri, GLContext &, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( GetFramebufferParameteriv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetInternalformati64v, GLContext &, GLenum, GLenum, GLenum, GLsizei, GLint64 * ) \
    FGPP_GL_FUNCTION_VOID( InvalidateTexSubImage, GLContext &, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( InvalidateTexImage, GLContext &, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( InvalidateBufferSubData, GLContext &, GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( InvalidateBufferData, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( InvalidateFramebuffer, GLContext &, GLenum, GLsizei, const GLenum * ) \
    FGPP_GL_FUNCTION_VOID( InvalidateSubFramebuffer, GLContext &, GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawArraysIndirect, GLContext &, GLenum, const void *, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementsIndirect, GLContext &, GLenum, GLenum, const void *, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetProgramInterfaceiv, GLContext &, GLuint, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_NUM( GetProgramResourceIndex, GLuint, GLContext &, GLuint, GLenum, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramResourceName, GLContext &, GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramResourceiv, GLContext &, GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLint * ) \
    FGPP_GL_FUNCTION_NUM( GetProgramResourceLocation, GLint, GLContext &, GLuint, GLenum, const GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetProgramResourceLocationIndex, GLint, GLContext &, GLuint, GLenum, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( ShaderStorageBlockBinding, GLContext &, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TexBufferRange, GLContext &, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( TexStorage2DMultisample, GLContext &, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TexStorage3DMultisample, GLContext &, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TextureView, GLContext &, GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindVertexBuffer, GLContext &, GLuint, GLuint, GLintptr, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribFormat, GLContext &, GLuint, GLint, GLenum, GLboolean, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribIFormat, GLContext &, GLuint, GLint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribLFormat, GLContext &, GLuint, GLint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribBinding, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexBindingDivisor, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageControl, GLContext &, GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageInsert, GLContext &, GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageCallback, GLContext &, GLDebugProc, const void * ) \
    FGPP_GL_FUNCTION_NUM( GetDebugMessageLog, GLuint, GLContext &, GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( PushDebugGroup, GLContext &, GLenum, GLuint, GLsizei, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( PopDebugGroup, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( ObjectLabel, GLContext &, GLenum, GLuint, GLsizei, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetObjectLabel, GLContext &, GLenum, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( ObjectPtrLabel, GLContext &, const void *, GLsizei, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetObjectPtrLabel, GLContext &, const void *, GLsizei, GLsizei *, GLchar * ) \
\
    /* GL_VERSION_4_4 */ \
    FGPP_GL_FUNCTION_VOID( BufferStorage, GLContext &, GLenum, GLsizeiptr, const void *, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( ClearTexImage, GLContext &, GLuint, GLint, GLenum, GLenum, const void * ) \
    FGPP_GL_FUNCTION_VOID( ClearTexSubImage, GLContext &, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void * ) \
    FGPP_GL_FUNCTION_VOID( BindBuffersBase, GLContext &, GLenum, GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindBuffersRange, GLContext &, GLenum, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizeiptr * ) \
    FGPP_GL_FUNCTION_VOID( BindTextures, GLContext &, GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindSamplers, GLContext &, GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindImageTextures, GLContext &, GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindVertexBuffers, GLContext &, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei * ) \
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
    FGPP_GL_FUNCTION_NUM( GetTextureHandleARB, GLuint64, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( GetTextureSamplerHandleARB, GLuint64, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MakeTextureHandleResidentARB, GLContext &, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( MakeTextureHandleNonResidentARB, GLContext &, GLuint64 ) \
    FGPP_GL_FUNCTION_NUM( GetImageHandleARB, GLuint64, GLContext &, GLuint, GLint, GLboolean, GLint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeImageHandleResidentARB, GLContext &, GLuint64, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeImageHandleNonResidentARB, GLContext &, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( UniformHandleui64ARB, GLContext &, GLint, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( UniformHandleui64vARB, GLContext &, GLint, GLsizei, const GLuint64 * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformHandleui64ARB, GLContext &, GLuint, GLint, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformHandleui64vARB, GLContext &, GLuint, GLint, GLsizei, const GLuint64 * ) \
    FGPP_GL_FUNCTION_NUM( IsTextureHandleResidentARB, GLboolean, GLContext &, GLuint64 ) \
    FGPP_GL_FUNCTION_NUM( IsImageHandleResidentARB, GLboolean, GLContext &, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1ui64ARB, GLContext &, GLuint, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1ui64vARB, GLContext &, GLuint, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribLui64vARB, GLContext &, GLuint, GLenum, GLuint64EXT * ) \
\
    /* GL_ARB_blend_func_extended */ \
\
    /* GL_ARB_buffer_storage */ \
\
    /* GL_ARB_cl_event */ \
    FGPP_GL_FUNCTION_PTR( CreateSyncFromCLeventARB, GLsync, GLContext &, GLclcontext, GLclevent, GLbitfield ) \
\
    /* GL_ARB_clear_buffer_object */ \
\
    /* GL_ARB_clear_texture */ \
\
    /* GL_ARB_color_buffer_float */ \
    FGPP_GL_FUNCTION_VOID( ClampColorARB, GLContext &, GLenum, GLenum ) \
\
    /* GL_ARB_compatibility */ \
\
    /* GL_ARB_compressed_texture_pixel_storage */ \
\
    /* GL_ARB_compute_shader */ \
\
    /* GL_ARB_compute_variable_group_size */ \
    FGPP_GL_FUNCTION_VOID( DispatchComputeGroupSizeARB, GLContext &, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) \
\
    /* GL_ARB_conservative_depth */ \
\
    /* GL_ARB_copy_buffer */ \
\
    /* GL_ARB_copy_image */ \
\
    /* GL_ARB_debug_output */ \
    FGPP_GL_FUNCTION_VOID( DebugMessageControlARB, GLContext &, GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageInsertARB, GLContext &, GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageCallbackARB, GLContext &, GLDebugProcARB, const void * ) \
    FGPP_GL_FUNCTION_NUM( GetDebugMessageLogARB, GLuint, GLContext &, GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar * ) \
\
    /* GL_ARB_depth_buffer_float */ \
\
    /* GL_ARB_depth_clamp */ \
\
    /* GL_ARB_depth_texture */ \
\
    /* GL_ARB_draw_buffers */ \
    FGPP_GL_FUNCTION_VOID( DrawBuffersARB, GLContext &, GLsizei, const GLenum * ) \
\
    /* GL_ARB_draw_buffers_blend */ \
    FGPP_GL_FUNCTION_VOID( BlendEquationiARB, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendEquationSeparateiARB, GLContext &, GLuint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendFunciARB, GLContext &, GLuint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendFuncSeparateiARB, GLContext &, GLuint, GLenum, GLenum, GLenum, GLenum ) \
\
    /* GL_ARB_draw_elements_base_vertex */ \
\
    /* GL_ARB_draw_indirect */ \
\
    /* GL_ARB_draw_instanced */ \
    FGPP_GL_FUNCTION_VOID( DrawArraysInstancedARB, GLContext &, GLenum, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsInstancedARB, GLContext &, GLenum, GLsizei, GLenum, const GLvoid *, GLsizei ) \
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
    FGPP_GL_FUNCTION_VOID( ProgramStringARB, GLContext &, GLenum, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( BindProgramARB, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteProgramsARB, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenProgramsARB, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameter4dARB, GLContext &, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameter4dvARB, GLContext &, GLenum, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameter4fARB, GLContext &, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameter4fvARB, GLContext &, GLenum, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameter4dARB, GLContext &, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameter4dvARB, GLContext &, GLenum, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameter4fARB, GLContext &, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameter4fvARB, GLContext &, GLenum, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramEnvParameterdvARB, GLContext &, GLenum, GLuint, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramEnvParameterfvARB, GLContext &, GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramLocalParameterdvARB, GLContext &, GLenum, GLuint, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramLocalParameterfvARB, GLContext &, GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramivARB, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramStringARB, GLContext &, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_NUM( IsProgramARB, GLboolean, GLContext &, GLuint ) \
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
    FGPP_GL_FUNCTION_VOID( ProgramParameteriARB, GLContext &, GLuint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureARB, GLContext &, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureLayerARB, GLContext &, GLenum, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureFaceARB, GLContext &, GLenum, GLenum, GLuint, GLint, GLenum ) \
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
    FGPP_GL_FUNCTION_VOID( ColorTable, GLContext &, GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ColorTableParameterfv, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ColorTableParameteriv, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( CopyColorTable, GLContext &, GLenum, GLenum, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetColorTable, GLContext &, GLenum, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableParameterfv, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableParameteriv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( ColorSubTable, GLContext &, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyColorSubTable, GLContext &, GLenum, GLsizei, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionFilter1D, GLContext &, GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionFilter2D, GLContext &, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterf, GLContext &, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterfv, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameteri, GLContext &, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameteriv, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( CopyConvolutionFilter1D, GLContext &, GLenum, GLenum, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyConvolutionFilter2D, GLContext &, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionFilter, GLContext &, GLenum, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionParameterfv, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionParameteriv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetSeparableFilter, GLContext &, GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( SeparableFilter2D, GLContext &, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetHistogram, GLContext &, GLenum, GLboolean, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetHistogramParameterfv, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetHistogramParameteriv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMinmax, GLContext &, GLenum, GLboolean, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetMinmaxParameterfv, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMinmaxParameteriv, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( Histogram, GLContext &, GLenum, GLsizei, GLenum, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( Minmax, GLContext &, GLenum, GLenum, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( ResetHistogram, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( ResetMinmax, GLContext &, GLenum ) \
\
    /* GL_ARB_indirect_parameters */ \
    FGPP_GL_FUNCTION_VOID( MultiDrawArraysIndirectCountARB, GLContext &, GLenum, GLintptr, GLintptr, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementsIndirectCountARB, GLContext &, GLenum, GLenum, GLintptr, GLintptr, GLsizei, GLsizei ) \
\
    /* GL_ARB_instanced_arrays */ \
    FGPP_GL_FUNCTION_VOID( VertexAttribDivisorARB, GLContext &, GLuint, GLuint ) \
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
    FGPP_GL_FUNCTION_VOID( CurrentPaletteMatrixARB, GLContext &, GLint ) \
    FGPP_GL_FUNCTION_VOID( MatrixIndexubvARB, GLContext &, GLint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( MatrixIndexusvARB, GLContext &, GLint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( MatrixIndexuivARB, GLContext &, GLint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( MatrixIndexPointerARB, GLContext &, GLint, GLenum, GLsizei, const GLvoid * ) \
\
    /* GL_ARB_multi_bind */ \
\
    /* GL_ARB_multi_draw_indirect */ \
\
    /* GL_ARB_multisample */ \
    FGPP_GL_FUNCTION_VOID( SampleCoverageARB, GLContext &, GLfloat, GLboolean ) \
\
    /* GL_ARB_multitexture */ \
    FGPP_GL_FUNCTION_VOID( ActiveTextureARB, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( ClientActiveTextureARB, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1dARB, GLContext &, GLenum, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1dvARB, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1fARB, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1fvARB, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1iARB, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1ivARB, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1sARB, GLContext &, GLenum, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1svARB, GLContext &, GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2dARB, GLContext &, GLenum, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2dvARB, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2fARB, GLContext &, GLenum, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2fvARB, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2iARB, GLContext &, GLenum, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2ivARB, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2sARB, GLContext &, GLenum, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2svARB, GLContext &, GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3dARB, GLContext &, GLenum, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3dvARB, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3fARB, GLContext &, GLenum, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3fvARB, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3iARB, GLContext &, GLenum, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3ivARB, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3sARB, GLContext &, GLenum, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3svARB, GLContext &, GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4dARB, GLContext &, GLenum, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4dvARB, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4fARB, GLContext &, GLenum, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4fvARB, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4iARB, GLContext &, GLenum, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4ivARB, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4sARB, GLContext &, GLenum, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4svARB, GLContext &, GLenum, const GLshort * ) \
\
    /* GL_ARB_occlusion_query */ \
    FGPP_GL_FUNCTION_VOID( GenQueriesARB, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeleteQueriesARB, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsQueryARB, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BeginQueryARB, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndQueryARB, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetQueryivARB, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjectivARB, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjectuivARB, GLContext &, GLuint, GLenum, GLuint * ) \
\
    /* GL_ARB_occlusion_query2 */ \
\
    /* GL_ARB_pixel_buffer_object */ \
\
    /* GL_ARB_point_parameters */ \
    FGPP_GL_FUNCTION_VOID( PointParameterfARB, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PointParameterfvARB, GLContext &, GLenum, const GLfloat * ) \
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
    FGPP_GL_FUNCTION_NUM( GetGraphicsResetStatusARB, GLenum, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( GetnTexImageARB, GLContext &, GLenum, GLint, GLenum, GLenum, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ReadnPixelsARB, GLContext &, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetnCompressedTexImageARB, GLContext &, GLenum, GLint, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetnUniformfvARB, GLContext &, GLuint, GLint, GLsizei, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetnUniformivARB, GLContext &, GLuint, GLint, GLsizei, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetnUniformuivARB, GLContext &, GLuint, GLint, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetnUniformdvARB, GLContext &, GLuint, GLint, GLsizei, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetnMapdvARB, GLContext &, GLenum, GLenum, GLsizei, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetnMapfvARB, GLContext &, GLenum, GLenum, GLsizei, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetnMapivARB, GLContext &, GLenum, GLenum, GLsizei, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetnPixelMapfvARB, GLContext &, GLenum, GLsizei, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetnPixelMapuivARB, GLContext &, GLenum, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetnPixelMapusvARB, GLContext &, GLenum, GLsizei, GLushort * ) \
    FGPP_GL_FUNCTION_VOID( GetnPolygonStippleARB, GLContext &, GLsizei, GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( GetnColorTableARB, GLContext &, GLenum, GLenum, GLenum, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetnConvolutionFilterARB, GLContext &, GLenum, GLenum, GLenum, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetnSeparableFilterARB, GLContext &, GLenum, GLenum, GLenum, GLsizei, GLvoid *, GLsizei, GLvoid *, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetnHistogramARB, GLContext &, GLenum, GLboolean, GLenum, GLenum, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetnMinmaxARB, GLContext &, GLenum, GLboolean, GLenum, GLenum, GLsizei, GLvoid * ) \
\
    /* GL_ARB_robustness_isolation */ \
\
    /* GL_ARB_sample_shading */ \
    FGPP_GL_FUNCTION_VOID( MinSampleShadingARB, GLContext &, GLfloat ) \
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
    FGPP_GL_FUNCTION_VOID( DeleteObjectARB, GLContext &, GLhandleARB ) \
    FGPP_GL_FUNCTION_NUM( GetHandleARB, GLhandleARB, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DetachObjectARB, GLContext &, GLhandleARB, GLhandleARB ) \
    FGPP_GL_FUNCTION_NUM( CreateShaderObjectARB, GLhandleARB, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( ShaderSourceARB, GLContext &, GLhandleARB, GLsizei, const GLcharARB **, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( CompileShaderARB, GLContext &, GLhandleARB ) \
    FGPP_GL_FUNCTION_NUM( CreateProgramObjectARB, GLhandleARB, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( AttachObjectARB, GLContext &, GLhandleARB, GLhandleARB ) \
    FGPP_GL_FUNCTION_VOID( LinkProgramARB, GLContext &, GLhandleARB ) \
    FGPP_GL_FUNCTION_VOID( UseProgramObjectARB, GLContext &, GLhandleARB ) \
    FGPP_GL_FUNCTION_VOID( ValidateProgramARB, GLContext &, GLhandleARB ) \
    FGPP_GL_FUNCTION_VOID( Uniform1fARB, GLContext &, GLint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform2fARB, GLContext &, GLint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform3fARB, GLContext &, GLint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform4fARB, GLContext &, GLint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform1iARB, GLContext &, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform2iARB, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform3iARB, GLContext &, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform4iARB, GLContext &, GLint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform1fvARB, GLContext &, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2fvARB, GLContext &, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3fvARB, GLContext &, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4fvARB, GLContext &, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform1ivARB, GLContext &, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2ivARB, GLContext &, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3ivARB, GLContext &, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4ivARB, GLContext &, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2fvARB, GLContext &, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3fvARB, GLContext &, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4fvARB, GLContext &, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetObjectParameterfvARB, GLContext &, GLhandleARB, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetObjectParameterivARB, GLContext &, GLhandleARB, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetInfoLogARB, GLContext &, GLhandleARB, GLsizei, GLsizei *, GLcharARB * ) \
    FGPP_GL_FUNCTION_VOID( GetAttachedObjectsARB, GLContext &, GLhandleARB, GLsizei, GLsizei *, GLhandleARB * ) \
    FGPP_GL_FUNCTION_NUM( GetUniformLocationARB, GLint, GLContext &, GLhandleARB, const GLcharARB * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveUniformARB, GLContext &, GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformfvARB, GLContext &, GLhandleARB, GLint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformivARB, GLContext &, GLhandleARB, GLint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetShaderSourceARB, GLContext &, GLhandleARB, GLsizei, GLsizei *, GLcharARB * ) \
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
    FGPP_GL_FUNCTION_VOID( NamedStringARB, GLContext &, GLenum, GLint, const GLchar *, GLint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( DeleteNamedStringARB, GLContext &, GLint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( CompileShaderIncludeARB, GLContext &, GLuint, GLsizei, const GLchar *const*, const GLint * ) \
    FGPP_GL_FUNCTION_NUM( IsNamedStringARB, GLboolean, GLContext &, GLint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedStringARB, GLContext &, GLint, const GLchar *, GLsizei, GLint *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedStringivARB, GLContext &, GLint, const GLchar *, GLenum, GLint * ) \
\
    /* GL_ARB_shading_language_packing */ \
\
    /* GL_ARB_shadow */ \
\
    /* GL_ARB_shadow_ambient */ \
\
    /* GL_ARB_sparse_texture */ \
    FGPP_GL_FUNCTION_VOID( TexPageCommitmentARB, GLContext &, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) \
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
    FGPP_GL_FUNCTION_VOID( TexBufferARB, GLContext &, GLenum, GLenum, GLuint ) \
\
    /* GL_ARB_texture_buffer_object_rgb32 */ \
\
    /* GL_ARB_texture_buffer_range */ \
\
    /* GL_ARB_texture_compression */ \
    FGPP_GL_FUNCTION_VOID( CompressedTexImage3DARB, GLContext &, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexImage2DARB, GLContext &, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexImage1DARB, GLContext &, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexSubImage3DARB, GLContext &, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexSubImage2DARB, GLContext &, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexSubImage1DARB, GLContext &, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetCompressedTexImageARB, GLContext &, GLenum, GLint, GLvoid * ) \
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
    FGPP_GL_FUNCTION_VOID( LoadTransposeMatrixfARB, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( LoadTransposeMatrixdARB, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultTransposeMatrixfARB, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultTransposeMatrixdARB, GLContext &, const GLdouble * ) \
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
    FGPP_GL_FUNCTION_VOID( WeightbvARB, GLContext &, GLint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( WeightsvARB, GLContext &, GLint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( WeightivARB, GLContext &, GLint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WeightfvARB, GLContext &, GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WeightdvARB, GLContext &, GLint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WeightubvARB, GLContext &, GLint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( WeightusvARB, GLContext &, GLint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( WeightuivARB, GLContext &, GLint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( WeightPointerARB, GLContext &, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VertexBlendARB, GLContext &, GLint ) \
\
    /* GL_ARB_vertex_buffer_object */ \
    FGPP_GL_FUNCTION_VOID( BindBufferARB, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteBuffersARB, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenBuffersARB, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsBufferARB, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BufferDataARB, GLContext &, GLenum, GLsizeiptrARB, const GLvoid *, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BufferSubDataARB, GLContext &, GLenum, GLintptrARB, GLsizeiptrARB, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetBufferSubDataARB, GLContext &, GLenum, GLintptrARB, GLsizeiptrARB, GLvoid * ) \
    FGPP_GL_FUNCTION_PTR( MapBufferARB, void *, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_NUM( UnmapBufferARB, GLboolean, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetBufferParameterivARB, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetBufferPointervARB, GLContext &, GLenum, GLenum, GLvoid ** ) \
\
    /* GL_ARB_vertex_program */ \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1dARB, GLContext &, GLuint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1dvARB, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1fARB, GLContext &, GLuint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1fvARB, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1sARB, GLContext &, GLuint, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1svARB, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2dARB, GLContext &, GLuint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2dvARB, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2fARB, GLContext &, GLuint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2fvARB, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2sARB, GLContext &, GLuint, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2svARB, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3dARB, GLContext &, GLuint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3dvARB, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3fARB, GLContext &, GLuint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3fvARB, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3sARB, GLContext &, GLuint, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3svARB, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NbvARB, GLContext &, GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NivARB, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NsvARB, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NubARB, GLContext &, GLuint, GLubyte, GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NubvARB, GLContext &, GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NuivARB, GLContext &, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NusvARB, GLContext &, GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4bvARB, GLContext &, GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4dARB, GLContext &, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4dvARB, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4fARB, GLContext &, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4fvARB, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4ivARB, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4sARB, GLContext &, GLuint, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4svARB, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4ubvARB, GLContext &, GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4uivARB, GLContext &, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4usvARB, GLContext &, GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribPointerARB, GLContext &, GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( EnableVertexAttribArrayARB, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableVertexAttribArrayARB, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribdvARB, GLContext &, GLuint, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribfvARB, GLContext &, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribivARB, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribPointervARB, GLContext &, GLuint, GLenum, GLvoid ** ) \
\
    /* GL_ARB_vertex_shader */ \
    FGPP_GL_FUNCTION_VOID( BindAttribLocationARB, GLContext &, GLhandleARB, GLuint, const GLcharARB * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveAttribARB, GLContext &, GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB * ) \
    FGPP_GL_FUNCTION_NUM( GetAttribLocationARB, GLint, GLContext &, GLhandleARB, const GLcharARB * ) \
\
    /* GL_ARB_vertex_type_10f_11f_11f_rev */ \
\
    /* GL_ARB_vertex_type_2_10_10_10_rev */ \
\
    /* GL_ARB_viewport_array */ \
\
    /* GL_ARB_window_pos */ \
    FGPP_GL_FUNCTION_VOID( WindowPos2dARB, GLContext &, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2dvARB, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2fARB, GLContext &, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2fvARB, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2iARB, GLContext &, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2ivARB, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2sARB, GLContext &, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2svARB, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3dARB, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3dvARB, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3fARB, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3fvARB, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3iARB, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3ivARB, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3sARB, GLContext &, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3svARB, GLContext &, const GLshort * ) \
\
    /* GL_KHR_debug */ \
\
    /* GL_KHR_texture_compression_astc_ldr */ \
\
    /* GL_OES_byte_coordinates */ \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1bOES, GLContext &, GLenum, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1bvOES, GLContext &, GLenum, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2bOES, GLContext &, GLenum, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2bvOES, GLContext &, GLenum, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3bOES, GLContext &, GLenum, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3bvOES, GLContext &, GLenum, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4bOES, GLContext &, GLenum, GLbyte, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4bvOES, GLContext &, GLenum, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1bOES, GLContext &, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1bvOES, GLContext &, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2bOES, GLContext &, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2bvOES, GLContext &, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3bOES, GLContext &, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3bvOES, GLContext &, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4bOES, GLContext &, GLbyte, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4bvOES, GLContext &, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Vertex2bOES, GLContext &, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Vertex2bvOES, GLContext &, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3bOES, GLContext &, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Vertex3bvOES, GLContext &, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4bOES, GLContext &, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Vertex4bvOES, GLContext &, const GLbyte * ) \
\
    /* GL_OES_compressed_paletted_texture */ \
\
    /* GL_OES_fixed_point */ \
    FGPP_GL_FUNCTION_VOID( AlphaFuncxOES, GLContext &, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( ClearColorxOES, GLContext &, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( ClearDepthxOES, GLContext &, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( ClipPlanexOES, GLContext &, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Color4xOES, GLContext &, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( DepthRangexOES, GLContext &, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( FogxOES, GLContext &, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( FogxvOES, GLContext &, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( FrustumxOES, GLContext &, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( GetClipPlanexOES, GLContext &, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetFixedvOES, GLContext &, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetTexEnvxvOES, GLContext &, GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterxvOES, GLContext &, GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( LightModelxOES, GLContext &, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( LightModelxvOES, GLContext &, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( LightxOES, GLContext &, GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( LightxvOES, GLContext &, GLenum, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( LineWidthxOES, GLContext &, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( LoadMatrixxOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MaterialxOES, GLContext &, GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MaterialxvOES, GLContext &, GLenum, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MultMatrixxOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4xOES, GLContext &, GLenum, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Normal3xOES, GLContext &, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( OrthoxOES, GLContext &, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( PointParameterxvOES, GLContext &, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( PointSizexOES, GLContext &, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( PolygonOffsetxOES, GLContext &, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( RotatexOES, GLContext &, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( SampleCoverageOES, GLContext &, GLfixed, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( ScalexOES, GLContext &, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexEnvxOES, GLContext &, GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexEnvxvOES, GLContext &, GLenum, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TexParameterxOES, GLContext &, GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexParameterxvOES, GLContext &, GLenum, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TranslatexOES, GLContext &, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( AccumxOES, GLContext &, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( BitmapxOES, GLContext &, GLsizei, GLsizei, GLfixed, GLfixed, GLfixed, GLfixed, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( BlendColorxOES, GLContext &, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( ClearAccumxOES, GLContext &, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Color3xOES, GLContext &, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Color3xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Color4xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterxOES, GLContext &, GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterxvOES, GLContext &, GLenum, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord1xOES, GLContext &, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord1xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord2xOES, GLContext &, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord2xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( FeedbackBufferxOES, GLContext &, GLsizei, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionParameterxvOES, GLContext &, GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetHistogramParameterxvOES, GLContext &, GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetLightxOES, GLContext &, GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetMapxvOES, GLContext &, GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetMaterialxOES, GLContext &, GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( GetPixelMapxv, GLContext &, GLenum, GLint, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetTexGenxvOES, GLContext &, GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetTexLevelParameterxvOES, GLContext &, GLenum, GLint, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( IndexxOES, GLContext &, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( IndexxvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( LoadTransposeMatrixxOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Map1xOES, GLContext &, GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Map2xOES, GLContext &, GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed, GLfixed, GLint, GLint, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MapGrid1xOES, GLContext &, GLint, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MapGrid2xOES, GLContext &, GLint, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MultTransposeMatrixxOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1xOES, GLContext &, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1xvOES, GLContext &, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2xOES, GLContext &, GLenum, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2xvOES, GLContext &, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3xOES, GLContext &, GLenum, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3xvOES, GLContext &, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4xvOES, GLContext &, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Normal3xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( PassThroughxOES, GLContext &, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( PixelMapx, GLContext &, GLenum, GLint, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( PixelStorex, GLContext &, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( PixelTransferxOES, GLContext &, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( PixelZoomxOES, GLContext &, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( PrioritizeTexturesxOES, GLContext &, GLsizei, const GLuint *, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2xOES, GLContext &, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3xOES, GLContext &, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4xOES, GLContext &, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( RectxOES, GLContext &, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( RectxvOES, GLContext &, const GLfixed *, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1xOES, GLContext &, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2xOES, GLContext &, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3xOES, GLContext &, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4xOES, GLContext &, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TexGenxOES, GLContext &, GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexGenxvOES, GLContext &, GLenum, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Vertex2xOES, GLContext &, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Vertex2xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3xOES, GLContext &, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Vertex3xvOES, GLContext &, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4xOES, GLContext &, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Vertex4xvOES, GLContext &, const GLfixed * ) \
\
    /* GL_OES_query_matrix */ \
    FGPP_GL_FUNCTION_NUM( QueryMatrixxOES, GLbitfield, GLContext &, GLfixed *, GLint * ) \
\
    /* GL_OES_read_format */ \
\
    /* GL_OES_single_precision */ \
    FGPP_GL_FUNCTION_VOID( ClearDepthfOES, GLContext &, GLclampf ) \
    FGPP_GL_FUNCTION_VOID( ClipPlanefOES, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( DepthRangefOES, GLContext &, GLclampf, GLclampf ) \
    FGPP_GL_FUNCTION_VOID( FrustumfOES, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( GetClipPlanefOES, GLContext &, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( OrthofOES, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
\
    /* GL_3DFX_multisample */ \
\
    /* GL_3DFX_tbuffer */ \
    FGPP_GL_FUNCTION_VOID( TbufferMask3DFX, GLContext &, GLuint ) \
\
    /* GL_3DFX_texture_compression_FXT1 */ \
\
    /* GL_AMD_blend_minmax_factor */ \
\
    /* GL_AMD_conservative_depth */ \
\
    /* GL_AMD_debug_output */ \
    FGPP_GL_FUNCTION_VOID( DebugMessageEnableAMD, GLContext &, GLenum, GLenum, GLsizei, const GLuint *, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageInsertAMD, GLContext &, GLenum, GLenum, GLuint, GLsizei, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageCallbackAMD, GLContext &, GLDebugProcAMD, void * ) \
    FGPP_GL_FUNCTION_NUM( GetDebugMessageLogAMD, GLuint, GLContext &, GLuint, GLsizei, GLenum *, GLuint *, GLuint *, GLsizei *, GLchar * ) \
\
    /* GL_AMD_depth_clamp_separate */ \
\
    /* GL_AMD_draw_buffers_blend */ \
    FGPP_GL_FUNCTION_VOID( BlendFuncIndexedAMD, GLContext &, GLuint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendFuncSeparateIndexedAMD, GLContext &, GLuint, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendEquationIndexedAMD, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendEquationSeparateIndexedAMD, GLContext &, GLuint, GLenum, GLenum ) \
\
    /* GL_AMD_interleaved_elements */ \
    FGPP_GL_FUNCTION_VOID( VertexAttribParameteriAMD, GLContext &, GLuint, GLenum, GLint ) \
\
    /* GL_AMD_multi_draw_indirect */ \
    FGPP_GL_FUNCTION_VOID( MultiDrawArraysIndirectAMD, GLContext &, GLenum, const GLvoid *, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementsIndirectAMD, GLContext &, GLenum, GLenum, const GLvoid *, GLsizei, GLsizei ) \
\
    /* GL_AMD_name_gen_delete */ \
    FGPP_GL_FUNCTION_VOID( GenNamesAMD, GLContext &, GLenum, GLuint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeleteNamesAMD, GLContext &, GLenum, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsNameAMD, GLboolean, GLContext &, GLenum, GLuint ) \
\
    /* GL_AMD_performance_monitor */ \
    FGPP_GL_FUNCTION_VOID( GetPerfMonitorGroupsAMD, GLContext &, GLint *, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetPerfMonitorCountersAMD, GLContext &, GLuint, GLint *, GLint *, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetPerfMonitorGroupStringAMD, GLContext &, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetPerfMonitorCounterStringAMD, GLContext &, GLuint, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetPerfMonitorCounterInfoAMD, GLContext &, GLuint, GLuint, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GenPerfMonitorsAMD, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeletePerfMonitorsAMD, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( SelectPerfMonitorCountersAMD, GLContext &, GLuint, GLboolean, GLuint, GLint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BeginPerfMonitorAMD, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndPerfMonitorAMD, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetPerfMonitorCounterDataAMD, GLContext &, GLuint, GLenum, GLsizei, GLuint *, GLint * ) \
\
    /* GL_AMD_pinned_memory */ \
\
    /* GL_AMD_query_buffer_object */ \
\
    /* GL_AMD_sample_positions */ \
    FGPP_GL_FUNCTION_VOID( SetMultisamplefvAMD, GLContext &, GLenum, GLuint, const GLfloat * ) \
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
    FGPP_GL_FUNCTION_VOID( TexStorageSparseAMD, GLContext &, GLenum, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( TextureStorageSparseAMD, GLContext &, GLuint, GLenum, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLbitfield ) \
\
    /* GL_AMD_stencil_operation_extended */ \
    FGPP_GL_FUNCTION_VOID( StencilOpValueAMD, GLContext &, GLenum, GLuint ) \
\
    /* GL_AMD_texture_texture4 */ \
\
    /* GL_AMD_transform_feedback3_lines_triangles */ \
\
    /* GL_AMD_vertex_shader_layer */ \
\
    /* GL_AMD_vertex_shader_tessellator */ \
    FGPP_GL_FUNCTION_VOID( TessellationFactorAMD, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TessellationModeAMD, GLContext &, GLenum ) \
\
    /* GL_AMD_vertex_shader_viewport_index */ \
\
    /* GL_APPLE_aux_depth_stencil */ \
\
    /* GL_APPLE_client_storage */ \
\
    /* GL_APPLE_element_array */ \
    FGPP_GL_FUNCTION_VOID( ElementPointerAPPLE, GLContext &, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( DrawElementArrayAPPLE, GLContext &, GLenum, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawRangeElementArrayAPPLE, GLContext &, GLenum, GLuint, GLuint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementArrayAPPLE, GLContext &, GLenum, const GLint *, const GLsizei *, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawRangeElementArrayAPPLE, GLContext &, GLenum, GLuint, GLuint, const GLint *, const GLsizei *, GLsizei ) \
\
    /* GL_APPLE_fence */ \
    FGPP_GL_FUNCTION_VOID( GenFencesAPPLE, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeleteFencesAPPLE, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( SetFenceAPPLE, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( IsFenceAPPLE, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( TestFenceAPPLE, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( FinishFenceAPPLE, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( TestObjectAPPLE, GLboolean, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( FinishObjectAPPLE, GLContext &, GLenum, GLint ) \
\
    /* GL_APPLE_float_pixels */ \
\
    /* GL_APPLE_flush_buffer_range */ \
    FGPP_GL_FUNCTION_VOID( BufferParameteriAPPLE, GLContext &, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( FlushMappedBufferRangeAPPLE, GLContext &, GLenum, GLintptr, GLsizeiptr ) \
\
    /* GL_APPLE_object_purgeable */ \
    FGPP_GL_FUNCTION_NUM( ObjectPurgeableAPPLE, GLenum, GLContext &, GLenum, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_NUM( ObjectUnpurgeableAPPLE, GLenum, GLContext &, GLenum, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetObjectParameterivAPPLE, GLContext &, GLenum, GLuint, GLenum, GLint * ) \
\
    /* GL_APPLE_rgb_422 */ \
\
    /* GL_APPLE_row_bytes */ \
\
    /* GL_APPLE_specular_vector */ \
\
    /* GL_APPLE_texture_range */ \
    FGPP_GL_FUNCTION_VOID( TextureRangeAPPLE, GLContext &, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterPointervAPPLE, GLContext &, GLenum, GLenum, GLvoid ** ) \
\
    /* GL_APPLE_transform_hint */ \
\
    /* GL_APPLE_vertex_array_object */ \
    FGPP_GL_FUNCTION_VOID( BindVertexArrayAPPLE, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteVertexArraysAPPLE, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenVertexArraysAPPLE, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsVertexArrayAPPLE, GLboolean, GLContext &, GLuint ) \
\
    /* GL_APPLE_vertex_array_range */ \
    FGPP_GL_FUNCTION_VOID( VertexArrayRangeAPPLE, GLContext &, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( FlushVertexArrayRangeAPPLE, GLContext &, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayParameteriAPPLE, GLContext &, GLenum, GLint ) \
\
    /* GL_APPLE_vertex_program_evaluators */ \
    FGPP_GL_FUNCTION_VOID( EnableVertexAttribAPPLE, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DisableVertexAttribAPPLE, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_NUM( IsVertexAttribEnabledAPPLE, GLboolean, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MapVertexAttrib1dAPPLE, GLContext &, GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MapVertexAttrib1fAPPLE, GLContext &, GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MapVertexAttrib2dAPPLE, GLContext &, GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MapVertexAttrib2fAPPLE, GLContext &, GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) \
\
    /* GL_APPLE_ycbcr_422 */ \
\
    /* GL_ATI_draw_buffers */ \
    FGPP_GL_FUNCTION_VOID( DrawBuffersATI, GLContext &, GLsizei, const GLenum * ) \
\
    /* GL_ATI_element_array */ \
    FGPP_GL_FUNCTION_VOID( ElementPointerATI, GLContext &, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( DrawElementArrayATI, GLContext &, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawRangeElementArrayATI, GLContext &, GLenum, GLuint, GLuint, GLsizei ) \
\
    /* GL_ATI_envmap_bumpmap */ \
    FGPP_GL_FUNCTION_VOID( TexBumpParameterivATI, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexBumpParameterfvATI, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTexBumpParameterivATI, GLContext &, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexBumpParameterfvATI, GLContext &, GLenum, GLfloat * ) \
\
    /* GL_ATI_fragment_shader */ \
    FGPP_GL_FUNCTION_NUM( GenFragmentShadersATI, GLuint, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindFragmentShaderATI, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteFragmentShaderATI, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BeginFragmentShaderATI, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( EndFragmentShaderATI, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( PassTexCoordATI, GLContext &, GLuint, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( SampleMapATI, GLContext &, GLuint, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( ColorFragmentOp1ATI, GLContext &, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ColorFragmentOp2ATI, GLContext &, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ColorFragmentOp3ATI, GLContext &, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( AlphaFragmentOp1ATI, GLContext &, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( AlphaFragmentOp2ATI, GLContext &, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( AlphaFragmentOp3ATI, GLContext &, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SetFragmentShaderConstantATI, GLContext &, GLuint, const GLfloat * ) \
\
    /* GL_ATI_map_object_buffer */ \
    FGPP_GL_FUNCTION_PTR( MapObjectBufferATI, void *, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( UnmapObjectBufferATI, GLContext &, GLuint ) \
\
    /* GL_ATI_meminfo */ \
\
    /* GL_ATI_pixel_format_float */ \
\
    /* GL_ATI_pn_triangles */ \
    FGPP_GL_FUNCTION_VOID( PNTrianglesiATI, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PNTrianglesfATI, GLContext &, GLenum, GLfloat ) \
\
    /* GL_ATI_separate_stencil */ \
    FGPP_GL_FUNCTION_VOID( StencilOpSeparateATI, GLContext &, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( StencilFuncSeparateATI, GLContext &, GLenum, GLenum, GLint, GLuint ) \
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
    FGPP_GL_FUNCTION_NUM( NewObjectBufferATI, GLuint, GLContext &, GLsizei, const GLvoid *, GLenum ) \
    FGPP_GL_FUNCTION_NUM( IsObjectBufferATI, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( UpdateObjectBufferATI, GLContext &, GLuint, GLuint, GLsizei, const GLvoid *, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetObjectBufferfvATI, GLContext &, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetObjectBufferivATI, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( FreeObjectBufferATI, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ArrayObjectATI, GLContext &, GLenum, GLint, GLenum, GLsizei, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetArrayObjectfvATI, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetArrayObjectivATI, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( VariantArrayObjectATI, GLContext &, GLuint, GLenum, GLsizei, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetVariantArrayObjectfvATI, GLContext &, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVariantArrayObjectivATI, GLContext &, GLuint, GLenum, GLint * ) \
\
    /* GL_ATI_vertex_attrib_array_object */ \
    FGPP_GL_FUNCTION_VOID( VertexAttribArrayObjectATI, GLContext &, GLuint, GLint, GLenum, GLboolean, GLsizei, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribArrayObjectfvATI, GLContext &, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribArrayObjectivATI, GLContext &, GLuint, GLenum, GLint * ) \
\
    /* GL_ATI_vertex_streams */ \
    FGPP_GL_FUNCTION_VOID( VertexStream1sATI, GLContext &, GLenum, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1svATI, GLContext &, GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1iATI, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1ivATI, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1fATI, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1fvATI, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1dATI, GLContext &, GLenum, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1dvATI, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2sATI, GLContext &, GLenum, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2svATI, GLContext &, GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2iATI, GLContext &, GLenum, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2ivATI, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2fATI, GLContext &, GLenum, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2fvATI, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2dATI, GLContext &, GLenum, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2dvATI, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3sATI, GLContext &, GLenum, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3svATI, GLContext &, GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3iATI, GLContext &, GLenum, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3ivATI, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3fATI, GLContext &, GLenum, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3fvATI, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3dATI, GLContext &, GLenum, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3dvATI, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4sATI, GLContext &, GLenum, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4svATI, GLContext &, GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4iATI, GLContext &, GLenum, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4ivATI, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4fATI, GLContext &, GLenum, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4fvATI, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4dATI, GLContext &, GLenum, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4dvATI, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3bATI, GLContext &, GLenum, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3bvATI, GLContext &, GLenum, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3sATI, GLContext &, GLenum, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3svATI, GLContext &, GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3iATI, GLContext &, GLenum, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3ivATI, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3fATI, GLContext &, GLenum, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3fvATI, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3dATI, GLContext &, GLenum, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3dvATI, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ClientActiveVertexStreamATI, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( VertexBlendEnviATI, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexBlendEnvfATI, GLContext &, GLenum, GLfloat ) \
\
    /* GL_EXT_422_pixels */ \
\
    /* GL_EXT_abgr */ \
\
    /* GL_EXT_bgra */ \
\
    /* GL_EXT_bindable_uniform */ \
    FGPP_GL_FUNCTION_VOID( UniformBufferEXT, GLContext &, GLuint, GLint, GLuint ) \
    FGPP_GL_FUNCTION_NUM( GetUniformBufferSizeEXT, GLint, GLContext &, GLuint, GLint ) \
    FGPP_GL_FUNCTION_NUM( GetUniformOffsetEXT, GLintptr, GLContext &, GLuint, GLint ) \
\
    /* GL_EXT_blend_color */ \
    FGPP_GL_FUNCTION_VOID( BlendColorEXT, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat ) \
\
    /* GL_EXT_blend_equation_separate */ \
    FGPP_GL_FUNCTION_VOID( BlendEquationSeparateEXT, GLContext &, GLenum, GLenum ) \
\
    /* GL_EXT_blend_func_separate */ \
    FGPP_GL_FUNCTION_VOID( BlendFuncSeparateEXT, GLContext &, GLenum, GLenum, GLenum, GLenum ) \
\
    /* GL_EXT_blend_logic_op */ \
\
    /* GL_EXT_blend_minmax */ \
    FGPP_GL_FUNCTION_VOID( BlendEquationEXT, GLContext &, GLenum ) \
\
    /* GL_EXT_blend_subtract */ \
\
    /* GL_EXT_clip_volume_hint */ \
\
    /* GL_EXT_cmyka */ \
\
    /* GL_EXT_color_subtable */ \
    FGPP_GL_FUNCTION_VOID( ColorSubTableEXT, GLContext &, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyColorSubTableEXT, GLContext &, GLenum, GLsizei, GLint, GLint, GLsizei ) \
\
    /* GL_EXT_compiled_vertex_array */ \
    FGPP_GL_FUNCTION_VOID( LockArraysEXT, GLContext &, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( UnlockArraysEXT, GLContext & ) \
\
    /* GL_EXT_convolution */ \
    FGPP_GL_FUNCTION_VOID( ConvolutionFilter1DEXT, GLContext &, GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionFilter2DEXT, GLContext &, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterfEXT, GLContext &, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterfvEXT, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameteriEXT, GLContext &, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterivEXT, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( CopyConvolutionFilter1DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyConvolutionFilter2DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionFilterEXT, GLContext &, GLenum, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionParameterfvEXT, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionParameterivEXT, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetSeparableFilterEXT, GLContext &, GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( SeparableFilter2DEXT, GLContext &, GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid * ) \
\
    /* GL_EXT_coordinate_frame */ \
    FGPP_GL_FUNCTION_VOID( Tangent3bEXT, GLContext &, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Tangent3bvEXT, GLContext &, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Tangent3dEXT, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Tangent3dvEXT, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Tangent3fEXT, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Tangent3fvEXT, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Tangent3iEXT, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Tangent3ivEXT, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Tangent3sEXT, GLContext &, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Tangent3svEXT, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Binormal3bEXT, GLContext &, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Binormal3bvEXT, GLContext &, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Binormal3dEXT, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Binormal3dvEXT, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Binormal3fEXT, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Binormal3fvEXT, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Binormal3iEXT, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Binormal3ivEXT, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Binormal3sEXT, GLContext &, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Binormal3svEXT, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( TangentPointerEXT, GLContext &, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( BinormalPointerEXT, GLContext &, GLenum, GLsizei, const GLvoid * ) \
\
    /* GL_EXT_copy_texture */ \
    FGPP_GL_FUNCTION_VOID( CopyTexImage1DEXT, GLContext &, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyTexImage2DEXT, GLContext &, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyTexSubImage1DEXT, GLContext &, GLenum, GLint, GLint, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyTexSubImage2DEXT, GLContext &, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyTexSubImage3DEXT, GLContext &, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
\
    /* GL_EXT_cull_vertex */ \
    FGPP_GL_FUNCTION_VOID( CullParameterdvEXT, GLContext &, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( CullParameterfvEXT, GLContext &, GLenum, GLfloat * ) \
\
    /* GL_EXT_depth_bounds_test */ \
    FGPP_GL_FUNCTION_VOID( DepthBoundsEXT, GLContext &, GLclampd, GLclampd ) \
\
    /* GL_EXT_direct_state_access */ \
    FGPP_GL_FUNCTION_VOID( MatrixLoadfEXT, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MatrixLoaddEXT, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MatrixMultfEXT, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MatrixMultdEXT, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MatrixLoadIdentityEXT, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MatrixRotatefEXT, GLContext &, GLenum, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MatrixRotatedEXT, GLContext &, GLenum, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MatrixScalefEXT, GLContext &, GLenum, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MatrixScaledEXT, GLContext &, GLenum, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MatrixTranslatefEXT, GLContext &, GLenum, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MatrixTranslatedEXT, GLContext &, GLenum, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MatrixFrustumEXT, GLContext &, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MatrixOrthoEXT, GLContext &, GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MatrixPopEXT, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MatrixPushEXT, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( ClientAttribDefaultEXT, GLContext &, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( PushClientAttribDefaultEXT, GLContext &, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( TextureParameterfEXT, GLContext &, GLuint, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TextureParameterfvEXT, GLContext &, GLuint, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TextureParameteriEXT, GLContext &, GLuint, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( TextureParameterivEXT, GLContext &, GLuint, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TextureImage1DEXT, GLContext &, GLuint, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TextureImage2DEXT, GLContext &, GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TextureSubImage1DEXT, GLContext &, GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TextureSubImage2DEXT, GLContext &, GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyTextureImage1DEXT, GLContext &, GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyTextureImage2DEXT, GLContext &, GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyTextureSubImage1DEXT, GLContext &, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyTextureSubImage2DEXT, GLContext &, GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetTextureImageEXT, GLContext &, GLuint, GLenum, GLint, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetTextureParameterfvEXT, GLContext &, GLuint, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTextureParameterivEXT, GLContext &, GLuint, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTextureLevelParameterfvEXT, GLContext &, GLuint, GLenum, GLint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTextureLevelParameterivEXT, GLContext &, GLuint, GLenum, GLint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( TextureImage3DEXT, GLContext &, GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TextureSubImage3DEXT, GLContext &, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyTextureSubImage3DEXT, GLContext &, GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( BindMultiTextureEXT, GLContext &, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordPointerEXT, GLContext &, GLenum, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexEnvfEXT, GLContext &, GLenum, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexEnvfvEXT, GLContext &, GLenum, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexEnviEXT, GLContext &, GLenum, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexEnvivEXT, GLContext &, GLenum, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexGendEXT, GLContext &, GLenum, GLenum, GLenum, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexGendvEXT, GLContext &, GLenum, GLenum, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexGenfEXT, GLContext &, GLenum, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexGenfvEXT, GLContext &, GLenum, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexGeniEXT, GLContext &, GLenum, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexGenivEXT, GLContext &, GLenum, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexEnvfvEXT, GLContext &, GLenum, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexEnvivEXT, GLContext &, GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexGendvEXT, GLContext &, GLenum, GLenum, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexGenfvEXT, GLContext &, GLenum, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexGenivEXT, GLContext &, GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexParameteriEXT, GLContext &, GLenum, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexParameterivEXT, GLContext &, GLenum, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexParameterfEXT, GLContext &, GLenum, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexParameterfvEXT, GLContext &, GLenum, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexImage1DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexImage2DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexSubImage1DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexSubImage2DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyMultiTexImage1DEXT, GLContext &, GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyMultiTexImage2DEXT, GLContext &, GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyMultiTexSubImage1DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyMultiTexSubImage2DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexImageEXT, GLContext &, GLenum, GLenum, GLint, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexParameterfvEXT, GLContext &, GLenum, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexParameterivEXT, GLContext &, GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexLevelParameterfvEXT, GLContext &, GLenum, GLenum, GLint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexLevelParameterivEXT, GLContext &, GLenum, GLenum, GLint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexImage3DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexSubImage3DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyMultiTexSubImage3DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( EnableClientStateIndexedEXT, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableClientStateIndexedEXT, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetFloatIndexedvEXT, GLContext &, GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetDoubleIndexedvEXT, GLContext &, GLenum, GLuint, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetPointerIndexedvEXT, GLContext &, GLenum, GLuint, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( EnableIndexedEXT, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableIndexedEXT, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_NUM( IsEnabledIndexedEXT, GLboolean, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetIntegerIndexedvEXT, GLContext &, GLenum, GLuint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetBooleanIndexedvEXT, GLContext &, GLenum, GLuint, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTextureImage3DEXT, GLContext &, GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTextureImage2DEXT, GLContext &, GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTextureImage1DEXT, GLContext &, GLuint, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTextureSubImage3DEXT, GLContext &, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTextureSubImage2DEXT, GLContext &, GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTextureSubImage1DEXT, GLContext &, GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetCompressedTextureImageEXT, GLContext &, GLuint, GLenum, GLint, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedMultiTexImage3DEXT, GLContext &, GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedMultiTexImage2DEXT, GLContext &, GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedMultiTexImage1DEXT, GLContext &, GLenum, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedMultiTexSubImage3DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedMultiTexSubImage2DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedMultiTexSubImage1DEXT, GLContext &, GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetCompressedMultiTexImageEXT, GLContext &, GLenum, GLenum, GLint, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MatrixLoadTransposefEXT, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MatrixLoadTransposedEXT, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MatrixMultTransposefEXT, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MatrixMultTransposedEXT, GLContext &, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( NamedBufferDataEXT, GLContext &, GLuint, GLsizeiptr, const GLvoid *, GLenum ) \
    FGPP_GL_FUNCTION_VOID( NamedBufferSubDataEXT, GLContext &, GLuint, GLintptr, GLsizeiptr, const GLvoid * ) \
    FGPP_GL_FUNCTION_PTR( MapNamedBufferEXT, void *, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_NUM( UnmapNamedBufferEXT, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetNamedBufferParameterivEXT, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedBufferPointervEXT, GLContext &, GLuint, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( GetNamedBufferSubDataEXT, GLContext &, GLuint, GLintptr, GLsizeiptr, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1fEXT, GLContext &, GLuint, GLint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2fEXT, GLContext &, GLuint, GLint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3fEXT, GLContext &, GLuint, GLint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4fEXT, GLContext &, GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1iEXT, GLContext &, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2iEXT, GLContext &, GLuint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3iEXT, GLContext &, GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4iEXT, GLContext &, GLuint, GLint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1fvEXT, GLContext &, GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2fvEXT, GLContext &, GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3fvEXT, GLContext &, GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4fvEXT, GLContext &, GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1ivEXT, GLContext &, GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2ivEXT, GLContext &, GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3ivEXT, GLContext &, GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4ivEXT, GLContext &, GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2fvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3fvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4fvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x3fvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x2fvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x4fvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x2fvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x4fvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x3fvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TextureBufferEXT, GLContext &, GLuint, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexBufferEXT, GLContext &, GLenum, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TextureParameterIivEXT, GLContext &, GLuint, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TextureParameterIuivEXT, GLContext &, GLuint, GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetTextureParameterIivEXT, GLContext &, GLuint, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTextureParameterIuivEXT, GLContext &, GLuint, GLenum, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexParameterIivEXT, GLContext &, GLenum, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexParameterIuivEXT, GLContext &, GLenum, GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexParameterIivEXT, GLContext &, GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexParameterIuivEXT, GLContext &, GLenum, GLenum, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1uiEXT, GLContext &, GLuint, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2uiEXT, GLContext &, GLuint, GLint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3uiEXT, GLContext &, GLuint, GLint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4uiEXT, GLContext &, GLuint, GLint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1uivEXT, GLContext &, GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2uivEXT, GLContext &, GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3uivEXT, GLContext &, GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4uivEXT, GLContext &, GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameters4fvEXT, GLContext &, GLuint, GLenum, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameterI4iEXT, GLContext &, GLuint, GLenum, GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameterI4ivEXT, GLContext &, GLuint, GLenum, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParametersI4ivEXT, GLContext &, GLuint, GLenum, GLuint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameterI4uiEXT, GLContext &, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameterI4uivEXT, GLContext &, GLuint, GLenum, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParametersI4uivEXT, GLContext &, GLuint, GLenum, GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedProgramLocalParameterIivEXT, GLContext &, GLuint, GLenum, GLuint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedProgramLocalParameterIuivEXT, GLContext &, GLuint, GLenum, GLuint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( EnableClientStateiEXT, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableClientStateiEXT, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetFloati_vEXT, GLContext &, GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetDoublei_vEXT, GLContext &, GLenum, GLuint, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetPointeri_vEXT, GLContext &, GLenum, GLuint, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramStringEXT, GLContext &, GLuint, GLenum, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameter4dEXT, GLContext &, GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameter4dvEXT, GLContext &, GLuint, GLenum, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameter4fEXT, GLContext &, GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameter4fvEXT, GLContext &, GLuint, GLenum, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedProgramLocalParameterdvEXT, GLContext &, GLuint, GLenum, GLuint, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedProgramLocalParameterfvEXT, GLContext &, GLuint, GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedProgramivEXT, GLContext &, GLuint, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedProgramStringEXT, GLContext &, GLuint, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( NamedRenderbufferStorageEXT, GLContext &, GLuint, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetNamedRenderbufferParameterivEXT, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( NamedRenderbufferStorageMultisampleEXT, GLContext &, GLuint, GLsizei, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( NamedRenderbufferStorageMultisampleCoverageEXT, GLContext &, GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_NUM( CheckNamedFramebufferStatusEXT, GLenum, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferTexture1DEXT, GLContext &, GLuint, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferTexture2DEXT, GLContext &, GLuint, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferTexture3DEXT, GLContext &, GLuint, GLenum, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferRenderbufferEXT, GLContext &, GLuint, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetNamedFramebufferAttachmentParameterivEXT, GLContext &, GLuint, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GenerateTextureMipmapEXT, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GenerateMultiTexMipmapEXT, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( FramebufferDrawBufferEXT, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( FramebufferDrawBuffersEXT, GLContext &, GLuint, GLsizei, const GLenum * ) \
    FGPP_GL_FUNCTION_VOID( FramebufferReadBufferEXT, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetFramebufferParameterivEXT, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( NamedCopyBufferSubDataEXT, GLContext &, GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferTextureEXT, GLContext &, GLuint, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferTextureLayerEXT, GLContext &, GLuint, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferTextureFaceEXT, GLContext &, GLuint, GLenum, GLuint, GLint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( TextureRenderbufferEXT, GLContext &, GLuint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexRenderbufferEXT, GLContext &, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexOffsetEXT, GLContext &, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayColorOffsetEXT, GLContext &, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayEdgeFlagOffsetEXT, GLContext &, GLuint, GLuint, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayIndexOffsetEXT, GLContext &, GLuint, GLuint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayNormalOffsetEXT, GLContext &, GLuint, GLuint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayTexCoordOffsetEXT, GLContext &, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayMultiTexCoordOffsetEXT, GLContext &, GLuint, GLuint, GLenum, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayFogCoordOffsetEXT, GLContext &, GLuint, GLuint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArraySecondaryColorOffsetEXT, GLContext &, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribOffsetEXT, GLContext &, GLuint, GLuint, GLuint, GLint, GLenum, GLboolean, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribIOffsetEXT, GLContext &, GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( EnableVertexArrayEXT, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DisableVertexArrayEXT, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( EnableVertexArrayAttribEXT, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableVertexArrayAttribEXT, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetVertexArrayIntegervEXT, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexArrayPointervEXT, GLContext &, GLuint, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( GetVertexArrayIntegeri_vEXT, GLContext &, GLuint, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexArrayPointeri_vEXT, GLContext &, GLuint, GLuint, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_PTR( MapNamedBufferRangeEXT, void *, GLContext &, GLuint, GLintptr, GLsizeiptr, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( FlushMappedNamedBufferRangeEXT, GLContext &, GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( NamedBufferStorageEXT, GLContext &, GLuint, GLsizeiptr, const void *, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( ClearNamedBufferDataEXT, GLContext &, GLuint, GLenum, GLenum, GLenum, const void * ) \
    FGPP_GL_FUNCTION_VOID( ClearNamedBufferSubDataEXT, GLContext &, GLuint, GLenum, GLenum, GLenum, GLsizeiptr, GLsizeiptr, const void * ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferParameteriEXT, GLContext &, GLuint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( GetNamedFramebufferParameterivEXT, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1dEXT, GLContext &, GLuint, GLint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2dEXT, GLContext &, GLuint, GLint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3dEXT, GLContext &, GLuint, GLint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4dEXT, GLContext &, GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1dvEXT, GLContext &, GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2dvEXT, GLContext &, GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3dvEXT, GLContext &, GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4dvEXT, GLContext &, GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2dvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3dvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4dvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x3dvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x4dvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x2dvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x4dvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x2dvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x3dvEXT, GLContext &, GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( TextureBufferRangeEXT, GLContext &, GLuint, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( TextureStorage1DEXT, GLContext &, GLuint, GLenum, GLsizei, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TextureStorage2DEXT, GLContext &, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TextureStorage3DEXT, GLContext &, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TextureStorage2DMultisampleEXT, GLContext &, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TextureStorage3DMultisampleEXT, GLContext &, GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayBindVertexBufferEXT, GLContext &, GLuint, GLuint, GLuint, GLintptr, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribFormatEXT, GLContext &, GLuint, GLuint, GLint, GLenum, GLboolean, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribIFormatEXT, GLContext &, GLuint, GLuint, GLint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribLFormatEXT, GLContext &, GLuint, GLuint, GLint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribBindingEXT, GLContext &, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexBindingDivisorEXT, GLContext &, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribLOffsetEXT, GLContext &, GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( TexturePageCommitmentEXT, GLContext &, GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribDivisorEXT, GLContext &, GLuint, GLuint, GLuint ) \
\
    /* GL_EXT_draw_buffers2 */ \
    FGPP_GL_FUNCTION_VOID( ColorMaskIndexedEXT, GLContext &, GLuint, GLboolean, GLboolean, GLboolean, GLboolean ) \
\
    /* GL_EXT_draw_instanced */ \
    FGPP_GL_FUNCTION_VOID( DrawArraysInstancedEXT, GLContext &, GLenum, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsInstancedEXT, GLContext &, GLenum, GLsizei, GLenum, const GLvoid *, GLsizei ) \
\
    /* GL_EXT_draw_range_elements */ \
    FGPP_GL_FUNCTION_VOID( DrawRangeElementsEXT, GLContext &, GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid * ) \
\
    /* GL_EXT_fog_coord */ \
    FGPP_GL_FUNCTION_VOID( FogCoordfEXT, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( FogCoordfvEXT, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( FogCoorddEXT, GLContext &, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( FogCoorddvEXT, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( FogCoordPointerEXT, GLContext &, GLenum, GLsizei, const GLvoid * ) \
\
    /* GL_EXT_framebuffer_blit */ \
    FGPP_GL_FUNCTION_VOID( BlitFramebufferEXT, GLContext &, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum ) \
\
    /* GL_EXT_framebuffer_multisample */ \
    FGPP_GL_FUNCTION_VOID( RenderbufferStorageMultisampleEXT, GLContext &, GLenum, GLsizei, GLenum, GLsizei, GLsizei ) \
\
    /* GL_EXT_framebuffer_multisample_blit_scaled */ \
\
    /* GL_EXT_framebuffer_object */ \
    FGPP_GL_FUNCTION_NUM( IsRenderbufferEXT, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindRenderbufferEXT, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteRenderbuffersEXT, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenRenderbuffersEXT, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( RenderbufferStorageEXT, GLContext &, GLenum, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetRenderbufferParameterivEXT, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_NUM( IsFramebufferEXT, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindFramebufferEXT, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteFramebuffersEXT, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenFramebuffersEXT, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( CheckFramebufferStatusEXT, GLenum, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture1DEXT, GLContext &, GLenum, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture2DEXT, GLContext &, GLenum, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture3DEXT, GLContext &, GLenum, GLenum, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferRenderbufferEXT, GLContext &, GLenum, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetFramebufferAttachmentParameterivEXT, GLContext &, GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GenerateMipmapEXT, GLContext &, GLenum ) \
\
    /* GL_EXT_framebuffer_sRGB */ \
\
    /* GL_EXT_geometry_shader4 */ \
    FGPP_GL_FUNCTION_VOID( ProgramParameteriEXT, GLContext &, GLuint, GLenum, GLint ) \
\
    /* GL_EXT_gpu_program_parameters */ \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameters4fvEXT, GLContext &, GLenum, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameters4fvEXT, GLContext &, GLenum, GLuint, GLsizei, const GLfloat * ) \
\
    /* GL_EXT_gpu_shader4 */ \
    FGPP_GL_FUNCTION_VOID( GetUniformuivEXT, GLContext &, GLuint, GLint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindFragDataLocationEXT, GLContext &, GLuint, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetFragDataLocationEXT, GLint, GLContext &, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( Uniform1uiEXT, GLContext &, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform2uiEXT, GLContext &, GLint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform3uiEXT, GLContext &, GLint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform4uiEXT, GLContext &, GLint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform1uivEXT, GLContext &, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2uivEXT, GLContext &, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3uivEXT, GLContext &, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4uivEXT, GLContext &, GLint, GLsizei, const GLuint * ) \
\
    /* GL_EXT_histogram */ \
    FGPP_GL_FUNCTION_VOID( GetHistogramEXT, GLContext &, GLenum, GLboolean, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetHistogramParameterfvEXT, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetHistogramParameterivEXT, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMinmaxEXT, GLContext &, GLenum, GLboolean, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetMinmaxParameterfvEXT, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMinmaxParameterivEXT, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( HistogramEXT, GLContext &, GLenum, GLsizei, GLenum, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( MinmaxEXT, GLContext &, GLenum, GLenum, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( ResetHistogramEXT, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( ResetMinmaxEXT, GLContext &, GLenum ) \
\
    /* GL_EXT_index_array_formats */ \
\
    /* GL_EXT_index_func */ \
    FGPP_GL_FUNCTION_VOID( IndexFuncEXT, GLContext &, GLenum, GLclampf ) \
\
    /* GL_EXT_index_material */ \
    FGPP_GL_FUNCTION_VOID( IndexMaterialEXT, GLContext &, GLenum, GLenum ) \
\
    /* GL_EXT_index_texture */ \
\
    /* GL_EXT_light_texture */ \
    FGPP_GL_FUNCTION_VOID( ApplyTextureEXT, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( TextureLightEXT, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( TextureMaterialEXT, GLContext &, GLenum, GLenum ) \
\
    /* GL_EXT_misc_attribute */ \
\
    /* GL_EXT_multi_draw_arrays */ \
    FGPP_GL_FUNCTION_VOID( MultiDrawArraysEXT, GLContext &, GLenum, const GLint *, const GLsizei *, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementsEXT, GLContext &, GLenum, const GLsizei *, GLenum, const GLvoid *const*, GLsizei ) \
\
    /* GL_EXT_multisample */ \
    FGPP_GL_FUNCTION_VOID( SampleMaskEXT, GLContext &, GLclampf, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( SamplePatternEXT, GLContext &, GLenum ) \
\
    /* GL_EXT_packed_depth_stencil */ \
\
    /* GL_EXT_packed_float */ \
\
    /* GL_EXT_packed_pixels */ \
\
    /* GL_EXT_paletted_texture */ \
    FGPP_GL_FUNCTION_VOID( ColorTableEXT, GLContext &, GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableEXT, GLContext &, GLenum, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableParameterivEXT, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableParameterfvEXT, GLContext &, GLenum, GLenum, GLfloat * ) \
\
    /* GL_EXT_pixel_buffer_object */ \
\
    /* GL_EXT_pixel_transform */ \
    FGPP_GL_FUNCTION_VOID( PixelTransformParameteriEXT, GLContext &, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PixelTransformParameterfEXT, GLContext &, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PixelTransformParameterivEXT, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( PixelTransformParameterfvEXT, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelTransformParameterivEXT, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelTransformParameterfvEXT, GLContext &, GLenum, GLenum, GLfloat * ) \
\
    /* GL_EXT_pixel_transform_color_table */ \
\
    /* GL_EXT_point_parameters */ \
    FGPP_GL_FUNCTION_VOID( PointParameterfEXT, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PointParameterfvEXT, GLContext &, GLenum, const GLfloat * ) \
\
    /* GL_EXT_polygon_offset */ \
    FGPP_GL_FUNCTION_VOID( PolygonOffsetEXT, GLContext &, GLfloat, GLfloat ) \
\
    /* GL_EXT_provoking_vertex */ \
    FGPP_GL_FUNCTION_VOID( ProvokingVertexEXT, GLContext &, GLenum ) \
\
    /* GL_EXT_rescale_normal */ \
\
    /* GL_EXT_secondary_color */ \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3bEXT, GLContext &, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3bvEXT, GLContext &, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3dEXT, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3dvEXT, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3fEXT, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3fvEXT, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3iEXT, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3ivEXT, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3sEXT, GLContext &, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3svEXT, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3ubEXT, GLContext &, GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3ubvEXT, GLContext &, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3uiEXT, GLContext &, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3uivEXT, GLContext &, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3usEXT, GLContext &, GLushort, GLushort, GLushort ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3usvEXT, GLContext &, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColorPointerEXT, GLContext &, GLint, GLenum, GLsizei, const GLvoid * ) \
\
    /* GL_EXT_separate_shader_objects */ \
    FGPP_GL_FUNCTION_VOID( UseShaderProgramEXT, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ActiveProgramEXT, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( CreateShaderProgramEXT, GLuint, GLContext &, GLenum, const GLchar * ) \
\
    /* GL_EXT_separate_specular_color */ \
\
    /* GL_EXT_shader_image_load_store */ \
    FGPP_GL_FUNCTION_VOID( BindImageTextureEXT, GLContext &, GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( MemoryBarrierEXT, GLContext &, GLbitfield ) \
\
    /* GL_EXT_shadow_funcs */ \
\
    /* GL_EXT_shared_texture_palette */ \
\
    /* GL_EXT_stencil_clear_tag */ \
    FGPP_GL_FUNCTION_VOID( StencilClearTagEXT, GLContext &, GLsizei, GLuint ) \
\
    /* GL_EXT_stencil_two_side */ \
    FGPP_GL_FUNCTION_VOID( ActiveStencilFaceEXT, GLContext &, GLenum ) \
\
    /* GL_EXT_stencil_wrap */ \
\
    /* GL_EXT_subtexture */ \
    FGPP_GL_FUNCTION_VOID( TexSubImage1DEXT, GLContext &, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexSubImage2DEXT, GLContext &, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
\
    /* GL_EXT_texture */ \
\
    /* GL_EXT_texture3D */ \
    FGPP_GL_FUNCTION_VOID( TexImage3DEXT, GLContext &, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexSubImage3DEXT, GLContext &, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
\
    /* GL_EXT_texture_array */ \
\
    /* GL_EXT_texture_buffer_object */ \
    FGPP_GL_FUNCTION_VOID( TexBufferEXT, GLContext &, GLenum, GLenum, GLuint ) \
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
    FGPP_GL_FUNCTION_VOID( TexParameterIivEXT, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexParameterIuivEXT, GLContext &, GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterIivEXT, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterIuivEXT, GLContext &, GLenum, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ClearColorIiEXT, GLContext &, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ClearColorIuiEXT, GLContext &, GLuint, GLuint, GLuint, GLuint ) \
\
    /* GL_EXT_texture_lod_bias */ \
\
    /* GL_EXT_texture_mirror_clamp */ \
\
    /* GL_EXT_texture_object */ \
    FGPP_GL_FUNCTION_NUM( AreTexturesResidentEXT, GLboolean, GLContext &, GLsizei, const GLuint *, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( BindTextureEXT, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteTexturesEXT, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenTexturesEXT, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsTextureEXT, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( PrioritizeTexturesEXT, GLContext &, GLsizei, const GLuint *, const GLclampf * ) \
\
    /* GL_EXT_texture_perturb_normal */ \
    FGPP_GL_FUNCTION_VOID( TextureNormalEXT, GLContext &, GLenum ) \
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
    FGPP_GL_FUNCTION_VOID( GetQueryObjecti64vEXT, GLContext &, GLuint, GLenum, GLint64 * ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjectui64vEXT, GLContext &, GLuint, GLenum, GLuint64 * ) \
\
    /* GL_EXT_transform_feedback */ \
    FGPP_GL_FUNCTION_VOID( BeginTransformFeedbackEXT, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( EndTransformFeedbackEXT, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( BindBufferRangeEXT, GLContext &, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( BindBufferOffsetEXT, GLContext &, GLenum, GLuint, GLuint, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( BindBufferBaseEXT, GLContext &, GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TransformFeedbackVaryingsEXT, GLContext &, GLuint, GLsizei, const GLchar *const*, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetTransformFeedbackVaryingEXT, GLContext &, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar * ) \
\
    /* GL_EXT_vertex_array */ \
    FGPP_GL_FUNCTION_VOID( ArrayElementEXT, GLContext &, GLint ) \
    FGPP_GL_FUNCTION_VOID( ColorPointerEXT, GLContext &, GLint, GLenum, GLsizei, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( DrawArraysEXT, GLContext &, GLenum, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( EdgeFlagPointerEXT, GLContext &, GLsizei, GLsizei, const GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( GetPointervEXT, GLContext &, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( IndexPointerEXT, GLContext &, GLenum, GLsizei, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( NormalPointerEXT, GLContext &, GLenum, GLsizei, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexCoordPointerEXT, GLContext &, GLint, GLenum, GLsizei, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VertexPointerEXT, GLContext &, GLint, GLenum, GLsizei, GLsizei, const GLvoid * ) \
\
    /* GL_EXT_vertex_array_bgra */ \
\
    /* GL_EXT_vertex_attrib_64bit */ \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1dEXT, GLContext &, GLuint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2dEXT, GLContext &, GLuint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3dEXT, GLContext &, GLuint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4dEXT, GLContext &, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1dvEXT, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2dvEXT, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3dvEXT, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4dvEXT, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribLPointerEXT, GLContext &, GLuint, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribLdvEXT, GLContext &, GLuint, GLenum, GLdouble * ) \
\
    /* GL_EXT_vertex_shader */ \
    FGPP_GL_FUNCTION_VOID( BeginVertexShaderEXT, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( EndVertexShaderEXT, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( BindVertexShaderEXT, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( GenVertexShadersEXT, GLuint, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteVertexShaderEXT, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ShaderOp1EXT, GLContext &, GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ShaderOp2EXT, GLContext &, GLenum, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ShaderOp3EXT, GLContext &, GLenum, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SwizzleEXT, GLContext &, GLuint, GLuint, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( WriteMaskEXT, GLContext &, GLuint, GLuint, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( InsertComponentEXT, GLContext &, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ExtractComponentEXT, GLContext &, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_NUM( GenSymbolsEXT, GLuint, GLContext &, GLenum, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SetInvariantEXT, GLContext &, GLuint, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( SetLocalConstantEXT, GLContext &, GLuint, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VariantbvEXT, GLContext &, GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VariantsvEXT, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VariantivEXT, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VariantfvEXT, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VariantdvEXT, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VariantubvEXT, GLContext &, GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VariantusvEXT, GLContext &, GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( VariantuivEXT, GLContext &, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VariantPointerEXT, GLContext &, GLuint, GLenum, GLuint, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( EnableVariantClientStateEXT, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableVariantClientStateEXT, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( BindLightParameterEXT, GLuint, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_NUM( BindMaterialParameterEXT, GLuint, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_NUM( BindTexGenParameterEXT, GLuint, GLContext &, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_NUM( BindTextureUnitParameterEXT, GLuint, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_NUM( BindParameterEXT, GLuint, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_NUM( IsVariantEnabledEXT, GLboolean, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetVariantBooleanvEXT, GLContext &, GLuint, GLenum, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( GetVariantIntegervEXT, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVariantFloatvEXT, GLContext &, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVariantPointervEXT, GLContext &, GLuint, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( GetInvariantBooleanvEXT, GLContext &, GLuint, GLenum, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( GetInvariantIntegervEXT, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetInvariantFloatvEXT, GLContext &, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetLocalConstantBooleanvEXT, GLContext &, GLuint, GLenum, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( GetLocalConstantIntegervEXT, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetLocalConstantFloatvEXT, GLContext &, GLuint, GLenum, GLfloat * ) \
\
    /* GL_EXT_vertex_weighting */ \
    FGPP_GL_FUNCTION_VOID( VertexWeightfEXT, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexWeightfvEXT, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexWeightPointerEXT, GLContext &, GLint, GLenum, GLsizei, const GLvoid * ) \
\
    /* GL_EXT_x11_sync_object */ \
    FGPP_GL_FUNCTION_PTR( ImportSyncEXT, GLsync, GLContext &, GLenum, GLintptr, GLbitfield ) \
\
    /* GL_GREMEDY_frame_terminator */ \
    FGPP_GL_FUNCTION_VOID( FrameTerminatorGREMEDY, GLContext & ) \
\
    /* GL_GREMEDY_string_marker */ \
    FGPP_GL_FUNCTION_VOID( StringMarkerGREMEDY, GLContext &, GLsizei, const GLvoid * ) \
\
    /* GL_HP_convolution_border_modes */ \
\
    /* GL_HP_image_transform */ \
    FGPP_GL_FUNCTION_VOID( ImageTransformParameteriHP, GLContext &, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( ImageTransformParameterfHP, GLContext &, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ImageTransformParameterivHP, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ImageTransformParameterfvHP, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetImageTransformParameterivHP, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetImageTransformParameterfvHP, GLContext &, GLenum, GLenum, GLfloat * ) \
\
    /* GL_HP_occlusion_test */ \
\
    /* GL_HP_texture_lighting */ \
\
    /* GL_IBM_cull_vertex */ \
\
    /* GL_IBM_multimode_draw_arrays */ \
    FGPP_GL_FUNCTION_VOID( MultiModeDrawArraysIBM, GLContext &, const GLenum *, const GLint *, const GLsizei *, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiModeDrawElementsIBM, GLContext &, const GLenum *, const GLsizei *, GLenum, const GLvoid *const*, GLsizei, GLint ) \
\
    /* GL_IBM_rasterpos_clip */ \
\
    /* GL_IBM_static_data */ \
    FGPP_GL_FUNCTION_VOID( FlushStaticDataIBM, GLContext &, GLenum ) \
\
    /* GL_IBM_texture_mirrored_repeat */ \
\
    /* GL_IBM_vertex_array_lists */ \
    FGPP_GL_FUNCTION_VOID( ColorPointerListIBM, GLContext &, GLint, GLenum, GLint, const GLvoid **, GLint ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColorPointerListIBM, GLContext &, GLint, GLenum, GLint, const GLvoid **, GLint ) \
    FGPP_GL_FUNCTION_VOID( EdgeFlagPointerListIBM, GLContext &, GLint, const GLboolean **, GLint ) \
    FGPP_GL_FUNCTION_VOID( FogCoordPointerListIBM, GLContext &, GLenum, GLint, const GLvoid **, GLint ) \
    FGPP_GL_FUNCTION_VOID( IndexPointerListIBM, GLContext &, GLenum, GLint, const GLvoid **, GLint ) \
    FGPP_GL_FUNCTION_VOID( NormalPointerListIBM, GLContext &, GLenum, GLint, const GLvoid **, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexCoordPointerListIBM, GLContext &, GLint, GLenum, GLint, const GLvoid **, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexPointerListIBM, GLContext &, GLint, GLenum, GLint, const GLvoid **, GLint ) \
\
    /* GL_INGR_blend_func_separate */ \
    FGPP_GL_FUNCTION_VOID( BlendFuncSeparateINGR, GLContext &, GLenum, GLenum, GLenum, GLenum ) \
\
    /* GL_INGR_color_clamp */ \
\
    /* GL_INGR_interlace_read */ \
\
    /* GL_INTEL_map_texture */ \
    FGPP_GL_FUNCTION_VOID( SyncTextureINTEL, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( UnmapTexture2DINTEL, GLContext &, GLuint, GLint ) \
    FGPP_GL_FUNCTION_PTR( MapTexture2DINTEL, void *, GLContext &, GLuint, GLint, GLbitfield, const GLint *, const GLenum * ) \
\
    /* GL_INTEL_parallel_arrays */ \
    FGPP_GL_FUNCTION_VOID( VertexPointervINTEL, GLContext &, GLint, GLenum, const GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( NormalPointervINTEL, GLContext &, GLenum, const GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( ColorPointervINTEL, GLContext &, GLint, GLenum, const GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( TexCoordPointervINTEL, GLContext &, GLint, GLenum, const GLvoid ** ) \
\
    /* GL_MESAX_texture_stack */ \
\
    /* GL_MESA_pack_invert */ \
\
    /* GL_MESA_resize_buffers */ \
    FGPP_GL_FUNCTION_VOID( ResizeBuffersMESA, GLContext & ) \
\
    /* GL_MESA_window_pos */ \
    FGPP_GL_FUNCTION_VOID( WindowPos2dMESA, GLContext &, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2dvMESA, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2fMESA, GLContext &, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2fvMESA, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2iMESA, GLContext &, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2ivMESA, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2sMESA, GLContext &, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2svMESA, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3dMESA, GLContext &, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3dvMESA, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3fMESA, GLContext &, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3fvMESA, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3iMESA, GLContext &, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3ivMESA, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3sMESA, GLContext &, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3svMESA, GLContext &, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4dMESA, GLContext &, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4dvMESA, GLContext &, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4fMESA, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4fvMESA, GLContext &, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4iMESA, GLContext &, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4ivMESA, GLContext &, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4sMESA, GLContext &, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4svMESA, GLContext &, const GLshort * ) \
\
    /* GL_MESA_ycbcr_texture */ \
\
    /* GL_NVX_conditional_render */ \
    FGPP_GL_FUNCTION_VOID( BeginConditionalRenderNVX, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndConditionalRenderNVX, GLContext & ) \
\
    /* GL_NV_bindless_multi_draw_indirect */ \
    FGPP_GL_FUNCTION_VOID( MultiDrawArraysIndirectBindlessNV, GLContext &, GLenum, const GLvoid *, GLsizei, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementsIndirectBindlessNV, GLContext &, GLenum, GLenum, const GLvoid *, GLsizei, GLsizei, GLint ) \
\
    /* GL_NV_bindless_texture */ \
    FGPP_GL_FUNCTION_NUM( GetTextureHandleNV, GLuint64, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( GetTextureSamplerHandleNV, GLuint64, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MakeTextureHandleResidentNV, GLContext &, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( MakeTextureHandleNonResidentNV, GLContext &, GLuint64 ) \
    FGPP_GL_FUNCTION_NUM( GetImageHandleNV, GLuint64, GLContext &, GLuint, GLint, GLboolean, GLint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeImageHandleResidentNV, GLContext &, GLuint64, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeImageHandleNonResidentNV, GLContext &, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( UniformHandleui64NV, GLContext &, GLint, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( UniformHandleui64vNV, GLContext &, GLint, GLsizei, const GLuint64 * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformHandleui64NV, GLContext &, GLuint, GLint, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformHandleui64vNV, GLContext &, GLuint, GLint, GLsizei, const GLuint64 * ) \
    FGPP_GL_FUNCTION_NUM( IsTextureHandleResidentNV, GLboolean, GLContext &, GLuint64 ) \
    FGPP_GL_FUNCTION_NUM( IsImageHandleResidentNV, GLboolean, GLContext &, GLuint64 ) \
\
    /* GL_NV_blend_equation_advanced */ \
    FGPP_GL_FUNCTION_VOID( BlendParameteriNV, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( BlendBarrierNV, GLContext & ) \
\
    /* GL_NV_blend_equation_advanced_coherent */ \
\
    /* GL_NV_blend_square */ \
\
    /* GL_NV_compute_program5 */ \
\
    /* GL_NV_conditional_render */ \
    FGPP_GL_FUNCTION_VOID( BeginConditionalRenderNV, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( EndConditionalRenderNV, GLContext & ) \
\
    /* GL_NV_copy_depth_to_color */ \
\
    /* GL_NV_copy_image */ \
    FGPP_GL_FUNCTION_VOID( CopyImageSubDataNV, GLContext &, GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei ) \
\
    /* GL_NV_deep_texture3D */ \
\
    /* GL_NV_depth_buffer_float */ \
    FGPP_GL_FUNCTION_VOID( DepthRangedNV, GLContext &, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ClearDepthdNV, GLContext &, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( DepthBoundsdNV, GLContext &, GLdouble, GLdouble ) \
\
    /* GL_NV_depth_clamp */ \
\
    /* GL_NV_draw_texture */ \
    FGPP_GL_FUNCTION_VOID( DrawTextureNV, GLContext &, GLuint, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
\
    /* GL_NV_evaluators */ \
    FGPP_GL_FUNCTION_VOID( MapControlPointsNV, GLContext &, GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MapParameterivNV, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MapParameterfvNV, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMapControlPointsNV, GLContext &, GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetMapParameterivNV, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMapParameterfvNV, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMapAttribParameterivNV, GLContext &, GLenum, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMapAttribParameterfvNV, GLContext &, GLenum, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( EvalMapsNV, GLContext &, GLenum, GLenum ) \
\
    /* GL_NV_explicit_multisample */ \
    FGPP_GL_FUNCTION_VOID( GetMultisamplefvNV, GLContext &, GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( SampleMaskIndexedNV, GLContext &, GLuint, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( TexRenderbufferNV, GLContext &, GLenum, GLuint ) \
\
    /* GL_NV_fence */ \
    FGPP_GL_FUNCTION_VOID( DeleteFencesNV, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenFencesNV, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsFenceNV, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( TestFenceNV, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetFenceivNV, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( FinishFenceNV, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SetFenceNV, GLContext &, GLuint, GLenum ) \
\
    /* GL_NV_float_buffer */ \
\
    /* GL_NV_fog_distance */ \
\
    /* GL_NV_fragment_program */ \
    FGPP_GL_FUNCTION_VOID( ProgramNamedParameter4fNV, GLContext &, GLuint, GLsizei, const GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramNamedParameter4fvNV, GLContext &, GLuint, GLsizei, const GLubyte *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramNamedParameter4dNV, GLContext &, GLuint, GLsizei, const GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramNamedParameter4dvNV, GLContext &, GLuint, GLsizei, const GLubyte *, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramNamedParameterfvNV, GLContext &, GLuint, GLsizei, const GLubyte *, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramNamedParameterdvNV, GLContext &, GLuint, GLsizei, const GLubyte *, GLdouble * ) \
\
    /* GL_NV_fragment_program2 */ \
\
    /* GL_NV_fragment_program4 */ \
\
    /* GL_NV_fragment_program_option */ \
\
    /* GL_NV_framebuffer_multisample_coverage */ \
    FGPP_GL_FUNCTION_VOID( RenderbufferStorageMultisampleCoverageNV, GLContext &, GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei ) \
\
    /* GL_NV_geometry_program4 */ \
    FGPP_GL_FUNCTION_VOID( ProgramVertexLimitNV, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureEXT, GLContext &, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureLayerEXT, GLContext &, GLenum, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureFaceEXT, GLContext &, GLenum, GLenum, GLuint, GLint, GLenum ) \
\
    /* GL_NV_geometry_shader4 */ \
\
    /* GL_NV_gpu_program4 */ \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameterI4iNV, GLContext &, GLenum, GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameterI4ivNV, GLContext &, GLenum, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParametersI4ivNV, GLContext &, GLenum, GLuint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameterI4uiNV, GLContext &, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameterI4uivNV, GLContext &, GLenum, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParametersI4uivNV, GLContext &, GLenum, GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameterI4iNV, GLContext &, GLenum, GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameterI4ivNV, GLContext &, GLenum, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParametersI4ivNV, GLContext &, GLenum, GLuint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameterI4uiNV, GLContext &, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameterI4uivNV, GLContext &, GLenum, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParametersI4uivNV, GLContext &, GLenum, GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramLocalParameterIivNV, GLContext &, GLenum, GLuint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramLocalParameterIuivNV, GLContext &, GLenum, GLuint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramEnvParameterIivNV, GLContext &, GLenum, GLuint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramEnvParameterIuivNV, GLContext &, GLenum, GLuint, GLuint * ) \
\
    /* GL_NV_gpu_program5 */ \
    FGPP_GL_FUNCTION_VOID( ProgramSubroutineParametersuivNV, GLContext &, GLenum, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramSubroutineParameteruivNV, GLContext &, GLenum, GLuint, GLuint * ) \
\
    /* GL_NV_gpu_program5_mem_extended */ \
\
    /* GL_NV_gpu_shader5 */ \
    FGPP_GL_FUNCTION_VOID( Uniform1i64NV, GLContext &, GLint, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform2i64NV, GLContext &, GLint, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform3i64NV, GLContext &, GLint, GLint64EXT, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform4i64NV, GLContext &, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform1i64vNV, GLContext &, GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2i64vNV, GLContext &, GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3i64vNV, GLContext &, GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4i64vNV, GLContext &, GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform1ui64NV, GLContext &, GLint, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform2ui64NV, GLContext &, GLint, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform3ui64NV, GLContext &, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform4ui64NV, GLContext &, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform1ui64vNV, GLContext &, GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2ui64vNV, GLContext &, GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3ui64vNV, GLContext &, GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4ui64vNV, GLContext &, GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformi64vNV, GLContext &, GLuint, GLint, GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1i64NV, GLContext &, GLuint, GLint, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2i64NV, GLContext &, GLuint, GLint, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3i64NV, GLContext &, GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4i64NV, GLContext &, GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1i64vNV, GLContext &, GLuint, GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2i64vNV, GLContext &, GLuint, GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3i64vNV, GLContext &, GLuint, GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4i64vNV, GLContext &, GLuint, GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1ui64NV, GLContext &, GLuint, GLint, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2ui64NV, GLContext &, GLuint, GLint, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3ui64NV, GLContext &, GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4ui64NV, GLContext &, GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1ui64vNV, GLContext &, GLuint, GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2ui64vNV, GLContext &, GLuint, GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3ui64vNV, GLContext &, GLuint, GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4ui64vNV, GLContext &, GLuint, GLint, GLsizei, const GLuint64EXT * ) \
\
    /* GL_NV_half_float */ \
    FGPP_GL_FUNCTION_VOID( Vertex2hNV, GLContext &, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( Vertex2hvNV, GLContext &, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3hNV, GLContext &, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( Vertex3hvNV, GLContext &, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4hNV, GLContext &, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( Vertex4hvNV, GLContext &, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( Normal3hNV, GLContext &, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( Normal3hvNV, GLContext &, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( Color3hNV, GLContext &, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( Color3hvNV, GLContext &, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( Color4hNV, GLContext &, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( Color4hvNV, GLContext &, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1hNV, GLContext &, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1hvNV, GLContext &, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2hNV, GLContext &, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2hvNV, GLContext &, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3hNV, GLContext &, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3hvNV, GLContext &, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4hNV, GLContext &, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4hvNV, GLContext &, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1hNV, GLContext &, GLenum, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1hvNV, GLContext &, GLenum, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2hNV, GLContext &, GLenum, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2hvNV, GLContext &, GLenum, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3hNV, GLContext &, GLenum, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3hvNV, GLContext &, GLenum, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4hNV, GLContext &, GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4hvNV, GLContext &, GLenum, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( FogCoordhNV, GLContext &, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( FogCoordhvNV, GLContext &, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3hNV, GLContext &, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3hvNV, GLContext &, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexWeighthNV, GLContext &, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( VertexWeighthvNV, GLContext &, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1hNV, GLContext &, GLuint, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1hvNV, GLContext &, GLuint, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2hNV, GLContext &, GLuint, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2hvNV, GLContext &, GLuint, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3hNV, GLContext &, GLuint, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3hvNV, GLContext &, GLuint, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4hNV, GLContext &, GLuint, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4hvNV, GLContext &, GLuint, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs1hvNV, GLContext &, GLuint, GLsizei, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs2hvNV, GLContext &, GLuint, GLsizei, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs3hvNV, GLContext &, GLuint, GLsizei, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs4hvNV, GLContext &, GLuint, GLsizei, const GLhalfNV * ) \
\
    /* GL_NV_light_max_exponent */ \
\
    /* GL_NV_multisample_coverage */ \
\
    /* GL_NV_multisample_filter_hint */ \
\
    /* GL_NV_occlusion_query */ \
    FGPP_GL_FUNCTION_VOID( GenOcclusionQueriesNV, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeleteOcclusionQueriesNV, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsOcclusionQueryNV, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BeginOcclusionQueryNV, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndOcclusionQueryNV, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( GetOcclusionQueryivNV, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetOcclusionQueryuivNV, GLContext &, GLuint, GLenum, GLuint * ) \
\
    /* GL_NV_packed_depth_stencil */ \
\
    /* GL_NV_parameter_buffer_object */ \
    FGPP_GL_FUNCTION_VOID( ProgramBufferParametersfvNV, GLContext &, GLenum, GLuint, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramBufferParametersIivNV, GLContext &, GLenum, GLuint, GLuint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramBufferParametersIuivNV, GLContext &, GLenum, GLuint, GLuint, GLsizei, const GLuint * ) \
\
    /* GL_NV_parameter_buffer_object2 */ \
\
    /* GL_NV_path_rendering */ \
    FGPP_GL_FUNCTION_NUM( GenPathsNV, GLuint, GLContext &, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DeletePathsNV, GLContext &, GLuint, GLsizei ) \
    FGPP_GL_FUNCTION_NUM( IsPathNV, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( PathCommandsNV, GLContext &, GLuint, GLsizei, const GLubyte *, GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PathCoordsNV, GLContext &, GLuint, GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PathSubCommandsNV, GLContext &, GLuint, GLsizei, GLsizei, GLsizei, const GLubyte *, GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PathSubCoordsNV, GLContext &, GLuint, GLsizei, GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PathStringNV, GLContext &, GLuint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PathGlyphsNV, GLContext &, GLuint, GLenum, const GLvoid *, GLbitfield, GLsizei, GLenum, const GLvoid *, GLenum, GLuint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PathGlyphRangeNV, GLContext &, GLuint, GLenum, const GLvoid *, GLbitfield, GLuint, GLsizei, GLenum, GLuint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WeightPathsNV, GLContext &, GLuint, GLsizei, const GLuint *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( CopyPathNV, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( InterpolatePathsNV, GLContext &, GLuint, GLuint, GLuint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TransformPathNV, GLContext &, GLuint, GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PathParameterivNV, GLContext &, GLuint, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( PathParameteriNV, GLContext &, GLuint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PathParameterfvNV, GLContext &, GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PathParameterfNV, GLContext &, GLuint, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PathDashArrayNV, GLContext &, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PathStencilFuncNV, GLContext &, GLenum, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( PathStencilDepthOffsetNV, GLContext &, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( StencilFillPathNV, GLContext &, GLuint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( StencilStrokePathNV, GLContext &, GLuint, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( StencilFillPathInstancedNV, GLContext &, GLsizei, GLenum, const GLvoid *, GLuint, GLenum, GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( StencilStrokePathInstancedNV, GLContext &, GLsizei, GLenum, const GLvoid *, GLuint, GLint, GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PathCoverDepthFuncNV, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( PathColorGenNV, GLContext &, GLenum, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PathTexGenNV, GLContext &, GLenum, GLenum, GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PathFogGenNV, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( CoverFillPathNV, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( CoverStrokePathNV, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( CoverFillPathInstancedNV, GLContext &, GLsizei, GLenum, const GLvoid *, GLuint, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( CoverStrokePathInstancedNV, GLContext &, GLsizei, GLenum, const GLvoid *, GLuint, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathParameterivNV, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetPathParameterfvNV, GLContext &, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathCommandsNV, GLContext &, GLuint, GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( GetPathCoordsNV, GLContext &, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathDashArrayNV, GLContext &, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathMetricsNV, GLContext &, GLbitfield, GLsizei, GLenum, const GLvoid *, GLuint, GLsizei, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathMetricRangeNV, GLContext &, GLbitfield, GLuint, GLsizei, GLsizei, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathSpacingNV, GLContext &, GLenum, GLsizei, GLenum, const GLvoid *, GLuint, GLfloat, GLfloat, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathColorGenivNV, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetPathColorGenfvNV, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathTexGenivNV, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetPathTexGenfvNV, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_NUM( IsPointInFillPathNV, GLboolean, GLContext &, GLuint, GLuint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_NUM( IsPointInStrokePathNV, GLboolean, GLContext &, GLuint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_NUM( GetPathLengthNV, GLfloat, GLContext &, GLuint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_NUM( PointAlongPathNV, GLboolean, GLContext &, GLuint, GLsizei, GLsizei, GLfloat, GLfloat *, GLfloat *, GLfloat *, GLfloat * ) \
\
    /* GL_NV_pixel_data_range */ \
    FGPP_GL_FUNCTION_VOID( PixelDataRangeNV, GLContext &, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( FlushPixelDataRangeNV, GLContext &, GLenum ) \
\
    /* GL_NV_point_sprite */ \
    FGPP_GL_FUNCTION_VOID( PointParameteriNV, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PointParameterivNV, GLContext &, GLenum, const GLint * ) \
\
    /* GL_NV_present_video */ \
    FGPP_GL_FUNCTION_VOID( PresentFrameKeyedNV, GLContext &, GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLuint, GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( PresentFrameDualFillNV, GLContext &, GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetVideoivNV, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVideouivNV, GLContext &, GLuint, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetVideoi64vNV, GLContext &, GLuint, GLenum, GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetVideoui64vNV, GLContext &, GLuint, GLenum, GLuint64EXT * ) \
\
    /* GL_NV_primitive_restart */ \
    FGPP_GL_FUNCTION_VOID( PrimitiveRestartNV, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( PrimitiveRestartIndexNV, GLContext &, GLuint ) \
\
    /* GL_NV_register_combiners */ \
    FGPP_GL_FUNCTION_VOID( CombinerParameterfvNV, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( CombinerParameterfNV, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( CombinerParameterivNV, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( CombinerParameteriNV, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( CombinerInputNV, GLContext &, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( CombinerOutputNV, GLContext &, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( FinalCombinerInputNV, GLContext &, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetCombinerInputParameterfvNV, GLContext &, GLenum, GLenum, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetCombinerInputParameterivNV, GLContext &, GLenum, GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetCombinerOutputParameterfvNV, GLContext &, GLenum, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetCombinerOutputParameterivNV, GLContext &, GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetFinalCombinerInputParameterfvNV, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetFinalCombinerInputParameterivNV, GLContext &, GLenum, GLenum, GLint * ) \
\
    /* GL_NV_register_combiners2 */ \
    FGPP_GL_FUNCTION_VOID( CombinerStageParameterfvNV, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetCombinerStageParameterfvNV, GLContext &, GLenum, GLenum, GLfloat * ) \
\
    /* GL_NV_shader_atomic_counters */ \
\
    /* GL_NV_shader_atomic_float */ \
\
    /* GL_NV_shader_buffer_load */ \
    FGPP_GL_FUNCTION_VOID( MakeBufferResidentNV, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeBufferNonResidentNV, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_NUM( IsBufferResidentNV, GLboolean, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeNamedBufferResidentNV, GLContext &, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeNamedBufferNonResidentNV, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( IsNamedBufferResidentNV, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetBufferParameterui64vNV, GLContext &, GLenum, GLenum, GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedBufferParameterui64vNV, GLContext &, GLuint, GLenum, GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetIntegerui64vNV, GLContext &, GLenum, GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniformui64NV, GLContext &, GLint, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniformui64vNV, GLContext &, GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformui64vNV, GLContext &, GLuint, GLint, GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformui64NV, GLContext &, GLuint, GLint, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformui64vNV, GLContext &, GLuint, GLint, GLsizei, const GLuint64EXT * ) \
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
    FGPP_GL_FUNCTION_VOID( TextureBarrierNV, GLContext & ) \
\
    /* GL_NV_texture_compression_vtc */ \
\
    /* GL_NV_texture_env_combine4 */ \
\
    /* GL_NV_texture_expand_normal */ \
\
    /* GL_NV_texture_multisample */ \
    FGPP_GL_FUNCTION_VOID( TexImage2DMultisampleCoverageNV, GLContext &, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TexImage3DMultisampleCoverageNV, GLContext &, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TextureImage2DMultisampleNV, GLContext &, GLuint, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TextureImage3DMultisampleNV, GLContext &, GLuint, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TextureImage2DMultisampleCoverageNV, GLContext &, GLuint, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TextureImage3DMultisampleCoverageNV, GLContext &, GLuint, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) \
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
    FGPP_GL_FUNCTION_VOID( BeginTransformFeedbackNV, GLContext &, GLenum ) \
    FGPP_GL_FUNCTION_VOID( EndTransformFeedbackNV, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( TransformFeedbackAttribsNV, GLContext &, GLuint, const GLint *, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BindBufferRangeNV, GLContext &, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( BindBufferOffsetNV, GLContext &, GLenum, GLuint, GLuint, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( BindBufferBaseNV, GLContext &, GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TransformFeedbackVaryingsNV, GLContext &, GLuint, GLsizei, const GLint *, GLenum ) \
    FGPP_GL_FUNCTION_VOID( ActiveVaryingNV, GLContext &, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetVaryingLocationNV, GLint, GLContext &, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveVaryingNV, GLContext &, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetTransformFeedbackVaryingNV, GLContext &, GLuint, GLuint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( TransformFeedbackStreamAttribsNV, GLContext &, GLsizei, const GLint *, GLsizei, const GLint *, GLenum ) \
\
    /* GL_NV_transform_feedback2 */ \
    FGPP_GL_FUNCTION_VOID( BindTransformFeedbackNV, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteTransformFeedbacksNV, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenTransformFeedbacksNV, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsTransformFeedbackNV, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( PauseTransformFeedbackNV, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( ResumeTransformFeedbackNV, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( DrawTransformFeedbackNV, GLContext &, GLenum, GLuint ) \
\
    /* GL_NV_vdpau_interop */ \
    FGPP_GL_FUNCTION_VOID( VDPAUInitNV, GLContext &, const GLvoid *, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VDPAUFiniNV, GLContext & ) \
    FGPP_GL_FUNCTION_NUM( VDPAURegisterVideoSurfaceNV, GLvdpauSurfaceNV, GLContext &, const GLvoid *, GLenum, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_NUM( VDPAURegisterOutputSurfaceNV, GLvdpauSurfaceNV, GLContext &, const GLvoid *, GLenum, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VDPAUIsSurfaceNV, GLContext &, GLvdpauSurfaceNV ) \
    FGPP_GL_FUNCTION_VOID( VDPAUUnregisterSurfaceNV, GLContext &, GLvdpauSurfaceNV ) \
    FGPP_GL_FUNCTION_VOID( VDPAUGetSurfaceivNV, GLContext &, GLvdpauSurfaceNV, GLenum, GLsizei, GLsizei *, GLint * ) \
    FGPP_GL_FUNCTION_VOID( VDPAUSurfaceAccessNV, GLContext &, GLvdpauSurfaceNV, GLenum ) \
    FGPP_GL_FUNCTION_VOID( VDPAUMapSurfacesNV, GLContext &, GLsizei, const GLvdpauSurfaceNV * ) \
    FGPP_GL_FUNCTION_VOID( VDPAUUnmapSurfacesNV, GLContext &, GLsizei, const GLvdpauSurfaceNV * ) \
\
    /* GL_NV_vertex_array_range */ \
    FGPP_GL_FUNCTION_VOID( FlushVertexArrayRangeNV, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayRangeNV, GLContext &, GLsizei, const GLvoid * ) \
\
    /* GL_NV_vertex_array_range2 */ \
\
    /* GL_NV_vertex_attrib_integer_64bit */ \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1i64NV, GLContext &, GLuint, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2i64NV, GLContext &, GLuint, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3i64NV, GLContext &, GLuint, GLint64EXT, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4i64NV, GLContext &, GLuint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1i64vNV, GLContext &, GLuint, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2i64vNV, GLContext &, GLuint, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3i64vNV, GLContext &, GLuint, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4i64vNV, GLContext &, GLuint, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1ui64NV, GLContext &, GLuint, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2ui64NV, GLContext &, GLuint, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3ui64NV, GLContext &, GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4ui64NV, GLContext &, GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1ui64vNV, GLContext &, GLuint, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2ui64vNV, GLContext &, GLuint, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3ui64vNV, GLContext &, GLuint, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4ui64vNV, GLContext &, GLuint, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribLi64vNV, GLContext &, GLuint, GLenum, GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribLui64vNV, GLContext &, GLuint, GLenum, GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribLFormatNV, GLContext &, GLuint, GLint, GLenum, GLsizei ) \
\
    /* GL_NV_vertex_buffer_unified_memory */ \
    FGPP_GL_FUNCTION_VOID( BufferAddressRangeNV, GLContext &, GLenum, GLuint, GLuint64EXT, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( VertexFormatNV, GLContext &, GLint, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( NormalFormatNV, GLContext &, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( ColorFormatNV, GLContext &, GLint, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( IndexFormatNV, GLContext &, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TexCoordFormatNV, GLContext &, GLint, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( EdgeFlagFormatNV, GLContext &, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColorFormatNV, GLContext &, GLint, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( FogCoordFormatNV, GLContext &, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribFormatNV, GLContext &, GLuint, GLint, GLenum, GLboolean, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribIFormatNV, GLContext &, GLuint, GLint, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetIntegerui64i_vNV, GLContext &, GLenum, GLuint, GLuint64EXT * ) \
\
    /* GL_NV_vertex_program */ \
    FGPP_GL_FUNCTION_NUM( AreProgramsResidentNV, GLboolean, GLContext &, GLsizei, const GLuint *, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( BindProgramNV, GLContext &, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteProgramsNV, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ExecuteProgramNV, GLContext &, GLenum, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GenProgramsNV, GLContext &, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramParameterdvNV, GLContext &, GLenum, GLuint, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramParameterfvNV, GLContext &, GLenum, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramivNV, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramStringNV, GLContext &, GLuint, GLenum, GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( GetTrackMatrixivNV, GLContext &, GLenum, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribdvNV, GLContext &, GLuint, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribfvNV, GLContext &, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribivNV, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribPointervNV, GLContext &, GLuint, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_NUM( IsProgramNV, GLboolean, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( LoadProgramNV, GLContext &, GLenum, GLuint, GLsizei, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameter4dNV, GLContext &, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameter4dvNV, GLContext &, GLenum, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameter4fNV, GLContext &, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameter4fvNV, GLContext &, GLenum, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameters4dvNV, GLContext &, GLenum, GLuint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameters4fvNV, GLContext &, GLenum, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( RequestResidentProgramsNV, GLContext &, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( TrackMatrixNV, GLContext &, GLenum, GLuint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribPointerNV, GLContext &, GLuint, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1dNV, GLContext &, GLuint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1dvNV, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1fNV, GLContext &, GLuint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1fvNV, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1sNV, GLContext &, GLuint, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1svNV, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2dNV, GLContext &, GLuint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2dvNV, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2fNV, GLContext &, GLuint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2fvNV, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2sNV, GLContext &, GLuint, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2svNV, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3dNV, GLContext &, GLuint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3dvNV, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3fNV, GLContext &, GLuint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3fvNV, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3sNV, GLContext &, GLuint, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3svNV, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4dNV, GLContext &, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4dvNV, GLContext &, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4fNV, GLContext &, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4fvNV, GLContext &, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4sNV, GLContext &, GLuint, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4svNV, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4ubNV, GLContext &, GLuint, GLubyte, GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4ubvNV, GLContext &, GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs1dvNV, GLContext &, GLuint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs1fvNV, GLContext &, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs1svNV, GLContext &, GLuint, GLsizei, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs2dvNV, GLContext &, GLuint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs2fvNV, GLContext &, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs2svNV, GLContext &, GLuint, GLsizei, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs3dvNV, GLContext &, GLuint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs3fvNV, GLContext &, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs3svNV, GLContext &, GLuint, GLsizei, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs4dvNV, GLContext &, GLuint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs4fvNV, GLContext &, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs4svNV, GLContext &, GLuint, GLsizei, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs4ubvNV, GLContext &, GLuint, GLsizei, const GLubyte * ) \
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
    FGPP_GL_FUNCTION_VOID( VertexAttribI1iEXT, GLContext &, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2iEXT, GLContext &, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3iEXT, GLContext &, GLuint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4iEXT, GLContext &, GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1uiEXT, GLContext &, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2uiEXT, GLContext &, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3uiEXT, GLContext &, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4uiEXT, GLContext &, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1ivEXT, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2ivEXT, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3ivEXT, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4ivEXT, GLContext &, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1uivEXT, GLContext &, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2uivEXT, GLContext &, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3uivEXT, GLContext &, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4uivEXT, GLContext &, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4bvEXT, GLContext &, GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4svEXT, GLContext &, GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4ubvEXT, GLContext &, GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4usvEXT, GLContext &, GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribIPointerEXT, GLContext &, GLuint, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribIivEXT, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribIuivEXT, GLContext &, GLuint, GLenum, GLuint * ) \
\
    /* GL_NV_video_capture */ \
    FGPP_GL_FUNCTION_VOID( BeginVideoCaptureNV, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindVideoCaptureStreamBufferNV, GLContext &, GLuint, GLuint, GLenum, GLintptrARB ) \
    FGPP_GL_FUNCTION_VOID( BindVideoCaptureStreamTextureNV, GLContext &, GLuint, GLuint, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndVideoCaptureNV, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetVideoCaptureivNV, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVideoCaptureStreamivNV, GLContext &, GLuint, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVideoCaptureStreamfvNV, GLContext &, GLuint, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVideoCaptureStreamdvNV, GLContext &, GLuint, GLuint, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_NUM( VideoCaptureNV, GLenum, GLContext &, GLuint, GLuint *, GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VideoCaptureStreamParameterivNV, GLContext &, GLuint, GLuint, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VideoCaptureStreamParameterfvNV, GLContext &, GLuint, GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VideoCaptureStreamParameterdvNV, GLContext &, GLuint, GLuint, GLenum, const GLdouble * ) \
\
    /* GL_OML_interlace */ \
\
    /* GL_OML_resample */ \
\
    /* GL_OML_subsample */ \
\
    /* GL_PGI_misc_hints */ \
    FGPP_GL_FUNCTION_VOID( HintPGI, GLContext &, GLenum, GLint ) \
\
    /* GL_PGI_vertex_hints */ \
\
    /* GL_REND_screen_coordinates */ \
\
    /* GL_S3_s3tc */ \
\
    /* GL_SGIS_detail_texture */ \
    FGPP_GL_FUNCTION_VOID( DetailTexFuncSGIS, GLContext &, GLenum, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetDetailTexFuncSGIS, GLContext &, GLenum, GLfloat * ) \
\
    /* GL_SGIS_fog_function */ \
    FGPP_GL_FUNCTION_VOID( FogFuncSGIS, GLContext &, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetFogFuncSGIS, GLContext &, GLfloat * ) \
\
    /* GL_SGIS_generate_mipmap */ \
\
    /* GL_SGIS_multisample */ \
    FGPP_GL_FUNCTION_VOID( SampleMaskSGIS, GLContext &, GLclampf, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( SamplePatternSGIS, GLContext &, GLenum ) \
\
    /* GL_SGIS_pixel_texture */ \
    FGPP_GL_FUNCTION_VOID( PixelTexGenParameteriSGIS, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PixelTexGenParameterivSGIS, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( PixelTexGenParameterfSGIS, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PixelTexGenParameterfvSGIS, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelTexGenParameterivSGIS, GLContext &, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelTexGenParameterfvSGIS, GLContext &, GLenum, GLfloat * ) \
\
    /* GL_SGIS_point_line_texgen */ \
\
    /* GL_SGIS_point_parameters */ \
    FGPP_GL_FUNCTION_VOID( PointParameterfSGIS, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PointParameterfvSGIS, GLContext &, GLenum, const GLfloat * ) \
\
    /* GL_SGIS_sharpen_texture */ \
    FGPP_GL_FUNCTION_VOID( SharpenTexFuncSGIS, GLContext &, GLenum, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetSharpenTexFuncSGIS, GLContext &, GLenum, GLfloat * ) \
\
    /* GL_SGIS_texture4D */ \
    FGPP_GL_FUNCTION_VOID( TexImage4DSGIS, GLContext &, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexSubImage4DSGIS, GLContext &, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
\
    /* GL_SGIS_texture_border_clamp */ \
\
    /* GL_SGIS_texture_color_mask */ \
    FGPP_GL_FUNCTION_VOID( TextureColorMaskSGIS, GLContext &, GLboolean, GLboolean, GLboolean, GLboolean ) \
\
    /* GL_SGIS_texture_edge_clamp */ \
\
    /* GL_SGIS_texture_filter4 */ \
    FGPP_GL_FUNCTION_VOID( GetTexFilterFuncSGIS, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexFilterFuncSGIS, GLContext &, GLenum, GLenum, GLsizei, const GLfloat * ) \
\
    /* GL_SGIS_texture_lod */ \
\
    /* GL_SGIS_texture_select */ \
\
    /* GL_SGIX_async */ \
    FGPP_GL_FUNCTION_VOID( AsyncMarkerSGIX, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_NUM( FinishAsyncSGIX, GLint, GLContext &, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( PollAsyncSGIX, GLint, GLContext &, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( GenAsyncMarkersSGIX, GLuint, GLContext &, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DeleteAsyncMarkersSGIX, GLContext &, GLuint, GLsizei ) \
    FGPP_GL_FUNCTION_NUM( IsAsyncMarkerSGIX, GLboolean, GLContext &, GLuint ) \
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
    FGPP_GL_FUNCTION_VOID( FlushRasterSGIX, GLContext & ) \
\
    /* GL_SGIX_fog_offset */ \
\
    /* GL_SGIX_fragment_lighting */ \
    FGPP_GL_FUNCTION_VOID( FragmentColorMaterialSGIX, GLContext &, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightfSGIX, GLContext &, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightfvSGIX, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightiSGIX, GLContext &, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightivSGIX, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightModelfSGIX, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightModelfvSGIX, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightModeliSGIX, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightModelivSGIX, GLContext &, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( FragmentMaterialfSGIX, GLContext &, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( FragmentMaterialfvSGIX, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( FragmentMaterialiSGIX, GLContext &, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( FragmentMaterialivSGIX, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetFragmentLightfvSGIX, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetFragmentLightivSGIX, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetFragmentMaterialfvSGIX, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetFragmentMaterialivSGIX, GLContext &, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( LightEnviSGIX, GLContext &, GLenum, GLint ) \
\
    /* GL_SGIX_framezoom */ \
    FGPP_GL_FUNCTION_VOID( FrameZoomSGIX, GLContext &, GLint ) \
\
    /* GL_SGIX_igloo_interface */ \
    FGPP_GL_FUNCTION_VOID( IglooInterfaceSGIX, GLContext &, GLenum, const GLvoid * ) \
\
    /* GL_SGIX_instruments */ \
    FGPP_GL_FUNCTION_NUM( GetInstrumentsSGIX, GLint, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( InstrumentsBufferSGIX, GLContext &, GLsizei, GLint * ) \
    FGPP_GL_FUNCTION_NUM( PollInstrumentsSGIX, GLint, GLContext &, GLint * ) \
    FGPP_GL_FUNCTION_VOID( ReadInstrumentsSGIX, GLContext &, GLint ) \
    FGPP_GL_FUNCTION_VOID( StartInstrumentsSGIX, GLContext & ) \
    FGPP_GL_FUNCTION_VOID( StopInstrumentsSGIX, GLContext &, GLint ) \
\
    /* GL_SGIX_interlace */ \
\
    /* GL_SGIX_ir_instrument1 */ \
\
    /* GL_SGIX_list_priority */ \
    FGPP_GL_FUNCTION_VOID( GetListParameterfvSGIX, GLContext &, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetListParameterivSGIX, GLContext &, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( ListParameterfSGIX, GLContext &, GLuint, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ListParameterfvSGIX, GLContext &, GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ListParameteriSGIX, GLContext &, GLuint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( ListParameterivSGIX, GLContext &, GLuint, GLenum, const GLint * ) \
\
    /* GL_SGIX_pixel_texture */ \
    FGPP_GL_FUNCTION_VOID( PixelTexGenSGIX, GLContext &, GLenum ) \
\
    /* GL_SGIX_pixel_tiles */ \
\
    /* GL_SGIX_polynomial_ffd */ \
    FGPP_GL_FUNCTION_VOID( DeformationMap3dSGIX, GLContext &, GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( DeformationMap3fSGIX, GLContext &, GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( DeformSGIX, GLContext &, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( LoadIdentityDeformationMapSGIX, GLContext &, GLbitfield ) \
\
    /* GL_SGIX_reference_plane */ \
    FGPP_GL_FUNCTION_VOID( ReferencePlaneSGIX, GLContext &, const GLdouble * ) \
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
    FGPP_GL_FUNCTION_VOID( SpriteParameterfSGIX, GLContext &, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( SpriteParameterfvSGIX, GLContext &, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( SpriteParameteriSGIX, GLContext &, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( SpriteParameterivSGIX, GLContext &, GLenum, const GLint * ) \
\
    /* GL_SGIX_subsample */ \
\
    /* GL_SGIX_tag_sample_buffer */ \
    FGPP_GL_FUNCTION_VOID( TagSampleBufferSGIX, GLContext & ) \
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
    FGPP_GL_FUNCTION_VOID( ColorTableSGI, GLContext &, GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ColorTableParameterfvSGI, GLContext &, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ColorTableParameterivSGI, GLContext &, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( CopyColorTableSGI, GLContext &, GLenum, GLenum, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableSGI, GLContext &, GLenum, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableParameterfvSGI, GLContext &, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableParameterivSGI, GLContext &, GLenum, GLenum, GLint * ) \
\
    /* GL_SGI_texture_color_table */ \
\
    /* GL_SUNX_constant_data */ \
    FGPP_GL_FUNCTION_VOID( FinishTextureSUNX, GLContext & ) \
\
    /* GL_SUN_convolution_border_modes */ \
\
    /* GL_SUN_global_alpha */ \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactorbSUN, GLContext &, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactorsSUN, GLContext &, GLshort ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactoriSUN, GLContext &, GLint ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactorfSUN, GLContext &, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactordSUN, GLContext &, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactorubSUN, GLContext &, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactorusSUN, GLContext &, GLushort ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactoruiSUN, GLContext &, GLuint ) \
\
    /* GL_SUN_mesh_array */ \
    FGPP_GL_FUNCTION_VOID( DrawMeshArraysSUN, GLContext &, GLenum, GLint, GLsizei, GLsizei ) \
\
    /* GL_SUN_slice_accum */ \
\
    /* GL_SUN_triangle_list */ \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiSUN, GLContext &, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeusSUN, GLContext &, GLushort ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeubSUN, GLContext &, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuivSUN, GLContext &, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeusvSUN, GLContext &, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeubvSUN, GLContext &, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodePointerSUN, GLContext &, GLenum, GLsizei, const GLvoid ** ) \
\
    /* GL_SUN_vertex */ \
    FGPP_GL_FUNCTION_VOID( Color4ubVertex2fSUN, GLContext &, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Color4ubVertex2fvSUN, GLContext &, const GLubyte *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Color4ubVertex3fSUN, GLContext &, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Color4ubVertex3fvSUN, GLContext &, const GLubyte *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Color3fVertex3fSUN, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Color3fVertex3fvSUN, GLContext &, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Normal3fVertex3fSUN, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Normal3fVertex3fvSUN, GLContext &, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Color4fNormal3fVertex3fSUN, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Color4fNormal3fVertex3fvSUN, GLContext &, const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fVertex3fSUN, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fVertex3fvSUN, GLContext &, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4fVertex4fSUN, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4fVertex4fvSUN, GLContext &, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fColor4ubVertex3fSUN, GLContext &, GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fColor4ubVertex3fvSUN, GLContext &, const GLfloat *, const GLubyte *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fColor3fVertex3fSUN, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fColor3fVertex3fvSUN, GLContext &, const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fNormal3fVertex3fSUN, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fNormal3fVertex3fvSUN, GLContext &, const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fColor4fNormal3fVertex3fSUN, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fColor4fNormal3fVertex3fvSUN, GLContext &, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4fColor4fNormal3fVertex4fSUN, GLContext &, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4fColor4fNormal3fVertex4fvSUN, GLContext &, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiVertex3fSUN, GLContext &, GLuint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiVertex3fvSUN, GLContext &, const GLuint *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiColor4ubVertex3fSUN, GLContext &, GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiColor4ubVertex3fvSUN, GLContext &, const GLuint *, const GLubyte *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiColor3fVertex3fSUN, GLContext &, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiColor3fVertex3fvSUN, GLContext &, const GLuint *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiNormal3fVertex3fSUN, GLContext &, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiNormal3fVertex3fvSUN, GLContext &, const GLuint *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiColor4fNormal3fVertex3fSUN, GLContext &, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiColor4fNormal3fVertex3fvSUN, GLContext &, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fVertex3fSUN, GLContext &, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fVertex3fvSUN, GLContext &, const GLuint *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, GLContext &, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, GLContext &, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, GLContext &, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, GLContext &, const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat * ) \
\
    /* GL_WIN_phong_shading */ \
\
    /* GL_WIN_specular_fog */ \

#define GL_DECLARE_FUNCTION( _name, _returnType, ... ) \
    FGPPEXPORT _returnType gl##_name( __VA_ARGS__ );
#define FGPP_GL_FUNCTION_NUM( _name, _returnType, ... ) \
    GL_DECLARE_FUNCTION( _name, _returnType, __VA_ARGS__ )
#define FGPP_GL_FUNCTION_PTR( _name, _returnType, ... ) \
    GL_DECLARE_FUNCTION( _name, _returnType, __VA_ARGS__ )
#define FGPP_GL_FUNCTION_VOID( _name, ... ) \
    GL_DECLARE_FUNCTION( _name, void, __VA_ARGS__ )
namespace fg {
    FGPP_GL_FUNCTIONS
}
#undef  FGPP_GL_FUNCTION_VOID
#undef  FGPP_GL_FUNCTION_PTR
#undef  FGPP_GL_FUNCTION_NUM
#undef  GL_DECLARE_FUNCTION

#endif  // FGPP_GL_FUNCTIONS_H
