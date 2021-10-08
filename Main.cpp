#include <pspkernel.h>
#include <pspdebug.h>

PSP_MODULE_INFO("Tutorial", 0, 1, 0);
// PSP Sample Code for Hello World
auto main() -> int {
	// Function primes PSP for displaying text on screen. 
	pspDebugScreenInit();
	// Function will output/print text on the screen. 
	pspDebugScreenPrint("Hello world! - Nagato. Message written in C++");
}