notas = []
n = 1

nota = float(input("nota[0]:"))
while n != -1:
    notas.append(nota)
    nota = float(input("nota["+str(n)+"]:"))
    n+=1

media = soma/len(notas)

if media >= 7:
    print("aprovado")
else:
    print("reprovado")