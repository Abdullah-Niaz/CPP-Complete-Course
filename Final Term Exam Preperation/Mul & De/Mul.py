def multiplexer(input0, input1, input2, input3, control0, control1):
    if control0 == 0 and control1 == 0:
        return input0
    elif control0 == 0 and cont`rol1 == 1:
        return input1
    elif control0 == 1 and control1 == 0:
        return input2
    elif control0 == 1 and control1 == 1:
        return input3
    else:
        return None  # Handle invalid control inputs

# Testing the multiplexer function
result = multiplexer(0, 1, 0, 1, 0, 1)
print("Output:", result)
