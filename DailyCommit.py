import os
import datetime
import subprocess
import random

# Atualizado em 2025-03-23 23:23:26.146698

# Gera um número aleatório de até 10
random_number = random.randint(4, 10)

# Caminho do arquivo a ser atualizado
file_path = os.path.abspath(__file__)

# Função para atualizar o arquivo
def update_file():
    with open(file_path, 'r') as file:
        lines = file.readlines()
    
    with open(file_path, 'w') as file:
        for line in lines:
            if line.startswith("# Atualizado em"):
                file.write(f"# Atualizado em {datetime.datetime.now()}\n")
            else:
                file.write(line)

# Função para fazer commit e push
def commit_and_push():
    repo_dir = os.path.dirname(file_path)
    os.chdir(repo_dir)
    subprocess.run(['git', 'add', file_path])
    subprocess.run(['git', 'commit', '-m', f'Atualização diária em {datetime.datetime.now()}'])
    subprocess.run(['git', 'push', '-u', 'origin', 'main'])

if __name__ == "__main__":
    for i in range(0, random_number):
        update_file()
        commit_and_push()

