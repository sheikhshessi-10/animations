# animations
 animations on the console using C++.
This project demonstrates various animations on the console using C++. The aim is to develop a strong grasp of console manipulation and utilize mathematical equations to create dynamic and visually engaging animations in a text-based environment.

Overview
Each animation in this project is built using fundamental concepts in programming and mathematics. From simulating physical movements to creating geometric shapes, these exercises enhance both logical thinking and control over graphical representation in the console.

Project Features
Fan Rotation Animation

Objective: Simulate a rotating fan by alternately printing two shapes to create the illusion of rotation.
Details: The animation begins at a slow speed and gradually accelerates, mimicking the startup motion of an actual fan.
Stone Throwing Simulation

Objective: Create a character animation where a figure throws stones off a cliff.
Details:
Uses X and Y equations to represent projectile motion based on time.
Extended feature: Multiple stones are thrown with unique resistances and horizontal velocities, resulting in varying trajectories and fall patterns.
Dynamic Name Printing

Objective: Print a specified name on the screen, character by character.
Details:
Each character of the name is printed in increasing scale, creating a zoom effect.
Additional animations allow the name to appear in different directions (up, down, left, right).
Bonus: The characters appear from random directions and move in a randomized pattern, demonstrating the use of rand() for varied effects.
Circle Drawing and Expansion

Objective: Display a circle at the screen's center and animate its expansion.
Details:
The circle is drawn using the equation 
 , and the radius increases to simulate growth until it fills the screen, then contracts.
Bonus: Interactive balloon simulation where pressing keys inflates or deflates the balloon. If it hits the boundary, it bursts, scattering "particles" across the screen.
Spiral Animation Using Polar Equations

Objective: Print an approximate spiral using polar coordinates.
Details: The spiral expands outwards, with the limited console resolution producing a unique, grid-aligned appearance.
Sine Wave Display

Objective: Generate and animate a moving sine wave across the screen.
Details:
Function takes amplitude, wave count, and fill character as input.
 animate the wave with the letters of the specified name, adding a personalized effect to the wave motion.
Rectangular Spiral Printing

Objective: Create a rectangular spiral that expands and then contracts.
Details:
The spiral is printed layer by layer and can be removed in reverse order.
Customizable spacing is available between layers, enhancing visual clarity.
Bonus Shape Printing

Objective: Display complex shapes like smiley faces and additional geometric patterns.
Details:
Utilizes sine functions to create the intricate shapes.
Implements gotoRowCol for precise cursor positioning on the console.


This code is adjusted to my specific computer processor speed and dimensions of console. This most probably wont work for your console and system but would definitely be helpful resource to understand how to print animations using get row and column functions.