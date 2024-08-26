#include <windows.h>
#include <iostream>
#include <sstream>
#include <iomanip>

// Helper function to convert RGB to HEX
std::string rgbToHex(int r, int g, int b) {
    std::stringstream ss;
    ss << "#" << std::setw(2) << std::setfill('0') << std::hex << r
       << std::setw(2) << std::setfill('0') << std::hex << g
       << std::setw(2) << std::setfill('0') << std::hex << b;
    return ss.str();
}

int main() {
    // Main loop
    while (true) {
        // Get the cursor position
        POINT p;
        if (GetCursorPos(&p)) {
            // Get the device context for the entire screen
            HDC hdc = GetDC(NULL);

            // Get the colour of the pixel under the cursor
            COLORREF color = GetPixel(hdc, p.x, p.y);

            // Release the device context
            ReleaseDC(NULL, hdc);

            // Extract RGB components from COLORREF and convert to HEX
            int r = GetRValue(color);
            int g = GetGValue(color);
            int b = GetBValue(color);

            std::string hexColor = rgbToHex(r, g, b);

            // Print the HEX colour and cursor position
            std::cout << "HEX Color: " << hexColor << " at (" << p.x << ", " << p.y << ")" << std::endl;
        }

        // Wait for 1 second
        Sleep(1000);
    }

    return 0;
}
