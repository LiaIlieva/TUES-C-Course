#include <stdio.h>

#define COMMAND(NAME, TYPE) NAME ## _ ## TYPE ## _command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(say, Hello){
    printf("Hi");
}

void main(){
    say_Hello_command();
}