// Calling glutInit before all other glut functions
glutInit(&argc, argv);

// Setting up glut variables
glutInitDisplayMode(GLUT_RGBA);
glutInitWindowSize(512, 512);
glutInitContextVersion(4,3);
glutInitContextProfile(GLUT_CORE_PROFILE);
glutCreateWindow(argv[0]);

// Initializing OpenGL functions with GLEW
GLenum err = glewInit();
if (GLEW_OK != err)
{
    /* Problem: glewInit failed, something is seriously wrong. */
    printf("Error: %s\n", glewGetErrorString(err));
}
printf("Status: Using GLEW %s\n", glewGetString(GLEW_VERSION));

// GLUT main loop, no return
glutMainLoop();
