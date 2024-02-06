#pragma once
#include "Triangulation.h"
#include <string>

namespace Shapes3D
{
    class StlWriter
    {
    public:
        StlWriter();
        ~StlWriter();

        void write(std::string &filePath, Triangulation &triangulationObj);
    };
}
