
//position
PyDoc_STRVAR(position_doc,
	"3D position of object \n"\
	"\n"\
	"type :  pyvmath.vec3 : (x,y,z)\n"\
	"read / write");

//rotation
PyDoc_STRVAR(rotation_doc,
	"3D rotation of object \n"\
	"\n"\
	"type :  pyvmath.quat : (x,y,z,w)\n"\
	"read / write");

//scale
PyDoc_STRVAR(scale_doc,
	"3D scale of object \n"\
	"\n"\
	"type :  pyvmath.vec3 : (x,y,z)\n"\
	"read / write");

//fieldOfView
PyDoc_STRVAR(fieldOfView_doc, 
	"Viewing angle in radians for perspective transformation\n"\
	"\n"\
	"type : float\n"\
	"read / write");

//aspectRate
PyDoc_STRVAR(aspectRate_doc, 
	"Aspect rate for perspective transformation\n"\
	"\n"\
	"type : float\n"\
	"read / write");

//orthoWidth
PyDoc_STRVAR(orthoWidth_doc,
	"Screen width in orthographic projection\n"\
	"\n"\
	"type : float\n"\
	"read / write");

//nearPlane
PyDoc_STRVAR(nearPlane_doc,
	"Near clip plane\n"\
	"\n"\
	"type : float\n"\
	"read / write");


//farPlane
PyDoc_STRVAR(farPlane_doc,
	"Far clip plane\n"\
	"\n"\
	"type : float\n"\
	"read / write");

//lockon
PyDoc_STRVAR(lockon_doc,
	"Specifies whether to gaze at the target\n"\
	"\n"\
	"type : bool\n"\
	"read / write\n"\
	"\n"\
	"The initial value is True");

//pan
PyDoc_STRVAR(pan_doc,
	"A radian value representing horizontal rotation along the Y axis\n"\
	"\n"\
	"type : float\n"\
	"read / write");

//tilt
PyDoc_STRVAR(tilt_doc,
	"A radian value representing vertical rotation along the X axis\n"\
	"\n"\
	"type : float\n"\
	"read / write");

//roll
PyDoc_STRVAR(roll_doc,
	"A radian value representing rotation along the Z axis\n"\
	"\n"\
	"type : float\n"\
	"read / write");

//target
PyDoc_STRVAR(target_doc,
	"Attention point.If you set it, lockon will be True\n"\
	"\n"\
	"type : pyvmath.vec3\n"\
	"read / write");

//orthographicProjection
PyDoc_STRVAR(orthographicProjection_doc,
	"Set to orthographic projection mode\n"\
	"\n"\
	"type : bool\n"\
	"read / write");

//screenScale
PyDoc_STRVAR(screenScale_doc,
	"Scale of 2D screen after perspective projection conversion\n"\
	"\n"\
	"type : pyvmath.vec2\n"\
	"read / write");

//screenOffset
PyDoc_STRVAR(screenOffset_doc,
	"Offset of 2D screen after perspective projection conversion\n"\
	"\n"\
	"type : pyvmath.vec2\n"\
	"read / write");

//screenRadian
PyDoc_STRVAR(screenRadian_doc,
	"Radians for 2D screen rotation after perspective projection transformation\n"\
	"\n"\
	"type : float\n"\
	"read / write");

//projectionMatrix
PyDoc_STRVAR(projectionMatrix_doc,
	"Projection matrix value\n"\
	"\n"\
	"type : pyxie.mat4\n"\
	"read only");

//viewInverseMatrix
PyDoc_STRVAR(viewInverseMatrix_doc,
	"View matrix inverse\n"\
	"\n"\
	"type : pyxie.mat4\n"\
	"read only");

//screenMatrix
PyDoc_STRVAR(screenMatrix_doc,
	"Screen Matrix\n"\
	"\n"\
	"type : pyxie.mat4\n"\
	"read only");

//shoot
PyDoc_STRVAR(shoot_doc,
	"Render the view seen from the camera\n"\
	"\n"\
	"camera.shoot(showcase)\n"\
	"\n"\
	"Parameters\n"\
	"----------\n"\
	"    showcase : pyxie.showcase\n"\
	"        Showcase containing the objects you want to render\n");


