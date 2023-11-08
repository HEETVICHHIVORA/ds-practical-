#include <stdio.h>
#include <graphics.h>
#include <math.h>

void translate() {
    int gd = DETECT, gm;
    printf("Enter the vertices of the triangle: ");
    int x1, y1, x2, y2, x3, y3;
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, y3);
    printf("Enter tx and ty: ");
    int tx, ty;
    scanf("%d%d", &tx, &ty);
    initgraph(&gd, &gm, (char*)"");

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    line(x1 + tx, y1 + ty, x2 + tx, y2 + ty);
    line(x2 + tx, y2 + ty, x3 + tx, y3 + ty);
    line(x3 + tx, y3 + ty, x1 + tx, y1 + ty);
}

void rotate() {
    int gd = DETECT, gm;
    printf("Enter the vertices of the triangle: ");
    float x1, y1, x2, y2, x3, y3;
    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("Enter the reference point (xr, yr): ");
    float xr, yr;
    scanf("%f%f", &xr, &yr);
    printf("Enter the angle in degrees (theta): ");
    float ang;
    scanf("%f", &ang);
    float r = 0.0174532925 * ang;
    initgraph(&gd, &gm, (char*)"");

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    int x1new = xr + (cos(r) * (x1 - xr) - sin(r) * (y1 - yr));
    int y1new = yr + (sin(r) * (x1 - xr) + cos(r) * (y1 - yr));
    int x2new = xr + (cos(r) * (x2 - xr) - sin(r) * (y2 - yr));
    int y2new = yr + (sin(r) * (x2 - xr) + cos(r) * (y2 - yr));
    int x3new = xr + (cos(r) * (x3 - xr) - sin(r) * (y3 - yr));
    int y3new = yr + (sin(r) * (x3 - xr) + cos(r) * (y3 - yr));

    line(x1new, y1new, x2new, y2new);
    line(x2new, y2new, x3new, y3new);
    line(x3new, y3new, x1new, y1new);
}

void scale() {
    int gd = DETECT, gm;
    printf("Enter the vertices of the triangle: ");
    float x1, y1, x2, y2, x3, y3;
    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("Enter the reference point (xr, yr): ");
    float xr, yr;
    scanf("%f%f", &xr, &yr);
    printf("Enter the scaling factors (sx, sy): ");
    float sx, sy;
    scanf("%f%f", &sx, &sy);
    initgraph(&gd, &gm, (char*)"");

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    int x1new = xr + ((x1 - xr) * sx);
    int y1new = yr + ((y1 - yr) * sy);
    int x2new = xr + ((x2 - xr) * sx);
    int y2new = yr + ((y2 - yr) * sy);
    int x3new = xr + ((x3 - xr) * sx);
    int y3new = yr + ((y3 - yr) * sy);

    line(x1new, y1new, x2new, y2new);
    line(x2new, y2new, x3new, y3new);
    line(x3new, y3new, x1new, y1new);
}

int main() {
    printf("Choose a transformation:\n");
    printf("1. Translation\n");
    printf("2. Rotation\n");
    printf("3. Scaling\n");

    int n;
    scanf("%d", &n);

    switch (n) {
        case 1:
            translate();
            break;
        case 2:
            rotate();
            break;
        case 3:
            scale();
            break;
    }

    getch();
    return 0;
}
