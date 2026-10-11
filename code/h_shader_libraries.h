typedef struct ShaderInfoStruct
{
    const GLenum shaderType;
    const char* shaderPath;
} ShaderInfo;

GLuint compileShader(const GLchar* shaderSource, GLenum shaderType);
GLuint linkShader(GLuint* compiledShaders, GLuint size);

GLuint loadShaders(ShaderInfo* shaders, GLuint numberShaders);