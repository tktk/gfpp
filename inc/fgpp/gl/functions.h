#ifndef FGPP_GL_FUNCTIONS_H
#define FGPP_GL_FUNCTIONS_H

#include "fgpp/gl/types.h"

#define FGPP_GL_FUNCTIONS \
    /* GL_VERSION_1_0 */ \
    FGPP_GL_FUNCTION_NUM( GetError, GLenum ) \
    FGPP_GL_FUNCTION_VOID( Begin, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( End ) \
    FGPP_GL_FUNCTION_VOID( EdgeFlag, , GLboolean ) \
    FGPP_GL_FUNCTION_VOID( EdgeFlagv, , const GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( Vertex2s, , GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Vertex2i, , GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Vertex2f, , GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Vertex2d, , GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Vertex3s, , GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Vertex3i, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Vertex3f, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Vertex3d, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Vertex4s, , GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Vertex4i, , GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Vertex4f, , GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Vertex4d, , GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Vertex2sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Vertex2iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Vertex2fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Vertex2dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1s, , GLshort ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1i, , GLint ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1f, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1d, , GLdouble ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2s, , GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2i, , GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2f, , GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2d, , GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3s, , GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3i, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3f, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3d, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4s, , GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4i, , GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4f, , GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4d, , GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Normal3b, , GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Normal3s, , GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Normal3i, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Normal3f, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Normal3d, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Normal3bv, , const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Normal3sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Normal3iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Normal3fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Normal3dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Color3b, , GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Color3s, , GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Color3i, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Color3f, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Color3d, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Color3ub, , GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( Color3us, , GLushort, GLushort, GLushort ) \
    FGPP_GL_FUNCTION_VOID( Color3ui, , GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Color4b, , GLbyte, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Color4s, , GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Color4i, , GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Color4f, , GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Color4d, , GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Color4ub, , GLubyte, GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( Color4us, , GLushort, GLushort, GLushort, GLushort ) \
    FGPP_GL_FUNCTION_VOID( Color4ui, , GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Color3bv, , const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Color3sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Color3iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Color3fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Color3dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Color3ubv, , const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( Color3usv, , const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( Color3uiv, , const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Color4bv, , const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Color4sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Color4iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Color4fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Color4dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Color4ubv, , const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( Color4usv, , const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( Color4uiv, , const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Indexs, , GLshort ) \
    FGPP_GL_FUNCTION_VOID( Indexi, , GLint ) \
    FGPP_GL_FUNCTION_VOID( Indexf, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Indexd, , GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Indexsv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Indexiv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Indexfv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Indexdv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Rects, , GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Recti, , GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Rectf, , GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Rectd, , GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Rectsv, , const GLshort *, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Rectiv, , const GLint *, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Rectfv, , const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Rectdv, , const GLdouble *, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( DepthRange, , GLclampd, GLclampd ) \
    FGPP_GL_FUNCTION_VOID( Viewport, , GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MatrixMode, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( LoadMatrixf, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( LoadMatrixd, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultMatrixf, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultMatrixd, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( LoadIdentity ) \
    FGPP_GL_FUNCTION_VOID( Rotatef, , GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Rotated, , GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Translatef, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Translated, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Scalef, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Scaled, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Frustum, , GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Ortho, , GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( PushMatrix ) \
    FGPP_GL_FUNCTION_VOID( PopMatrix ) \
    FGPP_GL_FUNCTION_VOID( Enable, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( Disable, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( TexGeni, , GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexGenf, , GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexGend, , GLenum, GLenum, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( TexGeniv, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexGenfv, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexGendv, , GLenum, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ClipPlane, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2s, , GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2i, , GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2f, , GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2d, , GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3s, , GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3i, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3f, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3d, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4s, , GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4i, , GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4f, , GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4d, , GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( FrontFace, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( Materiali, , GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( Materialf, , GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Materialiv, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Materialfv, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Lighti, , GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( Lightf, , GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Lightiv, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Lightfv, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( LightModeli, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( LightModelf, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( LightModeliv, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( LightModelfv, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ColorMaterial, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( ShadeModel, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( PointSize, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( LineWidth, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( LineStipple, , GLint, GLushort ) \
    FGPP_GL_FUNCTION_VOID( CullFace, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( PolygonStipple, , const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( PolygonMode, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( PixelStorei, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PixelStoref, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PixelTransferi, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PixelTransferf, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PixelMapuiv, , GLenum, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( PixelMapusv, , GLenum, GLsizei, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( PixelMapfv, , GLenum, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( DrawPixels, , GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PixelZoom, , GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Bitmap, , GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( TexImage1D, , GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexImage2D, , GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexParameteri, , GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexParameterf, , GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexParameteriv, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexParameterfv, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexEnvi, , GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexEnvf, , GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexEnviv, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexEnvfv, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Fogi, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( Fogf, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Fogiv, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Fogfv, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Scissor, , GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( AlphaFunc, , GLenum, GLclampf ) \
    FGPP_GL_FUNCTION_VOID( StencilFunc, , GLenum, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( StencilOp, , GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DepthFunc, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendFunc, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( LogicOp, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( DrawBuffer, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( IndexMask, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( ColorMask, , GLboolean, GLboolean, GLboolean, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( DepthMask, , GLboolean ) \
    FGPP_GL_FUNCTION_VOID( StencilMask, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( Clear, , GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( ClearColor, , GLclampf, GLclampf, GLclampf, GLclampf ) \
    FGPP_GL_FUNCTION_VOID( ClearIndex, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ClearDepth, , GLclampd ) \
    FGPP_GL_FUNCTION_VOID( ClearStencil, , GLint ) \
    FGPP_GL_FUNCTION_VOID( ClearAccum, , GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Accum, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReadPixels, , GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ReadBuffer, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( CopyPixels, , GLint, GLint, GLsizei, GLsizei, GLenum ) \
    FGPP_GL_FUNCTION_VOID( Map1f, , GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Map1d, , GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Map2f, , GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Map2d, , GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord1f, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord1d, , GLdouble ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord2f, , GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord2d, , GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord1fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord1dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord2fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord2dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MapGrid1f, , GLint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MapGrid1d, , GLint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MapGrid2f, , GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MapGrid2d, , GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( EvalMesh1, , GLenum, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( EvalMesh2, , GLenum, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( EvalPoint1, , GLint ) \
    FGPP_GL_FUNCTION_VOID( EvalPoint2, , GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( InitNames ) \
    FGPP_GL_FUNCTION_VOID( PopName ) \
    FGPP_GL_FUNCTION_VOID( PushName, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( LoadName, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( RenderMode, GLint, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( SelectBuffer, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( FeedbackBuffer, , GLsizei, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PassThrough, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( NewList, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( EndList ) \
    FGPP_GL_FUNCTION_VOID( CallList, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( CallLists, , GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ListBase, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( GenLists, GLuint, , GLsizei ) \
    FGPP_GL_FUNCTION_NUM( IsList, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteLists, , GLuint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( Flush ) \
    FGPP_GL_FUNCTION_VOID( Finish ) \
    FGPP_GL_FUNCTION_VOID( Hint, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetBooleanv, , GLenum, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( GetIntegerv, , GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetFloatv, , GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetDoublev, , GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_NUM( IsEnabled, GLboolean, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetClipPlane, , GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetLightiv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetLightfv, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMaterialiv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMaterialfv, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTexEnviv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexEnvfv, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTexGeniv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexGenfv, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameteriv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterfv, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTexLevelParameteriv, , GLenum, GLint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexLevelParameterfv, , GLenum, GLint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelMapuiv, , GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelMapusv, , GLenum, GLushort * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelMapfv, , GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMapiv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMapfv, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMapdv, , GLenum, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetTexImage, , GLenum, GLint, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetPolygonStipple, , GLubyte * ) \
    FGPP_GL_FUNCTION_PTR( GetString, const GLubyte *, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( PushAttrib, , GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( PopAttrib ) \
\
    /* GL_VERSION_1_1 */ \
    FGPP_GL_FUNCTION_VOID( Indexub, , GLubyte ) \
    FGPP_GL_FUNCTION_VOID( Indexubv, , const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( EdgeFlagPointer, , GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexCoordPointer, , GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ColorPointer, , GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( IndexPointer, , GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( NormalPointer, , GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VertexPointer, , GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( EnableClientState, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( DisableClientState, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( ArrayElement, , GLint ) \
    FGPP_GL_FUNCTION_VOID( DrawArrays, , GLenum, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawElements, , GLenum, GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( InterleavedArrays, , GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PolygonOffset, , GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( CopyTexImage1D, , GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyTexImage2D, , GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexSubImage1D, , GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexSubImage2D, , GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyTexSubImage1D, , GLenum, GLint, GLint, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyTexSubImage2D, , GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( BindTexture, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteTextures, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenTextures, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( AreTexturesResident, GLboolean, , GLsizei, const GLuint *, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( PrioritizeTextures, , GLsizei, const GLuint *, const GLclampf * ) \
    FGPP_GL_FUNCTION_NUM( IsTexture, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetPointerv, , GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( PushClientAttrib, , GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( PopClientAttrib ) \
\
    /* GL_VERSION_1_2 */ \
    FGPP_GL_FUNCTION_VOID( DrawRangeElements, , GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexImage3D, , GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexSubImage3D, , GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyTexSubImage3D, , GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
\
    /* GL_VERSION_1_3 */ \
    FGPP_GL_FUNCTION_VOID( ActiveTexture, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( SampleCoverage, , GLfloat, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexImage3D, , GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexImage2D, , GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexImage1D, , GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexSubImage3D, , GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexSubImage2D, , GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexSubImage1D, , GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetCompressedTexImage, , GLenum, GLint, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ClientActiveTexture, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1d, , GLenum, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1dv, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1f, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1fv, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1i, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1iv, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1s, , GLenum, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1sv, , GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2d, , GLenum, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2dv, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2f, , GLenum, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2fv, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2i, , GLenum, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2iv, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2s, , GLenum, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2sv, , GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3d, , GLenum, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3dv, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3f, , GLenum, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3fv, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3i, , GLenum, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3iv, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3s, , GLenum, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3sv, , GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4d, , GLenum, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4dv, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4f, , GLenum, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4fv, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4i, , GLenum, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4iv, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4s, , GLenum, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4sv, , GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( LoadTransposeMatrixf, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( LoadTransposeMatrixd, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultTransposeMatrixf, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultTransposeMatrixd, , const GLdouble * ) \
\
    /* GL_VERSION_1_4 */ \
    FGPP_GL_FUNCTION_VOID( BlendFuncSeparate, , GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawArrays, , GLenum, const GLint *, const GLsizei *, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElements, , GLenum, const GLsizei *, GLenum, const GLvoid *const*, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( PointParameterf, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PointParameterfv, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PointParameteri, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PointParameteriv, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( FogCoordf, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( FogCoordfv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( FogCoordd, , GLdouble ) \
    FGPP_GL_FUNCTION_VOID( FogCoorddv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( FogCoordPointer, , GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3b, , GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3bv, , const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3d, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3f, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3i, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3s, , GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3ub, , GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3ubv, , const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3ui, , GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3uiv, , const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3us, , GLushort, GLushort, GLushort ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3usv, , const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColorPointer, , GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2d, , GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2f, , GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2i, , GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2s, , GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3d, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3dv, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3f, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3fv, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3i, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3iv, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3s, , GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3sv, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( BlendColor, , GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( BlendEquation, , GLenum ) \
\
    /* GL_VERSION_1_5 */ \
    FGPP_GL_FUNCTION_VOID( GenQueries, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeleteQueries, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsQuery, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( BeginQuery, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndQuery, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetQueryiv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjectiv, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjectuiv, , GLuint, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindBuffer, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteBuffers, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenBuffers, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsBuffer, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( BufferData, , GLenum, GLsizeiptr, const GLvoid *, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BufferSubData, , GLenum, GLintptr, GLsizeiptr, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetBufferSubData, , GLenum, GLintptr, GLsizeiptr, GLvoid * ) \
    FGPP_GL_FUNCTION_PTR( MapBuffer, void *, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_NUM( UnmapBuffer, GLboolean, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetBufferParameteriv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetBufferPointerv, , GLenum, GLenum, GLvoid ** ) \
\
    /* GL_VERSION_2_0 */ \
    FGPP_GL_FUNCTION_VOID( BlendEquationSeparate, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DrawBuffers, , GLsizei, const GLenum * ) \
    FGPP_GL_FUNCTION_VOID( StencilOpSeparate, , GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( StencilFuncSeparate, , GLenum, GLenum, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( StencilMaskSeparate, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( AttachShader, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindAttribLocation, , GLuint, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( CompileShader, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( CreateProgram, GLuint ) \
    FGPP_GL_FUNCTION_NUM( CreateShader, GLuint, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( DeleteProgram, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteShader, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( DetachShader, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableVertexAttribArray, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( EnableVertexAttribArray, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetActiveAttrib, , GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveUniform, , GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetAttachedShaders, , GLuint, GLsizei, GLsizei *, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( GetAttribLocation, GLint, , GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramiv, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramInfoLog, , GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetShaderiv, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetShaderInfoLog, , GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetShaderSource, , GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetUniformLocation, GLint, , GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformfv, , GLuint, GLint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformiv, , GLuint, GLint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribdv, , GLuint, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribfv, , GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribiv, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribPointerv, , GLuint, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_NUM( IsProgram, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( IsShader, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( LinkProgram, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( ShaderSource, , GLuint, GLsizei, const GLchar *const*, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( UseProgram, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform1f, , GLint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform2f, , GLint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform3f, , GLint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform4f, , GLint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform1i, , GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform2i, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform3i, , GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform4i, , GLint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform1fv, , GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2fv, , GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3fv, , GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4fv, , GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform1iv, , GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2iv, , GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3iv, , GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4iv, , GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2fv, , GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3fv, , GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4fv, , GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ValidateProgram, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1d, , GLuint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1dv, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1f, , GLuint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1fv, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1s, , GLuint, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1sv, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2d, , GLuint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2dv, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2f, , GLuint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2fv, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2s, , GLuint, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2sv, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3d, , GLuint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3dv, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3f, , GLuint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3fv, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3s, , GLuint, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3sv, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Nbv, , GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Niv, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Nsv, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Nub, , GLuint, GLubyte, GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Nubv, , GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Nuiv, , GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4Nusv, , GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4bv, , GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4d, , GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4dv, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4f, , GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4fv, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4iv, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4s, , GLuint, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4sv, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4ubv, , GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4uiv, , GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4usv, , GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribPointer, , GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid * ) \
\
    /* GL_VERSION_2_1 */ \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2x3fv, , GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3x2fv, , GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2x4fv, , GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4x2fv, , GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3x4fv, , GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4x3fv, , GLint, GLsizei, GLboolean, const GLfloat * ) \
\
    /* GL_VERSION_3_0 */ \
    FGPP_GL_FUNCTION_VOID( ColorMaski, , GLuint, GLboolean, GLboolean, GLboolean, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( GetBooleani_v, , GLenum, GLuint, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( GetIntegeri_v, , GLenum, GLuint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( Enablei, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Disablei, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_NUM( IsEnabledi, GLboolean, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BeginTransformFeedback, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( EndTransformFeedback ) \
    FGPP_GL_FUNCTION_VOID( BindBufferRange, , GLenum, GLuint, GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( BindBufferBase, , GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TransformFeedbackVaryings, , GLuint, GLsizei, const GLchar *const*, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetTransformFeedbackVarying, , GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( ClampColor, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BeginConditionalRender, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( EndConditionalRender ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribIPointer, , GLuint, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribIiv, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribIuiv, , GLuint, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1i, , GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2i, , GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3i, , GLuint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4i, , GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1ui, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2ui, , GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3ui, , GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4ui, , GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1iv, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2iv, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3iv, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4iv, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1uiv, , GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2uiv, , GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3uiv, , GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4uiv, , GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4bv, , GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4sv, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4ubv, , GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4usv, , GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformuiv, , GLuint, GLint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindFragDataLocation, , GLuint, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetFragDataLocation, GLint, , GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( Uniform1ui, , GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform2ui, , GLint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform3ui, , GLint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform4ui, , GLint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform1uiv, , GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2uiv, , GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3uiv, , GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4uiv, , GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( TexParameterIiv, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexParameterIuiv, , GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterIiv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterIuiv, , GLenum, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ClearBufferiv, , GLenum, GLint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ClearBufferuiv, , GLenum, GLint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ClearBufferfv, , GLenum, GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ClearBufferfi, , GLenum, GLint, GLfloat, GLint ) \
    FGPP_GL_FUNCTION_PTR( GetStringi, const GLubyte *, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_NUM( IsRenderbuffer, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindRenderbuffer, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteRenderbuffers, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenRenderbuffers, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( RenderbufferStorage, , GLenum, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetRenderbufferParameteriv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_NUM( IsFramebuffer, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindFramebuffer, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteFramebuffers, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenFramebuffers, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( CheckFramebufferStatus, GLenum, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture1D, , GLenum, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture2D, , GLenum, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture3D, , GLenum, GLenum, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferRenderbuffer, , GLenum, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetFramebufferAttachmentParameteriv, , GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GenerateMipmap, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlitFramebuffer, , GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum ) \
    FGPP_GL_FUNCTION_VOID( RenderbufferStorageMultisample, , GLenum, GLsizei, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureLayer, , GLenum, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_PTR( MapBufferRange, void *, , GLenum, GLintptr, GLsizeiptr, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( FlushMappedBufferRange, , GLenum, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( BindVertexArray, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteVertexArrays, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenVertexArrays, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsVertexArray, GLboolean, , GLuint ) \
\
    /* GL_VERSION_3_1 */ \
    FGPP_GL_FUNCTION_VOID( DrawArraysInstanced, , GLenum, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsInstanced, , GLenum, GLsizei, GLenum, const GLvoid *, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TexBuffer, , GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( PrimitiveRestartIndex, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( CopyBufferSubData, , GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( GetUniformIndices, , GLuint, GLsizei, const GLchar *const*, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveUniformsiv, , GLuint, GLsizei, const GLuint *, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveUniformName, , GLuint, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetUniformBlockIndex, GLuint, , GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveUniformBlockiv, , GLuint, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveUniformBlockName, , GLuint, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( UniformBlockBinding, , GLuint, GLuint, GLuint ) \
\
    /* GL_VERSION_3_2 */ \
    FGPP_GL_FUNCTION_VOID( DrawElementsBaseVertex, , GLenum, GLsizei, GLenum, const GLvoid *, GLint ) \
    FGPP_GL_FUNCTION_VOID( DrawRangeElementsBaseVertex, , GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *, GLint ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsInstancedBaseVertex, , GLenum, GLsizei, GLenum, const GLvoid *, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementsBaseVertex, , GLenum, const GLsizei *, GLenum, const GLvoid *const*, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProvokingVertex, , GLenum ) \
    FGPP_GL_FUNCTION_PTR( FenceSync, GLsync, , GLenum, GLbitfield ) \
    FGPP_GL_FUNCTION_NUM( IsSync, GLboolean, , GLsync ) \
    FGPP_GL_FUNCTION_VOID( DeleteSync, , GLsync ) \
    FGPP_GL_FUNCTION_NUM( ClientWaitSync, GLenum, , GLsync, GLbitfield, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( WaitSync, , GLsync, GLbitfield, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( GetInteger64v, , GLenum, GLint64 * ) \
    FGPP_GL_FUNCTION_VOID( GetSynciv, , GLsync, GLenum, GLsizei, GLsizei *, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetInteger64i_v, , GLenum, GLuint, GLint64 * ) \
    FGPP_GL_FUNCTION_VOID( GetBufferParameteri64v, , GLenum, GLenum, GLint64 * ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture, , GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexImage2DMultisample, , GLenum, GLsizei, GLint, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TexImage3DMultisample, , GLenum, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( GetMultisamplefv, , GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( SampleMaski, , GLuint, GLbitfield ) \
\
    /* GL_VERSION_3_3 */ \
    FGPP_GL_FUNCTION_VOID( BindFragDataLocationIndexed, , GLuint, GLuint, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetFragDataIndex, GLint, , GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GenSamplers, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeleteSamplers, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsSampler, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindSampler, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SamplerParameteri, , GLuint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( SamplerParameteriv, , GLuint, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( SamplerParameterf, , GLuint, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( SamplerParameterfv, , GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( SamplerParameterIiv, , GLuint, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( SamplerParameterIuiv, , GLuint, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetSamplerParameteriv, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetSamplerParameterIiv, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetSamplerParameterfv, , GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetSamplerParameterIuiv, , GLuint, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( QueryCounter, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjecti64v, , GLuint, GLenum, GLint64 * ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjectui64v, , GLuint, GLenum, GLuint64 * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribDivisor, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP1ui, , GLuint, GLenum, GLboolean, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP1uiv, , GLuint, GLenum, GLboolean, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP2ui, , GLuint, GLenum, GLboolean, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP2uiv, , GLuint, GLenum, GLboolean, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP3ui, , GLuint, GLenum, GLboolean, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP3uiv, , GLuint, GLenum, GLboolean, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP4ui, , GLuint, GLenum, GLboolean, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribP4uiv, , GLuint, GLenum, GLboolean, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexP2ui, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexP2uiv, , GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexP3ui, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexP3uiv, , GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexP4ui, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexP4uiv, , GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP1ui, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP1uiv, , GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP2ui, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP2uiv, , GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP3ui, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP3uiv, , GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP4ui, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TexCoordP4uiv, , GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP1ui, , GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP1uiv, , GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP2ui, , GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP2uiv, , GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP3ui, , GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP3uiv, , GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP4ui, , GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordP4uiv, , GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( NormalP3ui, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( NormalP3uiv, , GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ColorP3ui, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ColorP3uiv, , GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ColorP4ui, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ColorP4uiv, , GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColorP3ui, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColorP3uiv, , GLenum, const GLuint * ) \
\
    /* GL_VERSION_4_0 */ \
    FGPP_GL_FUNCTION_VOID( MinSampleShading, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( BlendEquationi, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendEquationSeparatei, , GLuint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendFunci, , GLuint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendFuncSeparatei, , GLuint, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DrawArraysIndirect, , GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsIndirect, , GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( Uniform1d, , GLint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Uniform2d, , GLint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Uniform3d, , GLint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Uniform4d, , GLint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Uniform1dv, , GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2dv, , GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3dv, , GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4dv, , GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2dv, , GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3dv, , GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4dv, , GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2x3dv, , GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2x4dv, , GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3x2dv, , GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3x4dv, , GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4x2dv, , GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4x3dv, , GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformdv, , GLuint, GLint, GLdouble * ) \
    FGPP_GL_FUNCTION_NUM( GetSubroutineUniformLocation, GLint, , GLuint, GLenum, const GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetSubroutineIndex, GLuint, , GLuint, GLenum, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveSubroutineUniformiv, , GLuint, GLenum, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveSubroutineUniformName, , GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveSubroutineName, , GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( UniformSubroutinesuiv, , GLenum, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformSubroutineuiv, , GLenum, GLint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramStageiv, , GLuint, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( PatchParameteri, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PatchParameterfv, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( BindTransformFeedback, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteTransformFeedbacks, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenTransformFeedbacks, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsTransformFeedback, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( PauseTransformFeedback ) \
    FGPP_GL_FUNCTION_VOID( ResumeTransformFeedback ) \
    FGPP_GL_FUNCTION_VOID( DrawTransformFeedback, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DrawTransformFeedbackStream, , GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BeginQueryIndexed, , GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndQueryIndexed, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetQueryIndexediv, , GLenum, GLuint, GLenum, GLint * ) \
\
    /* GL_VERSION_4_1 */ \
    FGPP_GL_FUNCTION_VOID( ReleaseShaderCompiler ) \
    FGPP_GL_FUNCTION_VOID( ShaderBinary, , GLsizei, const GLuint *, GLenum, const GLvoid *, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetShaderPrecisionFormat, , GLenum, GLenum, GLint *, GLint * ) \
    FGPP_GL_FUNCTION_VOID( DepthRangef, , GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ClearDepthf, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( GetProgramBinary, , GLuint, GLsizei, GLsizei *, GLenum *, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ProgramBinary, , GLuint, GLenum, const GLvoid *, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameteri, , GLuint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( UseProgramStages, , GLuint, GLbitfield, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ActiveShaderProgram, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_NUM( CreateShaderProgramv, GLuint, , GLenum, GLsizei, const GLchar *const* ) \
    FGPP_GL_FUNCTION_VOID( BindProgramPipeline, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteProgramPipelines, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenProgramPipelines, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsProgramPipeline, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetProgramPipelineiv, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1i, , GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1iv, , GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1f, , GLuint, GLint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1fv, , GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1d, , GLuint, GLint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1dv, , GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1ui, , GLuint, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1uiv, , GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2i, , GLuint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2iv, , GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2f, , GLuint, GLint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2fv, , GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2d, , GLuint, GLint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2dv, , GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2ui, , GLuint, GLint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2uiv, , GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3i, , GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3iv, , GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3f, , GLuint, GLint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3fv, , GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3d, , GLuint, GLint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3dv, , GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3ui, , GLuint, GLint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3uiv, , GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4i, , GLuint, GLint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4iv, , GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4f, , GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4fv, , GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4d, , GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4dv, , GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4ui, , GLuint, GLint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4uiv, , GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2fv, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3fv, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4fv, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2dv, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3dv, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4dv, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x3fv, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x2fv, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x4fv, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x2fv, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x4fv, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x3fv, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x3dv, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x2dv, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x4dv, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x2dv, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x4dv, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x3dv, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ValidateProgramPipeline, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetProgramPipelineInfoLog, , GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1d, , GLuint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2d, , GLuint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3d, , GLuint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4d, , GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1dv, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2dv, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3dv, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4dv, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribLPointer, , GLuint, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribLdv, , GLuint, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ViewportArrayv, , GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ViewportIndexedf, , GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ViewportIndexedfv, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ScissorArrayv, , GLuint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ScissorIndexed, , GLuint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( ScissorIndexedv, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( DepthRangeArrayv, , GLuint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( DepthRangeIndexed, , GLuint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( GetFloati_v, , GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetDoublei_v, , GLenum, GLuint, GLdouble * ) \
\
    /* GL_VERSION_4_2 */ \
    FGPP_GL_FUNCTION_VOID( DrawArraysInstancedBaseInstance, , GLenum, GLint, GLsizei, GLsizei, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsInstancedBaseInstance, , GLenum, GLsizei, GLenum, const void *, GLsizei, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsInstancedBaseVertexBaseInstance, , GLenum, GLsizei, GLenum, const void *, GLsizei, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetInternalformativ, , GLenum, GLenum, GLenum, GLsizei, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveAtomicCounterBufferiv, , GLuint, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( BindImageTexture, , GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MemoryBarrier, , GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( TexStorage1D, , GLenum, GLsizei, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TexStorage2D, , GLenum, GLsizei, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TexStorage3D, , GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawTransformFeedbackInstanced, , GLenum, GLuint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawTransformFeedbackStreamInstanced, , GLenum, GLuint, GLuint, GLsizei ) \
\
    /* GL_VERSION_4_3 */ \
    FGPP_GL_FUNCTION_VOID( ClearBufferData, , GLenum, GLenum, GLenum, GLenum, const void * ) \
    FGPP_GL_FUNCTION_VOID( ClearBufferSubData, , GLenum, GLenum, GLintptr, GLsizeiptr, GLenum, GLenum, const void * ) \
    FGPP_GL_FUNCTION_VOID( DispatchCompute, , GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DispatchComputeIndirect, , GLintptr ) \
    FGPP_GL_FUNCTION_VOID( CopyImageSubData, , GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( FramebufferParameteri, , GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( GetFramebufferParameteriv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetInternalformati64v, , GLenum, GLenum, GLenum, GLsizei, GLint64 * ) \
    FGPP_GL_FUNCTION_VOID( InvalidateTexSubImage, , GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( InvalidateTexImage, , GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( InvalidateBufferSubData, , GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( InvalidateBufferData, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( InvalidateFramebuffer, , GLenum, GLsizei, const GLenum * ) \
    FGPP_GL_FUNCTION_VOID( InvalidateSubFramebuffer, , GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawArraysIndirect, , GLenum, const void *, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementsIndirect, , GLenum, GLenum, const void *, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetProgramInterfaceiv, , GLuint, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_NUM( GetProgramResourceIndex, GLuint, , GLuint, GLenum, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramResourceName, , GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramResourceiv, , GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLint * ) \
    FGPP_GL_FUNCTION_NUM( GetProgramResourceLocation, GLint, , GLuint, GLenum, const GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetProgramResourceLocationIndex, GLint, , GLuint, GLenum, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( ShaderStorageBlockBinding, , GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TexBufferRange, , GLenum, GLenum, GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( TexStorage2DMultisample, , GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TexStorage3DMultisample, , GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TextureView, , GLuint, GLenum, GLuint, GLenum, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindVertexBuffer, , GLuint, GLuint, GLintptr, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribFormat, , GLuint, GLint, GLenum, GLboolean, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribIFormat, , GLuint, GLint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribLFormat, , GLuint, GLint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribBinding, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexBindingDivisor, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageControl, , GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageInsert, , GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageCallback, , GLDebugProc, const void * ) \
    FGPP_GL_FUNCTION_NUM( GetDebugMessageLog, GLuint, , GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( PushDebugGroup, , GLenum, GLuint, GLsizei, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( PopDebugGroup ) \
    FGPP_GL_FUNCTION_VOID( ObjectLabel, , GLenum, GLuint, GLsizei, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetObjectLabel, , GLenum, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( ObjectPtrLabel, , const void *, GLsizei, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetObjectPtrLabel, , const void *, GLsizei, GLsizei *, GLchar * ) \
\
    /* GL_VERSION_4_4 */ \
    FGPP_GL_FUNCTION_VOID( BufferStorage, , GLenum, GLsizeiptr, const void *, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( ClearTexImage, , GLuint, GLint, GLenum, GLenum, const void * ) \
    FGPP_GL_FUNCTION_VOID( ClearTexSubImage, , GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void * ) \
    FGPP_GL_FUNCTION_VOID( BindBuffersBase, , GLenum, GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindBuffersRange, , GLenum, GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizeiptr * ) \
    FGPP_GL_FUNCTION_VOID( BindTextures, , GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindSamplers, , GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindImageTextures, , GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindVertexBuffers, , GLuint, GLsizei, const GLuint *, const GLintptr *, const GLsizei * ) \
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
    FGPP_GL_FUNCTION_NUM( GetTextureHandleARB, GLuint64, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( GetTextureSamplerHandleARB, GLuint64, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MakeTextureHandleResidentARB, , GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( MakeTextureHandleNonResidentARB, , GLuint64 ) \
    FGPP_GL_FUNCTION_NUM( GetImageHandleARB, GLuint64, , GLuint, GLint, GLboolean, GLint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeImageHandleResidentARB, , GLuint64, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeImageHandleNonResidentARB, , GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( UniformHandleui64ARB, , GLint, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( UniformHandleui64vARB, , GLint, GLsizei, const GLuint64 * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformHandleui64ARB, , GLuint, GLint, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformHandleui64vARB, , GLuint, GLint, GLsizei, const GLuint64 * ) \
    FGPP_GL_FUNCTION_NUM( IsTextureHandleResidentARB, GLboolean, , GLuint64 ) \
    FGPP_GL_FUNCTION_NUM( IsImageHandleResidentARB, GLboolean, , GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1ui64ARB, , GLuint, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1ui64vARB, , GLuint, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribLui64vARB, , GLuint, GLenum, GLuint64EXT * ) \
\
    /* GL_ARB_blend_func_extended */ \
\
    /* GL_ARB_buffer_storage */ \
\
    /* GL_ARB_cl_event */ \
    FGPP_GL_FUNCTION_PTR( CreateSyncFromCLeventARB, GLsync, , GLclcontext, GLclevent, GLbitfield ) \
\
    /* GL_ARB_clear_buffer_object */ \
\
    /* GL_ARB_clear_texture */ \
\
    /* GL_ARB_color_buffer_float */ \
    FGPP_GL_FUNCTION_VOID( ClampColorARB, , GLenum, GLenum ) \
\
    /* GL_ARB_compatibility */ \
\
    /* GL_ARB_compressed_texture_pixel_storage */ \
\
    /* GL_ARB_compute_shader */ \
\
    /* GL_ARB_compute_variable_group_size */ \
    FGPP_GL_FUNCTION_VOID( DispatchComputeGroupSizeARB, , GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) \
\
    /* GL_ARB_conservative_depth */ \
\
    /* GL_ARB_copy_buffer */ \
\
    /* GL_ARB_copy_image */ \
\
    /* GL_ARB_debug_output */ \
    FGPP_GL_FUNCTION_VOID( DebugMessageControlARB, , GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageInsertARB, , GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageCallbackARB, , GLDebugProcARB, const void * ) \
    FGPP_GL_FUNCTION_NUM( GetDebugMessageLogARB, GLuint, , GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar * ) \
\
    /* GL_ARB_depth_buffer_float */ \
\
    /* GL_ARB_depth_clamp */ \
\
    /* GL_ARB_depth_texture */ \
\
    /* GL_ARB_draw_buffers */ \
    FGPP_GL_FUNCTION_VOID( DrawBuffersARB, , GLsizei, const GLenum * ) \
\
    /* GL_ARB_draw_buffers_blend */ \
    FGPP_GL_FUNCTION_VOID( BlendEquationiARB, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendEquationSeparateiARB, , GLuint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendFunciARB, , GLuint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendFuncSeparateiARB, , GLuint, GLenum, GLenum, GLenum, GLenum ) \
\
    /* GL_ARB_draw_elements_base_vertex */ \
\
    /* GL_ARB_draw_indirect */ \
\
    /* GL_ARB_draw_instanced */ \
    FGPP_GL_FUNCTION_VOID( DrawArraysInstancedARB, , GLenum, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsInstancedARB, , GLenum, GLsizei, GLenum, const GLvoid *, GLsizei ) \
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
    FGPP_GL_FUNCTION_VOID( ProgramStringARB, , GLenum, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( BindProgramARB, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteProgramsARB, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenProgramsARB, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameter4dARB, , GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameter4dvARB, , GLenum, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameter4fARB, , GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameter4fvARB, , GLenum, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameter4dARB, , GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameter4dvARB, , GLenum, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameter4fARB, , GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameter4fvARB, , GLenum, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramEnvParameterdvARB, , GLenum, GLuint, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramEnvParameterfvARB, , GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramLocalParameterdvARB, , GLenum, GLuint, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramLocalParameterfvARB, , GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramivARB, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramStringARB, , GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_NUM( IsProgramARB, GLboolean, , GLuint ) \
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
    FGPP_GL_FUNCTION_VOID( ProgramParameteriARB, , GLuint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureARB, , GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureLayerARB, , GLenum, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureFaceARB, , GLenum, GLenum, GLuint, GLint, GLenum ) \
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
    FGPP_GL_FUNCTION_VOID( ColorTable, , GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ColorTableParameterfv, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ColorTableParameteriv, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( CopyColorTable, , GLenum, GLenum, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetColorTable, , GLenum, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableParameterfv, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableParameteriv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( ColorSubTable, , GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyColorSubTable, , GLenum, GLsizei, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionFilter1D, , GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionFilter2D, , GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterf, , GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterfv, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameteri, , GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameteriv, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( CopyConvolutionFilter1D, , GLenum, GLenum, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyConvolutionFilter2D, , GLenum, GLenum, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionFilter, , GLenum, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionParameterfv, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionParameteriv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetSeparableFilter, , GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( SeparableFilter2D, , GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetHistogram, , GLenum, GLboolean, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetHistogramParameterfv, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetHistogramParameteriv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMinmax, , GLenum, GLboolean, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetMinmaxParameterfv, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMinmaxParameteriv, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( Histogram, , GLenum, GLsizei, GLenum, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( Minmax, , GLenum, GLenum, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( ResetHistogram, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( ResetMinmax, , GLenum ) \
\
    /* GL_ARB_indirect_parameters */ \
    FGPP_GL_FUNCTION_VOID( MultiDrawArraysIndirectCountARB, , GLenum, GLintptr, GLintptr, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementsIndirectCountARB, , GLenum, GLenum, GLintptr, GLintptr, GLsizei, GLsizei ) \
\
    /* GL_ARB_instanced_arrays */ \
    FGPP_GL_FUNCTION_VOID( VertexAttribDivisorARB, , GLuint, GLuint ) \
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
    FGPP_GL_FUNCTION_VOID( CurrentPaletteMatrixARB, , GLint ) \
    FGPP_GL_FUNCTION_VOID( MatrixIndexubvARB, , GLint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( MatrixIndexusvARB, , GLint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( MatrixIndexuivARB, , GLint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( MatrixIndexPointerARB, , GLint, GLenum, GLsizei, const GLvoid * ) \
\
    /* GL_ARB_multi_bind */ \
\
    /* GL_ARB_multi_draw_indirect */ \
\
    /* GL_ARB_multisample */ \
    FGPP_GL_FUNCTION_VOID( SampleCoverageARB, , GLfloat, GLboolean ) \
\
    /* GL_ARB_multitexture */ \
    FGPP_GL_FUNCTION_VOID( ActiveTextureARB, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( ClientActiveTextureARB, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1dARB, , GLenum, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1dvARB, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1fARB, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1fvARB, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1iARB, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1ivARB, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1sARB, , GLenum, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1svARB, , GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2dARB, , GLenum, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2dvARB, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2fARB, , GLenum, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2fvARB, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2iARB, , GLenum, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2ivARB, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2sARB, , GLenum, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2svARB, , GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3dARB, , GLenum, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3dvARB, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3fARB, , GLenum, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3fvARB, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3iARB, , GLenum, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3ivARB, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3sARB, , GLenum, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3svARB, , GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4dARB, , GLenum, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4dvARB, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4fARB, , GLenum, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4fvARB, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4iARB, , GLenum, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4ivARB, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4sARB, , GLenum, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4svARB, , GLenum, const GLshort * ) \
\
    /* GL_ARB_occlusion_query */ \
    FGPP_GL_FUNCTION_VOID( GenQueriesARB, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeleteQueriesARB, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsQueryARB, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( BeginQueryARB, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndQueryARB, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetQueryivARB, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjectivARB, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjectuivARB, , GLuint, GLenum, GLuint * ) \
\
    /* GL_ARB_occlusion_query2 */ \
\
    /* GL_ARB_pixel_buffer_object */ \
\
    /* GL_ARB_point_parameters */ \
    FGPP_GL_FUNCTION_VOID( PointParameterfARB, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PointParameterfvARB, , GLenum, const GLfloat * ) \
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
    FGPP_GL_FUNCTION_NUM( GetGraphicsResetStatusARB, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetnTexImageARB, , GLenum, GLint, GLenum, GLenum, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ReadnPixelsARB, , GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetnCompressedTexImageARB, , GLenum, GLint, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetnUniformfvARB, , GLuint, GLint, GLsizei, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetnUniformivARB, , GLuint, GLint, GLsizei, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetnUniformuivARB, , GLuint, GLint, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetnUniformdvARB, , GLuint, GLint, GLsizei, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetnMapdvARB, , GLenum, GLenum, GLsizei, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetnMapfvARB, , GLenum, GLenum, GLsizei, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetnMapivARB, , GLenum, GLenum, GLsizei, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetnPixelMapfvARB, , GLenum, GLsizei, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetnPixelMapuivARB, , GLenum, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetnPixelMapusvARB, , GLenum, GLsizei, GLushort * ) \
    FGPP_GL_FUNCTION_VOID( GetnPolygonStippleARB, , GLsizei, GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( GetnColorTableARB, , GLenum, GLenum, GLenum, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetnConvolutionFilterARB, , GLenum, GLenum, GLenum, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetnSeparableFilterARB, , GLenum, GLenum, GLenum, GLsizei, GLvoid *, GLsizei, GLvoid *, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetnHistogramARB, , GLenum, GLboolean, GLenum, GLenum, GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetnMinmaxARB, , GLenum, GLboolean, GLenum, GLenum, GLsizei, GLvoid * ) \
\
    /* GL_ARB_robustness_isolation */ \
\
    /* GL_ARB_sample_shading */ \
    FGPP_GL_FUNCTION_VOID( MinSampleShadingARB, , GLfloat ) \
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
    FGPP_GL_FUNCTION_VOID( DeleteObjectARB, , GLhandleARB ) \
    FGPP_GL_FUNCTION_NUM( GetHandleARB, GLhandleARB, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( DetachObjectARB, , GLhandleARB, GLhandleARB ) \
    FGPP_GL_FUNCTION_NUM( CreateShaderObjectARB, GLhandleARB, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( ShaderSourceARB, , GLhandleARB, GLsizei, const GLcharARB **, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( CompileShaderARB, , GLhandleARB ) \
    FGPP_GL_FUNCTION_NUM( CreateProgramObjectARB, GLhandleARB ) \
    FGPP_GL_FUNCTION_VOID( AttachObjectARB, , GLhandleARB, GLhandleARB ) \
    FGPP_GL_FUNCTION_VOID( LinkProgramARB, , GLhandleARB ) \
    FGPP_GL_FUNCTION_VOID( UseProgramObjectARB, , GLhandleARB ) \
    FGPP_GL_FUNCTION_VOID( ValidateProgramARB, , GLhandleARB ) \
    FGPP_GL_FUNCTION_VOID( Uniform1fARB, , GLint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform2fARB, , GLint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform3fARB, , GLint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform4fARB, , GLint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Uniform1iARB, , GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform2iARB, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform3iARB, , GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform4iARB, , GLint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Uniform1fvARB, , GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2fvARB, , GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3fvARB, , GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4fvARB, , GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Uniform1ivARB, , GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2ivARB, , GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3ivARB, , GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4ivARB, , GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix2fvARB, , GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix3fvARB, , GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( UniformMatrix4fvARB, , GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetObjectParameterfvARB, , GLhandleARB, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetObjectParameterivARB, , GLhandleARB, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetInfoLogARB, , GLhandleARB, GLsizei, GLsizei *, GLcharARB * ) \
    FGPP_GL_FUNCTION_VOID( GetAttachedObjectsARB, , GLhandleARB, GLsizei, GLsizei *, GLhandleARB * ) \
    FGPP_GL_FUNCTION_NUM( GetUniformLocationARB, GLint, , GLhandleARB, const GLcharARB * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveUniformARB, , GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformfvARB, , GLhandleARB, GLint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformivARB, , GLhandleARB, GLint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetShaderSourceARB, , GLhandleARB, GLsizei, GLsizei *, GLcharARB * ) \
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
    FGPP_GL_FUNCTION_VOID( NamedStringARB, , GLenum, GLint, const GLchar *, GLint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( DeleteNamedStringARB, , GLint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( CompileShaderIncludeARB, , GLuint, GLsizei, const GLchar *const*, const GLint * ) \
    FGPP_GL_FUNCTION_NUM( IsNamedStringARB, GLboolean, , GLint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedStringARB, , GLint, const GLchar *, GLsizei, GLint *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedStringivARB, , GLint, const GLchar *, GLenum, GLint * ) \
\
    /* GL_ARB_shading_language_packing */ \
\
    /* GL_ARB_shadow */ \
\
    /* GL_ARB_shadow_ambient */ \
\
    /* GL_ARB_sparse_texture */ \
    FGPP_GL_FUNCTION_VOID( TexPageCommitmentARB, , GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) \
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
    FGPP_GL_FUNCTION_VOID( TexBufferARB, , GLenum, GLenum, GLuint ) \
\
    /* GL_ARB_texture_buffer_object_rgb32 */ \
\
    /* GL_ARB_texture_buffer_range */ \
\
    /* GL_ARB_texture_compression */ \
    FGPP_GL_FUNCTION_VOID( CompressedTexImage3DARB, , GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexImage2DARB, , GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexImage1DARB, , GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexSubImage3DARB, , GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexSubImage2DARB, , GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTexSubImage1DARB, , GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetCompressedTexImageARB, , GLenum, GLint, GLvoid * ) \
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
    FGPP_GL_FUNCTION_VOID( LoadTransposeMatrixfARB, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( LoadTransposeMatrixdARB, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultTransposeMatrixfARB, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultTransposeMatrixdARB, , const GLdouble * ) \
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
    FGPP_GL_FUNCTION_VOID( WeightbvARB, , GLint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( WeightsvARB, , GLint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( WeightivARB, , GLint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WeightfvARB, , GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WeightdvARB, , GLint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WeightubvARB, , GLint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( WeightusvARB, , GLint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( WeightuivARB, , GLint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( WeightPointerARB, , GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VertexBlendARB, , GLint ) \
\
    /* GL_ARB_vertex_buffer_object */ \
    FGPP_GL_FUNCTION_VOID( BindBufferARB, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteBuffersARB, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenBuffersARB, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsBufferARB, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( BufferDataARB, , GLenum, GLsizeiptrARB, const GLvoid *, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BufferSubDataARB, , GLenum, GLintptrARB, GLsizeiptrARB, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetBufferSubDataARB, , GLenum, GLintptrARB, GLsizeiptrARB, GLvoid * ) \
    FGPP_GL_FUNCTION_PTR( MapBufferARB, void *, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_NUM( UnmapBufferARB, GLboolean, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetBufferParameterivARB, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetBufferPointervARB, , GLenum, GLenum, GLvoid ** ) \
\
    /* GL_ARB_vertex_program */ \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1dARB, , GLuint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1dvARB, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1fARB, , GLuint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1fvARB, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1sARB, , GLuint, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1svARB, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2dARB, , GLuint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2dvARB, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2fARB, , GLuint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2fvARB, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2sARB, , GLuint, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2svARB, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3dARB, , GLuint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3dvARB, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3fARB, , GLuint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3fvARB, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3sARB, , GLuint, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3svARB, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NbvARB, , GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NivARB, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NsvARB, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NubARB, , GLuint, GLubyte, GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NubvARB, , GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NuivARB, , GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4NusvARB, , GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4bvARB, , GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4dARB, , GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4dvARB, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4fARB, , GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4fvARB, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4ivARB, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4sARB, , GLuint, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4svARB, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4ubvARB, , GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4uivARB, , GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4usvARB, , GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribPointerARB, , GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( EnableVertexAttribArrayARB, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableVertexAttribArrayARB, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribdvARB, , GLuint, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribfvARB, , GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribivARB, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribPointervARB, , GLuint, GLenum, GLvoid ** ) \
\
    /* GL_ARB_vertex_shader */ \
    FGPP_GL_FUNCTION_VOID( BindAttribLocationARB, , GLhandleARB, GLuint, const GLcharARB * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveAttribARB, , GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB * ) \
    FGPP_GL_FUNCTION_NUM( GetAttribLocationARB, GLint, , GLhandleARB, const GLcharARB * ) \
\
    /* GL_ARB_vertex_type_10f_11f_11f_rev */ \
\
    /* GL_ARB_vertex_type_2_10_10_10_rev */ \
\
    /* GL_ARB_viewport_array */ \
\
    /* GL_ARB_window_pos */ \
    FGPP_GL_FUNCTION_VOID( WindowPos2dARB, , GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2dvARB, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2fARB, , GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2fvARB, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2iARB, , GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2ivARB, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2sARB, , GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2svARB, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3dARB, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3dvARB, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3fARB, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3fvARB, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3iARB, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3ivARB, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3sARB, , GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3svARB, , const GLshort * ) \
\
    /* GL_KHR_debug */ \
\
    /* GL_KHR_texture_compression_astc_ldr */ \
\
    /* GL_OES_byte_coordinates */ \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1bOES, , GLenum, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1bvOES, , GLenum, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2bOES, , GLenum, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2bvOES, , GLenum, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3bOES, , GLenum, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3bvOES, , GLenum, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4bOES, , GLenum, GLbyte, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4bvOES, , GLenum, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1bOES, , GLbyte ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1bvOES, , const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2bOES, , GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2bvOES, , const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3bOES, , GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3bvOES, , const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4bOES, , GLbyte, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4bvOES, , const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Vertex2bOES, , GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Vertex2bvOES, , const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3bOES, , GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Vertex3bvOES, , const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4bOES, , GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Vertex4bvOES, , const GLbyte * ) \
\
    /* GL_OES_compressed_paletted_texture */ \
\
    /* GL_OES_fixed_point */ \
    FGPP_GL_FUNCTION_VOID( AlphaFuncxOES, , GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( ClearColorxOES, , GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( ClearDepthxOES, , GLfixed ) \
    FGPP_GL_FUNCTION_VOID( ClipPlanexOES, , GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Color4xOES, , GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( DepthRangexOES, , GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( FogxOES, , GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( FogxvOES, , GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( FrustumxOES, , GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( GetClipPlanexOES, , GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetFixedvOES, , GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetTexEnvxvOES, , GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterxvOES, , GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( LightModelxOES, , GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( LightModelxvOES, , GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( LightxOES, , GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( LightxvOES, , GLenum, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( LineWidthxOES, , GLfixed ) \
    FGPP_GL_FUNCTION_VOID( LoadMatrixxOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MaterialxOES, , GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MaterialxvOES, , GLenum, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MultMatrixxOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4xOES, , GLenum, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Normal3xOES, , GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( OrthoxOES, , GLfixed, GLfixed, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( PointParameterxvOES, , GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( PointSizexOES, , GLfixed ) \
    FGPP_GL_FUNCTION_VOID( PolygonOffsetxOES, , GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( RotatexOES, , GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( SampleCoverageOES, , GLfixed, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( ScalexOES, , GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexEnvxOES, , GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexEnvxvOES, , GLenum, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TexParameterxOES, , GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexParameterxvOES, , GLenum, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TranslatexOES, , GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( AccumxOES, , GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( BitmapxOES, , GLsizei, GLsizei, GLfixed, GLfixed, GLfixed, GLfixed, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( BlendColorxOES, , GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( ClearAccumxOES, , GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Color3xOES, , GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Color3xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Color4xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterxOES, , GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterxvOES, , GLenum, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord1xOES, , GLfixed ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord1xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord2xOES, , GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( EvalCoord2xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( FeedbackBufferxOES, , GLsizei, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionParameterxvOES, , GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetHistogramParameterxvOES, , GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetLightxOES, , GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetMapxvOES, , GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetMaterialxOES, , GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( GetPixelMapxv, , GLenum, GLint, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetTexGenxvOES, , GLenum, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( GetTexLevelParameterxvOES, , GLenum, GLint, GLenum, GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( IndexxOES, , GLfixed ) \
    FGPP_GL_FUNCTION_VOID( IndexxvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( LoadTransposeMatrixxOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Map1xOES, , GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Map2xOES, , GLenum, GLfixed, GLfixed, GLint, GLint, GLfixed, GLfixed, GLint, GLint, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MapGrid1xOES, , GLint, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MapGrid2xOES, , GLint, GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MultTransposeMatrixxOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1xOES, , GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1xvOES, , GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2xOES, , GLenum, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2xvOES, , GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3xOES, , GLenum, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3xvOES, , GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4xvOES, , GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Normal3xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( PassThroughxOES, , GLfixed ) \
    FGPP_GL_FUNCTION_VOID( PixelMapx, , GLenum, GLint, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( PixelStorex, , GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( PixelTransferxOES, , GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( PixelZoomxOES, , GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( PrioritizeTexturesxOES, , GLsizei, const GLuint *, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2xOES, , GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( RasterPos2xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3xOES, , GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( RasterPos3xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4xOES, , GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( RasterPos4xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( RectxOES, , GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( RectxvOES, , const GLfixed *, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1xOES, , GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2xOES, , GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3xOES, , GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4xOES, , GLfixed, GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( TexGenxOES, , GLenum, GLenum, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( TexGenxvOES, , GLenum, GLenum, const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Vertex2xOES, , GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Vertex2xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3xOES, , GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Vertex3xvOES, , const GLfixed * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4xOES, , GLfixed, GLfixed, GLfixed ) \
    FGPP_GL_FUNCTION_VOID( Vertex4xvOES, , const GLfixed * ) \
\
    /* GL_OES_query_matrix */ \
    FGPP_GL_FUNCTION_NUM( QueryMatrixxOES, GLbitfield, , GLfixed *, GLint * ) \
\
    /* GL_OES_read_format */ \
\
    /* GL_OES_single_precision */ \
    FGPP_GL_FUNCTION_VOID( ClearDepthfOES, , GLclampf ) \
    FGPP_GL_FUNCTION_VOID( ClipPlanefOES, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( DepthRangefOES, , GLclampf, GLclampf ) \
    FGPP_GL_FUNCTION_VOID( FrustumfOES, , GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( GetClipPlanefOES, , GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( OrthofOES, , GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
\
    /* GL_3DFX_multisample */ \
\
    /* GL_3DFX_tbuffer */ \
    FGPP_GL_FUNCTION_VOID( TbufferMask3DFX, , GLuint ) \
\
    /* GL_3DFX_texture_compression_FXT1 */ \
\
    /* GL_AMD_blend_minmax_factor */ \
\
    /* GL_AMD_conservative_depth */ \
\
    /* GL_AMD_debug_output */ \
    FGPP_GL_FUNCTION_VOID( DebugMessageEnableAMD, , GLenum, GLenum, GLsizei, const GLuint *, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageInsertAMD, , GLenum, GLenum, GLuint, GLsizei, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( DebugMessageCallbackAMD, , GLDebugProcAMD, void * ) \
    FGPP_GL_FUNCTION_NUM( GetDebugMessageLogAMD, GLuint, , GLuint, GLsizei, GLenum *, GLuint *, GLuint *, GLsizei *, GLchar * ) \
\
    /* GL_AMD_depth_clamp_separate */ \
\
    /* GL_AMD_draw_buffers_blend */ \
    FGPP_GL_FUNCTION_VOID( BlendFuncIndexedAMD, , GLuint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendFuncSeparateIndexedAMD, , GLuint, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendEquationIndexedAMD, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BlendEquationSeparateIndexedAMD, , GLuint, GLenum, GLenum ) \
\
    /* GL_AMD_interleaved_elements */ \
    FGPP_GL_FUNCTION_VOID( VertexAttribParameteriAMD, , GLuint, GLenum, GLint ) \
\
    /* GL_AMD_multi_draw_indirect */ \
    FGPP_GL_FUNCTION_VOID( MultiDrawArraysIndirectAMD, , GLenum, const GLvoid *, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementsIndirectAMD, , GLenum, GLenum, const GLvoid *, GLsizei, GLsizei ) \
\
    /* GL_AMD_name_gen_delete */ \
    FGPP_GL_FUNCTION_VOID( GenNamesAMD, , GLenum, GLuint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeleteNamesAMD, , GLenum, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsNameAMD, GLboolean, , GLenum, GLuint ) \
\
    /* GL_AMD_performance_monitor */ \
    FGPP_GL_FUNCTION_VOID( GetPerfMonitorGroupsAMD, , GLint *, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetPerfMonitorCountersAMD, , GLuint, GLint *, GLint *, GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetPerfMonitorGroupStringAMD, , GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetPerfMonitorCounterStringAMD, , GLuint, GLuint, GLsizei, GLsizei *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetPerfMonitorCounterInfoAMD, , GLuint, GLuint, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GenPerfMonitorsAMD, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeletePerfMonitorsAMD, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( SelectPerfMonitorCountersAMD, , GLuint, GLboolean, GLuint, GLint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BeginPerfMonitorAMD, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndPerfMonitorAMD, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetPerfMonitorCounterDataAMD, , GLuint, GLenum, GLsizei, GLuint *, GLint * ) \
\
    /* GL_AMD_pinned_memory */ \
\
    /* GL_AMD_query_buffer_object */ \
\
    /* GL_AMD_sample_positions */ \
    FGPP_GL_FUNCTION_VOID( SetMultisamplefvAMD, , GLenum, GLuint, const GLfloat * ) \
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
    FGPP_GL_FUNCTION_VOID( TexStorageSparseAMD, , GLenum, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( TextureStorageSparseAMD, , GLuint, GLenum, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLbitfield ) \
\
    /* GL_AMD_stencil_operation_extended */ \
    FGPP_GL_FUNCTION_VOID( StencilOpValueAMD, , GLenum, GLuint ) \
\
    /* GL_AMD_texture_texture4 */ \
\
    /* GL_AMD_transform_feedback3_lines_triangles */ \
\
    /* GL_AMD_vertex_shader_layer */ \
\
    /* GL_AMD_vertex_shader_tessellator */ \
    FGPP_GL_FUNCTION_VOID( TessellationFactorAMD, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TessellationModeAMD, , GLenum ) \
\
    /* GL_AMD_vertex_shader_viewport_index */ \
\
    /* GL_APPLE_aux_depth_stencil */ \
\
    /* GL_APPLE_client_storage */ \
\
    /* GL_APPLE_element_array */ \
    FGPP_GL_FUNCTION_VOID( ElementPointerAPPLE, , GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( DrawElementArrayAPPLE, , GLenum, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawRangeElementArrayAPPLE, , GLenum, GLuint, GLuint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementArrayAPPLE, , GLenum, const GLint *, const GLsizei *, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawRangeElementArrayAPPLE, , GLenum, GLuint, GLuint, const GLint *, const GLsizei *, GLsizei ) \
\
    /* GL_APPLE_fence */ \
    FGPP_GL_FUNCTION_VOID( GenFencesAPPLE, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeleteFencesAPPLE, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( SetFenceAPPLE, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( IsFenceAPPLE, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( TestFenceAPPLE, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( FinishFenceAPPLE, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( TestObjectAPPLE, GLboolean, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( FinishObjectAPPLE, , GLenum, GLint ) \
\
    /* GL_APPLE_float_pixels */ \
\
    /* GL_APPLE_flush_buffer_range */ \
    FGPP_GL_FUNCTION_VOID( BufferParameteriAPPLE, , GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( FlushMappedBufferRangeAPPLE, , GLenum, GLintptr, GLsizeiptr ) \
\
    /* GL_APPLE_object_purgeable */ \
    FGPP_GL_FUNCTION_NUM( ObjectPurgeableAPPLE, GLenum, , GLenum, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_NUM( ObjectUnpurgeableAPPLE, GLenum, , GLenum, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetObjectParameterivAPPLE, , GLenum, GLuint, GLenum, GLint * ) \
\
    /* GL_APPLE_rgb_422 */ \
\
    /* GL_APPLE_row_bytes */ \
\
    /* GL_APPLE_specular_vector */ \
\
    /* GL_APPLE_texture_range */ \
    FGPP_GL_FUNCTION_VOID( TextureRangeAPPLE, , GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterPointervAPPLE, , GLenum, GLenum, GLvoid ** ) \
\
    /* GL_APPLE_transform_hint */ \
\
    /* GL_APPLE_vertex_array_object */ \
    FGPP_GL_FUNCTION_VOID( BindVertexArrayAPPLE, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteVertexArraysAPPLE, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenVertexArraysAPPLE, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsVertexArrayAPPLE, GLboolean, , GLuint ) \
\
    /* GL_APPLE_vertex_array_range */ \
    FGPP_GL_FUNCTION_VOID( VertexArrayRangeAPPLE, , GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( FlushVertexArrayRangeAPPLE, , GLsizei, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayParameteriAPPLE, , GLenum, GLint ) \
\
    /* GL_APPLE_vertex_program_evaluators */ \
    FGPP_GL_FUNCTION_VOID( EnableVertexAttribAPPLE, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DisableVertexAttribAPPLE, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_NUM( IsVertexAttribEnabledAPPLE, GLboolean, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MapVertexAttrib1dAPPLE, , GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MapVertexAttrib1fAPPLE, , GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MapVertexAttrib2dAPPLE, , GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MapVertexAttrib2fAPPLE, , GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) \
\
    /* GL_APPLE_ycbcr_422 */ \
\
    /* GL_ATI_draw_buffers */ \
    FGPP_GL_FUNCTION_VOID( DrawBuffersATI, , GLsizei, const GLenum * ) \
\
    /* GL_ATI_element_array */ \
    FGPP_GL_FUNCTION_VOID( ElementPointerATI, , GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( DrawElementArrayATI, , GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawRangeElementArrayATI, , GLenum, GLuint, GLuint, GLsizei ) \
\
    /* GL_ATI_envmap_bumpmap */ \
    FGPP_GL_FUNCTION_VOID( TexBumpParameterivATI, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexBumpParameterfvATI, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTexBumpParameterivATI, , GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexBumpParameterfvATI, , GLenum, GLfloat * ) \
\
    /* GL_ATI_fragment_shader */ \
    FGPP_GL_FUNCTION_NUM( GenFragmentShadersATI, GLuint, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindFragmentShaderATI, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteFragmentShaderATI, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( BeginFragmentShaderATI ) \
    FGPP_GL_FUNCTION_VOID( EndFragmentShaderATI ) \
    FGPP_GL_FUNCTION_VOID( PassTexCoordATI, , GLuint, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( SampleMapATI, , GLuint, GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( ColorFragmentOp1ATI, , GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ColorFragmentOp2ATI, , GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ColorFragmentOp3ATI, , GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( AlphaFragmentOp1ATI, , GLenum, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( AlphaFragmentOp2ATI, , GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( AlphaFragmentOp3ATI, , GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SetFragmentShaderConstantATI, , GLuint, const GLfloat * ) \
\
    /* GL_ATI_map_object_buffer */ \
    FGPP_GL_FUNCTION_PTR( MapObjectBufferATI, void *, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( UnmapObjectBufferATI, , GLuint ) \
\
    /* GL_ATI_meminfo */ \
\
    /* GL_ATI_pixel_format_float */ \
\
    /* GL_ATI_pn_triangles */ \
    FGPP_GL_FUNCTION_VOID( PNTrianglesiATI, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PNTrianglesfATI, , GLenum, GLfloat ) \
\
    /* GL_ATI_separate_stencil */ \
    FGPP_GL_FUNCTION_VOID( StencilOpSeparateATI, , GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( StencilFuncSeparateATI, , GLenum, GLenum, GLint, GLuint ) \
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
    FGPP_GL_FUNCTION_NUM( NewObjectBufferATI, GLuint, , GLsizei, const GLvoid *, GLenum ) \
    FGPP_GL_FUNCTION_NUM( IsObjectBufferATI, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( UpdateObjectBufferATI, , GLuint, GLuint, GLsizei, const GLvoid *, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetObjectBufferfvATI, , GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetObjectBufferivATI, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( FreeObjectBufferATI, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( ArrayObjectATI, , GLenum, GLint, GLenum, GLsizei, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetArrayObjectfvATI, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetArrayObjectivATI, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( VariantArrayObjectATI, , GLuint, GLenum, GLsizei, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetVariantArrayObjectfvATI, , GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVariantArrayObjectivATI, , GLuint, GLenum, GLint * ) \
\
    /* GL_ATI_vertex_attrib_array_object */ \
    FGPP_GL_FUNCTION_VOID( VertexAttribArrayObjectATI, , GLuint, GLint, GLenum, GLboolean, GLsizei, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribArrayObjectfvATI, , GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribArrayObjectivATI, , GLuint, GLenum, GLint * ) \
\
    /* GL_ATI_vertex_streams */ \
    FGPP_GL_FUNCTION_VOID( VertexStream1sATI, , GLenum, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1svATI, , GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1iATI, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1ivATI, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1fATI, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1fvATI, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1dATI, , GLenum, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexStream1dvATI, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2sATI, , GLenum, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2svATI, , GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2iATI, , GLenum, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2ivATI, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2fATI, , GLenum, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2fvATI, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2dATI, , GLenum, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexStream2dvATI, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3sATI, , GLenum, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3svATI, , GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3iATI, , GLenum, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3ivATI, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3fATI, , GLenum, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3fvATI, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3dATI, , GLenum, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexStream3dvATI, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4sATI, , GLenum, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4svATI, , GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4iATI, , GLenum, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4ivATI, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4fATI, , GLenum, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4fvATI, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4dATI, , GLenum, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexStream4dvATI, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3bATI, , GLenum, GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3bvATI, , GLenum, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3sATI, , GLenum, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3svATI, , GLenum, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3iATI, , GLenum, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3ivATI, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3fATI, , GLenum, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3fvATI, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3dATI, , GLenum, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( NormalStream3dvATI, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ClientActiveVertexStreamATI, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( VertexBlendEnviATI, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexBlendEnvfATI, , GLenum, GLfloat ) \
\
    /* GL_EXT_422_pixels */ \
\
    /* GL_EXT_abgr */ \
\
    /* GL_EXT_bgra */ \
\
    /* GL_EXT_bindable_uniform */ \
    FGPP_GL_FUNCTION_VOID( UniformBufferEXT, , GLuint, GLint, GLuint ) \
    FGPP_GL_FUNCTION_NUM( GetUniformBufferSizeEXT, GLint, , GLuint, GLint ) \
    FGPP_GL_FUNCTION_NUM( GetUniformOffsetEXT, GLintptr, , GLuint, GLint ) \
\
    /* GL_EXT_blend_color */ \
    FGPP_GL_FUNCTION_VOID( BlendColorEXT, , GLfloat, GLfloat, GLfloat, GLfloat ) \
\
    /* GL_EXT_blend_equation_separate */ \
    FGPP_GL_FUNCTION_VOID( BlendEquationSeparateEXT, , GLenum, GLenum ) \
\
    /* GL_EXT_blend_func_separate */ \
    FGPP_GL_FUNCTION_VOID( BlendFuncSeparateEXT, , GLenum, GLenum, GLenum, GLenum ) \
\
    /* GL_EXT_blend_logic_op */ \
\
    /* GL_EXT_blend_minmax */ \
    FGPP_GL_FUNCTION_VOID( BlendEquationEXT, , GLenum ) \
\
    /* GL_EXT_blend_subtract */ \
\
    /* GL_EXT_clip_volume_hint */ \
\
    /* GL_EXT_cmyka */ \
\
    /* GL_EXT_color_subtable */ \
    FGPP_GL_FUNCTION_VOID( ColorSubTableEXT, , GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyColorSubTableEXT, , GLenum, GLsizei, GLint, GLint, GLsizei ) \
\
    /* GL_EXT_compiled_vertex_array */ \
    FGPP_GL_FUNCTION_VOID( LockArraysEXT, , GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( UnlockArraysEXT ) \
\
    /* GL_EXT_convolution */ \
    FGPP_GL_FUNCTION_VOID( ConvolutionFilter1DEXT, , GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionFilter2DEXT, , GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterfEXT, , GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterfvEXT, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameteriEXT, , GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( ConvolutionParameterivEXT, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( CopyConvolutionFilter1DEXT, , GLenum, GLenum, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyConvolutionFilter2DEXT, , GLenum, GLenum, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionFilterEXT, , GLenum, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionParameterfvEXT, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetConvolutionParameterivEXT, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetSeparableFilterEXT, , GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( SeparableFilter2DEXT, , GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid * ) \
\
    /* GL_EXT_coordinate_frame */ \
    FGPP_GL_FUNCTION_VOID( Tangent3bEXT, , GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Tangent3bvEXT, , const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Tangent3dEXT, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Tangent3dvEXT, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Tangent3fEXT, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Tangent3fvEXT, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Tangent3iEXT, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Tangent3ivEXT, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Tangent3sEXT, , GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Tangent3svEXT, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( Binormal3bEXT, , GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( Binormal3bvEXT, , const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( Binormal3dEXT, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( Binormal3dvEXT, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( Binormal3fEXT, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Binormal3fvEXT, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Binormal3iEXT, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( Binormal3ivEXT, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( Binormal3sEXT, , GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( Binormal3svEXT, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( TangentPointerEXT, , GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( BinormalPointerEXT, , GLenum, GLsizei, const GLvoid * ) \
\
    /* GL_EXT_copy_texture */ \
    FGPP_GL_FUNCTION_VOID( CopyTexImage1DEXT, , GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyTexImage2DEXT, , GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyTexSubImage1DEXT, , GLenum, GLint, GLint, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyTexSubImage2DEXT, , GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyTexSubImage3DEXT, , GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
\
    /* GL_EXT_cull_vertex */ \
    FGPP_GL_FUNCTION_VOID( CullParameterdvEXT, , GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( CullParameterfvEXT, , GLenum, GLfloat * ) \
\
    /* GL_EXT_depth_bounds_test */ \
    FGPP_GL_FUNCTION_VOID( DepthBoundsEXT, , GLclampd, GLclampd ) \
\
    /* GL_EXT_direct_state_access */ \
    FGPP_GL_FUNCTION_VOID( MatrixLoadfEXT, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MatrixLoaddEXT, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MatrixMultfEXT, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MatrixMultdEXT, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MatrixLoadIdentityEXT, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( MatrixRotatefEXT, , GLenum, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MatrixRotatedEXT, , GLenum, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MatrixScalefEXT, , GLenum, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MatrixScaledEXT, , GLenum, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MatrixTranslatefEXT, , GLenum, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MatrixTranslatedEXT, , GLenum, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MatrixFrustumEXT, , GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MatrixOrthoEXT, , GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MatrixPopEXT, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( MatrixPushEXT, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( ClientAttribDefaultEXT, , GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( PushClientAttribDefaultEXT, , GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( TextureParameterfEXT, , GLuint, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TextureParameterfvEXT, , GLuint, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TextureParameteriEXT, , GLuint, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( TextureParameterivEXT, , GLuint, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TextureImage1DEXT, , GLuint, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TextureImage2DEXT, , GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TextureSubImage1DEXT, , GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TextureSubImage2DEXT, , GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyTextureImage1DEXT, , GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyTextureImage2DEXT, , GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyTextureSubImage1DEXT, , GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyTextureSubImage2DEXT, , GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetTextureImageEXT, , GLuint, GLenum, GLint, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetTextureParameterfvEXT, , GLuint, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTextureParameterivEXT, , GLuint, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTextureLevelParameterfvEXT, , GLuint, GLenum, GLint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetTextureLevelParameterivEXT, , GLuint, GLenum, GLint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( TextureImage3DEXT, , GLuint, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TextureSubImage3DEXT, , GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyTextureSubImage3DEXT, , GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( BindMultiTextureEXT, , GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoordPointerEXT, , GLenum, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexEnvfEXT, , GLenum, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexEnvfvEXT, , GLenum, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexEnviEXT, , GLenum, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexEnvivEXT, , GLenum, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexGendEXT, , GLenum, GLenum, GLenum, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( MultiTexGendvEXT, , GLenum, GLenum, GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexGenfEXT, , GLenum, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexGenfvEXT, , GLenum, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexGeniEXT, , GLenum, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexGenivEXT, , GLenum, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexEnvfvEXT, , GLenum, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexEnvivEXT, , GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexGendvEXT, , GLenum, GLenum, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexGenfvEXT, , GLenum, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexGenivEXT, , GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexParameteriEXT, , GLenum, GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexParameterivEXT, , GLenum, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexParameterfEXT, , GLenum, GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( MultiTexParameterfvEXT, , GLenum, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexImage1DEXT, , GLenum, GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexImage2DEXT, , GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexSubImage1DEXT, , GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexSubImage2DEXT, , GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyMultiTexImage1DEXT, , GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyMultiTexImage2DEXT, , GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( CopyMultiTexSubImage1DEXT, , GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( CopyMultiTexSubImage2DEXT, , GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexImageEXT, , GLenum, GLenum, GLint, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexParameterfvEXT, , GLenum, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexParameterivEXT, , GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexLevelParameterfvEXT, , GLenum, GLenum, GLint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexLevelParameterivEXT, , GLenum, GLenum, GLint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexImage3DEXT, , GLenum, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexSubImage3DEXT, , GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CopyMultiTexSubImage3DEXT, , GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( EnableClientStateIndexedEXT, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableClientStateIndexedEXT, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetFloatIndexedvEXT, , GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetDoubleIndexedvEXT, , GLenum, GLuint, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetPointerIndexedvEXT, , GLenum, GLuint, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( EnableIndexedEXT, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableIndexedEXT, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_NUM( IsEnabledIndexedEXT, GLboolean, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetIntegerIndexedvEXT, , GLenum, GLuint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetBooleanIndexedvEXT, , GLenum, GLuint, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTextureImage3DEXT, , GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTextureImage2DEXT, , GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTextureImage1DEXT, , GLuint, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTextureSubImage3DEXT, , GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTextureSubImage2DEXT, , GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedTextureSubImage1DEXT, , GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetCompressedTextureImageEXT, , GLuint, GLenum, GLint, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedMultiTexImage3DEXT, , GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedMultiTexImage2DEXT, , GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedMultiTexImage1DEXT, , GLenum, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedMultiTexSubImage3DEXT, , GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedMultiTexSubImage2DEXT, , GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( CompressedMultiTexSubImage1DEXT, , GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetCompressedMultiTexImageEXT, , GLenum, GLenum, GLint, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MatrixLoadTransposefEXT, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MatrixLoadTransposedEXT, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( MatrixMultTransposefEXT, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( MatrixMultTransposedEXT, , GLenum, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( NamedBufferDataEXT, , GLuint, GLsizeiptr, const GLvoid *, GLenum ) \
    FGPP_GL_FUNCTION_VOID( NamedBufferSubDataEXT, , GLuint, GLintptr, GLsizeiptr, const GLvoid * ) \
    FGPP_GL_FUNCTION_PTR( MapNamedBufferEXT, void *, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_NUM( UnmapNamedBufferEXT, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetNamedBufferParameterivEXT, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedBufferPointervEXT, , GLuint, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( GetNamedBufferSubDataEXT, , GLuint, GLintptr, GLsizeiptr, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1fEXT, , GLuint, GLint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2fEXT, , GLuint, GLint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3fEXT, , GLuint, GLint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4fEXT, , GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1iEXT, , GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2iEXT, , GLuint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3iEXT, , GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4iEXT, , GLuint, GLint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1fvEXT, , GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2fvEXT, , GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3fvEXT, , GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4fvEXT, , GLuint, GLint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1ivEXT, , GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2ivEXT, , GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3ivEXT, , GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4ivEXT, , GLuint, GLint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2fvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3fvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4fvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x3fvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x2fvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x4fvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x2fvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x4fvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x3fvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TextureBufferEXT, , GLuint, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexBufferEXT, , GLenum, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TextureParameterIivEXT, , GLuint, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TextureParameterIuivEXT, , GLuint, GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetTextureParameterIivEXT, , GLuint, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTextureParameterIuivEXT, , GLuint, GLenum, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexParameterIivEXT, , GLenum, GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexParameterIuivEXT, , GLenum, GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexParameterIivEXT, , GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMultiTexParameterIuivEXT, , GLenum, GLenum, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1uiEXT, , GLuint, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2uiEXT, , GLuint, GLint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3uiEXT, , GLuint, GLint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4uiEXT, , GLuint, GLint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1uivEXT, , GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2uivEXT, , GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3uivEXT, , GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4uivEXT, , GLuint, GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameters4fvEXT, , GLuint, GLenum, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameterI4iEXT, , GLuint, GLenum, GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameterI4ivEXT, , GLuint, GLenum, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParametersI4ivEXT, , GLuint, GLenum, GLuint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameterI4uiEXT, , GLuint, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameterI4uivEXT, , GLuint, GLenum, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParametersI4uivEXT, , GLuint, GLenum, GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedProgramLocalParameterIivEXT, , GLuint, GLenum, GLuint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedProgramLocalParameterIuivEXT, , GLuint, GLenum, GLuint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( EnableClientStateiEXT, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableClientStateiEXT, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetFloati_vEXT, , GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetDoublei_vEXT, , GLenum, GLuint, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetPointeri_vEXT, , GLenum, GLuint, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramStringEXT, , GLuint, GLenum, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameter4dEXT, , GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameter4dvEXT, , GLuint, GLenum, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameter4fEXT, , GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( NamedProgramLocalParameter4fvEXT, , GLuint, GLenum, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedProgramLocalParameterdvEXT, , GLuint, GLenum, GLuint, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedProgramLocalParameterfvEXT, , GLuint, GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedProgramivEXT, , GLuint, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedProgramStringEXT, , GLuint, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( NamedRenderbufferStorageEXT, , GLuint, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetNamedRenderbufferParameterivEXT, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( NamedRenderbufferStorageMultisampleEXT, , GLuint, GLsizei, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( NamedRenderbufferStorageMultisampleCoverageEXT, , GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_NUM( CheckNamedFramebufferStatusEXT, GLenum, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferTexture1DEXT, , GLuint, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferTexture2DEXT, , GLuint, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferTexture3DEXT, , GLuint, GLenum, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferRenderbufferEXT, , GLuint, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetNamedFramebufferAttachmentParameterivEXT, , GLuint, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GenerateTextureMipmapEXT, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GenerateMultiTexMipmapEXT, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( FramebufferDrawBufferEXT, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( FramebufferDrawBuffersEXT, , GLuint, GLsizei, const GLenum * ) \
    FGPP_GL_FUNCTION_VOID( FramebufferReadBufferEXT, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetFramebufferParameterivEXT, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( NamedCopyBufferSubDataEXT, , GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferTextureEXT, , GLuint, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferTextureLayerEXT, , GLuint, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferTextureFaceEXT, , GLuint, GLenum, GLuint, GLint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( TextureRenderbufferEXT, , GLuint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MultiTexRenderbufferEXT, , GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexOffsetEXT, , GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayColorOffsetEXT, , GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayEdgeFlagOffsetEXT, , GLuint, GLuint, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayIndexOffsetEXT, , GLuint, GLuint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayNormalOffsetEXT, , GLuint, GLuint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayTexCoordOffsetEXT, , GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayMultiTexCoordOffsetEXT, , GLuint, GLuint, GLenum, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayFogCoordOffsetEXT, , GLuint, GLuint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArraySecondaryColorOffsetEXT, , GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribOffsetEXT, , GLuint, GLuint, GLuint, GLint, GLenum, GLboolean, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribIOffsetEXT, , GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( EnableVertexArrayEXT, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( DisableVertexArrayEXT, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( EnableVertexArrayAttribEXT, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableVertexArrayAttribEXT, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetVertexArrayIntegervEXT, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexArrayPointervEXT, , GLuint, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( GetVertexArrayIntegeri_vEXT, , GLuint, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexArrayPointeri_vEXT, , GLuint, GLuint, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_PTR( MapNamedBufferRangeEXT, void *, , GLuint, GLintptr, GLsizeiptr, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( FlushMappedNamedBufferRangeEXT, , GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( NamedBufferStorageEXT, , GLuint, GLsizeiptr, const void *, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( ClearNamedBufferDataEXT, , GLuint, GLenum, GLenum, GLenum, const void * ) \
    FGPP_GL_FUNCTION_VOID( ClearNamedBufferSubDataEXT, , GLuint, GLenum, GLenum, GLenum, GLsizeiptr, GLsizeiptr, const void * ) \
    FGPP_GL_FUNCTION_VOID( NamedFramebufferParameteriEXT, , GLuint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( GetNamedFramebufferParameterivEXT, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1dEXT, , GLuint, GLint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2dEXT, , GLuint, GLint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3dEXT, , GLuint, GLint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4dEXT, , GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1dvEXT, , GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2dvEXT, , GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3dvEXT, , GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4dvEXT, , GLuint, GLint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2dvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3dvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4dvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x3dvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix2x4dvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x2dvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix3x4dvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x2dvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformMatrix4x3dvEXT, , GLuint, GLint, GLsizei, GLboolean, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( TextureBufferRangeEXT, , GLuint, GLenum, GLenum, GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( TextureStorage1DEXT, , GLuint, GLenum, GLsizei, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TextureStorage2DEXT, , GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TextureStorage3DEXT, , GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TextureStorage2DMultisampleEXT, , GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TextureStorage3DMultisampleEXT, , GLuint, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayBindVertexBufferEXT, , GLuint, GLuint, GLuint, GLintptr, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribFormatEXT, , GLuint, GLuint, GLint, GLenum, GLboolean, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribIFormatEXT, , GLuint, GLuint, GLint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribLFormatEXT, , GLuint, GLuint, GLint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribBindingEXT, , GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexBindingDivisorEXT, , GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribLOffsetEXT, , GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( TexturePageCommitmentEXT, , GLuint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayVertexAttribDivisorEXT, , GLuint, GLuint, GLuint ) \
\
    /* GL_EXT_draw_buffers2 */ \
    FGPP_GL_FUNCTION_VOID( ColorMaskIndexedEXT, , GLuint, GLboolean, GLboolean, GLboolean, GLboolean ) \
\
    /* GL_EXT_draw_instanced */ \
    FGPP_GL_FUNCTION_VOID( DrawArraysInstancedEXT, , GLenum, GLint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DrawElementsInstancedEXT, , GLenum, GLsizei, GLenum, const GLvoid *, GLsizei ) \
\
    /* GL_EXT_draw_range_elements */ \
    FGPP_GL_FUNCTION_VOID( DrawRangeElementsEXT, , GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid * ) \
\
    /* GL_EXT_fog_coord */ \
    FGPP_GL_FUNCTION_VOID( FogCoordfEXT, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( FogCoordfvEXT, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( FogCoorddEXT, , GLdouble ) \
    FGPP_GL_FUNCTION_VOID( FogCoorddvEXT, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( FogCoordPointerEXT, , GLenum, GLsizei, const GLvoid * ) \
\
    /* GL_EXT_framebuffer_blit */ \
    FGPP_GL_FUNCTION_VOID( BlitFramebufferEXT, , GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum ) \
\
    /* GL_EXT_framebuffer_multisample */ \
    FGPP_GL_FUNCTION_VOID( RenderbufferStorageMultisampleEXT, , GLenum, GLsizei, GLenum, GLsizei, GLsizei ) \
\
    /* GL_EXT_framebuffer_multisample_blit_scaled */ \
\
    /* GL_EXT_framebuffer_object */ \
    FGPP_GL_FUNCTION_NUM( IsRenderbufferEXT, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindRenderbufferEXT, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteRenderbuffersEXT, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenRenderbuffersEXT, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( RenderbufferStorageEXT, , GLenum, GLenum, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetRenderbufferParameterivEXT, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_NUM( IsFramebufferEXT, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindFramebufferEXT, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteFramebuffersEXT, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenFramebuffersEXT, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( CheckFramebufferStatusEXT, GLenum, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture1DEXT, , GLenum, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture2DEXT, , GLenum, GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTexture3DEXT, , GLenum, GLenum, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferRenderbufferEXT, , GLenum, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetFramebufferAttachmentParameterivEXT, , GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GenerateMipmapEXT, , GLenum ) \
\
    /* GL_EXT_framebuffer_sRGB */ \
\
    /* GL_EXT_geometry_shader4 */ \
    FGPP_GL_FUNCTION_VOID( ProgramParameteriEXT, , GLuint, GLenum, GLint ) \
\
    /* GL_EXT_gpu_program_parameters */ \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameters4fvEXT, , GLenum, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameters4fvEXT, , GLenum, GLuint, GLsizei, const GLfloat * ) \
\
    /* GL_EXT_gpu_shader4 */ \
    FGPP_GL_FUNCTION_VOID( GetUniformuivEXT, , GLuint, GLint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( BindFragDataLocationEXT, , GLuint, GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetFragDataLocationEXT, GLint, , GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( Uniform1uiEXT, , GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform2uiEXT, , GLint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform3uiEXT, , GLint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform4uiEXT, , GLint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( Uniform1uivEXT, , GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2uivEXT, , GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3uivEXT, , GLint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4uivEXT, , GLint, GLsizei, const GLuint * ) \
\
    /* GL_EXT_histogram */ \
    FGPP_GL_FUNCTION_VOID( GetHistogramEXT, , GLenum, GLboolean, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetHistogramParameterfvEXT, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetHistogramParameterivEXT, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMinmaxEXT, , GLenum, GLboolean, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetMinmaxParameterfvEXT, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMinmaxParameterivEXT, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( HistogramEXT, , GLenum, GLsizei, GLenum, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( MinmaxEXT, , GLenum, GLenum, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( ResetHistogramEXT, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( ResetMinmaxEXT, , GLenum ) \
\
    /* GL_EXT_index_array_formats */ \
\
    /* GL_EXT_index_func */ \
    FGPP_GL_FUNCTION_VOID( IndexFuncEXT, , GLenum, GLclampf ) \
\
    /* GL_EXT_index_material */ \
    FGPP_GL_FUNCTION_VOID( IndexMaterialEXT, , GLenum, GLenum ) \
\
    /* GL_EXT_index_texture */ \
\
    /* GL_EXT_light_texture */ \
    FGPP_GL_FUNCTION_VOID( ApplyTextureEXT, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( TextureLightEXT, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( TextureMaterialEXT, , GLenum, GLenum ) \
\
    /* GL_EXT_misc_attribute */ \
\
    /* GL_EXT_multi_draw_arrays */ \
    FGPP_GL_FUNCTION_VOID( MultiDrawArraysEXT, , GLenum, const GLint *, const GLsizei *, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementsEXT, , GLenum, const GLsizei *, GLenum, const GLvoid *const*, GLsizei ) \
\
    /* GL_EXT_multisample */ \
    FGPP_GL_FUNCTION_VOID( SampleMaskEXT, , GLclampf, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( SamplePatternEXT, , GLenum ) \
\
    /* GL_EXT_packed_depth_stencil */ \
\
    /* GL_EXT_packed_float */ \
\
    /* GL_EXT_packed_pixels */ \
\
    /* GL_EXT_paletted_texture */ \
    FGPP_GL_FUNCTION_VOID( ColorTableEXT, , GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableEXT, , GLenum, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableParameterivEXT, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableParameterfvEXT, , GLenum, GLenum, GLfloat * ) \
\
    /* GL_EXT_pixel_buffer_object */ \
\
    /* GL_EXT_pixel_transform */ \
    FGPP_GL_FUNCTION_VOID( PixelTransformParameteriEXT, , GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PixelTransformParameterfEXT, , GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PixelTransformParameterivEXT, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( PixelTransformParameterfvEXT, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelTransformParameterivEXT, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelTransformParameterfvEXT, , GLenum, GLenum, GLfloat * ) \
\
    /* GL_EXT_pixel_transform_color_table */ \
\
    /* GL_EXT_point_parameters */ \
    FGPP_GL_FUNCTION_VOID( PointParameterfEXT, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PointParameterfvEXT, , GLenum, const GLfloat * ) \
\
    /* GL_EXT_polygon_offset */ \
    FGPP_GL_FUNCTION_VOID( PolygonOffsetEXT, , GLfloat, GLfloat ) \
\
    /* GL_EXT_provoking_vertex */ \
    FGPP_GL_FUNCTION_VOID( ProvokingVertexEXT, , GLenum ) \
\
    /* GL_EXT_rescale_normal */ \
\
    /* GL_EXT_secondary_color */ \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3bEXT, , GLbyte, GLbyte, GLbyte ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3bvEXT, , const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3dEXT, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3dvEXT, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3fEXT, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3fvEXT, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3iEXT, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3ivEXT, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3sEXT, , GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3svEXT, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3ubEXT, , GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3ubvEXT, , const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3uiEXT, , GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3uivEXT, , const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3usEXT, , GLushort, GLushort, GLushort ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3usvEXT, , const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColorPointerEXT, , GLint, GLenum, GLsizei, const GLvoid * ) \
\
    /* GL_EXT_separate_shader_objects */ \
    FGPP_GL_FUNCTION_VOID( UseShaderProgramEXT, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ActiveProgramEXT, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( CreateShaderProgramEXT, GLuint, , GLenum, const GLchar * ) \
\
    /* GL_EXT_separate_specular_color */ \
\
    /* GL_EXT_shader_image_load_store */ \
    FGPP_GL_FUNCTION_VOID( BindImageTextureEXT, , GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( MemoryBarrierEXT, , GLbitfield ) \
\
    /* GL_EXT_shadow_funcs */ \
\
    /* GL_EXT_shared_texture_palette */ \
\
    /* GL_EXT_stencil_clear_tag */ \
    FGPP_GL_FUNCTION_VOID( StencilClearTagEXT, , GLsizei, GLuint ) \
\
    /* GL_EXT_stencil_two_side */ \
    FGPP_GL_FUNCTION_VOID( ActiveStencilFaceEXT, , GLenum ) \
\
    /* GL_EXT_stencil_wrap */ \
\
    /* GL_EXT_subtexture */ \
    FGPP_GL_FUNCTION_VOID( TexSubImage1DEXT, , GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexSubImage2DEXT, , GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
\
    /* GL_EXT_texture */ \
\
    /* GL_EXT_texture3D */ \
    FGPP_GL_FUNCTION_VOID( TexImage3DEXT, , GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexSubImage3DEXT, , GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
\
    /* GL_EXT_texture_array */ \
\
    /* GL_EXT_texture_buffer_object */ \
    FGPP_GL_FUNCTION_VOID( TexBufferEXT, , GLenum, GLenum, GLuint ) \
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
    FGPP_GL_FUNCTION_VOID( TexParameterIivEXT, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( TexParameterIuivEXT, , GLenum, GLenum, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterIivEXT, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetTexParameterIuivEXT, , GLenum, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ClearColorIiEXT, , GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ClearColorIuiEXT, , GLuint, GLuint, GLuint, GLuint ) \
\
    /* GL_EXT_texture_lod_bias */ \
\
    /* GL_EXT_texture_mirror_clamp */ \
\
    /* GL_EXT_texture_object */ \
    FGPP_GL_FUNCTION_NUM( AreTexturesResidentEXT, GLboolean, , GLsizei, const GLuint *, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( BindTextureEXT, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteTexturesEXT, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenTexturesEXT, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsTextureEXT, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( PrioritizeTexturesEXT, , GLsizei, const GLuint *, const GLclampf * ) \
\
    /* GL_EXT_texture_perturb_normal */ \
    FGPP_GL_FUNCTION_VOID( TextureNormalEXT, , GLenum ) \
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
    FGPP_GL_FUNCTION_VOID( GetQueryObjecti64vEXT, , GLuint, GLenum, GLint64 * ) \
    FGPP_GL_FUNCTION_VOID( GetQueryObjectui64vEXT, , GLuint, GLenum, GLuint64 * ) \
\
    /* GL_EXT_transform_feedback */ \
    FGPP_GL_FUNCTION_VOID( BeginTransformFeedbackEXT, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( EndTransformFeedbackEXT ) \
    FGPP_GL_FUNCTION_VOID( BindBufferRangeEXT, , GLenum, GLuint, GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( BindBufferOffsetEXT, , GLenum, GLuint, GLuint, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( BindBufferBaseEXT, , GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TransformFeedbackVaryingsEXT, , GLuint, GLsizei, const GLchar *const*, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetTransformFeedbackVaryingEXT, , GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar * ) \
\
    /* GL_EXT_vertex_array */ \
    FGPP_GL_FUNCTION_VOID( ArrayElementEXT, , GLint ) \
    FGPP_GL_FUNCTION_VOID( ColorPointerEXT, , GLint, GLenum, GLsizei, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( DrawArraysEXT, , GLenum, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( EdgeFlagPointerEXT, , GLsizei, GLsizei, const GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( GetPointervEXT, , GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( IndexPointerEXT, , GLenum, GLsizei, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( NormalPointerEXT, , GLenum, GLsizei, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexCoordPointerEXT, , GLint, GLenum, GLsizei, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VertexPointerEXT, , GLint, GLenum, GLsizei, GLsizei, const GLvoid * ) \
\
    /* GL_EXT_vertex_array_bgra */ \
\
    /* GL_EXT_vertex_attrib_64bit */ \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1dEXT, , GLuint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2dEXT, , GLuint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3dEXT, , GLuint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4dEXT, , GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1dvEXT, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2dvEXT, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3dvEXT, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4dvEXT, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribLPointerEXT, , GLuint, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribLdvEXT, , GLuint, GLenum, GLdouble * ) \
\
    /* GL_EXT_vertex_shader */ \
    FGPP_GL_FUNCTION_VOID( BeginVertexShaderEXT ) \
    FGPP_GL_FUNCTION_VOID( EndVertexShaderEXT ) \
    FGPP_GL_FUNCTION_VOID( BindVertexShaderEXT, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( GenVertexShadersEXT, GLuint, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteVertexShaderEXT, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( ShaderOp1EXT, , GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ShaderOp2EXT, , GLenum, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ShaderOp3EXT, , GLenum, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SwizzleEXT, , GLuint, GLuint, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( WriteMaskEXT, , GLuint, GLuint, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( InsertComponentEXT, , GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ExtractComponentEXT, , GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_NUM( GenSymbolsEXT, GLuint, , GLenum, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( SetInvariantEXT, , GLuint, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( SetLocalConstantEXT, , GLuint, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VariantbvEXT, , GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VariantsvEXT, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VariantivEXT, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VariantfvEXT, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VariantdvEXT, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VariantubvEXT, , GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VariantusvEXT, , GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( VariantuivEXT, , GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VariantPointerEXT, , GLuint, GLenum, GLuint, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( EnableVariantClientStateEXT, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( DisableVariantClientStateEXT, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( BindLightParameterEXT, GLuint, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_NUM( BindMaterialParameterEXT, GLuint, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_NUM( BindTexGenParameterEXT, GLuint, , GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_NUM( BindTextureUnitParameterEXT, GLuint, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_NUM( BindParameterEXT, GLuint, , GLenum ) \
    FGPP_GL_FUNCTION_NUM( IsVariantEnabledEXT, GLboolean, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetVariantBooleanvEXT, , GLuint, GLenum, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( GetVariantIntegervEXT, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVariantFloatvEXT, , GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVariantPointervEXT, , GLuint, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( GetInvariantBooleanvEXT, , GLuint, GLenum, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( GetInvariantIntegervEXT, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetInvariantFloatvEXT, , GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetLocalConstantBooleanvEXT, , GLuint, GLenum, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( GetLocalConstantIntegervEXT, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetLocalConstantFloatvEXT, , GLuint, GLenum, GLfloat * ) \
\
    /* GL_EXT_vertex_weighting */ \
    FGPP_GL_FUNCTION_VOID( VertexWeightfEXT, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexWeightfvEXT, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexWeightPointerEXT, , GLint, GLenum, GLsizei, const GLvoid * ) \
\
    /* GL_EXT_x11_sync_object */ \
    FGPP_GL_FUNCTION_PTR( ImportSyncEXT, GLsync, , GLenum, GLintptr, GLbitfield ) \
\
    /* GL_GREMEDY_frame_terminator */ \
    FGPP_GL_FUNCTION_VOID( FrameTerminatorGREMEDY ) \
\
    /* GL_GREMEDY_string_marker */ \
    FGPP_GL_FUNCTION_VOID( StringMarkerGREMEDY, , GLsizei, const GLvoid * ) \
\
    /* GL_HP_convolution_border_modes */ \
\
    /* GL_HP_image_transform */ \
    FGPP_GL_FUNCTION_VOID( ImageTransformParameteriHP, , GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( ImageTransformParameterfHP, , GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ImageTransformParameterivHP, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ImageTransformParameterfvHP, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetImageTransformParameterivHP, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetImageTransformParameterfvHP, , GLenum, GLenum, GLfloat * ) \
\
    /* GL_HP_occlusion_test */ \
\
    /* GL_HP_texture_lighting */ \
\
    /* GL_IBM_cull_vertex */ \
\
    /* GL_IBM_multimode_draw_arrays */ \
    FGPP_GL_FUNCTION_VOID( MultiModeDrawArraysIBM, , const GLenum *, const GLint *, const GLsizei *, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiModeDrawElementsIBM, , const GLenum *, const GLsizei *, GLenum, const GLvoid *const*, GLsizei, GLint ) \
\
    /* GL_IBM_rasterpos_clip */ \
\
    /* GL_IBM_static_data */ \
    FGPP_GL_FUNCTION_VOID( FlushStaticDataIBM, , GLenum ) \
\
    /* GL_IBM_texture_mirrored_repeat */ \
\
    /* GL_IBM_vertex_array_lists */ \
    FGPP_GL_FUNCTION_VOID( ColorPointerListIBM, , GLint, GLenum, GLint, const GLvoid **, GLint ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColorPointerListIBM, , GLint, GLenum, GLint, const GLvoid **, GLint ) \
    FGPP_GL_FUNCTION_VOID( EdgeFlagPointerListIBM, , GLint, const GLboolean **, GLint ) \
    FGPP_GL_FUNCTION_VOID( FogCoordPointerListIBM, , GLenum, GLint, const GLvoid **, GLint ) \
    FGPP_GL_FUNCTION_VOID( IndexPointerListIBM, , GLenum, GLint, const GLvoid **, GLint ) \
    FGPP_GL_FUNCTION_VOID( NormalPointerListIBM, , GLenum, GLint, const GLvoid **, GLint ) \
    FGPP_GL_FUNCTION_VOID( TexCoordPointerListIBM, , GLint, GLenum, GLint, const GLvoid **, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexPointerListIBM, , GLint, GLenum, GLint, const GLvoid **, GLint ) \
\
    /* GL_INGR_blend_func_separate */ \
    FGPP_GL_FUNCTION_VOID( BlendFuncSeparateINGR, , GLenum, GLenum, GLenum, GLenum ) \
\
    /* GL_INGR_color_clamp */ \
\
    /* GL_INGR_interlace_read */ \
\
    /* GL_INTEL_map_texture */ \
    FGPP_GL_FUNCTION_VOID( SyncTextureINTEL, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( UnmapTexture2DINTEL, , GLuint, GLint ) \
    FGPP_GL_FUNCTION_PTR( MapTexture2DINTEL, void *, , GLuint, GLint, GLbitfield, const GLint *, const GLenum * ) \
\
    /* GL_INTEL_parallel_arrays */ \
    FGPP_GL_FUNCTION_VOID( VertexPointervINTEL, , GLint, GLenum, const GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( NormalPointervINTEL, , GLenum, const GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( ColorPointervINTEL, , GLint, GLenum, const GLvoid ** ) \
    FGPP_GL_FUNCTION_VOID( TexCoordPointervINTEL, , GLint, GLenum, const GLvoid ** ) \
\
    /* GL_MESAX_texture_stack */ \
\
    /* GL_MESA_pack_invert */ \
\
    /* GL_MESA_resize_buffers */ \
    FGPP_GL_FUNCTION_VOID( ResizeBuffersMESA ) \
\
    /* GL_MESA_window_pos */ \
    FGPP_GL_FUNCTION_VOID( WindowPos2dMESA, , GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2dvMESA, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2fMESA, , GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2fvMESA, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2iMESA, , GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2ivMESA, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2sMESA, , GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos2svMESA, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3dMESA, , GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3dvMESA, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3fMESA, , GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3fvMESA, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3iMESA, , GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3ivMESA, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3sMESA, , GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos3svMESA, , const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4dMESA, , GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4dvMESA, , const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4fMESA, , GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4fvMESA, , const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4iMESA, , GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4ivMESA, , const GLint * ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4sMESA, , GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( WindowPos4svMESA, , const GLshort * ) \
\
    /* GL_MESA_ycbcr_texture */ \
\
    /* GL_NVX_conditional_render */ \
    FGPP_GL_FUNCTION_VOID( BeginConditionalRenderNVX, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndConditionalRenderNVX ) \
\
    /* GL_NV_bindless_multi_draw_indirect */ \
    FGPP_GL_FUNCTION_VOID( MultiDrawArraysIndirectBindlessNV, , GLenum, const GLvoid *, GLsizei, GLsizei, GLint ) \
    FGPP_GL_FUNCTION_VOID( MultiDrawElementsIndirectBindlessNV, , GLenum, GLenum, const GLvoid *, GLsizei, GLsizei, GLint ) \
\
    /* GL_NV_bindless_texture */ \
    FGPP_GL_FUNCTION_NUM( GetTextureHandleNV, GLuint64, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( GetTextureSamplerHandleNV, GLuint64, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( MakeTextureHandleResidentNV, , GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( MakeTextureHandleNonResidentNV, , GLuint64 ) \
    FGPP_GL_FUNCTION_NUM( GetImageHandleNV, GLuint64, , GLuint, GLint, GLboolean, GLint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeImageHandleResidentNV, , GLuint64, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeImageHandleNonResidentNV, , GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( UniformHandleui64NV, , GLint, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( UniformHandleui64vNV, , GLint, GLsizei, const GLuint64 * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformHandleui64NV, , GLuint, GLint, GLuint64 ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformHandleui64vNV, , GLuint, GLint, GLsizei, const GLuint64 * ) \
    FGPP_GL_FUNCTION_NUM( IsTextureHandleResidentNV, GLboolean, , GLuint64 ) \
    FGPP_GL_FUNCTION_NUM( IsImageHandleResidentNV, GLboolean, , GLuint64 ) \
\
    /* GL_NV_blend_equation_advanced */ \
    FGPP_GL_FUNCTION_VOID( BlendParameteriNV, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( BlendBarrierNV ) \
\
    /* GL_NV_blend_equation_advanced_coherent */ \
\
    /* GL_NV_blend_square */ \
\
    /* GL_NV_compute_program5 */ \
\
    /* GL_NV_conditional_render */ \
    FGPP_GL_FUNCTION_VOID( BeginConditionalRenderNV, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( EndConditionalRenderNV ) \
\
    /* GL_NV_copy_depth_to_color */ \
\
    /* GL_NV_copy_image */ \
    FGPP_GL_FUNCTION_VOID( CopyImageSubDataNV, , GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei ) \
\
    /* GL_NV_deep_texture3D */ \
\
    /* GL_NV_depth_buffer_float */ \
    FGPP_GL_FUNCTION_VOID( DepthRangedNV, , GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ClearDepthdNV, , GLdouble ) \
    FGPP_GL_FUNCTION_VOID( DepthBoundsdNV, , GLdouble, GLdouble ) \
\
    /* GL_NV_depth_clamp */ \
\
    /* GL_NV_draw_texture */ \
    FGPP_GL_FUNCTION_VOID( DrawTextureNV, , GLuint, GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
\
    /* GL_NV_evaluators */ \
    FGPP_GL_FUNCTION_VOID( MapControlPointsNV, , GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( MapParameterivNV, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( MapParameterfvNV, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMapControlPointsNV, , GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetMapParameterivNV, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMapParameterfvNV, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetMapAttribParameterivNV, , GLenum, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetMapAttribParameterfvNV, , GLenum, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( EvalMapsNV, , GLenum, GLenum ) \
\
    /* GL_NV_explicit_multisample */ \
    FGPP_GL_FUNCTION_VOID( GetMultisamplefvNV, , GLenum, GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( SampleMaskIndexedNV, , GLuint, GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( TexRenderbufferNV, , GLenum, GLuint ) \
\
    /* GL_NV_fence */ \
    FGPP_GL_FUNCTION_VOID( DeleteFencesNV, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenFencesNV, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsFenceNV, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( TestFenceNV, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetFenceivNV, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( FinishFenceNV, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( SetFenceNV, , GLuint, GLenum ) \
\
    /* GL_NV_float_buffer */ \
\
    /* GL_NV_fog_distance */ \
\
    /* GL_NV_fragment_program */ \
    FGPP_GL_FUNCTION_VOID( ProgramNamedParameter4fNV, , GLuint, GLsizei, const GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramNamedParameter4fvNV, , GLuint, GLsizei, const GLubyte *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramNamedParameter4dNV, , GLuint, GLsizei, const GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramNamedParameter4dvNV, , GLuint, GLsizei, const GLubyte *, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramNamedParameterfvNV, , GLuint, GLsizei, const GLubyte *, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramNamedParameterdvNV, , GLuint, GLsizei, const GLubyte *, GLdouble * ) \
\
    /* GL_NV_fragment_program2 */ \
\
    /* GL_NV_fragment_program4 */ \
\
    /* GL_NV_fragment_program_option */ \
\
    /* GL_NV_framebuffer_multisample_coverage */ \
    FGPP_GL_FUNCTION_VOID( RenderbufferStorageMultisampleCoverageNV, , GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei ) \
\
    /* GL_NV_geometry_program4 */ \
    FGPP_GL_FUNCTION_VOID( ProgramVertexLimitNV, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureEXT, , GLenum, GLenum, GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureLayerEXT, , GLenum, GLenum, GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( FramebufferTextureFaceEXT, , GLenum, GLenum, GLuint, GLint, GLenum ) \
\
    /* GL_NV_geometry_shader4 */ \
\
    /* GL_NV_gpu_program4 */ \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameterI4iNV, , GLenum, GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameterI4ivNV, , GLenum, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParametersI4ivNV, , GLenum, GLuint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameterI4uiNV, , GLenum, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParameterI4uivNV, , GLenum, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramLocalParametersI4uivNV, , GLenum, GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameterI4iNV, , GLenum, GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameterI4ivNV, , GLenum, GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParametersI4ivNV, , GLenum, GLuint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameterI4uiNV, , GLenum, GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParameterI4uivNV, , GLenum, GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramEnvParametersI4uivNV, , GLenum, GLuint, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramLocalParameterIivNV, , GLenum, GLuint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramLocalParameterIuivNV, , GLenum, GLuint, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramEnvParameterIivNV, , GLenum, GLuint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramEnvParameterIuivNV, , GLenum, GLuint, GLuint * ) \
\
    /* GL_NV_gpu_program5 */ \
    FGPP_GL_FUNCTION_VOID( ProgramSubroutineParametersuivNV, , GLenum, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramSubroutineParameteruivNV, , GLenum, GLuint, GLuint * ) \
\
    /* GL_NV_gpu_program5_mem_extended */ \
\
    /* GL_NV_gpu_shader5 */ \
    FGPP_GL_FUNCTION_VOID( Uniform1i64NV, , GLint, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform2i64NV, , GLint, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform3i64NV, , GLint, GLint64EXT, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform4i64NV, , GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform1i64vNV, , GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2i64vNV, , GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3i64vNV, , GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4i64vNV, , GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform1ui64NV, , GLint, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform2ui64NV, , GLint, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform3ui64NV, , GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform4ui64NV, , GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniform1ui64vNV, , GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform2ui64vNV, , GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform3ui64vNV, , GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniform4ui64vNV, , GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformi64vNV, , GLuint, GLint, GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1i64NV, , GLuint, GLint, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2i64NV, , GLuint, GLint, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3i64NV, , GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4i64NV, , GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1i64vNV, , GLuint, GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2i64vNV, , GLuint, GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3i64vNV, , GLuint, GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4i64vNV, , GLuint, GLint, GLsizei, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1ui64NV, , GLuint, GLint, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2ui64NV, , GLuint, GLint, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3ui64NV, , GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4ui64NV, , GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform1ui64vNV, , GLuint, GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform2ui64vNV, , GLuint, GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform3ui64vNV, , GLuint, GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniform4ui64vNV, , GLuint, GLint, GLsizei, const GLuint64EXT * ) \
\
    /* GL_NV_half_float */ \
    FGPP_GL_FUNCTION_VOID( Vertex2hNV, , GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( Vertex2hvNV, , const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( Vertex3hNV, , GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( Vertex3hvNV, , const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( Vertex4hNV, , GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( Vertex4hvNV, , const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( Normal3hNV, , GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( Normal3hvNV, , const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( Color3hNV, , GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( Color3hvNV, , const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( Color4hNV, , GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( Color4hvNV, , const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1hNV, , GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( TexCoord1hvNV, , const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2hNV, , GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2hvNV, , const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3hNV, , GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( TexCoord3hvNV, , const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4hNV, , GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4hvNV, , const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1hNV, , GLenum, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord1hvNV, , GLenum, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2hNV, , GLenum, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord2hvNV, , GLenum, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3hNV, , GLenum, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord3hvNV, , GLenum, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4hNV, , GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( MultiTexCoord4hvNV, , GLenum, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( FogCoordhNV, , GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( FogCoordhvNV, , const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3hNV, , GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColor3hvNV, , const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexWeighthNV, , GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( VertexWeighthvNV, , const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1hNV, , GLuint, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1hvNV, , GLuint, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2hNV, , GLuint, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2hvNV, , GLuint, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3hNV, , GLuint, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3hvNV, , GLuint, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4hNV, , GLuint, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4hvNV, , GLuint, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs1hvNV, , GLuint, GLsizei, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs2hvNV, , GLuint, GLsizei, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs3hvNV, , GLuint, GLsizei, const GLhalfNV * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs4hvNV, , GLuint, GLsizei, const GLhalfNV * ) \
\
    /* GL_NV_light_max_exponent */ \
\
    /* GL_NV_multisample_coverage */ \
\
    /* GL_NV_multisample_filter_hint */ \
\
    /* GL_NV_occlusion_query */ \
    FGPP_GL_FUNCTION_VOID( GenOcclusionQueriesNV, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( DeleteOcclusionQueriesNV, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsOcclusionQueryNV, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( BeginOcclusionQueryNV, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndOcclusionQueryNV ) \
    FGPP_GL_FUNCTION_VOID( GetOcclusionQueryivNV, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetOcclusionQueryuivNV, , GLuint, GLenum, GLuint * ) \
\
    /* GL_NV_packed_depth_stencil */ \
\
    /* GL_NV_parameter_buffer_object */ \
    FGPP_GL_FUNCTION_VOID( ProgramBufferParametersfvNV, , GLenum, GLuint, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramBufferParametersIivNV, , GLenum, GLuint, GLuint, GLsizei, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( ProgramBufferParametersIuivNV, , GLenum, GLuint, GLuint, GLsizei, const GLuint * ) \
\
    /* GL_NV_parameter_buffer_object2 */ \
\
    /* GL_NV_path_rendering */ \
    FGPP_GL_FUNCTION_NUM( GenPathsNV, GLuint, , GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DeletePathsNV, , GLuint, GLsizei ) \
    FGPP_GL_FUNCTION_NUM( IsPathNV, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( PathCommandsNV, , GLuint, GLsizei, const GLubyte *, GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PathCoordsNV, , GLuint, GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PathSubCommandsNV, , GLuint, GLsizei, GLsizei, GLsizei, const GLubyte *, GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PathSubCoordsNV, , GLuint, GLsizei, GLsizei, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PathStringNV, , GLuint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( PathGlyphsNV, , GLuint, GLenum, const GLvoid *, GLbitfield, GLsizei, GLenum, const GLvoid *, GLenum, GLuint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PathGlyphRangeNV, , GLuint, GLenum, const GLvoid *, GLbitfield, GLuint, GLsizei, GLenum, GLuint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( WeightPathsNV, , GLuint, GLsizei, const GLuint *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( CopyPathNV, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( InterpolatePathsNV, , GLuint, GLuint, GLuint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TransformPathNV, , GLuint, GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PathParameterivNV, , GLuint, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( PathParameteriNV, , GLuint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PathParameterfvNV, , GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PathParameterfNV, , GLuint, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PathDashArrayNV, , GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PathStencilFuncNV, , GLenum, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( PathStencilDepthOffsetNV, , GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( StencilFillPathNV, , GLuint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( StencilStrokePathNV, , GLuint, GLint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( StencilFillPathInstancedNV, , GLsizei, GLenum, const GLvoid *, GLuint, GLenum, GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( StencilStrokePathInstancedNV, , GLsizei, GLenum, const GLvoid *, GLuint, GLint, GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PathCoverDepthFuncNV, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( PathColorGenNV, , GLenum, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PathTexGenNV, , GLenum, GLenum, GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( PathFogGenNV, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( CoverFillPathNV, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( CoverStrokePathNV, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( CoverFillPathInstancedNV, , GLsizei, GLenum, const GLvoid *, GLuint, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( CoverStrokePathInstancedNV, , GLsizei, GLenum, const GLvoid *, GLuint, GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathParameterivNV, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetPathParameterfvNV, , GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathCommandsNV, , GLuint, GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( GetPathCoordsNV, , GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathDashArrayNV, , GLuint, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathMetricsNV, , GLbitfield, GLsizei, GLenum, const GLvoid *, GLuint, GLsizei, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathMetricRangeNV, , GLbitfield, GLuint, GLsizei, GLsizei, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathSpacingNV, , GLenum, GLsizei, GLenum, const GLvoid *, GLuint, GLfloat, GLfloat, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathColorGenivNV, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetPathColorGenfvNV, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPathTexGenivNV, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetPathTexGenfvNV, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_NUM( IsPointInFillPathNV, GLboolean, , GLuint, GLuint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_NUM( IsPointInStrokePathNV, GLboolean, , GLuint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_NUM( GetPathLengthNV, GLfloat, , GLuint, GLsizei, GLsizei ) \
    FGPP_GL_FUNCTION_NUM( PointAlongPathNV, GLboolean, , GLuint, GLsizei, GLsizei, GLfloat, GLfloat *, GLfloat *, GLfloat *, GLfloat * ) \
\
    /* GL_NV_pixel_data_range */ \
    FGPP_GL_FUNCTION_VOID( PixelDataRangeNV, , GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( FlushPixelDataRangeNV, , GLenum ) \
\
    /* GL_NV_point_sprite */ \
    FGPP_GL_FUNCTION_VOID( PointParameteriNV, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PointParameterivNV, , GLenum, const GLint * ) \
\
    /* GL_NV_present_video */ \
    FGPP_GL_FUNCTION_VOID( PresentFrameKeyedNV, , GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLuint, GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( PresentFrameDualFillNV, , GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetVideoivNV, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVideouivNV, , GLuint, GLenum, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetVideoi64vNV, , GLuint, GLenum, GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetVideoui64vNV, , GLuint, GLenum, GLuint64EXT * ) \
\
    /* GL_NV_primitive_restart */ \
    FGPP_GL_FUNCTION_VOID( PrimitiveRestartNV ) \
    FGPP_GL_FUNCTION_VOID( PrimitiveRestartIndexNV, , GLuint ) \
\
    /* GL_NV_register_combiners */ \
    FGPP_GL_FUNCTION_VOID( CombinerParameterfvNV, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( CombinerParameterfNV, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( CombinerParameterivNV, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( CombinerParameteriNV, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( CombinerInputNV, , GLenum, GLenum, GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( CombinerOutputNV, , GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( FinalCombinerInputNV, , GLenum, GLenum, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( GetCombinerInputParameterfvNV, , GLenum, GLenum, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetCombinerInputParameterivNV, , GLenum, GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetCombinerOutputParameterfvNV, , GLenum, GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetCombinerOutputParameterivNV, , GLenum, GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetFinalCombinerInputParameterfvNV, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetFinalCombinerInputParameterivNV, , GLenum, GLenum, GLint * ) \
\
    /* GL_NV_register_combiners2 */ \
    FGPP_GL_FUNCTION_VOID( CombinerStageParameterfvNV, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetCombinerStageParameterfvNV, , GLenum, GLenum, GLfloat * ) \
\
    /* GL_NV_shader_atomic_counters */ \
\
    /* GL_NV_shader_atomic_float */ \
\
    /* GL_NV_shader_buffer_load */ \
    FGPP_GL_FUNCTION_VOID( MakeBufferResidentNV, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeBufferNonResidentNV, , GLenum ) \
    FGPP_GL_FUNCTION_NUM( IsBufferResidentNV, GLboolean, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeNamedBufferResidentNV, , GLuint, GLenum ) \
    FGPP_GL_FUNCTION_VOID( MakeNamedBufferNonResidentNV, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( IsNamedBufferResidentNV, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetBufferParameterui64vNV, , GLenum, GLenum, GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetNamedBufferParameterui64vNV, , GLuint, GLenum, GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetIntegerui64vNV, , GLenum, GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( Uniformui64NV, , GLint, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( Uniformui64vNV, , GLint, GLsizei, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetUniformui64vNV, , GLuint, GLint, GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformui64NV, , GLuint, GLint, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( ProgramUniformui64vNV, , GLuint, GLint, GLsizei, const GLuint64EXT * ) \
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
    FGPP_GL_FUNCTION_VOID( TextureBarrierNV ) \
\
    /* GL_NV_texture_compression_vtc */ \
\
    /* GL_NV_texture_env_combine4 */ \
\
    /* GL_NV_texture_expand_normal */ \
\
    /* GL_NV_texture_multisample */ \
    FGPP_GL_FUNCTION_VOID( TexImage2DMultisampleCoverageNV, , GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TexImage3DMultisampleCoverageNV, , GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TextureImage2DMultisampleNV, , GLuint, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TextureImage3DMultisampleNV, , GLuint, GLenum, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TextureImage2DMultisampleCoverageNV, , GLuint, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( TextureImage3DMultisampleCoverageNV, , GLuint, GLenum, GLsizei, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean ) \
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
    FGPP_GL_FUNCTION_VOID( BeginTransformFeedbackNV, , GLenum ) \
    FGPP_GL_FUNCTION_VOID( EndTransformFeedbackNV ) \
    FGPP_GL_FUNCTION_VOID( TransformFeedbackAttribsNV, , GLuint, const GLint *, GLenum ) \
    FGPP_GL_FUNCTION_VOID( BindBufferRangeNV, , GLenum, GLuint, GLuint, GLintptr, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( BindBufferOffsetNV, , GLenum, GLuint, GLuint, GLintptr ) \
    FGPP_GL_FUNCTION_VOID( BindBufferBaseNV, , GLenum, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( TransformFeedbackVaryingsNV, , GLuint, GLsizei, const GLint *, GLenum ) \
    FGPP_GL_FUNCTION_VOID( ActiveVaryingNV, , GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_NUM( GetVaryingLocationNV, GLint, , GLuint, const GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetActiveVaryingNV, , GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar * ) \
    FGPP_GL_FUNCTION_VOID( GetTransformFeedbackVaryingNV, , GLuint, GLuint, GLint * ) \
    FGPP_GL_FUNCTION_VOID( TransformFeedbackStreamAttribsNV, , GLsizei, const GLint *, GLsizei, const GLint *, GLenum ) \
\
    /* GL_NV_transform_feedback2 */ \
    FGPP_GL_FUNCTION_VOID( BindTransformFeedbackNV, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteTransformFeedbacksNV, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GenTransformFeedbacksNV, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_NUM( IsTransformFeedbackNV, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( PauseTransformFeedbackNV ) \
    FGPP_GL_FUNCTION_VOID( ResumeTransformFeedbackNV ) \
    FGPP_GL_FUNCTION_VOID( DrawTransformFeedbackNV, , GLenum, GLuint ) \
\
    /* GL_NV_vdpau_interop */ \
    FGPP_GL_FUNCTION_VOID( VDPAUInitNV, , const GLvoid *, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VDPAUFiniNV ) \
    FGPP_GL_FUNCTION_NUM( VDPAURegisterVideoSurfaceNV, GLvdpauSurfaceNV, , const GLvoid *, GLenum, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_NUM( VDPAURegisterOutputSurfaceNV, GLvdpauSurfaceNV, , const GLvoid *, GLenum, GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VDPAUIsSurfaceNV, , GLvdpauSurfaceNV ) \
    FGPP_GL_FUNCTION_VOID( VDPAUUnregisterSurfaceNV, , GLvdpauSurfaceNV ) \
    FGPP_GL_FUNCTION_VOID( VDPAUGetSurfaceivNV, , GLvdpauSurfaceNV, GLenum, GLsizei, GLsizei *, GLint * ) \
    FGPP_GL_FUNCTION_VOID( VDPAUSurfaceAccessNV, , GLvdpauSurfaceNV, GLenum ) \
    FGPP_GL_FUNCTION_VOID( VDPAUMapSurfacesNV, , GLsizei, const GLvdpauSurfaceNV * ) \
    FGPP_GL_FUNCTION_VOID( VDPAUUnmapSurfacesNV, , GLsizei, const GLvdpauSurfaceNV * ) \
\
    /* GL_NV_vertex_array_range */ \
    FGPP_GL_FUNCTION_VOID( FlushVertexArrayRangeNV ) \
    FGPP_GL_FUNCTION_VOID( VertexArrayRangeNV, , GLsizei, const GLvoid * ) \
\
    /* GL_NV_vertex_array_range2 */ \
\
    /* GL_NV_vertex_attrib_integer_64bit */ \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1i64NV, , GLuint, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2i64NV, , GLuint, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3i64NV, , GLuint, GLint64EXT, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4i64NV, , GLuint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1i64vNV, , GLuint, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2i64vNV, , GLuint, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3i64vNV, , GLuint, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4i64vNV, , GLuint, const GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1ui64NV, , GLuint, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2ui64NV, , GLuint, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3ui64NV, , GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4ui64NV, , GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL1ui64vNV, , GLuint, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL2ui64vNV, , GLuint, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL3ui64vNV, , GLuint, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribL4ui64vNV, , GLuint, const GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribLi64vNV, , GLuint, GLenum, GLint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribLui64vNV, , GLuint, GLenum, GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribLFormatNV, , GLuint, GLint, GLenum, GLsizei ) \
\
    /* GL_NV_vertex_buffer_unified_memory */ \
    FGPP_GL_FUNCTION_VOID( BufferAddressRangeNV, , GLenum, GLuint, GLuint64EXT, GLsizeiptr ) \
    FGPP_GL_FUNCTION_VOID( VertexFormatNV, , GLint, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( NormalFormatNV, , GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( ColorFormatNV, , GLint, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( IndexFormatNV, , GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( TexCoordFormatNV, , GLint, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( EdgeFlagFormatNV, , GLsizei ) \
    FGPP_GL_FUNCTION_VOID( SecondaryColorFormatNV, , GLint, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( FogCoordFormatNV, , GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribFormatNV, , GLuint, GLint, GLenum, GLboolean, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribIFormatNV, , GLuint, GLint, GLenum, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetIntegerui64i_vNV, , GLenum, GLuint, GLuint64EXT * ) \
\
    /* GL_NV_vertex_program */ \
    FGPP_GL_FUNCTION_NUM( AreProgramsResidentNV, GLboolean, , GLsizei, const GLuint *, GLboolean * ) \
    FGPP_GL_FUNCTION_VOID( BindProgramNV, , GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( DeleteProgramsNV, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ExecuteProgramNV, , GLenum, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GenProgramsNV, , GLsizei, GLuint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramParameterdvNV, , GLenum, GLuint, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramParameterfvNV, , GLenum, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramivNV, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetProgramStringNV, , GLuint, GLenum, GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( GetTrackMatrixivNV, , GLenum, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribdvNV, , GLuint, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribfvNV, , GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribivNV, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribPointervNV, , GLuint, GLenum, GLvoid ** ) \
    FGPP_GL_FUNCTION_NUM( IsProgramNV, GLboolean, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( LoadProgramNV, , GLenum, GLuint, GLsizei, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameter4dNV, , GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameter4dvNV, , GLenum, GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameter4fNV, , GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameter4fvNV, , GLenum, GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameters4dvNV, , GLenum, GLuint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( ProgramParameters4fvNV, , GLenum, GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( RequestResidentProgramsNV, , GLsizei, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( TrackMatrixNV, , GLenum, GLuint, GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribPointerNV, , GLuint, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1dNV, , GLuint, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1dvNV, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1fNV, , GLuint, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1fvNV, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1sNV, , GLuint, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib1svNV, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2dNV, , GLuint, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2dvNV, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2fNV, , GLuint, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2fvNV, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2sNV, , GLuint, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib2svNV, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3dNV, , GLuint, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3dvNV, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3fNV, , GLuint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3fvNV, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3sNV, , GLuint, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib3svNV, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4dNV, , GLuint, GLdouble, GLdouble, GLdouble, GLdouble ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4dvNV, , GLuint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4fNV, , GLuint, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4fvNV, , GLuint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4sNV, , GLuint, GLshort, GLshort, GLshort, GLshort ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4svNV, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4ubNV, , GLuint, GLubyte, GLubyte, GLubyte, GLubyte ) \
    FGPP_GL_FUNCTION_VOID( VertexAttrib4ubvNV, , GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs1dvNV, , GLuint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs1fvNV, , GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs1svNV, , GLuint, GLsizei, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs2dvNV, , GLuint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs2fvNV, , GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs2svNV, , GLuint, GLsizei, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs3dvNV, , GLuint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs3fvNV, , GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs3svNV, , GLuint, GLsizei, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs4dvNV, , GLuint, GLsizei, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs4fvNV, , GLuint, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs4svNV, , GLuint, GLsizei, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribs4ubvNV, , GLuint, GLsizei, const GLubyte * ) \
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
    FGPP_GL_FUNCTION_VOID( VertexAttribI1iEXT, , GLuint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2iEXT, , GLuint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3iEXT, , GLuint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4iEXT, , GLuint, GLint, GLint, GLint, GLint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1uiEXT, , GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2uiEXT, , GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3uiEXT, , GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4uiEXT, , GLuint, GLuint, GLuint, GLuint, GLuint ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1ivEXT, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2ivEXT, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3ivEXT, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4ivEXT, , GLuint, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI1uivEXT, , GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI2uivEXT, , GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI3uivEXT, , GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4uivEXT, , GLuint, const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4bvEXT, , GLuint, const GLbyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4svEXT, , GLuint, const GLshort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4ubvEXT, , GLuint, const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribI4usvEXT, , GLuint, const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( VertexAttribIPointerEXT, , GLuint, GLint, GLenum, GLsizei, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribIivEXT, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVertexAttribIuivEXT, , GLuint, GLenum, GLuint * ) \
\
    /* GL_NV_video_capture */ \
    FGPP_GL_FUNCTION_VOID( BeginVideoCaptureNV, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( BindVideoCaptureStreamBufferNV, , GLuint, GLuint, GLenum, GLintptrARB ) \
    FGPP_GL_FUNCTION_VOID( BindVideoCaptureStreamTextureNV, , GLuint, GLuint, GLenum, GLenum, GLuint ) \
    FGPP_GL_FUNCTION_VOID( EndVideoCaptureNV, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( GetVideoCaptureivNV, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVideoCaptureStreamivNV, , GLuint, GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetVideoCaptureStreamfvNV, , GLuint, GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetVideoCaptureStreamdvNV, , GLuint, GLuint, GLenum, GLdouble * ) \
    FGPP_GL_FUNCTION_NUM( VideoCaptureNV, GLenum, , GLuint, GLuint *, GLuint64EXT * ) \
    FGPP_GL_FUNCTION_VOID( VideoCaptureStreamParameterivNV, , GLuint, GLuint, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( VideoCaptureStreamParameterfvNV, , GLuint, GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( VideoCaptureStreamParameterdvNV, , GLuint, GLuint, GLenum, const GLdouble * ) \
\
    /* GL_OML_interlace */ \
\
    /* GL_OML_resample */ \
\
    /* GL_OML_subsample */ \
\
    /* GL_PGI_misc_hints */ \
    FGPP_GL_FUNCTION_VOID( HintPGI, , GLenum, GLint ) \
\
    /* GL_PGI_vertex_hints */ \
\
    /* GL_REND_screen_coordinates */ \
\
    /* GL_S3_s3tc */ \
\
    /* GL_SGIS_detail_texture */ \
    FGPP_GL_FUNCTION_VOID( DetailTexFuncSGIS, , GLenum, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetDetailTexFuncSGIS, , GLenum, GLfloat * ) \
\
    /* GL_SGIS_fog_function */ \
    FGPP_GL_FUNCTION_VOID( FogFuncSGIS, , GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetFogFuncSGIS, , GLfloat * ) \
\
    /* GL_SGIS_generate_mipmap */ \
\
    /* GL_SGIS_multisample */ \
    FGPP_GL_FUNCTION_VOID( SampleMaskSGIS, , GLclampf, GLboolean ) \
    FGPP_GL_FUNCTION_VOID( SamplePatternSGIS, , GLenum ) \
\
    /* GL_SGIS_pixel_texture */ \
    FGPP_GL_FUNCTION_VOID( PixelTexGenParameteriSGIS, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( PixelTexGenParameterivSGIS, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( PixelTexGenParameterfSGIS, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PixelTexGenParameterfvSGIS, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelTexGenParameterivSGIS, , GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetPixelTexGenParameterfvSGIS, , GLenum, GLfloat * ) \
\
    /* GL_SGIS_point_line_texgen */ \
\
    /* GL_SGIS_point_parameters */ \
    FGPP_GL_FUNCTION_VOID( PointParameterfSGIS, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( PointParameterfvSGIS, , GLenum, const GLfloat * ) \
\
    /* GL_SGIS_sharpen_texture */ \
    FGPP_GL_FUNCTION_VOID( SharpenTexFuncSGIS, , GLenum, GLsizei, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetSharpenTexFuncSGIS, , GLenum, GLfloat * ) \
\
    /* GL_SGIS_texture4D */ \
    FGPP_GL_FUNCTION_VOID( TexImage4DSGIS, , GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( TexSubImage4DSGIS, , GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid * ) \
\
    /* GL_SGIS_texture_border_clamp */ \
\
    /* GL_SGIS_texture_color_mask */ \
    FGPP_GL_FUNCTION_VOID( TextureColorMaskSGIS, , GLboolean, GLboolean, GLboolean, GLboolean ) \
\
    /* GL_SGIS_texture_edge_clamp */ \
\
    /* GL_SGIS_texture_filter4 */ \
    FGPP_GL_FUNCTION_VOID( GetTexFilterFuncSGIS, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexFilterFuncSGIS, , GLenum, GLenum, GLsizei, const GLfloat * ) \
\
    /* GL_SGIS_texture_lod */ \
\
    /* GL_SGIS_texture_select */ \
\
    /* GL_SGIX_async */ \
    FGPP_GL_FUNCTION_VOID( AsyncMarkerSGIX, , GLuint ) \
    FGPP_GL_FUNCTION_NUM( FinishAsyncSGIX, GLint, , GLuint * ) \
    FGPP_GL_FUNCTION_NUM( PollAsyncSGIX, GLint, , GLuint * ) \
    FGPP_GL_FUNCTION_NUM( GenAsyncMarkersSGIX, GLuint, , GLsizei ) \
    FGPP_GL_FUNCTION_VOID( DeleteAsyncMarkersSGIX, , GLuint, GLsizei ) \
    FGPP_GL_FUNCTION_NUM( IsAsyncMarkerSGIX, GLboolean, , GLuint ) \
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
    FGPP_GL_FUNCTION_VOID( FlushRasterSGIX ) \
\
    /* GL_SGIX_fog_offset */ \
\
    /* GL_SGIX_fragment_lighting */ \
    FGPP_GL_FUNCTION_VOID( FragmentColorMaterialSGIX, , GLenum, GLenum ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightfSGIX, , GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightfvSGIX, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightiSGIX, , GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightivSGIX, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightModelfSGIX, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightModelfvSGIX, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightModeliSGIX, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( FragmentLightModelivSGIX, , GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( FragmentMaterialfSGIX, , GLenum, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( FragmentMaterialfvSGIX, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( FragmentMaterialiSGIX, , GLenum, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( FragmentMaterialivSGIX, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetFragmentLightfvSGIX, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetFragmentLightivSGIX, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( GetFragmentMaterialfvSGIX, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetFragmentMaterialivSGIX, , GLenum, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( LightEnviSGIX, , GLenum, GLint ) \
\
    /* GL_SGIX_framezoom */ \
    FGPP_GL_FUNCTION_VOID( FrameZoomSGIX, , GLint ) \
\
    /* GL_SGIX_igloo_interface */ \
    FGPP_GL_FUNCTION_VOID( IglooInterfaceSGIX, , GLenum, const GLvoid * ) \
\
    /* GL_SGIX_instruments */ \
    FGPP_GL_FUNCTION_NUM( GetInstrumentsSGIX, GLint ) \
    FGPP_GL_FUNCTION_VOID( InstrumentsBufferSGIX, , GLsizei, GLint * ) \
    FGPP_GL_FUNCTION_NUM( PollInstrumentsSGIX, GLint, , GLint * ) \
    FGPP_GL_FUNCTION_VOID( ReadInstrumentsSGIX, , GLint ) \
    FGPP_GL_FUNCTION_VOID( StartInstrumentsSGIX ) \
    FGPP_GL_FUNCTION_VOID( StopInstrumentsSGIX, , GLint ) \
\
    /* GL_SGIX_interlace */ \
\
    /* GL_SGIX_ir_instrument1 */ \
\
    /* GL_SGIX_list_priority */ \
    FGPP_GL_FUNCTION_VOID( GetListParameterfvSGIX, , GLuint, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetListParameterivSGIX, , GLuint, GLenum, GLint * ) \
    FGPP_GL_FUNCTION_VOID( ListParameterfSGIX, , GLuint, GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ListParameterfvSGIX, , GLuint, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ListParameteriSGIX, , GLuint, GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( ListParameterivSGIX, , GLuint, GLenum, const GLint * ) \
\
    /* GL_SGIX_pixel_texture */ \
    FGPP_GL_FUNCTION_VOID( PixelTexGenSGIX, , GLenum ) \
\
    /* GL_SGIX_pixel_tiles */ \
\
    /* GL_SGIX_polynomial_ffd */ \
    FGPP_GL_FUNCTION_VOID( DeformationMap3dSGIX, , GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble * ) \
    FGPP_GL_FUNCTION_VOID( DeformationMap3fSGIX, , GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( DeformSGIX, , GLbitfield ) \
    FGPP_GL_FUNCTION_VOID( LoadIdentityDeformationMapSGIX, , GLbitfield ) \
\
    /* GL_SGIX_reference_plane */ \
    FGPP_GL_FUNCTION_VOID( ReferencePlaneSGIX, , const GLdouble * ) \
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
    FGPP_GL_FUNCTION_VOID( SpriteParameterfSGIX, , GLenum, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( SpriteParameterfvSGIX, , GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( SpriteParameteriSGIX, , GLenum, GLint ) \
    FGPP_GL_FUNCTION_VOID( SpriteParameterivSGIX, , GLenum, const GLint * ) \
\
    /* GL_SGIX_subsample */ \
\
    /* GL_SGIX_tag_sample_buffer */ \
    FGPP_GL_FUNCTION_VOID( TagSampleBufferSGIX ) \
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
    FGPP_GL_FUNCTION_VOID( ColorTableSGI, , GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( ColorTableParameterfvSGI, , GLenum, GLenum, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ColorTableParameterivSGI, , GLenum, GLenum, const GLint * ) \
    FGPP_GL_FUNCTION_VOID( CopyColorTableSGI, , GLenum, GLenum, GLint, GLint, GLsizei ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableSGI, , GLenum, GLenum, GLenum, GLvoid * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableParameterfvSGI, , GLenum, GLenum, GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( GetColorTableParameterivSGI, , GLenum, GLenum, GLint * ) \
\
    /* GL_SGI_texture_color_table */ \
\
    /* GL_SUNX_constant_data */ \
    FGPP_GL_FUNCTION_VOID( FinishTextureSUNX ) \
\
    /* GL_SUN_convolution_border_modes */ \
\
    /* GL_SUN_global_alpha */ \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactorbSUN, , GLbyte ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactorsSUN, , GLshort ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactoriSUN, , GLint ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactorfSUN, , GLfloat ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactordSUN, , GLdouble ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactorubSUN, , GLubyte ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactorusSUN, , GLushort ) \
    FGPP_GL_FUNCTION_VOID( GlobalAlphaFactoruiSUN, , GLuint ) \
\
    /* GL_SUN_mesh_array */ \
    FGPP_GL_FUNCTION_VOID( DrawMeshArraysSUN, , GLenum, GLint, GLsizei, GLsizei ) \
\
    /* GL_SUN_slice_accum */ \
\
    /* GL_SUN_triangle_list */ \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiSUN, , GLuint ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeusSUN, , GLushort ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeubSUN, , GLubyte ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuivSUN, , const GLuint * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeusvSUN, , const GLushort * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeubvSUN, , const GLubyte * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodePointerSUN, , GLenum, GLsizei, const GLvoid ** ) \
\
    /* GL_SUN_vertex */ \
    FGPP_GL_FUNCTION_VOID( Color4ubVertex2fSUN, , GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Color4ubVertex2fvSUN, , const GLubyte *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Color4ubVertex3fSUN, , GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Color4ubVertex3fvSUN, , const GLubyte *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Color3fVertex3fSUN, , GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Color3fVertex3fvSUN, , const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Normal3fVertex3fSUN, , GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Normal3fVertex3fvSUN, , const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( Color4fNormal3fVertex3fSUN, , GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( Color4fNormal3fVertex3fvSUN, , const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fVertex3fSUN, , GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fVertex3fvSUN, , const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4fVertex4fSUN, , GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4fVertex4fvSUN, , const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fColor4ubVertex3fSUN, , GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fColor4ubVertex3fvSUN, , const GLfloat *, const GLubyte *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fColor3fVertex3fSUN, , GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fColor3fVertex3fvSUN, , const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fNormal3fVertex3fSUN, , GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fNormal3fVertex3fvSUN, , const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fColor4fNormal3fVertex3fSUN, , GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord2fColor4fNormal3fVertex3fvSUN, , const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4fColor4fNormal3fVertex4fSUN, , GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( TexCoord4fColor4fNormal3fVertex4fvSUN, , const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiVertex3fSUN, , GLuint, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiVertex3fvSUN, , const GLuint *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiColor4ubVertex3fSUN, , GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiColor4ubVertex3fvSUN, , const GLuint *, const GLubyte *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiColor3fVertex3fSUN, , GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiColor3fVertex3fvSUN, , const GLuint *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiNormal3fVertex3fSUN, , GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiNormal3fVertex3fvSUN, , const GLuint *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiColor4fNormal3fVertex3fSUN, , GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiColor4fNormal3fVertex3fvSUN, , const GLuint *, const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fVertex3fSUN, , GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fVertex3fvSUN, , const GLuint *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN, , GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN, , const GLuint *, const GLfloat *, const GLfloat *, const GLfloat * ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN, , GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat ) \
    FGPP_GL_FUNCTION_VOID( ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN, , const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat * ) \
\
    /* GL_WIN_phong_shading */ \
\
    /* GL_WIN_specular_fog */ \

#endif  // FGPP_GL_FUNCTIONS_H
