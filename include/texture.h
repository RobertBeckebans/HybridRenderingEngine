#ifndef TEXTURE_H 
#define TEXTURE_H

/*
AUTHOR       : Angel Ortiz (angelo12 AT vt DOT edu)
PROJECT      : Hybrid Rendering Engine 
LICENSE      : This code is licensed under the MIT license (MIT) (http://opensource.org/licenses/MIT)
DATE	     : 2018-09-15
PURPOSE      : Load image textures to gpu memory and stored their ID along with their 
               width and height.
SPECIAL NOTES: Unify load api. Low priority. 
*/

//Includes
#include <string>
#include "shader.h"

struct Texture{
    void loadHDRTexture(const std::string &filePath);
    unsigned int loadDDSTexture(char const* Filename);
    void loadTexture(const std::string &filePath, bool sRGB);

    //TextureID is zero only if the texture has not been initialized properly
    //by OpenGl
    unsigned int textureID = 0;
    int width, height, nComponents;

    //Leftover from old non-pbr workflow. TODO:: cleanup and/or recuperate functionality
    std::string type, path;
};

#endif