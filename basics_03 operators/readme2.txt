# Admission Eligibility Checker in C

This program checks whether a student is eligible for admission based on their **age** and **marks**.

## 📌 About

The program takes two inputs from the user:

- Age
- Marks

Admission is considered successful only when **both conditions** are satisfied:

- Age must be **18 or above**
- Marks must be **75 or above**

The program uses the **logical AND (`&&`) operator** to check both conditions.

## 🧑‍💻 Logical Operator Used

| Operator | Meaning |
|----------|---------|
| `&&` | AND |

With `&&`, **both conditions must be true** for the overall condition to be true.

## 🔍 Condition Used

```c
if (age >= 18 && marks >= 75)