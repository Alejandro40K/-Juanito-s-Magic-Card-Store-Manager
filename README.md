# Juanito's Magic Card Store Manager

This project was developed as part of the "C/C++ Programming" course, with the goal of helping "Juanito" manage his Magic: The Gathering card store. The system allows for inventory control, card search, cart management, and sales processing through a text-based console interface.

## 🧠 Project Summary

Juanito wants to open a Magic: The Gathering card shop and needs a console-based tool to:

- Load and manage his card inventory using `.csv` files.
- Search cards using various filters (by name, type, collection number, etc.).
- Add cards to a shopping cart and calculate the total cost.
- Ensure stock availability before allowing purchases.
- Deduct purchased cards from the inventory after checkout.

## ✅ Features

- Load card data from `.csv` files.
- Search cards by:
  - Collection number
  - Card type
  - Name
  - Partial characteristics
- Add/remove cards from a virtual cart.
- Show the current cart and total value.
- Confirm purchases and update stock.
- Save all data changes back to `.csv`.

## 🧱 Technical Requirements

- **Object-Oriented Programming** principles applied.
- Custom **linked lists** (no use of STL containers).
- Use of **pointers** for all object manipulation.
- Dedicated classes for:
  - Data handling
  - User interaction (input/output)
- File handling strictly using `.csv` format.
- Modular design with clear separation of logic and UI.

## 📁 File Structure

- `main.cpp` – Entry point and menu system.
- `CardManager.h / .cpp` – Logic for handling card data and inventory.
- `Display.h / .cpp` – Input/output operations with the user.
- `List.h / .cpp` – Custom linked list implementation.
- `cart.csv` – Stores cart items during execution.
- `cards.csv` – Stores card inventory data.

## 🚀 How to Run

1. Compile the project using a C++ compiler (e.g., `g++`).
2. Make sure `cards.csv` is present in the root directory.
3. Run the executable.
4. Follow the menu options to interact with the program.

## 📦 Deliverables

- Executable file (`.exe`) inside a `.zip`.
- All `.csv` files used for testing.
- Source code with modular class structure.

## 📚 References

- [Magic: The Gathering Card Anatomy](https://magic.wizards.com/es/news/feature/anatomy-magic-card-2006-10-21)
- [MTG Wiki](https://mtg.fandom.com/wiki/Parts_of_a_card)
- [CSV File Handling in C++](https://www2.eii.uva.es/fund_inf/cpp/temas/10_ficheros/ficheros_cpp.html)

---

**Developed by:** Alejandro Orozco Romo  
**Instructor:** Alejandro Coronado Rizo  
**Course:** C/C++ Programming
