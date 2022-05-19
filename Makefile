compile = g++
dir_hw = src
dir_check = tools

all:
	
lab01:
	$(compile) -o ./$(dir_hw)/$@/main ./$(dir_hw)/$@/main.cpp
	python ./$(dir_check)/chk_$@.py

lab02:
	$(compile) -o ./$(dir_hw)/$@/main ./$(dir_hw)/$@/main.cpp
	python ./$(dir_check)/chk_$@.py

lab03:
	$(compile) -o ./$(dir_hw)/$@/main ./$(dir_hw)/$@/main.cpp
	python ./$(dir_check)/chk_$@.py

lab04:
	$(compile) -o ./$(dir_hw)/$@/main ./$(dir_hw)/$@/main.cpp
	python ./$(dir_check)/chk_$@.py

lab05:
	$(compile) -o ./$(dir_hw)/$@/main ./$(dir_hw)/$@/main.cpp
	python ./$(dir_check)/chk_$@.py

hw01:
	$(compile) -o ./$(dir_hw)/$@/main ./$(dir_hw)/$@/main.cpp
	python ./$(dir_check)/chk_$@.py

hw02:
	$(compile) -o ./$(dir_hw)/$@/main ./$(dir_hw)/$@/main.cpp
	python ./$(dir_check)/chk_$@.py

hw03:
	$(compile) -o ./$(dir_hw)/$@/main ./$(dir_hw)/$@/main.cpp
	python ./$(dir_check)/chk_$@.py

hw04:
	$(compile) -o ./$(dir_hw)/$@/main ./$(dir_hw)/$@/main.cpp
	python ./$(dir_check)/chk_$@.py


