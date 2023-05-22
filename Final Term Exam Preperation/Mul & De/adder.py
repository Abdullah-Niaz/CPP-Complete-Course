def full_adder(a, b, carry_in):
    sum = (a ^ b) ^ carry_in
    carry_out = ((a and b) or (carry_in and (a ^ b)))
    return sum, carry_out

# Example usage
a = 1
b = 1
carry_in = 1

result = full_adder(a, b, carry_in)
print(result)
print("Sum:", result[0])
print("Carry-out:", result[1])
