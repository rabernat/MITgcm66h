C $Header$
C
C     /==========================================================\
C     | RDXG_MACROS.h                                             |
C     |==========================================================|
C     | These macros are used to reduce memory requirement and/or|
C     | memory references when variables are fixed along a given |
C     | axis or axes.                                            |
C     \==========================================================/

#ifdef RDXG_CONST
#define  _rdxG(i,j,bi,bj) rdxG(1,1,1,1)
#endif

#ifdef RDXG_FX
#define  _rdxG(i,j,bi,bj) rdxG(i,1,bi,1)
#endif

#ifdef RDXG_FY
#define  _rdxG(i,j,bi,bj) rdxG(1,j,1,bj)
#endif

#ifndef _rdxG
#define  _rdxG(i,j,bi,bj) rdxG(i,j,bi,bj)
#endif
