// OpenCSG - library for image-based CSG rendering for OpenGL
// Copyright (C) 2002, 2003
// Hasso-Plattner-Institute at the University of Potsdam, Germany, and Florian Kirsch
//
// This library is free software; you can redistribute it and/or 
// modify it under the terms of the GNU General Public License, 
// Version 2, as published by the Free Software Foundation.
//
// This library is distributed in the hope that it will be useful, 
// but WITHOUT ANY WARRANTY; without even the implied warranty of 
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License 
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA

//
// openglHelper.h 
//
// trivial OpenGL stuff
//

#ifndef __OpenCSG__opengl_helper_h__
#define __OpenCSG__opengl_helper_h__

#include <opencsgConfig.h>
#include <GL/glew.h>
#include <vector>

namespace OpenCSG {

    namespace OpenGL {

        extern GLfloat projection[16];
            // copy of the projection matrix during CSG computation
        extern GLfloat modelview[16];
            // copy of the modelview matrix during CSG computation
        extern int canvasPos[4];
            // copy of the viewport size during CSG computation

        extern int stencilBits;
            // number of stencil bits in the pbuffer
        extern int stencilMax;
            // the number where the stencil value would "wrap around" to zero
        extern int stencilMask;
            // stencilMax - 1

        void scissor(float minx, float miny, float maxx, float maxy);
            // enables scissoring into area [minx, miny] x [maxx, maxy], which are
            // GIVEN IN NORMAL DEVICE COORDINDATES ( i.e., [-1 ... 1, -1 ... 1] ) 

        void drawQuad();
            // renders a full screen quad

    } // namespace OpenGL

} // namespace OpenCSG

#endif // __OpenCSG__opengl_helper_h__