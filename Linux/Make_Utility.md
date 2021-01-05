
# Make_Utility
-----------------------------------------------

- ## Linux Build System
	- 윈도우에서야 초보자건 개발자건 모두가 VS를 쓰지만 리눅스에서는 보통 편집기와 컴파일러가 분리되어있다.
	- 리눅스에서의 통합개발환경이란 VS처럼 자체적인 컴파일러까지 포함하는게 아니고 리눅스에 기본 설치된 컴파일러인 gcc를 잘 가져다 쓰는 코드 편집기를 말한다
	- IDE 마다 각자의 방식으로 소스코드 목록과 의존성을 관리하는 프로젝트 파일을 만들어서 불편
	- gcc, make, cmake 쓰자!
		+ gcc: GNU Compiler Collection의 약자로 C/C++의 컴파일러이다.
		+ make: 여러 단계의 gcc 명령을 Makefile 이라는 스크립트로 만들어 한번에 실행하게 하고 Incremental Build를 지원한다.
		+ cmake: 중간 단계를 일일이 지정해줘야 하는 복잡한 Makefile을 좀 더 편리하게 만들어준다.
	- qtcreator를 문서편집기 겸 cmake 관리툴로 써보려고 공부중


- ## CMake
	- cmake를 위한 설정 파일인 CMakeLists.txt를 한 줄만 쓰면 빌드가 된다. 
	- make는 중간 단계에서 생기는 object 파일들을 일일이 지정하고 소스 사이의 의존 관계도 직접 지정해줘야 하지만 cmake는 중간단계는 알아서 만들어주고 소스코드를 분석하여 의존성도 알아서 찾는다
	- cmake는 실행하면 여러 파일과 디렉토리가 자동 생성되므로 build 디렉토리를 따로 만들어 그 안에서 실행하자
	- 빌드하면 CMakeCache.txt, cmake_install.cmake, CMakeFiles/, Makefile 다양하게 생김
		+ CMakeCache.txt는 빌드 설정 변수들을 모아놓은 것인데 일반 에디터에서 열어서 수정해도 되지만 cmake-gui 툴을 이용하면 편하고 안전하게 수정할 수 있다 (sudo apt install cmake-qt-gui)

- ## cmake-qt-gu


- ## CMake 명령어




	<br/>


	<br/><br/><br/>