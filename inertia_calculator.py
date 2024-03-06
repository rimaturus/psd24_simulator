m = 20
w = 0.8
d = 0.3
h = 0.2

# Hyp. rectangular box
Ixx = (1/12) * m * (h**2 + d**2)
Iyy = (1/12) * m * (d**2 + w**2)
Izz = (1/12) * m * (h**2 + w**2)

print("chassis: ", Ixx, Iyy, Izz)

# Hyp. cylinder
m = 0.2
h = 0.08
r = 0.1
Ixx = Izz = (1/12)*m*(3*r**2 + h**2)
Iyy = 0.5 * m * r**2
print("Tyre: ", Ixx, Iyy, Izz)

#FL <pose>0.554283 0.625029 -0.025 -1.5707 0 0</pose>
#FR <pose>-0.957138 0.625029 -0.025 -1.5707 0 0</pose>

#RL <pose>0.554282 -0.625029 -0.025 -1.5707 0 0</pose>
#RR <pose>-0.957138 -0.625029 -0.025 -1.5707 0 0</pose>

