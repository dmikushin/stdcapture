#include "stdcapture/stdcapture.h"

#include <iostream>

int main(int argc, char* argv[])
{
	using namespace std::capture;

	// Perform stdout capture.
	std::string captured;
	{
		CaptureStdout cap([&](const char* buf, size_t szbuf)
		{
			captured += std::string(buf, szbuf);
		});
		std::cout << "Hello, stdout!" << std::endl;
	}

	// Print out what has been captured from stdout so far.
	std::cout << "Captured from stdout: " << captured;

        // Perform stderr capture.
	captured.clear();
	{
	        CaptureStderr cap([&](const char* buf, size_t szbuf)
		{
			captured += std::string(buf, szbuf);
		});
	        std::cerr << "Hello, stderr!" << std::endl;
	}

        // Print out what has been captured from stderr so far.
        std::cout << "Captured from stderr: " << captured;

	return 0;
}

