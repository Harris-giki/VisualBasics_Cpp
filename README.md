# Visual C++ Coding Practice Repository
Welcome to my Visual C++ Coding Practice Repository! This repository is dedicated to showcasing a collection of interactive and basic applications developed using Visual C++. The primary goal is to explore and understand the fundamental concepts of C++ programming, object-oriented design, and their practical outcomes through hands-on coding exercises. Ideal for anyone looking to strengthen their C++ programming skills with practical, simple projects.

## Repository Overview
This repository contains a variety of small projects and exercises designed to demonstrate key C++ concepts, including:

Object-Oriented Programming (OOP): Classes, inheritance, polymorphism, and encapsulation.
Basic Input/Output: Handling user input and displaying output.
Abstract Classes and Virtual Functions: Implementing abstract base classes and virtual methods.
Console Applications: Creating simple, interactive console-based applications.
Basic Data Structures: Using arrays, pointers, and basic data structures.

## Projects Included:
## 1. CppCLR WinForms Data Processor

This C++/CLI code creates a Windows Forms application where users import a text file containing matrix data. It then computes the sum of each column and displays the results, including runtime, data structure type, non-zero values count, and the computed polynomial result. The user interface includes buttons, list boxes, labels, and text boxes for interaction and display.

### Steps to Run the Project:

1. **Clone the Repository:**
   ```sh
   git clone <repository_url>
   cd <repository_directory>
   ```

2. **Open the Project in Visual Studio:**
   - Open Visual Studio.
   - Click on `File` -> `Open` -> `Project/Solution`.
   - Navigate to the cloned repository directory and open the solution file (`.sln`).

3. **Build the Project:**
   - Once the project is loaded, build it by clicking `Build` -> `Build Solution` or pressing `Ctrl+Shift+B`.

4. **Run the Project:**
   - After successfully building the project, run it by clicking `Debug` -> `Start Debugging` or pressing `F5`.

5. **Use the Application:**
   - The application window should appear.
   - Click on the `Import Values and Show Results` button.
   - Select a `.txt` any directory.
   - The file should contain the number of equations and variables in the first two lines, followed by a matrix of values.
   - The application will read the file, process the data, and display the results in the respective fields on the form.

6. **Output:**
   - The application will display the data in a list box.
   - It will show the runtime in microseconds, the type of data structure used, the number of non-zero values, and the final result in respective text boxes.
   - The processed results will also be saved in a `RESULT_OUTPUTS.txt` file in the same directory as the input file.
