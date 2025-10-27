# sesion-10a

## Apuntes
###### ${\color{#3d3d44}Se \ recomienda \ usar \ modo \ oscuro, \ hay \ palabras \ en \ color \ blanco \ que \ de \ otra \ forma \ no \ son \ visibles.}$ <br/>
###### ${\color{#3d3d44}The \ use \ of \ dark mode \ is \ recommended, \ there's \ white \ colored \ text \ that \ otherwise \ is \ not \ visible.}$ <br/>

### ${\color{cyan}Código\ V3}$

Durante la clase me enfoqué en mejorar el código, pues a pesar de que funcionaba bien, se demoraba mucho en completar una pasada (escaneo y comparación), por lo que los ojos tendrían una tasa de actualización muy lenta para mi gusto.

Eliminé las variables de tiempo que controlan el movimiento del servo, a favor de que el servo se mueva (y la secuencia del código continúe) en el instante en que se finalizan las mediciones, haciendo que cada paso del servo sea un poquito más rápido.

Esto lo hice aprovechando la función `medirDistanciaCm()`, ya que el código no avanzará a la línea siguiente hasta que esta devuelva el valor de las mediciones promediado, y reduciendo el número de mediciones realizadas por `ping_median();`.

Y comencé a ver la lógica de posicionar el servo de los ojos, pues cuando se detecta a una persona, esta es detectada en múltiples grados (pasos) del recorrido del sensor, por lo que hay que implementar una lógica que tome el ángulo inicial y final de detección, determinar el centro de este cono y enviar esa ubicación al servo de los ojos.

Pero no alcancé a escribir ninguna línea de código relacionada, porque estuve ayudando a [@13-Bernardita-Jesus](https://github.com/Bernardita-Jesus) con el modelado de la carcasa, aunque no pude ser de mucha ayuda.

###  ${\color{cyan}Durante\ la\ semana}$

Estube pensando en cómo lidiar con el radar detectando a más de una persona y se me ocurrió que registre el angulo donde comenzó a detectar al usuario y luego registre el angulo donde este ya deja de ser detectado y luego encuentre el medio del arco.

Así en caso de haber 2 personas, registra el primer angulo de detección, luego espera que el usuario deje de ser detectado (tal vez usando una bandera para evitar detectar angulos dinales fantasma), luego inmediatamente calcula el centro del cono, mueve los ojos y continua comparando, luego si vuelve a detectar a otra persona hace lo mismo, graba el angulo de inicio de detección, el final, calcula el centro y reposiciona los ojos.

Flow chart actualizado:
[![](https://mermaid.ink/img/pako:eNqNlE1T2zAQhv-KRifjCUy-E3IoQ0OgUEjL16Xjy9ZWErW21kh2CiT5ST1x66Uz5Y91JYUkTCnthbHDfjz7vrue8RgTwXt8lOK3eAK6YFcHkToMLoWe4gUkoFmMmRTqHphQLAWWo5GxfHxQTCp6gJSFIahxmeKZVGG4xba337D9SO3Pfv0cmOcZEBclJcix_QvrRLgNw72Fy5wPcc7e-v4MpmAbh2EOBsOQjTUkaCiTqiZCCyL2_eZXQmdS2V9ZhlOhjZizflCmhaZM4kSWSfpfIk0Biqh92kFwVIJOaLSUTSFF7fJFssSNUWthclQJCVAIRtCOgKJSZiyhK2OH9RSXj9_nbPAf8PL-ppSCOr-CfxRc_wP_XdDHLAcNG8xLiWN0ZgFha4n6pVEyaTKidA74esezS5tGkHUvhzDeK2H2bEVDDBoUCRCGGeixUAOtUYfhIlLHa_dOyHk7SiHiwqp1RxysVKw0JLbEvXW00-ucwvdfC9-IvQguxJhE0LSXntxKNiLpUvvgingdBK0naUJxNyWN-_hDMYVk2lOjVQ9jmzzZgNmzwm7DcaMyqvllEEMalykF5hqt8EiXUWjxlLdMunsJy_W5CvxFoKIabo0YfkGzZREGkeo7lver81mZ7lymZZVq5E3FjUuyUfslwawvySl2SooRZ1LGggZ2s1iDwYYat8hZ3rDrAPegtyJ15Luv3TwLhsj0sobUPpMCT13IkDBJ1MLt7-ODLb8RS9VduCfyQB-CRBjaUjl13xZlbSAMuKMh6J7tpbiVtp-eQoosR0u3XAZnCl2H0_EwUsMV53UwMLnQS789j3iOs0wbRupkPd7H4EjDZ_Csfzf-z5WabK745sK6JoNVEzs0vZ2vWg54hY-1THiv0KWo8IxYwb7yWaQYi3gxEZmIeI8eSYSvEY_UgnJyUJ8Qs6c0jeV4wnsjSA29lXkChTiQQF-ZbPWrFoouto-lKniv1qzWd10Z3pvxW97rtHaq3Vq9Wm-0OrvdertV4Xe8t92qdXaqrUat3Wx2q-3GbmtR4feucW2n2Wk32t1up9Ns12qNemPxGwZ0Jzo?type=png)](https://mermaid.live/edit#pako:eNqNlE1T2zAQhv-KRifjCUy-E3IoQ0OgUEjL16Xjy9ZWErW21kh2CiT5ST1x66Uz5Y91JYUkTCnthbHDfjz7vrue8RgTwXt8lOK3eAK6YFcHkToMLoWe4gUkoFmMmRTqHphQLAWWo5GxfHxQTCp6gJSFIahxmeKZVGG4xba337D9SO3Pfv0cmOcZEBclJcix_QvrRLgNw72Fy5wPcc7e-v4MpmAbh2EOBsOQjTUkaCiTqiZCCyL2_eZXQmdS2V9ZhlOhjZizflCmhaZM4kSWSfpfIk0Biqh92kFwVIJOaLSUTSFF7fJFssSNUWthclQJCVAIRtCOgKJSZiyhK2OH9RSXj9_nbPAf8PL-ppSCOr-CfxRc_wP_XdDHLAcNG8xLiWN0ZgFha4n6pVEyaTKidA74esezS5tGkHUvhzDeK2H2bEVDDBoUCRCGGeixUAOtUYfhIlLHa_dOyHk7SiHiwqp1RxysVKw0JLbEvXW00-ucwvdfC9-IvQguxJhE0LSXntxKNiLpUvvgingdBK0naUJxNyWN-_hDMYVk2lOjVQ9jmzzZgNmzwm7DcaMyqvllEEMalykF5hqt8EiXUWjxlLdMunsJy_W5CvxFoKIabo0YfkGzZREGkeo7lver81mZ7lymZZVq5E3FjUuyUfslwawvySl2SooRZ1LGggZ2s1iDwYYat8hZ3rDrAPegtyJ15Luv3TwLhsj0sobUPpMCT13IkDBJ1MLt7-ODLb8RS9VduCfyQB-CRBjaUjl13xZlbSAMuKMh6J7tpbiVtp-eQoosR0u3XAZnCl2H0_EwUsMV53UwMLnQS789j3iOs0wbRupkPd7H4EjDZ_Csfzf-z5WabK745sK6JoNVEzs0vZ2vWg54hY-1THiv0KWo8IxYwb7yWaQYi3gxEZmIeI8eSYSvEY_UgnJyUJ8Qs6c0jeV4wnsjSA29lXkChTiQQF-ZbPWrFoouto-lKniv1qzWd10Z3pvxW97rtHaq3Vq9Wm-0OrvdertV4Xe8t92qdXaqrUat3Wx2q-3GbmtR4feucW2n2Wk32t1up9Ns12qNemPxGwZ0Jzo)