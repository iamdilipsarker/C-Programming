#include <stdio.h>

#include <conio.h>

#include <graphics.h>

main ()

{
    int driver, mode;

    driver = detect;

    initgraph ("&driver, &mode");

    circle (30, 30, 20);

    getch ();

    closegraph ();    
}