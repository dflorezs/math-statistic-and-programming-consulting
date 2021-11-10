def generos(l):
    rta = []
    for i in l:
        if i not in rta:
            rta.append(i);
    return rta

def generos_que_no_tengo(lc, ln, c):
    rta = []
    for i in lc:
        if ln[i] == c:
            rta.append(i)
    return rta

def no_he_leido(lr, lc):
    rta = []
    for i in lr:
        if i not in lc:
            rta.append(i)
    return rta

def puedo_intercambiar(lr, lc):
    counter1 = 0
    counter2 = 0
    for i in lr:
        if i not in lc:
            counter1 += 1
    for i in lc:
        if i not in lr:
            counter2 += 1
    if counter1 < counter2:
        return counter1
    else:
        return counter2