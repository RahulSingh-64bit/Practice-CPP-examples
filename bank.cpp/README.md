# Object-Oriented Programming (OOP) Concepts in the BankAccount Class

The provided C++ code for the `BankAccount` class is an excellent demonstration of several core principles of Object-Oriented Programming.

---

## 1. Classes and Objects 🧱

* **Class:** The **`class BankAccount`** is the blueprint or template. It defines the structure (the `balance` variable) and the behavior (the `deposit`, `withdraw`, `display` functions) for a bank account entity.
* **Object:** In the `main` function, **`BankAccount ba1(100.00);`** creates an **object** named `ba1`. This object is a concrete instance of the `BankAccount` class, with its own separate `balance` data.

---

## 2. Encapsulation (Data Hiding) 🛡️

**Encapsulation** is the principle of bundling the data (properties) and the methods (behaviors) that operate on that data into a single unit (the class), and restricting direct access to the data.

* **Data Hiding:** The data member **`double balance`** is declared under the **`private`** access specifier. This means the balance variable cannot be directly modified or read from outside the `BankAccount` class (e.g., from the `main` function).
* **Controlled Access:** The only way to interact with the balance is through the **`public`** methods (`deposit`, `withdraw`). This maintains data integrity, as the class controls exactly *how* its data is changed.

---

## 3. Abstraction (Interface) 💡

**Abstraction** means showing only essential information and hiding the complex implementation details.

* **Interface:** The **`public`** methods (`deposit`, `withdraw`, `display`) serve as a simple, clear **interface** for the object.
* **Hidden Logic:** A user of the `ba1` object in `main` simply calls `ba1.deposit(74.35);`. They are abstracted away from the internal mathematical logic (`balance = balance + amount;`) used to update the account.

---

## 4. Constructor 🛠️

* The function **`BankAccount(double openingBalance)`** is a **constructor**.
* It's a special method that is automatically called when a new object is created (e.g., `BankAccount ba1(100.00);`).
* Its primary role is to **initialize** the object's data members, ensuring the `balance` starts with a meaningful value.