// Display function for the GLUT loop
void
display()
{
    glClearColor(0.7421875, 0.33203125, 0.015625, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    // Bind the VAO and load vertices and configuration
    glBindVertexArray(vao);
    
    glDrawArrays(GL_TRIANGLES, 0, 3);
    glFlush();
}
