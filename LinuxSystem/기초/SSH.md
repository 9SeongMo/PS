
# SSH
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




	<br/><br/><br/>