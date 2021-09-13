# stdcapture: capture stdout/stderr

Capture stdout/stderr streams, e.g. for forwarding content to other streams.

All credits go to rmflow, Sir Digby Chicken Caesar, and Staszek who proposed this implementation on [StackOverflow](https://stackoverflow.com/a/68348821/4063520).

## Building

```
mkdir build
cd build
cmake ..
make
```

## Usage Example

```c++
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
```

Sample output:

```
Captured from stdout: Hello, stdout!
Captured from stderr: Hello, stderr!
```

