# Arms Length
A device that measures the distance between u and your monitor when u get too close to your monitor it starts buzzing.

<img src="RENDERS/front.png" width="600"> 

## Description

I made this because i have a bad habit that i get my face too close to my monitor and it has affected my eyesight,
So as a solution i made this and now device starts buzzing when i get close to the monitor and a red led lights up.

### Screenshots
- PCB
 
  <img src="RENDERS/pcb_layout.png" width="300">

I used kicad to design the PCB from scratch, all the files are available in PCB Folder.
  
- SCHEMATICS

  <img src ="RENDERS/Schematic.png" width="500">
  
- Explode view

  <img src="RENDERS/explode_view.png" width="300">
  
- Case

I modelled the case for the device in Autodesk Fusion, Files are available in 3Dmodels folder and Production Folder.

  <img src="RENDERS/front.png" width="300">
  <img src="RENDERS/side2.png" width="300">

## Getting Started

- Full parts list with quantities and costs: **[BOM.csv](BOM.csv)**.
- Use the gerber file from Production to get Physical PCB or change the PCB design according to your need.
- After Getting the PCB solder all the components.
- Flash Arduino Nano with **[Arms_length.ino](Firmware/Arms_length.ino)**.

### Dependencies
- Download KIcad
- Open the project in kicad  
- Download Arduino IDE.
- Download **[Arms_length.ino](Firmware/Arms_length.ino)**.

### Executing program

- Open **[Arms_length.ino](Firmware/Arms_length.ino)** in Arduino IDE.
- Select Your Arduino Nano board.
- Click Upload and you are done.

## License

This project is licensed under the MIT License - see the **[LICENSE](LICENSE)** file for details
