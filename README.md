# BoostSnippets

Welcome to BoostSnippets, a repository dedicated to offering a collection of concise and compact applications designed to familiarize users with the diverse components of the Boost library in C++.

## About This Repository

This repository features a series of small, easy-to-understand programs written in C++ using the Boost library. Each snippet focuses on a specific element of the library, demonstrating its usage and potential applications. The goal is to provide a hands-on learning experience for those new to Boost, as well as a quick reference for more experienced developers.

## Table of contents
1. [Contents](#contents)
1. [Prerequisites](#prerequisites)
2. [Installation and Usage](#installation)
3. [Usage](#usage)
   - [Prerequisites](#prerequisites)
   - [Repository cloning](#repository-cloning)
   - [Building the Snippets](#building-the-snippets)
   - [Running the Executables](#running-the-executables)
5. [Contributing](#contributing)
6. [License](#license)

## Contents

Each executable corresponds to a different aspect of the Boost library:

- **InputArguments**: Demonstrates Boost's `program_options` for parsing command-line arguments.
- **Any**: Shows how to use Boost's `any` for type-erased variables.
- **Variant**: Explores Boost's `variant` for type-safe unions.
- **Optional**: Illustrates Boost's optional for optional values handling.

## Usage

### Prerequisites

Before diving into the snippets, ensure you have the following prerequisites:

- A C++ compiler (GCC, Clang, etc.)
- The Boost library installed on your system (version 1.77 or newer)
- CMake (version 3.19.2 or newer)
- Make or Ninja

### Repository cloning

```bash
  git clone https://github.com/MaciekTW/BoostSnippets.git
 ```
The recommended way to use the project, is to open it with CLion. To do this, simply open the cloned directory using the IDE, all the targets will appear for selection in the top right corner in a drop-down list, from where they can be built and run simultaneously by pressing the green arrow. Those who, for whatever reason, wish to build applications manually, should follow the instructions below.

### Building the Snippets

1. **Navigate to the Repository Directory**: 
```bash
   cd BoostSnippets
```

2. **Create a Build Directory**: (optional, for out-of-source build)
```bash
   mkdir build && cd build
 ```

3. **Run CMake**: 
```bash
   cmake ..
 ```
This command will configure the project and generate the necessary build files. Ensure that CMake finds the Boost library. If Boost is installed in a non-standard location, you might need to specify the path using `-DBOOST_ROOT`.

4. **Build the Project**: 
```bash
   make
 ```
This will compile all the executable targets defined in the CMakeLists.txt file, such as `InputArguments`, `Any`, `Variant`, and `Optional`.

### Running the Executables

After building, you can find the executables in the build directory. Run them directly from the command line. For example:

- To run the `InputArguments` program:
```bash
   ./InputArguments [arguments]
```
- Similarly, execute `Any`, `Variant`, and others.

## Contributing

Contributions are welcome! If you have a snippet that demonstrates a useful feature of the Boost library, please feel free to open a pull request.

## License

MIT License

Copyright (c) 2023 MaciekTW

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
