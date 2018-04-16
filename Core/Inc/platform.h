//
// Created by MI on 04/16/2018.
//

#ifndef EUROBOT2018R1_PLATFORM_H
#define EUROBOT2018R1_PLATFORM_H

#include "orientation.h"
#define MODE_REL 0
#define MODE_ABS 1

void platform_start(Point point, int angle);
void platform_stop();

void platform_move(Point point, int mode);
void platform_rotate(int angle, int mode);
void platform_moveAndRotate(Point point, int angle, int mode);

#endif //EUROBOT2018R1_PLATFORM_H
