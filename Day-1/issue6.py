even = {x: x+2 for x in range(0, 10)}
odd = {x: x+2 for x in range(1, 10)}

sum_odd, sum_even = 0, 0

for i in even.keys():
    sum_even += even[i]


sum = sum_odd + sum_even

print("Sum of the first 10 natural numbers is: ", sum)
print(even)
print(odd)