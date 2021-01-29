
# typedef	
-----------------------------------------------


- ## typedef
	- 일단 제일 기초
		+ ``` typedef unsigned int uint_16; ```
	
	- 그 다음 구조체
		+ ```
		                typedef struct _Person {
				char name[20];
				int age;
		      } Person;

	- 그 다음은 열거형(enum)
		+ ``` 
		                                        typedef enum{ WHITE, 
							BLACK, 
							GREEN}COLOR_TYPE;
		+ 이렇게 하면 함수 안에 매개변수로 정의해서 코딩 실수를 줄일 수 있다
		+ ex ) ``` print_color_name(COLOR_TYPE color) ```

	- 그 다음이 함수포인터
		+ ``` typedef int (*funcPtr)(int,int) ```
		+ 항상 함수포인터 만들기 귀찮으니까 미리 typedef로 선언해 두고 main에서 변수 선언하듯이 사용

	<br/>


	<br/><br/><br/>
