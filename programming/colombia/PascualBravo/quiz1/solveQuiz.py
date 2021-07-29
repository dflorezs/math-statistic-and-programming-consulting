import random
#Generates 40 random notes
def notes():
    notesList = [];
    for i in range(40):
        notesList.append(random.randint(0, 5))
    return notesList
#Generates list of winners (note >= 3)
def winners(arr:list) -> list:
    winnersList = []
    for i in arr:
        if i >= 3:
            winnersList.append(i)
    return winnersList
#Generates list of losers (note < 3)
def losers(arr:list) -> list:
    losersList = []
    for i in arr:
        if i < 3:
            losersList.append(i)
    return losersList
#Generates note media
def noteMedia(arr:list) -> int:
    return round(sum(arr)/len(arr), 2)
#Generates note min
def noteMin(arr:list) -> int:
    return sorted(arr)[0]

def main():
    n = notes()
    #Call funtions
    print(f"La calificacion media es: {noteMedia(n)}")
    print(f"La calificacion mas baja es: {noteMin(n)}")
    print(f"La media de los que ganaron es: {noteMedia(winners(n))}")
    print(f"La media de los que perdieron es: {noteMedia(losers(n))}")
    print(f"La nota mas alta ganada es {sorted(winners(n))[len(winners(n))-1]}")
    print(f"El numero de ganadores es: {len(winners(n))}")
    print(f"El numero de perdedores es: {len(losers(n))}")

#Call unction main
main()



