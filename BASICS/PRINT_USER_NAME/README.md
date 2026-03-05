# Display User Number Program Documentation

## 1. Problem Statement

Write a C program to:

* Accept an integer from the user
* Display the same number as a output



---

## 2. Concepts Used

* standard input and output functions
* 'scanf ()'
* 'printf ()'


---

## 3. Logic / Algorithm

### Step 1: Read Input

* Read an integer `num` from the user using 'scanf ()'

### Step 2: Display Output

* Print the entered number using 'printf ()'  


## 4. Program Code

```c
#include<stdio.h>

int main()
{
   printf("Enter the number : ");
   int num;
   scanf("%d",&num);
   printf("User number : %d",num);

return 0;

}
```

---

## 5. Sample Input / Output

### Input

```
Enter the number : 12 
```

### Output

```
User number : 12
```

---


## 6. Key Learning Outcomes

* Understood how to read an integer from the user
* Learned how to display output using printf()
* Understood basic input-output operations in C 

---

## 7. Possible Improvements

* Accept and Display multiple numbers 


---

## 8. Author

**Shivani M**
C Programming & Embedded Systems Learner
