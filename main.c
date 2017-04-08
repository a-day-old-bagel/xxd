/*
 * This program will do exactly what xxd normally does.
 */

#include "xxd.h"

int main(int argc, char **argv) {
  xxd(stdin, stdout, argc, argv);
}