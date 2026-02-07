# Operator Overloading in C++

This repository provides a focused look at **Operator Overloading** in C++, demonstrating how to redefine standard operators to work seamlessly with user-defined classes. 

## 📖 Project Overview

The project illustrates the power of C++ by making custom objects behave like fundamental data types. By overloading standard operators, the code achieves better readability and integration with the C++ Standard Library (STL).

## 🛠 Features & Implementations

The source code covers the following categories of operator overloading:

### 1. Arithmetic Operators
Definitions for performing mathematical calculations directly on objects:
* `+` (Addition)
* `-` (Subtraction)
* `*` (Multiplication)
* `/` (Division)

### 2. Stream Operators
Custom implementations for I/O operations, allowing objects to be used directly with standard streams:
* `<<` (Stream Insertion) for easy printing with `std::cout`.
* `>>` (Stream Extraction) for formatted input with `std::cin`.

### 3. Comparison & Logic
Implementation of relational operators to compare object states:
* `==` (Equality) and `!=` (Inequality).
* `<`, `>`, `<=`, `>=` for ordering and sorting.

## 🎯 Implementation Strategy

The project showcases two primary methods of overloading:
* **Member Functions:** For operators that modify the object itself (like `+=` or prefix `++`).
* **Non-Member / Friend Functions:** Specifically used for binary operators and stream operations to ensure proper symmetry and access to private members.

## 📂 Repository Structure

* **Source Files:** Contains the class definitions and the overloaded operator logic.
* **Logic:** Clear separation between class data management and the operational logic of the operators.

## 📜 License

This project is open-source and intended for educational purposes.
