even = {x: x for x in range(0, 10, 2)}  
odd = {x: x for x in range(1, 10, 2)}   

sum_odd, sum_even = 0, 0


for i in even.values():
    sum_even += i


for i in odd.values():
    sum_odd += i

total_sum = sum_odd + sum_even  

print("Sum of the first 10 natural numbers is: ", total_sum)
print(even)
print(odd)
