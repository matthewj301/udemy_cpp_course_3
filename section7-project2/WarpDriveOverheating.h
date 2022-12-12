//
// Created by Matthew Johnson on 12/8/22.
//

#ifndef UDEMY_CPP_COURSE_3_WARPDRIVEOVERHEATING_H
#define UDEMY_CPP_COURSE_3_WARPDRIVEOVERHEATING_H
#include "stdexcept"

using namespace std;

class WarpDriveOverheating : public overflow_error {
  public:
    WarpDriveOverheating() : overflow_error("Warp drive has exceeded safe temperature tolerance."){}
};

#endif //UDEMY_CPP_COURSE_3_WARPDRIVEOVERHEATING_H
