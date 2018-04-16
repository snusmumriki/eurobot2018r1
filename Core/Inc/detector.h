//
// Created by MI on 04/16/2018.
//

#include "orientation.h"

#ifndef EUROBOT2018R1_DETETECTOR_H
#define EUROBOT2018R1_DETETECTOR_H

#define DIFF 0.5f
#define SAMPLES_NUM 9
#define STEPS_MAX 16
#define STEPS (STEPS_MAX - SAMPLES_NUM / 2)

void detector_getCubePos(Point *point, int *angle, const int *samples);

#endif //EUROBOT2018R1_DETETECTOR_H
