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

## 2. Clustering Techniques:

This code is a C++/CLI (Common Language Infrastructure) Windows Forms application that performs data clustering and visualization based on a correlation matrix. It uses several clustering techniques, including calculating correlation matrices, discretizing the correlation data, shuffling datasets, and displaying results using bitmap visualizations and list boxes. The program reads data from a text file, processes it, and allows for various interactive visualizations through button clicks.

Here are the main components of the code:

1. **Data Loading**: The `loadData` function reads a dataset from a text file `abc.txt`. It parses the data into a 2D array of doubles.
2. **Correlation Matrix Calculation**: The `CalculateCorrelationMatrix` function computes the correlation matrix for the loaded dataset.
3. **Discretization and Display**: Functions like `Discretize`, `DiscretizeAndDisplay`, and `DisplayBlackWhiteBitmap` are used to discretize the correlation matrix and display it in various formats, including list boxes and bitmaps.
4. **Dataset Shuffling**: The `ShuffleDataset` function shuffles the dataset to ensure randomization.
5. **Signature-Based Clustering**: The `SortArray` function and `DisplaySignGBP` method use signature-based clustering to sort and visualize the data.
6. **Interactive UI Elements**: The form includes various buttons to trigger the different functions and visualizations, as well as a checkbox and text box for additional interaction.

### Steps to Run the Code

1. **Clone the GitHub Repository**: First, you need to clone the repository from GitHub where the code is hosted. Open your terminal or command prompt and run:
   ```sh
   git clone <repository_url>
   ```
   Replace `<repository_url>` with the actual URL of the GitHub repository.

2. **Open the Project in Visual Studio**:
   - Open Visual Studio.
   - Go to `File > Open > Project/Solution`.
   - Navigate to the directory where you cloned the repository and select the solution file (`.sln`).

3. **Build the Solution**:
   - Once the project is open in Visual Studio, build the solution by selecting `Build > Build Solution` from the menu or pressing `Ctrl + Shift + B`.

4. **Prepare the Dataset**:
   - Ensure you have the data file `abc.txt` in the root directory of the project or in a specified directory.
   - The `abc.txt` file should have the following format:
     ```
     <number_of_equations>
     <number_of_variables>
     <tab-separated data rows>
     ```

5. **Run the Application**:
   - After building the solution, run the application by selecting `Debug > Start Debugging` or pressing `F5`.
   - The application window should open with several buttons and interactive elements.

6. **Interact with the Application**:
   - **Load Data**: Click on the appropriate button to load and display the data from `abc.txt`.
   - **Calculate Correlation Matrix**: Click the button to calculate and display the correlation matrix.
   - **Discretize and Display**: Use the provided buttons to discretize the matrix and visualize it either as a list or a bitmap.
   - **Shuffle Dataset**: Shuffle the data and display the shuffled dataset.
   - **Cluster Data**: Use the signature-based clustering technique and visualize the sorted correlation matrix.
   - **Interactive Elements**: Use the checkbox and text box to interact with the application.
