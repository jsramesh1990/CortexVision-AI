#include <iostream>
#include "image_processor.h"

// Include C functions in C++ properly
extern "C" {
    #include "hardware.h"
}

int main() {
    init_port();

    ImageProcessor processor;

    for(int i = 0; i < 5; i++) {
        processor.processFrame();
        processor.detectFaces();

        toggle_led();

        int button = read_button();
        if(button == 1) {
            std::cout << "Button Press Detected!" << std::endl;
        }
    }

    return 0;
}

