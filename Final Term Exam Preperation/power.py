def generate_power(exponent):
    def power(base):
        return base ** exponent
    return power
x = generate_power(2)
print(x(3))