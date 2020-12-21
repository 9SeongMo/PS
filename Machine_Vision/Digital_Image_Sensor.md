
# 디지털이미지센서
-----------------------------------------------

## 이미지센서 개요
-----------------------------------------------

- ## 분류기준
	- 구조(CMOS or CCD)
	- 채도(Color or Mono)
	- 셔터(Global or Rolling shutter)

- ## 고려할사항
	- 해상도(Resolution)
	- 출력 속도(Frame rate)
	- 픽셀 크기(Pixel Size)
	- 센서 포맷(Sensor Format)

- ## 광센서의 목적
	- 이미지 센서는 각 픽셀에 얼마만큼의 빛이 들어왔는지를 수치로 표현하는 것 
	- 이미지 프로세싱 과정을 거치며 해당 픽셀에 빛이 많이 들어올 수록 흰색, 적게 들어올 수록 검정색으로 표현하는 것 뿐이다. 
	- 색깔은 픽셀은 색깔을 알지 못한다. 색깔을 알려면, 포토다이오드가 파장별로 얼마나 많은 빛이 들어왔는지를 판단해야함
	- 포토다이오드는 단순히 빛이 많이 들어오면 전압이 높게 걸리고, 적게 들어오면 전압이 낮게 걸리게 할 뿐
	- 그래서 R, G, B 필터를 통해 특정 색 파장만 입력으로받고 이미지프로세싱을 통해 전체 이미지의 색을 결정한다
	- Bayer 매트릭스



	<br/><br/><br/><br/>




## 구조(CMOS or CCD)
-----------------------------------------------

- ## CCD(Charge Coupled Device)
	- 각 픽셀에 박혀있는 포토다이오드가 빛을 만나 전하를 축적 후 전하가 신호로 사용된다
	- 픽셀의 전하가 세로,가로 시프트 레지스터를 통해 중앙에 있는 증폭기에서 전기신호로 증폭되고 A/D 컨터버에서 디지털 숫자로 변환하여 이미지로 구현
	- 단 하나의 증폭기와 ADC가 모든 픽셀의 광량을 다 측정하고 디지털 신호로 바꾸다보니 처리속도가 느려진다
	- 증폭 과정에서 노이즈가 발생하는데 하나의 출력회로만 있기때문에 노이즈가 적고 화소간 차이가 없다
	- CCD는 전하 발생이 포화량을 초과한 경우 수직전송용 CCD에 따라 다른 화소에 축척된 전하에 영향을 받는다 -> 블루밍현상 발생
		+ 블루밍(blooming) 현상
			: CCD가 과도하게 빛을 받으면 전기신호가 넘쳐나서 사진에 빛이 번져보이는 현상
		+ 스미어현상
			: 주위 조도에 비해 특정 부분이 지나치게 강한 빛을 낼 경우 세로로 그 라인 자체에 과전류가 흘러들어 전체 세로줄이 광량으로 인해 포화되어 세로로 줄이생김
	
	![CCD](https://user-images.githubusercontent.com/68523963/102737242-38a7c900-438a-11eb-967c-936c3a9d2e14.PNG)
	<br/> 



- ## CMOS 센서
	- CCD의 느린 처리속도를 보완하고자 개발된것
	- CMOS는 각 픽셀에 커패시터와 자체 전자회로를 통해 단일 증폭기로 이동되는대신 픽셀 자체에서 전기신호로 변환된다
	- 이 신호들이 아날로그 신호 프로세서에 전달되고 디지털신호로 변환되어 사용
	- CMOS형 이미지센서는 각각의 화소가 전자-전압 변환회로를 따로따로 가지므로, 각 화소의 소자 불균일성이 그대로 출력신호에 반영
	- 하지만 각 화소별로 전하가 변화되므로 다른 화소의 전하가 서로 영항을 주지않는다 -> 블루밍,스미어현상 없음
	- CMOS는 몇 개의 층 구조에 따라 회로와 이미지센서를 같은 칩(Chip)에 제작이 가능 CCD보다 집적도 높음
	- 처음엔 CCD에비해 성능이 크게 뒤쳐졌으나 지금은 크게 개선
	
	![CMOS](https://user-images.githubusercontent.com/68523963/102737263-4eb58980-438a-11eb-95e7-4c78320d2c67.PNG)
	<br/>



- ## 장단점
	![장단점](https://user-images.githubusercontent.com/68523963/102737281-58d78800-438a-11eb-98c5-48053a3cb887.PNG)

	<br/>




## 글로벌 셔터(Global Shutter) vs 롤링 셔터(Rolling Shutter)
-----------------------------------------------

- ## 글로벌 셔터(Global Shutter)
	- 타이밍 차트에서, 글로벌 셔터는 모든 픽셀이 동시에 노출을 시작하고 종료
	- 리드아웃(Readout)은 순차적으로 한 줄씩 수행
	- 글로벌 셔터 센서는 빠른 속도로 움직이는 물체를 영상화하는데 필수적입니다. 거의 모든 머신비전 분야에서는 글로벌 셔터를 채택하여 사용
	
	![글로벌셔터](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=http%3A%2F%2Fcfile27.uf.tistory.com%2Fimage%2F99A3E83E5AB74166044A3A)
	<br/> 



- ## 롤링 셔터(Rolling Shutter)
	- 롤링 셔터는 이동(shifted)시간에 따라 리셋 및 리드아웃이 이루어지는 라인이 다름
	- 카메라가 움직이는 경우 영상에 왜곡을 발생
	- 롤링 셔터 센서는 정적 또는 저속으로 움직이는 물체를 이미지화 하기에 탁월한 감도를 제공
	
	![CMOS](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=http%3A%2F%2Fcfile8.uf.tistory.com%2Fimage%2F9939B7355AB7427A0EF739)
	<br/>






	- 출처
		+ https://kalchi09.tistory.com/entry/%EC%B9%B4%EB%A9%94%EB%9D%BC%EC%9D%98-%EC%9B%90%EB%A6%AC-1-%EB%94%94%EC%A7%80%ED%84%B8-%EC%B9%B4%EB%A9%94%EB%9D%BC%EC%9D%98-%EC%84%BC%EC%84%9C-CCD%EC%99%80-CMOS
		+ https://www.baslerweb.com/ko/sales-support/downloads/document-downloads/modern-cmos-cameras/
		+ https://kalchi09.tistory.com/entry/%EC%B9%B4%EB%A9%94%EB%9D%BC%EC%9D%98-%EC%9B%90%EB%A6%AC2-CCD%EC%99%80-CMOS%EC%9D%98-%EC%83%89-%EA%B5%AC%ED%98%84%EB%B0%A9%EB%B2%95
		+ https://luckygg.tistory.com/26?category=811446