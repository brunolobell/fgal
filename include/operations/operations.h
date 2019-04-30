#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "types/point2d.h"
#include "types/vector2d.h"

namespace fgal {
namespace operations {
    float points_distance(types::Point2D, types::Point2D);
    types::Vector2D vectors_sum(types::Vector2D, types::Vector2D);
    types::Vector2D vector_unit(types::Vector2D, types::Vector2D);
}
}

#endif