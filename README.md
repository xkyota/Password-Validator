# Password-Validator

A simple C program that evaluates the strength of a given password based on certain criteria and provides feedback.

Functionality
The program checks whether the entered password meets the following conditions:

- Length: The password should be between 8 and 25 characters.
- Contains digits: At least one digit (0-9).
- Contains lowercase letters: At least one lowercase letter (a-z).
- Contains uppercase letters: At least one uppercase letter (A-Z).
- Contains special characters: At least one special character (e.g., !, @, #, $, etc.).

Based on the number of conditions met, the program assigns a "score" and provides feedback about the password strength:

- Weak: If less than 2 conditions are met.
- Moderate: If exactly 2 conditions are met.
- Strong: If 3 or more conditions are met.
