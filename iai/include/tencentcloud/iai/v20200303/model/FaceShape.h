/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACESHAPE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACESHAPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/Point.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Specific information of facial feature localization (facial keypoints).
                */
                class FaceShape : public AbstractModel
                {
                public:
                    FaceShape();
                    ~FaceShape() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取21 points that describe the face contour.
                     * @return FaceProfile 21 points that describe the face contour.
                     * 
                     */
                    std::vector<Point> GetFaceProfile() const;

                    /**
                     * 设置21 points that describe the face contour.
                     * @param _faceProfile 21 points that describe the face contour.
                     * 
                     */
                    void SetFaceProfile(const std::vector<Point>& _faceProfile);

                    /**
                     * 判断参数 FaceProfile 是否已赋值
                     * @return FaceProfile 是否已赋值
                     * 
                     */
                    bool FaceProfileHasBeenSet() const;

                    /**
                     * 获取8 points that describe the left eye.
                     * @return LeftEye 8 points that describe the left eye.
                     * 
                     */
                    std::vector<Point> GetLeftEye() const;

                    /**
                     * 设置8 points that describe the left eye.
                     * @param _leftEye 8 points that describe the left eye.
                     * 
                     */
                    void SetLeftEye(const std::vector<Point>& _leftEye);

                    /**
                     * 判断参数 LeftEye 是否已赋值
                     * @return LeftEye 是否已赋值
                     * 
                     */
                    bool LeftEyeHasBeenSet() const;

                    /**
                     * 获取8 points that describe the right eye.
                     * @return RightEye 8 points that describe the right eye.
                     * 
                     */
                    std::vector<Point> GetRightEye() const;

                    /**
                     * 设置8 points that describe the right eye.
                     * @param _rightEye 8 points that describe the right eye.
                     * 
                     */
                    void SetRightEye(const std::vector<Point>& _rightEye);

                    /**
                     * 判断参数 RightEye 是否已赋值
                     * @return RightEye 是否已赋值
                     * 
                     */
                    bool RightEyeHasBeenSet() const;

                    /**
                     * 获取8 points that describe the left eyebrow.
                     * @return LeftEyeBrow 8 points that describe the left eyebrow.
                     * 
                     */
                    std::vector<Point> GetLeftEyeBrow() const;

                    /**
                     * 设置8 points that describe the left eyebrow.
                     * @param _leftEyeBrow 8 points that describe the left eyebrow.
                     * 
                     */
                    void SetLeftEyeBrow(const std::vector<Point>& _leftEyeBrow);

                    /**
                     * 判断参数 LeftEyeBrow 是否已赋值
                     * @return LeftEyeBrow 是否已赋值
                     * 
                     */
                    bool LeftEyeBrowHasBeenSet() const;

                    /**
                     * 获取8 points that describe the right eyebrow.
                     * @return RightEyeBrow 8 points that describe the right eyebrow.
                     * 
                     */
                    std::vector<Point> GetRightEyeBrow() const;

                    /**
                     * 设置8 points that describe the right eyebrow.
                     * @param _rightEyeBrow 8 points that describe the right eyebrow.
                     * 
                     */
                    void SetRightEyeBrow(const std::vector<Point>& _rightEyeBrow);

                    /**
                     * 判断参数 RightEyeBrow 是否已赋值
                     * @return RightEyeBrow 是否已赋值
                     * 
                     */
                    bool RightEyeBrowHasBeenSet() const;

                    /**
                     * 获取22 points that describe the mouth.
                     * @return Mouth 22 points that describe the mouth.
                     * 
                     */
                    std::vector<Point> GetMouth() const;

                    /**
                     * 设置22 points that describe the mouth.
                     * @param _mouth 22 points that describe the mouth.
                     * 
                     */
                    void SetMouth(const std::vector<Point>& _mouth);

                    /**
                     * 判断参数 Mouth 是否已赋值
                     * @return Mouth 是否已赋值
                     * 
                     */
                    bool MouthHasBeenSet() const;

                    /**
                     * 获取13 points that describe the nose.
                     * @return Nose 13 points that describe the nose.
                     * 
                     */
                    std::vector<Point> GetNose() const;

                    /**
                     * 设置13 points that describe the nose.
                     * @param _nose 13 points that describe the nose.
                     * 
                     */
                    void SetNose(const std::vector<Point>& _nose);

                    /**
                     * 判断参数 Nose 是否已赋值
                     * @return Nose 是否已赋值
                     * 
                     */
                    bool NoseHasBeenSet() const;

                    /**
                     * 获取1 point that describes the left pupil.
                     * @return LeftPupil 1 point that describes the left pupil.
                     * 
                     */
                    std::vector<Point> GetLeftPupil() const;

                    /**
                     * 设置1 point that describes the left pupil.
                     * @param _leftPupil 1 point that describes the left pupil.
                     * 
                     */
                    void SetLeftPupil(const std::vector<Point>& _leftPupil);

                    /**
                     * 判断参数 LeftPupil 是否已赋值
                     * @return LeftPupil 是否已赋值
                     * 
                     */
                    bool LeftPupilHasBeenSet() const;

                    /**
                     * 获取1 point that describes the right pupil.
                     * @return RightPupil 1 point that describes the right pupil.
                     * 
                     */
                    std::vector<Point> GetRightPupil() const;

                    /**
                     * 设置1 point that describes the right pupil.
                     * @param _rightPupil 1 point that describes the right pupil.
                     * 
                     */
                    void SetRightPupil(const std::vector<Point>& _rightPupil);

                    /**
                     * 判断参数 RightPupil 是否已赋值
                     * @return RightPupil 是否已赋值
                     * 
                     */
                    bool RightPupilHasBeenSet() const;

                private:

                    /**
                     * 21 points that describe the face contour.
                     */
                    std::vector<Point> m_faceProfile;
                    bool m_faceProfileHasBeenSet;

                    /**
                     * 8 points that describe the left eye.
                     */
                    std::vector<Point> m_leftEye;
                    bool m_leftEyeHasBeenSet;

                    /**
                     * 8 points that describe the right eye.
                     */
                    std::vector<Point> m_rightEye;
                    bool m_rightEyeHasBeenSet;

                    /**
                     * 8 points that describe the left eyebrow.
                     */
                    std::vector<Point> m_leftEyeBrow;
                    bool m_leftEyeBrowHasBeenSet;

                    /**
                     * 8 points that describe the right eyebrow.
                     */
                    std::vector<Point> m_rightEyeBrow;
                    bool m_rightEyeBrowHasBeenSet;

                    /**
                     * 22 points that describe the mouth.
                     */
                    std::vector<Point> m_mouth;
                    bool m_mouthHasBeenSet;

                    /**
                     * 13 points that describe the nose.
                     */
                    std::vector<Point> m_nose;
                    bool m_noseHasBeenSet;

                    /**
                     * 1 point that describes the left pupil.
                     */
                    std::vector<Point> m_leftPupil;
                    bool m_leftPupilHasBeenSet;

                    /**
                     * 1 point that describes the right pupil.
                     */
                    std::vector<Point> m_rightPupil;
                    bool m_rightPupilHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACESHAPE_H_
