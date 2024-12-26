#include <stdio.h>
#include <string.h>

struct box {
  int itemnum;
  char color[20];
  int height;
  int width;
  int depth;
  float x;
  float y;
  float z;
};

int main(){
  struct box boxes [100];
  //index 0
  boxes[0].itemnum = 1;
  strcpy(boxes[0].color, "blue");
  boxes[0].height = 4;
  boxes[0].width = 3;
  boxes[0].depth = 2;
  boxes[0].x = 10.0;
  boxes[0].y = 15.0;
  boxes[0].z = 20.0;

  //index 1
  boxes[1].itemnum = 1;
  strcpy(boxes[1].color, "red");
  boxes[1].height = 5;
  boxes[1].width = 4;
  boxes[1].depth = 3;
  boxes[1].x = 12.0;
  boxes[1].y = 18.5;
  boxes[1].z = 25.0;

  printf("Box 0 - Item: %d, Color: %s, Position: (%.2f, %.2f, %.2f)\n", boxes[0].itemnum, boxes[0].color, boxes[0].x, boxes[0].y, boxes[0].z);
  printf("Height: %d, Width: %d, Depth: %d\n", boxes[0].height, boxes[0].width, boxes[0].depth);

  printf("Box 1 - Item: %d, Color: %s, Position: (%.2f, %.2f, %.2f)\n", boxes[1].itemnum, boxes[1].color, boxes[1].x, boxes[1].y, boxes[1].z);
  printf("Height: %d, Width: %d, Depth: %d\n", boxes[1].height, boxes[1].width, boxes[1].depth);

  return 0;
}