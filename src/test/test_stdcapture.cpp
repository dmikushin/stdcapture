#include "stdcapture/stdcapture.h"

#include <iostream>

int main()
{
	using namespace std::capture;

	// Perform stdout capture.
	CaptureStdout capout;
	capout.begin();
	std::cout << "Hello, stdout!" << std::endl;
	capout.end();

	// Print out what has been captured from stdout so far.
	std::cout << "Captured: " << capout.GetCapture();

        // Perform stderr capture.
        CaptureStderr caperr;
        caperr.begin();
        std::cerr << "Hello, stderr!" << std::endl;
        caperr.end();

        // Print out what has been captured from stderr so far.
        std::cout << "Captured: " << caperr.GetCapture();

	return 0;
}

