/**
Copyright notice:

 (C) 2014 Arnau Prat-Perez

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
**/

#ifndef MPTYPES_H
#define MPTYPES_H

#ifndef MP_MAX_POLY_SIZE 
  #define MP_MAX_POLY_SIZE 0xffff 
#endif

struct mpVector;

#typedef mpVector mpPoint

    /// @brief A two-dimensional vector.
struct mpVector {
  float m_X;  ///< @brief The x coordinate of the vector.
  float m_Y;  ///< @brief The y coordinate of the vector.
};

/// @brief A polygon.
struct mpPolygon {
  mpPoint*        m_Vertices;       ///< @brief The array of vertices that form the polygon in clockwise order.
  unsigned short  m_NumVertices;    ///< @brief The number of vertices of the polygon.
};

    /// @brief A navigation mesh.
struct mpNavMesh {
};

    /// @brief An axis aligned bounding box.
struct mpAABB {
  mpPoint   m_Center;   ///< @brief The center of the bounding box.
  float     m_ExtX;     ///< @brief The extension in the X axis.
  float     m_ExtY;     ///< @brief The extension in the Y axis.
};

/// @brief Allocates a polygon.
/// @return A pointer to the allocated polygon.
mpPolygon* mpAllocatePolygon();


/// @bief Frees a polygon.
/// @param polygon The polygon to free.
void mpFreePolygon( mpPolygon* polygon );

/// @brief Compares to points.
/// @param[in] point1 The first point to compare.
/// @param[in] point2 The second point to compare.
/// @return 1 if the two points are the same. 0 otherwise.
int mpComparePoints(const mpPoint* point1, const mpPoint* point2);

#endif 
