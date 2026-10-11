// Display function for the GLUT loop
void
display()
{
    glClearColor(0.7421875, 0.33203125, 0.015625, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    // Bind the VAO and load vertices and configuration
    glBindVertexArray(vao);

    // Draw triangles by the indices
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
    
    glFlush();
}