//
// Created by MI on 04/16/2018.
//

#ifndef EUROBOT2018R1_MANIPULATOR_H
#define EUROBOT2018R1_MANIPULATOR_H

#include "cubes.h"

#define LEVER_PHASES_NUM
#define LEVER_FREQ_HIGH 20
#define LEVER_FREQ_LOW 20
#define TAKE_STEPS 20
#define TAKE_FREQ 20
#define ROTATION_RATE 50
#define ROTATION_FREQ 50
#define PUSH_RATE 20
#define PUSH_FREQ 20

typedef struct {
   int steps;
   int freq;
} LeverPhase;

typedef struct {
    int r;
    int g;
    int b;
} RGB;

void manpulator_up();

void manpulator_down();

void manpulator_take();

void manpulator_drop();

void manipulator_sort();

#endif //EUROBOT2018R1_MANIPULATOR_H
