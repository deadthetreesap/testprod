#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw.hi>
#include <string>
namespace en {
  
  class EnWindow{
    
  public:
    EnWindow(int w, int h, std::string name);
    ~EnWindow();
    
  private: 
      void initWindow();
      
      const int width;
      const int height
      
      std::string windowName;  
      GLFWwindow *window;
  }
}
