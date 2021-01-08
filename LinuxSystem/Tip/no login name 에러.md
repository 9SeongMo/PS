
# logname: no login name
---------------------------------------


## logname: no login name
---------------------------------------

- ## spinnaker sdk 설치중 에러발생
	- logname: no login name
	- 위 에러뜨면서 설치진행이 안됨
		+ install shell script에서 logname을 참조해서 설치를 진행하게되는거같음
		+ 터미널창에 logname 입력시 원래 로그인한 계정이 떠야하는데 안뜨는것 발견
		+ 비슷한 기능 whoami는 잘됨
	- 기존 logname 파일 백업해두고
	- ``` echo "echo root" > /usr/bin/logname ```
		+ logname을 root로 고정해줌 , 어떤오류 생길지 아직 잘 모름 일단 된다


- ## 출처
	- https://stackoverflow.com/questions/65113085/logname-no-login-name-inside-docker-container-when-running-dpkg-i