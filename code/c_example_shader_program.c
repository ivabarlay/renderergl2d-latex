// Program object creation
unsigned int shaderProgram;
shaderProgram = glCreateProgram();

// Enlace de los Shaders al programa
glAttachShader(shaderProgram, vertexShader);
glAttachShader(shaderProgram, fragmentShader);
glLinkProgram(shaderProgram);

// Error checking
glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
if(!success)
{
    glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
    std::cout << "ERROR::SHADER::PROGRAM::LINKAGE_FAILED\n" << infoLog << std::endl;
}

// Program activation
glUseProgram(shaderProgram);

// Cleaning of used shaders
glDeleteShader(vertexShader);
glDeleteShader(fragmentShader);