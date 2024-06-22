import numpy as np

def generate_sdf(inner, outer):
    sdf_template = '''<?xml version="1.0"?>

<sdf version='1.9'>
    <world name='track'>

        <!-- PHYSICS -->
        <physics name="1ms" type="ignored">
            <max_step_size>0.001</max_step_size>
            <real_time_factor>1.0</real_time_factor>
        </physics>

        <gravity>0 0 -9.8</gravity>
        <magnetic_field>6e-06 2.3e-05 -4.2e-05</magnetic_field>
        <atmosphere type='adiabatic'/>

        <!-- ......... -->

        <!-- PLUGINS -->
        <plugin name='gz::sim::systems::Physics' filename='gz-sim-physics-system'/>
        <plugin name='gz::sim::systems::UserCommands' filename='gz-sim-user-commands-system'/>
        <plugin name='gz::sim::systems::SceneBroadcaster' filename='gz-sim-scene-broadcaster-system'/>
        <plugin name="gz::sim::systems::Imu" filename="gz-sim-imu-system"/>
        
        <gui fullscreen='0'>
            <!-- 3D scene -->
            <plugin filename="MinimalScene" name="3D View">
                <gz-gui>
                <title>3D View</title>
                <property type="bool" key="showTitleBar">false</property>
                <property type="string" key="state">docked</property>
                </gz-gui>

                <engine>ogre2</engine>
                <scene>scene</scene>
                <ambient_light>0.4 0.4 0.4</ambient_light>
                <background_color>0.8 0.8 0.8</background_color>
                <camera_pose>-6 0 6 0 0.5 0</camera_pose>
            </plugin>

            <!-- Plugins that add functionality to the scene -->
            <plugin filename="EntityContextMenuPlugin" name="Entity context menu">
                <gz-gui>
                <property key="state" type="string">floating</property>
                <property key="width" type="double">5</property>
                <property key="height" type="double">5</property>
                <property key="showTitleBar" type="bool">false</property>
                </gz-gui>
            </plugin>
            <plugin filename="GzSceneManager" name="Scene Manager">
                <gz-gui>
                <property key="resizable" type="bool">false</property>
                <property key="width" type="double">5</property>
                <property key="height" type="double">5</property>
                <property key="state" type="string">floating</property>
                <property key="showTitleBar" type="bool">false</property>
                </gz-gui>
            </plugin>
            <plugin filename="InteractiveViewControl" name="Interactive view control">
                <gz-gui>
                <property key="resizable" type="bool">false</property>
                <property key="width" type="double">5</property>
                <property key="height" type="double">5</property>
                <property key="state" type="string">floating</property>
                <property key="showTitleBar" type="bool">false</property>
                </gz-gui>
            </plugin>
            <plugin filename="CameraTracking" name="Camera Tracking">
                <gz-gui>
                <property key="resizable" type="bool">false</property>
                <property key="width" type="double">5</property>
                <property key="height" type="double">5</property>
                <property key="state" type="string">floating</property>
                <property key="showTitleBar" type="bool">false</property>
                </gz-gui>
            </plugin>
            <plugin name='World control' filename='WorldControl'>
                <gz-gui>
                    <title>World control</title>
                    <property type='bool' key='showTitleBar'>0</property>
                    <property type='bool' key='resizable'>0</property>
                    <property type='double' key='height'>72</property>
                    <property type='double' key='z'>1</property>
                    <property type='string' key='state'>floating</property>
                    <anchors target='3D View'>
                        <line own='left' target='left'/>
                        <line own='bottom' target='bottom'/>
                    </anchors>
                </gz-gui>
                <play_pause>1</play_pause>
                <step>1</step>
                <start_paused>1</start_paused>
            </plugin>
            <plugin name='World stats' filename='WorldStats'>
                <gz-gui>
                    <title>World stats</title>
                    <property type='bool' key='showTitleBar'>0</property>
                    <property type='bool' key='resizable'>0</property>
                    <property type='double' key='height'>110</property>
                    <property type='double' key='width'>290</property>
                    <property type='double' key='z'>1</property>
                    <property type='string' key='state'>floating</property>
                    <anchors target='3D View'>
                        <line own='right' target='right'/>
                        <line own='bottom' target='bottom'/>
                    </anchors>
                </gz-gui>
                <sim_time>1</sim_time>
                <real_time>1</real_time>
                <real_time_factor>1</real_time_factor>
                <iterations>1</iterations>
            </plugin>
            
            <plugin filename="VisualizeLidar" name="Visualize Lidar">
            </plugin>
            
            <plugin filename="ImageDisplay" name="Image Display">
            </plugin>

            <!-- Inspector -->
            <plugin filename="ComponentInspector" name="Component inspector">
                <ignition-gui>
                <property type="string" key="state">docked</property>
                </ignition-gui>
            </plugin>

            <!-- Entity tree -->
            <plugin filename="EntityTree" name="Entity tree">
                <ignition-gui>
                <property type="string" key="state">docked</property>
                </ignition-gui>
            </plugin>
        </gui>
        <!-- ......... -->

        <!-- SENSORS -->

        <plugin
        filename="gz-sim-sensors-system"
        name="gz::sim::systems::Sensors">
        <render_engine>ogre2</render_engine>
        </plugin>

        <!-- ......... -->
        
        <!-- AMBIENT -->

        <scene>
            <ambient>1 1 1 1</ambient>
            <background>0.8 0.8 0.8 1</background>
            <shadows>1</shadows>
        </scene>
        <light name='sun' type='directional'>
            <cast_shadows>1</cast_shadows>
            <pose>0 0 10 0 0 0</pose>
            <diffuse>0.8 0.8 0.8 1</diffuse>
            <specular>0.8 0.8 0.8 1</specular>
            <attenuation>
                <range>1000</range>
                <constant>0.9</constant>
                <linear>0.01</linear>
                <quadratic>0.001</quadratic>
            </attenuation>
            <direction>-0.5 0.1 -0.9</direction>
        </light>


        <model name='ground_plane'>
            <static>true</static>
            <link name='link'>
                <collision name='collision'>
                    <geometry>
                        <plane>
                        <normal>0 0 1</normal>
                        <size>100 100</size>
                        </plane>
                    </geometry>
                    
                    <surface>
                        <friction>
                            <dart/>
                        </friction>
                        <bounce/>
                        <contact/>
                    </surface>
                </collision>

                <visual name='visual'>
                    <geometry>
                        <plane>
                        <normal>0 0 1</normal>
                        <size>100 100</size>
                        </plane>
                    </geometry>
                    <material>
                        <ambient>0.1 0.1 0.1 1</ambient>
                        <diffuse>0.1 0.1 0.1 1</diffuse>
                        <specular>0.8 0.8 0.8 1</specular>
                    </material>
                </visual>

                <pose>0 0 0 0 -0 0</pose>

                <inertial>
                    <pose>0 0 0 0 -0 0</pose>
                    <mass>1</mass>
                    <inertia>
                        <ixx>1</ixx>
                        <ixy>0</ixy>
                        <ixz>0</ixz>
                        <iyy>1</iyy>
                        <iyz>0</iyz>
                        <izz>1</izz>
                    </inertia>
                </inertial>

                <enable_wind>false</enable_wind>

            </link>

            <pose>0 0 0 0 -0 0</pose>

            <self_collide>false</self_collide>
        </model>

        <!-- ......... -->

        <!-- TRACK -->    
        <model name='cones'>
            <pose>0 0 0 0 0 0</pose>
            {}
      <static>true</static>
      <self_collide>false</self_collide>
    </model>
  </world>
</sdf>
    
    '''

    cone_model_template = '''
    
      <link name='cone_{}_link'>
        <collision name='cone_{}_collision'>
          <geometry>
            <mesh>
              <uri>/home/ubuntu/psd_ws/src/psd_gazebo_worlds/world/models/cone/meshes/cone.stl</uri>
              <scale>0.001 0.001 0.001</scale>
            </mesh>
          </geometry>
        </collision>
        <visual name='cone_{}_visual'>
          <geometry>
            <mesh>
              <uri>/home/ubuntu/psd_ws/src/psd_gazebo_worlds/world/models/cone/meshes/cone.stl</uri>
              <scale>0.001 0.001 0.001</scale>
            </mesh>
          </geometry>
          <material>
            <ambient>{}</ambient>
            <diffuse>{}</diffuse>
            <specular>{}</specular>
          </material>
        </visual>
        <pose>{}</pose>
        <enable_wind>false</enable_wind>
      </link>'''

    cones = ""
    for i, coord in enumerate(inner):
        x, y, z, color = coord[0:4]

        pose = "{} {} {} 1.57 0 0".format(x, y ,z)

        #inner = yellow cones
        ambient = '1 1 0 1'
        diffuse = '1 1 0 1'
        specular = '1 1 0 1'

        cones += cone_model_template.format(i, i, i, ambient, diffuse, specular, pose)

    for i, coord in enumerate(outer):
        bias = len(inner)
        x, y, z, color = coord[0:4]

        pose = "{} {} {} 1.57 0 0".format(x, y ,z)

        #outer = blue cones
        ambient = '0 0 1 1'
        diffuse = '0 0 1 1'
        specular = '0 0 1 1'

        idx = i + bias + 1
        cones += cone_model_template.format(idx, idx, idx, ambient, diffuse, specular, pose)
    return sdf_template.format(cones)

def scale_track(track_coordinates, scale_factor):
    xy_coords = track_coordinates[:, :2]

    centroid = np.mean(xy_coords, axis=0)

    # Translate the track coordinates so that the centroid is at the origin
    translated_track = xy_coords - centroid

    # Scale down the translated track uniformly
    scaled_track_xy = translated_track * scale_factor

    # Translate the scaled track back to its original position
    scaled_track_xy += centroid

    scaled_track = np.hstack((scaled_track_xy, track_coordinates[:, 2:4]))

    return scaled_track

def main():
    # Assuming the format is: x, y, z, 1 for each cone
    innerConePosition = np.loadtxt("track_csv/track_inner.csv", delimiter=',')
    outerConePosition = np.loadtxt("track_csv/track_outer.csv", delimiter=',')

    scale_factor = 0.5
    scaled_inner = scale_track(innerConePosition, scale_factor)
    scaled_outer = scale_track(outerConePosition, scale_factor)

    # sdf_content = generate_sdf(scaled_inner, scaled_outer)
    sdf_content = generate_sdf(scaled_inner, scaled_outer)


    with open("track_decimate.sdf", "w") as f:
        f.write(sdf_content)

if __name__ == "__main__":
    main()