// Create the storage for the object
GLuint objectName;
glGenObject(1, &objectName);

// Put data into the object.
glBindObject(GL_MODIFY, objectName);
glObjectParameteri(GL_MODIFY, GL_OBJECT_COUNT, 5);
glObjectParameterf(GL_MODIFY, GL_OBJECT_OPACITY, 0.4f);
glObjectParameters(GL_MODIFY, GL_OBJECT_NAME, "Some String");