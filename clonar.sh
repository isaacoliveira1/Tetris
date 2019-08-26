#!/bin/bash

echo "Digite o nome para clonagem"
read op
echo "Clonando o diretório https://github.com/$op/tetris.git"
echo "Aguarde"; sleep 3;
git clone https://github.com/$op/tetris.git