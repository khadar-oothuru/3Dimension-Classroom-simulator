# 3Dimension Classroom Simulator

This project is a 3D simulation of a classroom environment using OpenGL. It includes various elements such as chairs, tables, cupboards, windows, snowmen, fans, and shelves to create a realistic classroom scene.

## How to Build and Run

To build and run the simulator, follow these steps:

1. **Compile the Source Code:**
   Open a terminal or command prompt in the project directory and run the following command:

   ```bash
   g++ -o outputFileName classroom.cpp src/chair.cpp src/table.cpp src/cupboard.cpp src/window.cpp src/snowman.cpp src/fan.cpp src/shelf.cpp -L<path_to_opengl_libs> -lfreeglut -lglu32 -lopengl32

2. Run the Executable:

   ./outputFileName.exe

3. Navigate in the Simulation:

Use arrow keys to move forward, backward, and sideways.
Press 'x' to roll the camera to the right and 'z' to roll to the left.
Move the mouse to control the camera's yaw and pitch.

4. Dependencies

Make sure you have the necessary dependencies installed:
                            OpenGL
                            FreeGLUT
                            GLEW (Optional)
                            glfw
 
5.  For intallation please follow this blog 

  https://medium.com/@bhargav.chippada/how-to-setup-opengl-on-mingw-w64-in-windows-10-64-bits-b77f350cea7e


6. Notes
This project assumes that all source files are in the src directory.
Adjust the compilation command based on your project structure.
Feel free to explore and modify the source code to enhance the simulation according to your preferences.

Happy coding!


