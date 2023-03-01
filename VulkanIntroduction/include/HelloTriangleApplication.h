#pragma once

#include <vulkan/vulkan.h>
#include <vector>

#define TITLE "Vulkan Introduction"
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

const std::vector<const char*> validationLayers = {
	"VK_LAYER_KHRONOS_validation"
};

#ifdef NDEBUG
const bool enableValidationLayers = false;
#else
const bool enableValidationLayers = true;
#endif

class GLFWwindow;

class HelloTriangleApplication {
public:
	HelloTriangleApplication();
	~HelloTriangleApplication();

	void run();

private:
	void initWindow();
	void initVulkan();
	void createInstance();
	void mainLoop();
	void cleanup();

	bool checkValidationLayerSupport();

	GLFWwindow* window;
	uint32_t glfwExtensionCount;

	VkInstance instance;
	VkApplicationInfo appInfo{};
	VkInstanceCreateInfo createInfo{};
};
