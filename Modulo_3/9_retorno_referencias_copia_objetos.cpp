const Matrix4x4 &GameScene::getCameraRotation() const 
{
	return c_rotation; // Eficiente, devuelve una referencia
}

// Cuidado! Se genera una copia del objeto.
Matrix4x4 rotation = camera.getCameraRotation;

// Eficiente
Matrix4x4 &rotation = camera.getCameraRotation;