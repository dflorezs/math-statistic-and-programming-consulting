def epsilon_mach():
    x = 1.0
    n = 0
    while 1.0 + x * 0.5 > 1.0:
        n += 1 
        x *= 0.5
    print(f"Epsilon de la maquina en forma binaria = 2^-{n}")
    print(f"Epsilon de la maquina en forma decimal = {x}")

epsilon_mach()



