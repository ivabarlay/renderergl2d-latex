// Getting time value
float timeValue = glfwGetTime();

// Computing green colour with sin function
float greenValue = (sin(timeValue) / 2.0f) + 0.5f;

// Locating uniform attribute
int vertexColorLocation = glGetUniformLocation(shaderProgram, "ourColor");

// Activating program
glUseProgram(shaderProgram);

// Inserting computed value into the uniform value
glUniform4f(vertexColorLocation, 0.0f, greenValue, 0.0f, 1.0f);