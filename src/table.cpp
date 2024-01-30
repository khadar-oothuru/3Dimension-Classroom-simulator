# include "table.h"

void Table :: drawTable() {

	// glTranslatef(0.0f, 0.0f, -14.0f);


	glBegin(GL_QUADS);

	//Front
	//
	glColor3f(.6,.2,0);
	glVertex3f(-4.0f, -0.2f, 2.0f);
	glVertex3f(2.0f, -0.2f, 2.0f);
	glVertex3f(2.0f, 0.2f, 2.0f);
	glVertex3f(-4.0f, 0.2f, 2.0f);

	//Back
	//;
	glVertex3f(-4.0f, -0.2f, -2.0f);
	glVertex3f(-4.0f, 0.2f, -2.0f);
	glVertex3f(2.0f, 0.2f, -2.0f);
	glVertex3f(2.0f, -0.2f, -2.0f);

	//Right
	//
	glVertex3f(2.0f, -0.2f, -2.0f);
	glVertex3f(2.0f, 0.2f, -2.0f);
	glVertex3f(2.0f, 0.2f, 2.0f);
	glVertex3f(2.0f, -0.2f, 2.0f);


	//Left
	;
	glVertex3f(-4.0f, -0.2f, -2.0f);
	glVertex3f(-4.0f, -0.2f, 2.0f);
	glVertex3f(-4.0f, 0.2f, 2.0f);
	glVertex3f(-4.0f, 0.2f, -2.0f);

	//top
	//

	glVertex3f(2.0f, 0.2f, 2.0f);
	glVertex3f(-4.0f, 0.2f, 2.0f);
	glVertex3f(-4.0f, 0.2f, -2.0f);
	glVertex3f(2.0f, 0.2f, -2.0f);

	//bottom
	;

	glVertex3f(2.0f, -0.2f, 2.0f);
	glVertex3f(-4.0f, -0.2f, 2.0f);
	glVertex3f(-4.0f, -0.2f, -2.0f);
	glVertex3f(2.0f, -0.2f, -2.0f);

	//table front leg
	//front
	//
	glColor3f(.8f, .6f, 0.0f);
	glVertex3f(1.8f, -0.2f, 1.6f);
	glVertex3f(1.4f, -0.2f, 1.6f);
	glVertex3f(1.4f, -3.0f, 1.6f);
	glVertex3f(1.8f, -3.0f, 1.6f);

	//back
	//;

	glVertex3f(1.8f, -0.2f, 1.2f);
	glVertex3f(1.4f, -0.2f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.2f);

	//right
	//

	glVertex3f(1.8f, -0.2f, 1.6f);
	glVertex3f(1.8f, -0.2f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.6f);

	//left
	//;

	glVertex3f(1.4f, -0.2f, 1.6f);
	glVertex3f(1.4f, -0.2f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.6f);

	//back leg back
	//front
	//;
	glVertex3f(1.8f, -0.2f, -1.2f);
	glVertex3f(1.4f, -0.2f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.2f);

	//back
	//;

	glVertex3f(1.8f, -0.2f, -1.6f);
	glVertex3f(1.4f, -0.2f, -1.6f);
	glVertex3f(1.4f, -3.0f, -1.6f);
	glVertex3f(1.8f, -3.0f, -1.6f);

	//right
	//

	glVertex3f(1.8f, -0.2f, -1.6f);
	glVertex3f(1.8f, -0.2f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.6f);

	//left
	//

	glVertex3f(1.4f, -0.2f, -1.6f);
	glVertex3f(1.4f, -0.2f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.6f);

	//leg left front
	//

	
	glVertex3f(-3.8f, -0.2f, 1.6f);
	glVertex3f(-3.4f, -0.2f, 1.6f);
	glVertex3f(-3.4f, -3.0f, 1.6f);
	glVertex3f(-3.8f, -3.0f, 1.6f);

	//back
	//;

	glVertex3f(-3.8f, -0.2f, 1.2f);
	glVertex3f(-3.4f, -0.2f, 1.2f);
	glVertex3f(-3.4f, -3.0f, 1.2f);
	glVertex3f(-3.8f, -3.0f, 1.2f);

	//right


	glVertex3f(-3.8f, -0.2f, 1.6f);
	glVertex3f(-3.8f, -0.2f, 1.2f);
	glVertex3f(-3.8f, -3.0f, 1.2f);
	glVertex3f(-3.8f, -3.0f, 1.6f);

	//left
	;

	glVertex3f(-3.4f, -0.2f, 1.6f);
	glVertex3f(-3.4f, -0.2f, 1.2f);
	glVertex3f(-3.4f, -3.0f, 1.2f);
	glVertex3f(-3.4f, -3.0f, 1.6f);

	//left leg back front

	//front
	;
	//glColor3f(1,1,1);
	glVertex3f(-3.8f, -0.2f, -1.2f);
	glVertex3f(-3.4f, -0.2f, -1.2f);
	glVertex3f(-3.4f, -3.0f, -1.2f);
	glVertex3f(-3.8f, -3.0f, -1.2f);

	//back
	;

	glVertex3f(-3.8f, -0.2f, -1.6f);
	glVertex3f(-3.4f, -0.2f, -1.6f);
	glVertex3f(-3.4f, -3.0f, -1.6f);
	glVertex3f(-3.8f, -3.0f, -1.6f);

	//right


	glVertex3f(-3.8f, -0.2f, -1.6f);
	glVertex3f(-3.8f, -0.2f, -1.2f);
	glVertex3f(-3.8f, -3.0f, -1.2f);
	glVertex3f(-3.8f, -3.0f, -1.6f);

	//left


	glVertex3f(-3.4f, -0.2f, -1.6f);
	glVertex3f(-3.4f, -0.2f, -1.2f);
	glVertex3f(-3.4f, -3.0f, -1.2f);
	glVertex3f(-3.4f, -3.0f, -1.6f);



	glEnd();
}










// #include "table.h"

// void Table::drawTable() {
//     // Define colors
//     GLfloat tableColor[] = {0.6f, 0.2f, 0.0f};  // Brown color for the table
//     GLfloat legColor[] = {0.8f, 0.6f, 0.0f};    // Yellow color for the legs

//     // Define dimensions
//     GLfloat tableWidth = 6.0f;
//     GLfloat tableHeight = 0.4f;
//     GLfloat tableDepth = 4.0f;
//     GLfloat legWidth = 0.4f;
//     GLfloat legHeight = 2.8f;
//     GLfloat legDepth = 0.4f;

//     // Draw Table
//     glBegin(GL_QUADS);
//     // Front
//     glColor3fv(tableColor);
//     glVertex3f(-tableWidth / 2, -tableHeight / 2, tableDepth / 2);
//     glVertex3f(tableWidth / 2, -tableHeight / 2, tableDepth / 2);
//     glVertex3f(tableWidth / 2, tableHeight / 2, tableDepth / 2);
//     glVertex3f(-tableWidth / 2, tableHeight / 2, tableDepth / 2);

//     // Back
//     glVertex3f(-tableWidth / 2, -tableHeight / 2, -tableDepth / 2);
//     glVertex3f(-tableWidth / 2, tableHeight / 2, -tableDepth / 2);
//     glVertex3f(tableWidth / 2, tableHeight / 2, -tableDepth / 2);
//     glVertex3f(tableWidth / 2, -tableHeight / 2, -tableDepth / 2);

//     // Right
//     glVertex3f(tableWidth / 2, -tableHeight / 2, -tableDepth / 2);
//     glVertex3f(tableWidth / 2, tableHeight / 2, -tableDepth / 2);
//     glVertex3f(tableWidth / 2, tableHeight / 2, tableDepth / 2);
//     glVertex3f(tableWidth / 2, -tableHeight / 2, tableDepth / 2);

//     // Left
//     glVertex3f(-tableWidth / 2, -tableHeight / 2, -tableDepth / 2);
//     glVertex3f(-tableWidth / 2, -tableHeight / 2, tableDepth / 2);
//     glVertex3f(-tableWidth / 2, tableHeight / 2, tableDepth / 2);
//     glVertex3f(-tableWidth / 2, tableHeight / 2, -tableDepth / 2);

//     // Top
//     glVertex3f(tableWidth / 2, tableHeight / 2, tableDepth / 2);
//     glVertex3f(-tableWidth / 2, tableHeight / 2, tableDepth / 2);
//     glVertex3f(-tableWidth / 2, tableHeight / 2, -tableDepth / 2);
//     glVertex3f(tableWidth / 2, tableHeight / 2, -tableDepth / 2);

//     // Bottom
//     glVertex3f(tableWidth / 2, -tableHeight / 2, tableDepth / 2);
//     glVertex3f(-tableWidth / 2, -tableHeight / 2, tableDepth / 2);
//     glVertex3f(-tableWidth / 2, -tableHeight / 2, -tableDepth / 2);
//     glVertex3f(tableWidth / 2, -tableHeight / 2, -tableDepth / 2);
//     glEnd();

//     // Draw Front Left Leg
//     glBegin(GL_QUADS);
//     glColor3fv(legColor);
//     glVertex3f(-tableWidth / 2 + legWidth / 2, -tableHeight / 2, tableDepth / 2 - legDepth / 2);
//     glVertex3f(-tableWidth / 2 - legWidth / 2, -tableHeight / 2, tableDepth / 2 - legDepth / 2);
//     glVertex3f(-tableWidth / 2 - legWidth / 2, -tableHeight / 2 - legHeight, tableDepth / 2 - legDepth / 2);
//     glVertex3f(-tableWidth / 2 + legWidth / 2, -tableHeight / 2 - legHeight, tableDepth / 2 - legDepth / 2);
//     glEnd();

//     // Draw Front Right Leg
//     glBegin(GL_QUADS);
//     glColor3fv(legColor);
//     glVertex3f(tableWidth / 2 - legWidth / 2, -tableHeight / 2, tableDepth / 2 - legDepth / 2);
//     glVertex3f(tableWidth / 2 + legWidth / 2, -tableHeight / 2, tableDepth / 2 - legDepth / 2);
//     glVertex3f(tableWidth / 2 + legWidth / 2, -tableHeight / 2 - legHeight, tableDepth / 2 - legDepth / 2);
//     glVertex3f(tableWidth / 2 - legWidth / 2, -tableHeight / 2 - legHeight, tableDepth / 2 - legDepth / 2);
//     glEnd();

//     // Draw Back Left Leg
//     glBegin(GL_QUADS);
//     glColor3fv(legColor);
//     glVertex3f(-tableWidth / 2 + legWidth / 2, -tableHeight / 2, -tableDepth / 2 + legDepth / 2);
//     glVertex3f(-tableWidth / 2 - legWidth / 2, -tableHeight / 2, -tableDepth / 2 + legDepth / 2);
//     glVertex3f(-tableWidth / 2 - legWidth / 2, -tableHeight / 2 - legHeight, -tableDepth / 2 + legDepth / 2);
//     glVertex3f(-tableWidth / 2 + legWidth / 2, -tableHeight / 2 - legHeight, -tableDepth / 2 + legDepth / 2);
//     glEnd();

//     // Draw Back Right Leg
//     glBegin(GL_QUADS);
//     glColor3fv(legColor);
//     glVertex3f(tableWidth / 2 - legWidth / 2, -tableHeight / 2, -tableDepth / 2 + legDepth / 2);
//     glVertex3f(tableWidth / 2 + legWidth / 2, -tableHeight / 2, -tableDepth / 2 + legDepth / 2);
//     glVertex3f(tableWidth / 2 + legWidth / 2, -tableHeight / 2 - legHeight, -tableDepth / 2 + legDepth / 2);
//     glVertex3f(tableWidth / 2 - legWidth / 2, -tableHeight / 2 - legHeight, -tableDepth / 2 + legDepth / 2);
//     glEnd();
// }
