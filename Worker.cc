#include "Worker.hh"

int Worker::Part1;
const int Worker::Part2 = 0x22;
const int Worker::Part3 = 0x44;

Worker::Worker() {
//        Worker::Part1 = 0x11;
}

 int Worker::part2()
{
	return Worker::Part2;
}

int Worker::part3()
{
	return Worker::Part3;
}

int Worker::part1()
{
    return Worker::Part1;
}

