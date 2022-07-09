#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    String^ name = args[0];
    String^ value = Environment::GetEnvironmentVariable(name);
    Console::Out->WriteLine(name + "=" + value);
    return 0;
}
