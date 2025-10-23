# Array Operations: Procedural and Data Structure Fundamentals 💻

This C++ code demonstrates core concepts of **Procedural Programming** and basic **Data Structure Operations** using a C-style array. 

---

## 1. Procedural Programming ⚙️

* **Sequential Execution:** The entire program logic is contained within the `main()` function. Code executes line by line, defining a clear, step-by-step procedure to achieve a result.
* **Direct Data Manipulation:** The code directly accesses and modifies global data variables (like the array `arr` and the size counter `nElems`) using sequential instructions and control flow structures (loops and conditional statements).

---

## 2. Fundamental Array Concepts 💾

### A. Fixed-Size Array
* The array `int arr[100]` is declared with a **fixed, maximum size of 100** elements at compile time. This size cannot change during the program's execution.

### B. Logical vs. Physical Size
* **Physical Size:** The total memory reserved for the array (100 integers).
* **Logical Size:** The variable **`nElems`** tracks the **actual number of valid elements** currently stored in the array (initially 10). This is a user-defined convention; all operations must loop only up to `nElems` to avoid processing garbage data.

### C. Insertion
* Elements are inserted by **direct index assignment** (e.g., `arr[0] = 77;`).

---

## 3. Algorithm Concepts (Searching and Deletion) 🔎

### A. Linear Search
* This algorithm is used to find a target value (`searchKey`).
* **Process:** It iterates through the array sequentially from the start (`j = 0`) up to `nElems`, comparing the `searchKey` to **every single element** (`if (arr[j] == searchKey)`).
* **Efficiency:** This is the simplest but least efficient search for large, unsorted arrays, as in the worst case, it must check every item.

### B. Array Deletion (Shifting)
Deleting an item from the middle of an array requires two distinct steps to maintain contiguous data:

1.  **Find and Locate:** The initial search loop determines the index (`j`) of the element to be deleted (`55`).
2.  **Shift Elements:** The element at index `j` is deleted by **shifting all subsequent elements one position forward** (to the left), which overwrites the deleted element:
    ```cpp
    for (int k = j; k < nElems; k++)
        arr[k] = arr[k+1];
    ```
3.  **Update Size:** The logical size is then reduced by one: `nElems--`. This ensures the overwritten value (now duplicated at the end) is excluded from future operations.
