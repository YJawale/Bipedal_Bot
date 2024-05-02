# Bipedal_Bot
Constructed a bipedal robot capable of walking with two Degrees of Freedom (DOF) on the XY-plane. The system was crafted using six metal gear servo motors, each powered by an external power supply to ensure ample amperage supply without any shortfall. 

The 'constants.h' file can be used to set the initial home positions (where the bot stands striaght), by running the initial_setup.ino code file.
These values might vary from bot-to-to, since it depends on the way the servos are mounted.
'Biped_Kinems.ino' has implemented inverse kinematics to calculate each angle of the joint, which is passed as a signal to the servos.
'Biped_Hard_coded.ino' has the code for a basic walking mechanism, which is done by passing direct angles to the joints, without any extra computation.


![biped_front](https://github.com/YJawale/Bipedal_Bot/assets/125810583/12f8b32b-eb7c-42cb-9dcc-76d592e8c4b7)
