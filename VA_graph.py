import numpy as np
import matplotlib.pyplot as plt

datos= np.loadtxt("tray.txt")


#Se cargan los datos en las posiciones
x=datos[:,0]
t=datos[:,1]
v=datos[:,2]

#Se hace la grafica posicion y tiempo
plt.plot(t,x)
plt.savefig("pos.png")
plt.figure()

#Se hace la grafica velocidad y tiempo
plt.plot(t,v)
plt.savefig("vel.png")
plt.figure()


#Se hace la grafica de velocidad y tiempo
plt.plot(v,x)
plt.savefig("phase..png")
plt.figure()

