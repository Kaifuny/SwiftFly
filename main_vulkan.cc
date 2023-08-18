#include <iostream>
#include <vulkan/vulkan.h>

int main(int argc, char **argv) {
  VkInstance instance;
  VkInstanceCreateInfo createInfo = {};

  VkResult result = vkCreateInstance(&createInfo, NULL, &instance);
  if (result == VK_SUCCESS) {
    printf("Instance created successful");
  } else {
    printf("Instance created failed to ERROR_CODE: %d", result);
  }
}
