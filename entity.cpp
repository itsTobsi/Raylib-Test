#include "entity.h"

// This doesn't work for some reason. The Hitbox works, the image is loaded. But I need to test if there is anything being loaded at all. Don't think there is.
// Try and get the Image before everything. So all "I" have to do is load the image beforehand and point to the image.
entity::entity(std::string fileLocal, int AnimationFramesPrLine, int AnimationFrameLines, int FrameHeight, int FrameWidth)
{
    width = FrameWidth;
    height = FrameHeight;
    image = LoadImage(fileLocal.c_str());
    tex = LoadTextureFromImage(image); // Frames = 4x4 (4 frames on each axis)
    position = {0.0f, 0.0f};
    physicsPosition = {0.0f, 0.0f};
    frameRect = {0, 0, width, height};
    hitbox = {position.x, position.y, width, height};
    animFramesPrLine = AnimationFramesPrLine;
    animFrameLines = AnimationFrameLines;
    currentFrame = 0;
    currentLine = 0;
    frameCounter = 0;
    bool isAnimActive = false;
}

entity::~entity()
{
    UnloadImage(image);
}

void entity::debugLog(){
    std::cout << "Image: " << image.data << std::endl; 
    std::cout << "Texture2D: " << tex.format << std::endl; 
    std::cout << "position: " << position.x << " ; " << position.y << std::endl; 
    std::cout << "frameRect height: " << frameRect.height << std::endl; 
    std::cout << "frameRect width: " << frameRect.width << std::endl; 
    std::cout << "Width: " << width << std::endl; 
    std::cout << "Height: " << height << std::endl; 
    std::cout << "animFramesPrLine ; animFrameLines: " << animFramesPrLine << " ; " << animFrameLines << std::endl; 
    
    //std::cout << "What: " << a << std::endl;
}


void entity::updatePlayerPhysics(){
    /*position.x += OFFSET;
    position.y += OFFSET;*/
}