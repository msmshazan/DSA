#include <stdint.h>
#include <malloc.h>
#include <stdio.h>
#include <stdbool.h>

#ifdef _WIN32
#define DSAAPI  __declspec(dllexport)
#define DSACALL __cdecl
#else
#define DSAAPI
#define DSACALL
#endif