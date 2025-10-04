Student Unit Registration Program

This is a simple Python program that helps a student register academic units for a semester.  
It ensures the student meets the minimum fee balance requirements and validates the number of units they can register.

 Features

- Checks if the student’s **fee balance** is within the allowed range (must be below Ksh. 5000).  
- Prompts the user to enter the number of units they want to register.  
- Ensures that the student registers **at least 9 units** for the semester.  
- Displays all registered units upon successful registration.

Program Logic

1. If the student’s fee balance is **greater than 5000**, registration is not allowed.  
2. If the fee balance is **0 or below 5000**, the student is allowed to proceed.  
3. The student enters the total number of units to register.  
4. - If the number of units is less than 9 → program shows a warning.  
   - If the number of units matches the total available list (9 in this case) → program confirms success and lists all units.

