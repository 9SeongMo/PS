
# 카메라 성능요소
=============================================================================

## EMVA1288 표준
-----------------------------------------------

- ## EMVA 1288 표준
	- 2004년 20여개 제조업체,실사용자,연구기관들이 협력체를 구성해 개발한 기준
	- 따라서 거의 모든 머신 비전 카메라 제조사들은 공급 업체 간에 카메라 성능을 비교 및 대조할 수 있도록 EMVA 1288 표준을 준수
	- 아래의 설명들은 가장 일반적인, 영상 화질에 영향을 미치는 파라미터를 설명
	<br/>
	- 여기에서 설명하는 기준들은 이론적인 설명만을 다루게됨 단지 제품을 선정하는데 있어서 '참고'만 하는데 사용하는 기준
	- 실제로는 여러 카메라와 렌즈, 조명을 조합하여 많은 테스트를 거쳐 선정해야함


		+ 1. 양자 효율성 (Quantum Efficiency, QE)

		+ 2. 포화 용량 (Saturation Capacity, Full Well Depth)

		+ 3. Temporal Dark Noise (Read Noise)

		+ 4. 신호대 노이즈 비율 (Signal to Noise Ratio, SNR or SN or dB or bits)

		+ 5. 다이나믹 레인지(Dynamic Range)

		+ 6. 절대 감도 임계값(Absolute Sensitivity Threshold)


	- 양자 효율성 (Quantum Efficiency, QE)
	![양자효율성](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=http%3A%2F%2Fcfile6.uf.tistory.com%2Fimage%2F99418D3F5AA49BCB0F18BB)
		+ 단위
			+ Percent (%)
		+ 의미
			* 센서의 각 픽셀 하나가 광자(photons)를 특정파장(nm)에서 전하(electrons)로 변환하는데 얼마나 효율적인지, 변환되는 '비율'을 의미함
			* 한 픽셀로 들어가는 모든 광자가 전자로 변환되는 것은 아니므로, 100% 효율을 갖는 센서는 없다 
			* QE의 비율이 높다는 것은 빛을 감지하기 위한 감도가 더 높다는 것을 의미 즉, 저조도(low light) 어플리케이션에서 사용하기에 유용함
			* QE는 일반적으로 가시주파수 범위(300-700nm) 및 근적외선(Near-IR) 범위(850-1100nm)에서 표시됨
			* 센서 기술과 특정 파장에 따라 QE는 달라집니다.
		+ 결론
			* 높을수록좋다


	- 포화 용량 (Saturation Capacity, Full Well Depth)
	![포화용량](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=http%3A%2F%2Fcfile27.uf.tistory.com%2Fimage%2F99E3C5505AA4B10B1FAACEB)
		+ 단위
			+ Electrons (e-)
		+ 의미
			* 센서의 각 픽셀은 광자(photons)를 전자(electrons)로 변환하기 위해 광다이오드(photodiode)를 포함
			* 포화 용량은 광다이오드에서 저장할 수 있는 최대 전자의 수를 의미하며, 일반적으로 이것은 센서의 픽셀 크기와 관련있음
			* 포화 용량이 클수록 다이나믹 레인지(dynamic range)도 커짐
			* 포화 용량이 낮을수록 픽셀의 최대 수용에 더 빨리 도달하게 되며, 전자가 오버 플로우(overflow)가 되기 시작
			* 픽셀에서 오버 플로우가 발생하면 이미지에 흰색(8bit일 때 255 값)으로 표현됨
		+ 결론
			* 일반적으로 픽셀 크기가 클수록 포화 용량도 크며, 포화 용량이 클수록 빛을 감지하는 범위가 넓어진다
			* 단 포화용량 자체로 센서성능을 결정하는 기준으로보기에 부족함(QE,Temporal Dark Noise같은 기준과 연관되어있음)



	<br/><br/><br/><br/>




	- 출처
		+ https://luckygg.tistory.com/
		+ https://thinklucid.com/