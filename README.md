# Password Validator (C++)

C++ password strength checker using STL algorithms and regular expressions.

---

## Overview

This program checks whether a password meets common strength requirements and detects weak patterns such as sequential characters.

---

## Features

- Checks minimum password length
- Requires uppercase, lowercase, numeric, and special characters
- Detects weak sequential patterns (e.g. `123`, `abc`)
- Provides basic password strength feedback

---

## Technologies Used

- C++
- Standard Template Library (STL)
- Regular Expressions (`regex`)

---

## How to Build and Run

### Compile

```bash
g++ PasswordValidator.cpp -o validator
```

### Run

**Windows**

```bash
validator.exe
```

**Linux / macOS**

```bash
./validator
```

---

## Example Output

```text
=====Password Strength Checker=====
Enter your password: Test@123
Strong password
```
