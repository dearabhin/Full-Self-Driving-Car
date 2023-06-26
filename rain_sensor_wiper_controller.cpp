#include <iostream>

class RainSensor {
public:
    bool isRaining() {
        // Simulate rain detection logic
        // You can replace this with actual sensor data acquisition
        // Return true if rain is detected, false otherwise
        // For simplicity, we'll assume rain is detected randomly
        return (rand() % 2) == 0;
    }
};

class WiperController {
public:
    void activateWipers() {
        // Simulate wiper activation logic
        std::cout << "Wipers activated." << std::endl;
    }
};

class SelfDrivingCar {
private:
    RainSensor rainSensor;
    WiperController wiperController;

public:
    void checkRainAndActivateWipers() {
        if (rainSensor.isRaining()) {
            wiperController.activateWipers();
        }
    }
};

int main() {
    SelfDrivingCar car;

    // Simulate continuous monitoring for rain and activating the wipers
    while (true) {
        car.checkRainAndActivateWipers();
        // Delay for some time before checking again
        // You can adjust the delay based on your needs
        // For simplicity, we'll use a delay of 1 second (1000 milliseconds)
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

    return 0;
}
