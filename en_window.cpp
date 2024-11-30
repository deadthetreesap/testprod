#include "en_window.hpp"

namespace en{
  EnWindow::EnWindow(int w, int h, std::String name) : width{w}, height{h}, windowName{name} {
    initWindow();
  }
    
    EnWindow::~EnWindow() {
      glfwDestroyWindow(window);
      glfwTerminate();
    }  

  void EnWindow::initWindow() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NP_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
  }
}
