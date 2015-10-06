(defun suma () 
  (setf a (+ a 1))) 

(setf a 3) 
(suma) 
(print a)

;imprime el valor de a que fue declarado dentro de la funcion lo que indica que la variable esta en un ambito dinamico

(defun suma1()
	(setf x 3)
	(print x))

(defun suma2()
	(setf x 5)
	(print x)
	(suma1)
	(print x))

(suma2)

;x tiene el ultimo valor en el que fue declarado