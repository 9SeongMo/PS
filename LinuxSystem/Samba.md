
# Samba
-----------------------------------------------

## Samba 사용법
-----------------------------------------------

- ## 파일공유
	- 윈도우를 사용하는 pc와  - 리눅스를 사용하는 보드에서 파일공유를 편하게 하고싶어서 찾아봄
	

- ## 따라하기
	-  ``` sudo apt-get install samba ```
		+ 삼바설치하고
	
	- 공유하고 싶은 폴더하나 만들어주고

	-  ``` sudo smbpasswd -a [계정명] ```
		+ 공유폴더에 사용할 계정입력 비밀번호설정

	- ``` sudo vi /etc/samba/smb.conf ```
		+ conf파일 맨 아래에 뭔가 추가해준다, 참고 블로그에 다 나옴
		+ ```   comment = khadas
				path = /home/khadas
				valid user = khadas
				writeable = yes
				create mask = 0777
				directory mask  = 0777 ```

	
	- ``` sudo ufw allow 139 ```
	  ``` sudo ufw allow 445 ```
		+ 방화벽 해제하기

	- ``` sudo service smbd restart ```
		+ conf 설정 적용하기위해 삼바 데몬 프로세스를 재시작한다
		
	- 윈도우에서 공유폴더 접근하듯이 ip주소 입력해서 연결하면 끝





- ## 참고
	- https://blog.naver.com/ji_sung31/222109932458

	<br/><br/><br/>