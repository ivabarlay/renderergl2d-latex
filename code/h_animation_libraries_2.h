int loadAnimationBuffer(FrameStruct* frameDataPtr, size_t length);

int genAnimationBuffer(GLuint length, size_t size);

void deleteAnimationBuffer();

void defaultFrameAction(int value);

void updateAnimationData(GLuint modelMatrixLoc, GLuint MS_FPS,
        GLvoid (*frameFunction) (int), size_t animationLength, size_t animationIndex);

void updateFrameMode(Frame_Modes mode);

typedef enum { fAnim, fStill, fInertia } Frame_Modes;


