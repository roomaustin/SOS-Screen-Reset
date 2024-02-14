#include <iostream>
#include <chrono>
#include <thread>

// Function to push antenna boost
void pushAntennaBoost() {
    std::cout << "Antenna boost pushed\n";
}

// Function to reset the screen
void resetScreen() {
    std::cout << "Screen reset\n";
}

int main() {
    // Loop indefinitely for continuous signaling
    while (true) {
        // Signal SOS three times
        for (int i = 0; i < 3; ++i) {
            pushAntennaBoost(); // Push antenna boost
            std::this_thread::sleep_for(std::chrono::seconds(1)); // Wait for 1 second
        }

        resetScreen(); // Reset the screen
        std::this_thread::sleep_for(std::chrono::seconds(2)); // Wait for 2 seconds before repeating
    }

    return 0;
}
