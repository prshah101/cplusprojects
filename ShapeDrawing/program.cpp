#include "splashkit.h"

void draw_house_scene()
{
    clear_screen(COLOR_WHITE);
    fill_ellipse(COLOR_GREEN, 0, 400, 800, 400);
    fill_rectangle(COLOR_GRAY, 300, 300, 200, 200);
    fill_triangle(COLOR_RED, 250, 300, 400, 150, 550, 300);
    refresh_screen(60);
}

void second_scene()
{
    clear_screen(COLOR_WHITE);
    fill_ellipse(COLOR_DARK_GRAY, 0, 400, 800, 400);
    fill_rectangle(COLOR_DARK_CYAN, 375, 100, 300, 400);
    fill_rectangle(COLOR_STEEL_BLUE, 100, 100, 100, 400);
    fill_rectangle(COLOR_DARK_GREEN, 600, 175, 100, 350);
    fill_rectangle(COLOR_DARK_MAGENTA, 200, 150, 150, 400);
    fill_rectangle(COLOR_DARK_ORCHID, 400, 350, 250, 200);
    fill_triangle(COLOR_NAVAJO_WHITE, 50, 550, 250, 350, 350, 550);
    fill_ellipse(COLOR_YELLOW, 0, 0, 100, 100);
    refresh_screen(60);
}

int main()
{
    open_window("Shapes by Prerna", 800, 600);

    draw_house_scene();
    delay(1000);

    second_scene();
    delay(1000);

    draw_house_scene();
    delay(1000);

    second_scene();
    delay(1000);

    return 0;
}