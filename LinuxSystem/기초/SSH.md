
# SSH 사용법
-----------------------------------------------

 ## SSH
	- 원격제어 프로그램

	- 유닉스계열, shell을 통해서 제어해야하는 컴퓨터에 원격제어하고싶을때 ssh사용

    - Client(ssh client 설치) - Server(ssh server를 설치) , Client에서 Server 컴퓨터를 제어

	- Server 
		- ``` sudo apt-get install openssh-server ```
		- ssh 설치후 service 실행 ``` sudo service ssh start ```

	- Client 
		- ``` sudo apt-get install openssh-client ```
		- Server에 접속 ``` ssh khadas@192.168.83.~~~ ```


## SSH 연결방법
	- SSH server 구축하기
    	- SSH 서버 설치하고 ``` sudo apt-get install ssh ```
		- sudo vi /etc/ssh/sshd_config 에서 
		- PermitRootLogin yes 변경해주고 저장, Port도 확인가능
		- SSH 서버 시작 ``` sudo service ssh start ```
		- 실행상태 확인 ``` sudo service ssh start ```
		- ifconfig로 server 주소 기억
	
	- Windows 에서 SSH server 접속방법
    	- Putty 사용
        	- Putty 실행 창에서 기본 연결 설정을 위해 Connection에 들어가 다음과 같이 설정을 바꾼다
        	- 서버에 접속 시 일정 시간동안 아무 입력이 없으면 자동으로 세션이 종료된다. 위 설정은 60초 마다 특정 신호를 보내 세션이 유지되게 한다.
        	- 아이피 치고 접속
	<br/><br/><br/>