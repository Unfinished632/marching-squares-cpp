#include "program.h"
#include "macros.h"

#undef main

int main(int argc, char* argv[]){
    Program* program = new Program();

    program->Start();
    delete program;
    
    PAUSE();

    return 0;
}