//
// Created by MI on 04/16/2018.
//

#ifndef EUROBOT2018R1_ORIENTATION_H
#define EUROBOT2018R1_ORIENTATION_H

typedef struct {
    float x;
    float y;
} Point;

void getRobotState(Point *point, int *angle);

#endif //EUROBOT2018R1_ORIENTATION_H
