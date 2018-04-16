//
// Created by MI on 04/16/2018.
//

#ifndef EUROBOT2018R1_CUBES_H
#define EUROBOT2018R1_CUBES_H

#define CUBES_NUM 5
#define EDGE_CUBES_NUM 4
#define INIT_CUBE 1
#define NULL_CUBE 5

#define PATTERNS_NUM 12
#define PAT3_LEN 3
#define PER_LEN 3

typedef struct {
    char step;
    char push;
} Step;

typedef struct {
    char steps;
    char shift;
} Weight;

char diff(char cube, char cube1);

int cmp(Weight weight, Weight weight1);

void freeCubes(char *cube, char *cube1, const unsigned char *pat3);

void generatePattern(char *pattern, const char *permutation);

void normalizePattern(char *pattern);

Weight patternWeight(char *pattern);

Step *sequence(int *sequenceLen, const unsigned char *pat3);

#endif //EUROBOT2018R1_CUBES_H
