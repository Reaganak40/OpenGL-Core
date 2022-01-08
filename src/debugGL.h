#pragma once
#include <GL/glew.h>

#define ASSERT(x) if (!(x)) __debugbreak();
#define GLCall(x) GLClearError();\
    x;\
    ASSERT(GLLogCall(#x, __FILE__, __LINE__));

#define ApplicationBreak(x) CoreError(x);\
    ASSERT(false);

void GLClearError();
bool GLLogCall(const char* function, const char* file, int line);
void CoreError(const char* error);