<<<<<<< HEAD
// written by bastiaan konings schuiling 2008 - 2014
// this work is public domain. the code is undocumented, scruffy, untested, and should generally not be used for anything important.
// i do not offer support, so don't ask. to be used for inspiration :)

#ifndef _hpp_bluntmath_matrix4
#define _hpp_bluntmath_matrix4

#include "defines.hpp"

#include "bluntmath.hpp"
#include "vector3.hpp"
#include "quaternion.hpp"

namespace blunted {

  static real MATRIX4_IDENTITY[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  // column major, row minor matrix
  class Matrix4 {

    public:
      Matrix4();
      Matrix4(real values[16]);
      virtual ~Matrix4();

      // ----- operator overloading
      void operator = (const Matrix3 &mat3);
      Matrix4 operator * (const Matrix4 &multiplier) const;
      bool operator == (const Matrix4 &mat);
      bool operator != (const Matrix4 &mat);

      // ----- mathematics
      Matrix4 GetInverse() const;
      void Transpose();
      Matrix4 GetTransposed() const;
      void SetTranslation(const Vector3 &trans);
      Vector3 GetTranslation() const;
      void Translate(const Vector3 &trans);
      Matrix4 GetTranslated(const Vector3 &trans);
      void SetScale(const Vector3 &scale);
      Vector3 GetScale() const;
      void Construct(const Vector3 &position, const Vector3 &scale, const Quaternion &rotation);
      void ConstructInverse(const Vector3 &position, const Vector3 &scale, const Quaternion &rotation);
      void MultiplyVec4(float x, float y, float z, float w, float &rx, float &ry, float &rz, float &rw);
      void ConstructProjection(float fov, float aspect, float zNear, float zFar);
      void ConstructOrtho(float left, float right, float bottom, float top, float zNear, float zFar);

      real elements[16];

    protected:

    private:

  };

}

#endif
=======
// written by bastiaan konings schuiling 2008 - 2014
// this work is public domain. the code is undocumented, scruffy, untested, and should generally not be used for anything important.
// i do not offer support, so don't ask. to be used for inspiration :)

#ifndef _hpp_bluntmath_matrix4
#define _hpp_bluntmath_matrix4

#include "defines.hpp"

#include "bluntmath.hpp"
#include "vector3.hpp"
#include "quaternion.hpp"

namespace blunted {

  static real MATRIX4_IDENTITY[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  // column major, row minor matrix
  class Matrix4 {

    public:
      Matrix4();
      Matrix4(real values[16]);
      virtual ~Matrix4();

      // ----- operator overloading
      void operator = (const Matrix3 &mat3);
      Matrix4 operator * (const Matrix4 &multiplier) const;
      bool operator == (const Matrix4 &mat);
      bool operator != (const Matrix4 &mat);

      // ----- mathematics
      Matrix4 GetInverse() const;
      void Transpose();
      Matrix4 GetTransposed() const;
      void SetTranslation(const Vector3 &trans);
      Vector3 GetTranslation() const;
      void Translate(const Vector3 &trans);
      Matrix4 GetTranslated(const Vector3 &trans);
      void SetScale(const Vector3 &scale);
      Vector3 GetScale() const;
      void Construct(const Vector3 &position, const Vector3 &scale, const Quaternion &rotation);
      void ConstructInverse(const Vector3 &position, const Vector3 &scale, const Quaternion &rotation);
      void MultiplyVec4(float x, float y, float z, float w, float &rx, float &ry, float &rz, float &rw);
      void ConstructProjection(float fov, float aspect, float zNear, float zFar);
      void ConstructOrtho(float left, float right, float bottom, float top, float zNear, float zFar);

      real elements[16];

    protected:

    private:

  };

}

#endif
>>>>>>> 3bdc6eff576eb5fb805adc07533342a4fe0bab0a