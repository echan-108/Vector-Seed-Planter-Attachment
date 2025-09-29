cmake_minimum_required(VERSION 3.13)

# Include the Pico SDK
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(servo_control)

# Initialize the SDK
pico_sdk_init()

# Add your executable
add_executable(servo_control
    src/main.cpp
)

# Pull in our pico_stdlib which aggregates commonly used features
target_link_libraries(servo_control
    pico_stdlib
    hardware_pwm
    hardware_gpio
)

# Enable USB output, disable UART output
pico_enable_stdio_usb(servo_control 1)
pico_enable_stdio_uart(servo_control 0)

# Create map/bin/hex/uf2 files
pico_add_extra_outputs(servo_control)
