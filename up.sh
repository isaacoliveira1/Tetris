#!/bin/bash
echo "Iniciando upload dos arquivos"
git add .
echo "Aguarde [...]" ; sleep 1;
git status
echo "Qual o motivo da atualização?"
read motivo
git commit -m $motivo
echo "Aguarde[...]"
git push origin master
