//
// Created by MI on 04/16/2018.
//

#ifndef EUROBOT2018R1_CUBES_H
#define EUROBOT2018R1_CUBES_H

#define CUBES_NUM 5
#define EDGE_CUBES_NUM 4
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

void generatePattern(char pattern[CUBES_NUM], const char permutation[PER_LEN]);

void normalizePattern(char pattern[CUBES_NUM]);

Weight patternWeight(char init_cube, char pattern[CUBES_NUM]);

Step *getSequence(int *sequenceLen, char initCube, const unsigned char pat3[PAT3_LEN]);

#endif //EUROBOT2018R1_CUBES_H
