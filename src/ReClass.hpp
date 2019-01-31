#pragma once

#define GLM_ENABLE_EXPERIMENTAL

#include <cstdint>
#include <glm/glm.hpp>
#include <glm/ext/matrix_transform.hpp>
#include <glm/gtx/matrix_interpolation.hpp>
#include <glm/gtx/rotate_vector.hpp>
#include <glm/gtc/quaternion.hpp>

using Vector3f = glm::vec3;
using Vector4f = glm::vec4;
using Matrix3x3f = glm::mat3x3;
using Matrix3x4f = glm::mat3x4;
using Matrix4x4f = glm::mat4x4;

#include "ReClass_Internal.hpp"
#include "REString.hpp"
#include "RETransform.hpp"