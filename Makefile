test:
	g++ main.cpp && oj t -d ./tests/
	
submit:
	acc s main.cpp