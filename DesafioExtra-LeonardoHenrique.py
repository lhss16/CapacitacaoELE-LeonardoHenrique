#Desenvolvimento de codigo para verificacao de erro em compras de componentes
#
#Desenvolvido por: Leonardo Henrique Souza da Silva
#
#o codigo abaixo funciona para se nao tivermos uma duplicacao de compras, desta forma podemos utilizar um dicionario
#ele eh facil de ler os itens comprados, pois ja possuem os valores em seguida com a chave
#
#prateleira = {'arduino':74,'servoMotor':5, 'potenciometro':1.9, 'LEDverm':1, 'LEDverd':1, 'resistor1':0.1, 'resistor100k':0.5}
#comprados = {'resistor100k':0.7,'resistor100k':1, 'servoMotor':5, 'arduino':100, 'arduino':74, 'potenciometro':2.5, 'resistor1':0.1, 'LEDverm':1,'LEDverm':1,'LEDverm':2, 'LEDverd':2,'LEDverd':1}
#qtd_error = 0
#for i in comprados:
#    for k, v in prateleira.items():
#        if k == i:
#            if prateleira[k] == comprados[k]:
#                pass
#            else:
#                qtd_error +=1
#print ('A quantidade de erros na compra foi de:')
#print (qtd_error)

#a forma abaixo implementa o problema utilizando o tipo de lista
#desta forma verificamos os indices das listas em conjunto para ir percorrendo
#serve para multiplas compras de um mesmo item
#fica menos inteligivel pois deve-se passar pelas duas listas para se ter os valores corretos
prateleira = ["arduino","servoMotor","potenciometro","LEDverm","LEDverd","resistor1","resistor100k"]
precoPrat = [74,5,1.9,1,1,0.1,0.5]

comprados = ["resistor100k","resistor100k","servoMotor","arduino","arduino","potenciometro","resistor1","LEDverm","LEDverm","LEDverm","LEDverd","LEDverd"]
precoPago = [0.7,1,5,100,74,2.5,0.1,1,1,2,2,1]

qtd_error = 0

for i in range(len(prateleira)):                #percorre toda a prateleira pegando item por item
    for k in range(len(comprados)):             #percorre toda a lista de comprados item por item
        if prateleira[i] == comprados[k]:       #pega o primeiro item da prateleira e vai comparando com os itens de compra, o nome do item aqui
            if precoPrat[i] == precoPago[k]:    #para aquele item, verifica o valor comprado com o valor da prateleira
                pass                            #se for igual passa
            else:                               #se nao soma 1 erro a quantidade que começa zerada
                qtd_error +=1               
        else:
            pass                                #se o item nao for igual ele passa

print ('A quantidade de erros na compra foi de:') #no final do algoritmo teremos os valores de erros
print (qtd_error," erro(s)")

#esse algoritmo tem complexidade dada por O(n*m)