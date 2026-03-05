Interchange of first and last digit of user number :

idea about solution
take no from user. to interchange 1st and last digit , splits the numbers.
To separates the number division to be used. so power of total number should be known.
To calculate power of each digit, total number of count should be known.
Use the power to arrange the numbers where it needs to place.


1. Take a number from user  // printf scanf function
2. Count total digits of number and power accordingly.
3. To exchange 1st no : num / power -> 1st no separately
4. To calculate middle num: (num%power)/10 -> middle no
5. ((num%power)/10)*10 -> [*10 because space to add ones digit which has to be exchange]
6. To exchange last no : num%10 -> last number
   to put last no at 1st position : last no * power -> (num%10)*power
7. Add all stages to get num : sum = 3+4+5 stages
8. return sum to main to get final correct result