#include <stdio.h>
#include <stdlib.h>

enum Status{
 off, waitstate, servinguserstate, controllevelstate, desiredfloorstate
};

enum Status status = turn on, buttonpress,checkfloorlevel,currentfloor, exit;

int turn on;


int main() {

  switch(status){

      case off:

    if (turn on)
    status = waitstate;
    break ;

case waitstate:
        if(buttonpress)
        status = servinguserstate;
        else
        status = waitstate;
        break;

case servinguserstate:
        if (checkfloorlevel)
        status = servinguserstate;
        else
        status = controllevelstate;
          
case controllevelstate:
          if (currentfloor)
          status = controllevelstate;
          else
          status = desiredfloorstate;

case desiredfloorstate:
        if (exit)
        status = waitstate;
       
        break;
    default:
        break;
}
}
