configM:
	python3.11 -m nuitka --quiet --follow-imports --remove-output test.py

run:
	./test.bin

endM:
	find . -maxdepth 1 ! -name '.' ! -name 'test.py' ! -name 'Makefile' -exec rm -rf {} +
