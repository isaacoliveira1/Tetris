#!/bin/bash
echo "Iniciando upload dos arquivos"
git add .
echo "Aguarde [...]" ; sleep 1;
git status
git commit -m Atualização
echo "Aguarde[...]"; sleep 1;
git push origin master
