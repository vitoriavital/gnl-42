# Get Next Line Project

<p align="center">
  <img src="https://game.42sp.org.br/static/assets/achievements/get_next_linem.png" alt="Printf Achievement" width="200" height="200">
  <img src="https://res.cloudinary.com/dfjub9qt4/image/upload/v1707315178/gnl_42.png" alt="Printf Square" width="200" height="200">
</p>


## Introduction


The "Get Next Line" (GNL) project involves creating a function that reads a line from a file descriptor. This function utilizes static variables, file descriptors (fd), memory allocation (malloc), and deallocation (free) to read one line at a time from a text file pointed to by the given file descriptor. The line is considered to be the sequence of characters ending with either a newline character (\n) or the end of the file.

During compilation, the BUFFER SIZE is specified, allowing flexibility, but if not provided, it defaults to a fixed size of 42. The primary objective is to implement a robust function capable of efficiently reading lines from a file descriptor, ensuring proper memory management and handling of end-of-file conditions.

## Description

<p align="center">
  <img src="https://www.codequoi.com/wp-content/uploads/2022/10/file_descriptors_en.drawio.png" alt="FIle Descriptor Schema"><br>
</p>

```bash
char *get_next_line(int fd);
```
The get_next_line function serves to retrieve the subsequent line from the specified file descriptor (fd). Upon successful execution, it returns the memory address pointing to the read line. The expected behavior is to return NULL in case of an error or when there is no additional content to read. This function ensures seamless handling of diverse scenarios, offering a reliable mechanism for reading lines from the given file descriptor.

## Installation

Clone the repository to your local machine:

```bash
git clone https://github.com/vitoriavital/get-next-line.git
```

## Usage

1. Include the get_next_line.h header file in your C program:
```bash
#include "get_next_line.h"
```

3. Compile your program with the get_next_line.c file:
```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=your_chosen_buffer_size your_source_files.c -o your_output_binary
```

3. Run your compiled program:
```bash
./your_output_binary
```


## Bonus Features
In addition to the standard functionality, the get_next_line function has been extended to manage multiple file descriptors simultaneously. It is now capable of reading from a different file descriptor with each call, ensuring that the reading thread of each file descriptor is maintained without interference.

This enhanced feature ensures that the function can read from distinct file descriptors in a multi-threaded fashion, without compromising the integrity of each reading thread. Files marked with "_bonus" denote an upgraded version that provides this enhanced functionality for a more versatile usage scenario.
