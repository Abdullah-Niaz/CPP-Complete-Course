def demultiplexer(input_signal, control0, control1):
    if control0 == 0 and control1 == 0:
        return (input_signal, 0, 0, 0)
    elif control0 == 0 and control1 == 1:
        return (0, input_signal, 0, 0)
    elif control0 == 1 and control1 == 0:
        return (0, 0, input_signal, 0)
    elif control0 == 1 and control1 == 1:
        return (0, 0, 0, input_signal)
    else:
        return (0, 0, 0, 0)  # Handle invalid control inputs
result = demultiplexer(1,0,0)
print(result)