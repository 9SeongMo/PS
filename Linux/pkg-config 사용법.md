
# pkg-config 사용법
-----------------------------------------------


- ## pkg-config 사용법
	- 터미널에서 g++로 컴파일하는데 인자로 opencv 외부라이브러리를 전달하고 싶음
		+ Makefile에 고정된 경로를 적어주는것은 다른 팀원이 사용시 개발자의 환경에 맞게 Makefile을 수정해줘야함
		+ 고정경로 ex) gcc -o test test.c -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include -lglib-2.0 
	
	- 그럴때 pkg-config에서 include 경로와 link할 라이브러리 정보를 저장하고있음
	- 이러한 정보를 관리하는 파일은 '*.pc' 파일로 관리가 되며, 파일들은 /usr/lib/pkgconfig에 저장됨
	- '*.pc' 파일에 Dependency 정보도 기록
	- 많이 사용되는 리눅스 계열 open-source에서는 일반적으로 pc 파일을 제공

	- ex
		+ ``` g++ test.cpp -o test `pkg-config --libs opencv` ```

	<br/>

- ## 참고
	- https://m.blog.naver.com/PostView.nhn?blogId=nawoo&logNo=220006067404&proxyReferer=https:%2F%2Fwww.google.com%2F

	<br/><br/><br/>