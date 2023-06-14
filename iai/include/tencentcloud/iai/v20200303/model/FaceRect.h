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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACERECT_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACERECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Position of detected face frame
                */
                class FaceRect : public AbstractModel
                {
                public:
                    FaceRect();
                    ~FaceRect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Horizontal coordinate of the top-left vertex of face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the completeness score meets the requirement.
                     * @return X Horizontal coordinate of the top-left vertex of face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the completeness score meets the requirement.
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置Horizontal coordinate of the top-left vertex of face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the completeness score meets the requirement.
                     * @param _x Horizontal coordinate of the top-left vertex of face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the completeness score meets the requirement.
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
                     * 获取Vertical coordinate of the top-left vertex of face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the completeness score meets the requirement.
                     * @return Y Vertical coordinate of the top-left vertex of face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the completeness score meets the requirement.
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置Vertical coordinate of the top-left vertex of face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the completeness score meets the requirement.
                     * @param _y Vertical coordinate of the top-left vertex of face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the completeness score meets the requirement.
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
                     * 获取Face width
                     * @return Width Face width
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Face width
                     * @param _width Face width
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Face height
                     * @return Height Face height
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Face height
                     * @param _height Face height
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * Horizontal coordinate of the top-left vertex of face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the completeness score meets the requirement.
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * Vertical coordinate of the top-left vertex of face frame. 
The face frame encompasses the facial features and is extended accordingly. If it is larger than the image, the coordinates will be negative. 
If you want to capture a complete face, you can set the negative coordinates to 0 if the completeness score meets the requirement.
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * Face width
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Face height
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACERECT_H_
