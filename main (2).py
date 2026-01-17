import random

# Create an array of 20 integers between 1 and 100
numbers = []
for i in range(20):
    numbers.append(random.randint(1, 100))

# Arrays for odd and even numbers
odd = []
even = []

# Separate odd and even values
for num in numbers:
    if num % 2 == 0:
        even.append(num)
    else:
        odd.append(num)

# Display results
print("All numbers:", numbers)
print("Even numbers:", even)
print("Odd numbers:", odd)
