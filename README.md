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

int main()
{
        using namespace std::capture;

        StdCapture stdcap;

        // Start capture.
        stdcap.BeginCapture();

        std::cout << "Hello world!" << std::endl;

        stdcap.EndCapture();

        // Print out what has been captured so far.
        std::cout << "Captured: " << stdcap.GetCapture();

        return 0;
}
```


