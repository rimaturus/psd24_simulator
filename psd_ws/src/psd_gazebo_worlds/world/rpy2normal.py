import numpy as np

"""
    R_yaw = | cos(yaw) -sin(yaw)  0 |
            | sin(yaw)  cos(yaw)  0 |
            |    0         0      1 |

    R_pitch = | cos(pitch)    0  sin(pitch) |
            |    0         1       0     |
            | -sin(pitch)   0  cos(pitch) |

    R_roll = |  1       0        0      |
            |  0   cos(roll) -sin(roll) |
            |  0   sin(roll)  cos(roll) |

    R_total = R_yaw * R_pitch * R_roll 

    normal_vector = [ R_total[0][2], R_total[1][2], R_total[2][2] ] 
"""

def rpy_to_normal_vector(roll, pitch, yaw):
    R_yaw = np.array([
        [np.cos(yaw), -np.sin(yaw), 0],
        [np.sin(yaw), np.cos(yaw), 0],
        [0, 0, 1]
    ])
    R_pitch = np.array([
        [np.cos(pitch), 0, np.sin(pitch)],
        [0, 1, 0],
        [-np.sin(pitch), 0, np.cos(pitch)]
    ])
    R_roll = np.array([
        [1, 0, 0],
        [0, np.cos(roll), -np.sin(roll)],
        [0, np.sin(roll), np.cos(roll)]
    ])

    R_total = R_yaw @ R_pitch @ R_roll 
    normal_vector = R_total[:, 2]
    return normal_vector

roll = np.radians(0)
pitch = np.radians(20)
yaw = np.radians(0) 
normal = rpy_to_normal_vector(roll, pitch, yaw)
print("Normal:\t", normal)
print("RPY in rad:\n\t", roll*(np.pi/180), '\n\t', pitch*(np.pi/180), '\n\t', yaw*(np.pi/180)) 

