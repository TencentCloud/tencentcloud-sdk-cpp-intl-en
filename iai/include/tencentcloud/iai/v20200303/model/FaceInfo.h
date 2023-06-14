/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACEINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceAttributesInfo.h>
#include <tencentcloud/iai/v20200303/model/FaceQualityInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Face information list.
                */
                class FaceInfo : public AbstractModel
                {
                public:
                    FaceInfo();
                    ~FaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Horizontal coordinate of the top-left vertex of the face frame.
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the `completeness` score meets the requirement.
                     * @return X Horizontal coordinate of the top-left vertex of the face frame.
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the `completeness` score meets the requirement.
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置Horizontal coordinate of the top-left vertex of the face frame.
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the `completeness` score meets the requirement.
                     * @param _x Horizontal coordinate of the top-left vertex of the face frame.
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the `completeness` score meets the requirement.
                     * 
                     */
                    void SetX(const int64_t& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取Vertical coordinate of the top-left vertex of the face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the `completeness` score meets the requirement.
                     * @return Y Vertical coordinate of the top-left vertex of the face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the `completeness` score meets the requirement.
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置Vertical coordinate of the top-left vertex of the face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the `completeness` score meets the requirement.
                     * @param _y Vertical coordinate of the top-left vertex of the face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the `completeness` score meets the requirement.
                     * 
                     */
                    void SetY(const int64_t& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取Face frame width.
                     * @return Width Face frame width.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Face frame width.
                     * @param _width Face frame width.
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Face frame height.
                     * @return Height Face frame height.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Face frame height.
                     * @param _height Face frame height.
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Face attributes, including gender, age, expression, 
beauty, glass, mask, hair, and pose (pitch, roll, yaw). Valid information will be returned only if `NeedFaceAttributes` is set to 1.
                     * @return FaceAttributesInfo Face attributes, including gender, age, expression, 
beauty, glass, mask, hair, and pose (pitch, roll, yaw). Valid information will be returned only if `NeedFaceAttributes` is set to 1.
                     * 
                     */
                    FaceAttributesInfo GetFaceAttributesInfo() const;

                    /**
                     * 设置Face attributes, including gender, age, expression, 
beauty, glass, mask, hair, and pose (pitch, roll, yaw). Valid information will be returned only if `NeedFaceAttributes` is set to 1.
                     * @param _faceAttributesInfo Face attributes, including gender, age, expression, 
beauty, glass, mask, hair, and pose (pitch, roll, yaw). Valid information will be returned only if `NeedFaceAttributes` is set to 1.
                     * 
                     */
                    void SetFaceAttributesInfo(const FaceAttributesInfo& _faceAttributesInfo);

                    /**
                     * 判断参数 FaceAttributesInfo 是否已赋值
                     * @return FaceAttributesInfo 是否已赋值
                     * 
                     */
                    bool FaceAttributesInfoHasBeenSet() const;

                    /**
                     * 获取Face quality information, including score, sharpness, brightness, and completeness. Valid information will be returned only if `NeedFaceDetection` is set to 1.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FaceQualityInfo Face quality information, including score, sharpness, brightness, and completeness. Valid information will be returned only if `NeedFaceDetection` is set to 1.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FaceQualityInfo GetFaceQualityInfo() const;

                    /**
                     * 设置Face quality information, including score, sharpness, brightness, and completeness. Valid information will be returned only if `NeedFaceDetection` is set to 1.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _faceQualityInfo Face quality information, including score, sharpness, brightness, and completeness. Valid information will be returned only if `NeedFaceDetection` is set to 1.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFaceQualityInfo(const FaceQualityInfo& _faceQualityInfo);

                    /**
                     * 判断参数 FaceQualityInfo 是否已赋值
                     * @return FaceQualityInfo 是否已赋值
                     * 
                     */
                    bool FaceQualityInfoHasBeenSet() const;

                private:

                    /**
                     * Horizontal coordinate of the top-left vertex of the face frame.
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the `completeness` score meets the requirement.
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * Vertical coordinate of the top-left vertex of the face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the `completeness` score meets the requirement.
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * Face frame width.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Face frame height.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Face attributes, including gender, age, expression, 
beauty, glass, mask, hair, and pose (pitch, roll, yaw). Valid information will be returned only if `NeedFaceAttributes` is set to 1.
                     */
                    FaceAttributesInfo m_faceAttributesInfo;
                    bool m_faceAttributesInfoHasBeenSet;

                    /**
                     * Face quality information, including score, sharpness, brightness, and completeness. Valid information will be returned only if `NeedFaceDetection` is set to 1.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    FaceQualityInfo m_faceQualityInfo;
                    bool m_faceQualityInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACEINFO_H_
