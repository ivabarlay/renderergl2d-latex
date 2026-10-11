typedef struct FrameStruct
{
    glm::mat4 transformMatrix;
    size_t timeInertia;
} FrameStruct;

typedef struct
{
    FrameStruct* frameDataArray;
    size_t animationIndex;
    size_t animationLength;
    GLint modelMatrixLoc;
    GLuint MS_FPS;
    void (*frameFunction) (int);
} AnimationStruct;

typedef struct
{
    GLfloat x; GLfloat y;
} Coords2D;

typedef struct
{
    GLfloat x; GLfloat y; GLfloat z;
} Coords3D;

int moveAnimation(Coords2D* coords, GLuint times);
int scaleAnimation(Coords2D* coords, GLuint times);
int mrsAnimation(Coords2D* coordsMove, Coords3D* coordsRotate, Coords2D* coordsScale, GLfloat angle, GLuint times);
int rotateAnimation(Coords3D* coords, GLfloat angle, GLuint times);

void addRotateBuffer(Coords3D* coords, GLfloat angle, GLuint times, FrameStruct* frameData, size_t index);
void addScaleBuffer(Coords2D* coords, GLuint times, FrameStruct* frameData, size_t index);
void addTranslationBuffer(Coords2D* coords, GLuint times, FrameStruct* frameData, size_t index);
void addMrsBuffer(Coords2D* coordsMove,
        Coords3D* coordsRotate, GLfloat angle,
        Coords2D* coordsScale,
        GLuint times, FrameStruct* frameData, size_t index);

glm::mat4 centerTransformMatrix2D(glm::mat4 matrix, GLfloat *positions, GLuint numberPoints);
