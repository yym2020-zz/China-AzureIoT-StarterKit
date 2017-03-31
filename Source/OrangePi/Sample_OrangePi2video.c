//By Microsoft DX and Orange Pi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <OrangePi2CognitiveService.h>

const char *Emotion_key = "xxx";
const char *Face_key = "xxx";

int main()
{
    /* Update the key of Cognitive Service : Emotion */
//    OrangePi_Update_CognitiveServiceEmotion_Key(Emotion_key);
    /* Update the key of Cognitive Service : Face */
//    OrangePi_Update_CognitiveServiceFace_Key(Face_key);
    /* Capture and FaceEmotion */
    OrangePi2FaceEmotion();
    return 0;
}
