#include "../headers/Triangulation.h"
#include "../headers/Point3D.h"
#include "../headers/Triangle.h"
#include <vector>

Shapes3D::Triangulation::Triangulation()
{
}

Shapes3D::Triangulation::~Triangulation()
{
}

// vector for storing unique points
std::vector<Shapes3D::Point3D> Shapes3D::Triangulation::uniquePoints() const
{
    return mUniquePoints;
}

// vector for storing triangles
std::vector<Shapes3D::Triangle> Shapes3D::Triangulation::triangles() const
{
    return mTriangles;
}

// vector for storing unique normals
std::vector<Shapes3D::Point3D> Shapes3D::Triangulation::uniqueNormals() const
{
    return mUniqueNormals;
}

// adds a point to mUniquePoints vector
void Shapes3D::Triangulation::addUniquePointToTriangulation(const Shapes3D::Point3D point)
{
    mUniquePoints.push_back(point);
}

// adds a triangle to mTriangles vector
void Shapes3D::Triangulation::addTriangleToTriangulation(const Shapes3D::Triangle triangle)
{
    mTriangles.push_back(triangle);
}

// adds a normal to mUniqueNormals vector
void Shapes3D::Triangulation::addUniqueNormalToTriangulation(const Shapes3D::Point3D normal)
{
    mUniqueNormals.push_back(normal);
}