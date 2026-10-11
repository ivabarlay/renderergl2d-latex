GLfloat triangle[3][2] = {
    {1, -1},
    {0, 1},
    {-1, -1}
};

...

// Copy vertices data to the VBO
glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat) * 6, triangle, GL_STATIC_DRAW);

// Specify attribute positions
glVertexAttribPointer(vPosition, 2, GL_FLOAT, GL_FALSE, 0, (void*)0);

// Enabling attribute
glEnableVertexAttribArray(vPosition);

