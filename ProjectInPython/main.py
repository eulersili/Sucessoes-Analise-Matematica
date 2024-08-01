from time import sleep
print('>> VALIDE O SEU ACESSO <<')
sleep(1)
nome = str(input('Nome do Usuário: ')).upper().strip()
sleep(1)
print('---------------------------')
print('** A senha padrão é: \033[1;33m1234\033[m **')
print('---------------------------')
sleep(1)
senha = int(input('Digite a senha: '))
if senha == 1234:
    print('-----------------------------------------------------')
    print(f'>> Seja bem-vindo ao App, \033[32;1m{nome}\033[m! <<')
    sleep(2)
    print('...')
    sleep(1)
    print(""">>- Iniciando o programa de Análise Matemática I. -<<""")
    sleep(2)
    print("""--------------------------------------------
\033[33mOpção [ 1 ] - Ver o termo geral da sucessão.
Opção [ 2 ] - Ver a PA de uma sucessão.\033[m
--------------------------------------------""")
    perg_menu = int(input('O que deseja ver? '))
    while True:
        if perg_menu == 1:
            sleep(1)
            print("""--------------------------------------------
\033[33mOpção [ 1 ] - Números inteiros
Opção [ 2 ] - Números fraccionários\033[m
--------------------------------------------""")
            perg_menu = int(input('Qual opção deseja? '))
            if perg_menu == 1:
                resp = 'S'
                while resp == 'S':
                    a1 = int(input("Digite o primeiro termo: "))
                    a2 = int(input("Digite o segundo termo: "))
                    a3 = int(input("Digite o terceiro termo: "))
                    a4 = int(input("Digite o quarto termo: "))
                    resp = str(input('Quer continuar? [S/N]: ')).upper()
                    while True:
                        if resp == 'S':
                            a5 = int(input('Digite mais um termo: '))
                            resp = str(input('Quer continuar? [S/N]: ')).upper()
                        elif resp == 'N':
                            break
                        else:
                            break
                    r = a4 - a3
                    if r > a1:
                        dife = r - a1
                        print(f'\033[1;32mO termo geral da sucessão é: {r}n - {dife}\033[m')
                    elif r < a1:
                        dife = a1 - r
                        print(f'\033[1;32mO termo geral da sucessão é: {r}n + {dife}\033[m')
                    else:
                        print(f'\033[1;32mO termo geral da sucessão é: {r}n\033[m')

                        print(f"lim {r}")
                        print(f"= {r}")

            # ------------------------------------------------------------------------
            elif perg_menu == 2:
                resp = 'S'
                while resp == 'S':
                    an1 = int(input('Digite o numerador: '))
                    ad1 = int(input('Digite o denominador: '))
                    an2 = int(input('Digite o numerador: '))
                    ad2 = int(input('Digite o denominador: '))
                    an3 = int(input('Digite o numerador: '))
                    ad3 = int(input('Digite o denominador: '))
                    an4 = int(input('Digite o numerador: '))
                    ad4 = int(input('Digite o denominador: '))
                    resp = str(input('Quer continuar? [S/N]: ')).upper()
                    while True:
                        if resp == 'S':
                            an5 = int(input('Digite mais um numerador: '))
                            ad5 = int(input('Digite mais um denominador: '))
                            resp = str(input('Quer continuar? [S/N]: ')).upper()
                        elif resp == 'N':
                            break
                        else:
                            break
                    if resp == 'N':
                        rn = an4 - an3
                        rd = ad4 - ad3
                        if rn > an1:
                            dife = rn - an1
                            print(f'\033[1;32m{rn}n - {dife}\033[m')
                        elif rn < an1:
                            dife = an1 - rn
                            print(f'\033[1;32m{rn}n + {dife}\033[m')
                        else:
                            print(f'\033[1;32m{rn}n\033[m')
                        print('\033[1;32m-\033[m' * 10)
                        if rd > ad1:
                            dife = rd - ad1
                            print(f'\033[1;32m{rd}n - {dife}\033[m')
                        elif rd < ad1:
                            dife = ad1 - rd
                            print(f'\033[1;32m{rd}n + {dife}\033[m')
                        else:
                            print(f'\033[1;32m{rd}n\033[m')
                    print(f"lim {rn}n{dife:+d}/{rd}n{dife:+d}")
                    print(f"= {rn}/{rd}")
            else:
                print('\033[31;1mOpção INVÁLIDA!\033[m')
            # ------------------------------------------------------------------------
            break
        elif perg_menu == 2:
            sleep(1)
            print("""--------------------------------------------
\033[33mOpção [ 1 ] - Saber a razão da PA
Opçao [ 2 ] - Saber a valor de um termo consoante a posição\033[m
--------------------------------------------""")
            perg_menu = int(input('Qual opção deseja? '))
            if perg_menu == 1:
                ak = int(input('(ak) - Digite o valor do menor termo: '))
                an = int(input('(an) - Digite o valor do último termo: '))
                k = int(input('(k) -  Digite a posição do menor termo: '))
                n = int(input('(n) - Digite a posição do último termo: '))
                r = (an - ak) / (n - k)
                print(f'\033[1;32mA razão é {r}\033[m')
                break
            # ------------------------------------------------------------------------
            elif perg_menu == 2:
                def termo_pa(ak, n, r):
                    return ak + (n - 1) * r

                # Solicita ao usuário os valores da PA
                ak = float(input("Digite o menor termo da PA: "))
                r = float(input("Digite a razão da PA: "))
                n = int(input("Digite a posição do termo que deseja encontrar: "))

                # Calcula o termo da PA
                an = termo_pa(ak, n, r)

                # Exibe o resultado
                print(f'\033[1;32mO {n}-ésimo termo da PA é: {an}\033[m')
                break
        else:
            print('\033[1;31;1mOpção INVÁLIDA!\033[m')
            # ------------------------------------------------------------------------
            break
    print("""---------------------------------------------------------------""")
    print('')
    print(f'\033[1mChegou ao fim do programa. Vemo-nos em breve,\033[m \033[1;32m{nome}\033[m\033[1m!\033[m')
    print('')
    print(print("""---------------------------------------------------------------"""))
elif senha != 1234:
    print('\033[1;31mSenha ERRADA!\033[m')
    print('-' * 40)
    print('Esta mensagem irá autodestruir-se em:')
    print('\033[1;31m3')
    sleep(1)
    print('2')
    sleep(1)
    print('1')
    sleep(1)
    print('.\033[m')
print("""Elaborado por:
- Berta de Oliveira
- Demétrio Efraim
- Euler Sili
- Hélder Machado
- João Puati
- Luís Kazade
- Madalena Lula 
- Sérgio Morais""")
