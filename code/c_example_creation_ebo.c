float vertices[] = {
     0.5f,  0.5f, 0.0f,  // top right
     0.5f, -0.5f, 0.0f,  // down right
    -0.5f, -0.5f, 0.0f,  // down left
    -0.5f,  0.5f, 0.0f   // top left
};

unsigned int indices[] = {  
    0, 1, 3,   // First triangle
    1, 2, 3    // Second triangle
};

// Create EBO
glGenBuffers(1, &ebo);

// Bind EBO
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);