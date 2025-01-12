#include <SDL2/SDL.h>
#include <iostream>

#define WIDTH 1280  
#define HEIGHT 720

bool running, fullscreen; // toogeables

SDL_Renderer * renderer;
SDL_Window * window;

int frameCount, timerFPS, lastFrame, lastTime, fps; // declaring some numbers that will be used for later

void update();
void input(); 
void draw();

int main(){
    running = 1;
    fullscreen = 0;
    static int lastTime = 0;

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) < 0) {
        std::cerr << "Failed at SDL Init: " << SDL_GetError() << std::endl;
        return -1;
    }

    window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        std::cerr << "Failed at SDL_CreateWindow: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return -1;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        std::cerr << "Failed at SDL_CreateRenderer: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return -1;
    }

    SDL_SetWindowTitle(window, "SDL2 Test window");
    SDL_ShowCursor(1);
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "2");

    while(running) {
        lastFrame = SDL_GetTicks(); // see what time it is
        if(lastFrame >= (lastFrame+1000))
        {
            lastTime=lastFrame;
            fps= frameCount;
            frameCount = 0 ;
        }

        update();
        input();
        draw();
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void update()
{
    if(fullscreen) SDL_SetWindowFullscreen(window, SDL_WINDOW_FULLSCREEN);
    if(!fullscreen) SDL_SetWindowFullscreen(window, 0);
}

void input()
{
    SDL_Event e;

    while(SDL_PollEvent(&e))
    {
        if(e.type == SDL_QUIT) running= false;
    }
    const Uint8 * Keystates = SDL_GetKeyboardState(NULL);
    if(Keystates[SDL_SCANCODE_ESCAPE]) running = false;
}

void draw()
{
    SDL_SetRenderDrawColor(renderer, 40, 30, 200, 255);
    SDL_Rect rect;

    rect.x = rect.y = 0;
    rect.w = WIDTH;
    rect.h = HEIGHT;

    SDL_RenderFillRect(renderer, &rect);

    frameCount++;

    int timerFPS = SDL_GetTicks()-lastFrame;
    if(timerFPS<(1000/60)){
        SDL_Delay((1000/60)-timerFPS);
    }
    std::cout << fps << std::endl;

    SDL_RenderPresent(renderer);
}