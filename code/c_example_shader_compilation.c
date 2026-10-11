// Shader object is created and stores reference
unsigned int vertexShader, fragmentShader;
vertexShader = glCreateShader(GL_VERTEX_SHADER);
fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);

// Linking code to the object
glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
glCompileShader(vertexShader);
glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
glCompileShader(fragmentShader);

// Checking errors
int success;
char infoLog[512];

glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
if(!success)
{
    glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
    std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
}

glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
if(!success)
{
    glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
    std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
}