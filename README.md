# Slotted-Angle-Strip-Feed-Automation-with-Arduino
This is an Electro-Mechanical Automation to automatically feed the sheet strips for Slotted Angle Punching.




https://user-images.githubusercontent.com/104246363/183676231-706d059e-bd7e-457f-85c4-13217fe47c1e.mp4


I have automated the feed of Sheet strips in the Slotted Angle punching process. Here's a video of the working prototype.

The automation setup is portable and it can be easily clamped with the bed of the press. The top roller is the driving wheel and is driven by a NEMA 23 stepper motor. The motor is driven by TB6600 stepper motor and controlled by an Arduino Uno Micro controller. I have used two simple IR sensors to detect the position of the Ram of the press and to detect the presence of the feed material.

The frame and all mechanical components were designed by me using CATIA V5. The mechanical design allows flexibility of easy fixture to the press bed and allows a little variation in the size of strips fed. The compression in between the rollers can be changed depending on the thickness of the strips fed. The compression of the guide rollers(for alignment) can also be adjusted depending on the thickness of the strip to avoid twisting and also to reduce unnecessary mechanical loss. Moreover, the whole setup is designed to automate the feed of the bending process too and can be inverted and attached to the base(At VV Industries bending of Angles is also done in the power press with a inclined bending blade and the strip is fed at approximately 0.5' per stroke)
