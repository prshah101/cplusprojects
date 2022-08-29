#include "splashkit.h"

void animate(int frame) //This procedure contains the background and the bird being animated.
{
    draw_bitmap("background", 0, 0);
    refresh_screen();
    delay(500);

    draw_text("Animation sequence vector created by pch.vector - www.freepik.com", COLOR_BLACK, "cred_font", 30, 20, 350);
    //<a href="https://www.freepik.com/vectors/animation-sequence">Animation sequence vector created by pch.vector - www.freepik.com</a>
    refresh_screen();
    
    if (frame == 4 ){
        draw_bitmap("bird1", -100, 0);
        refresh_screen();
        delay(500);
    }
    else if (frame == 3){
       draw_bitmap("bird2", 100, 0);
       refresh_screen();
       delay(500);
    }
    else if (frame == 2){
       draw_bitmap("bird3", 300, 0);
       refresh_screen();
       delay(500);
    }
    else {
       draw_bitmap("bird4", 600, 0);
       refresh_screen();
       delay(500);
    }
}

int main()
{
    sound_effect snd_effect; 

    //loading the bitmaps and opening the window
    open_window("Animation by Prerna", 656, 399);
    load_bitmap("background", "peace1.jpg");
    load_bitmap("bird1", "bird1.png");
    load_bitmap("bird2", "bird2.png");
    load_bitmap("bird3", "bird3.png");
    load_bitmap("bird4", "bird4.png");

    load_sound_effect("peaceful-sound", "peaceful.mp3");
    load_sound_effect("clock-sound", "clock.mp3");

    snd_effect = sound_effect_named("peaceful-sound");
    play_sound_effect(snd_effect);
    int frame = 4; //4 positions of bird, each time the procedure is called the bird is in a different position.
    animate(frame);
    frame --;
    animate(frame);
    frame --;
    animate(frame);
    frame --;
    animate(frame);
    frame --;
    stop_sound_effect(snd_effect);

    snd_effect = sound_effect_named("clock-sound");
    play_sound_effect(snd_effect);
    clear_screen(COLOR_BLACK);
    refresh_screen();
    delay(3000);

    return 0;
    
}
//Deakin Air posting (Note: I couldn't crop the video)
//https://video.deakin.edu.au/media/t/1_jhhgcvcf