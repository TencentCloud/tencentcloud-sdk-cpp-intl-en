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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEIMAGEOPERATION_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEIMAGEOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The image operations of a video editing/compositing task.
                */
                class ComposeImageOperation : public AbstractModel
                {
                public:
                    ComposeImageOperation();
                    ~ComposeImageOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The type. Valid values:
u200c<li>`Rotate`: Image rotation. </li>
<li>`Flip`: Image flipping. </li>
                     * @return Type The type. Valid values:
u200c<li>`Rotate`: Image rotation. </li>
<li>`Flip`: Image flipping. </li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The type. Valid values:
u200c<li>`Rotate`: Image rotation. </li>
<li>`Flip`: Image flipping. </li>
                     * @param _type The type. Valid values:
u200c<li>`Rotate`: Image rotation. </li>
<li>`Flip`: Image flipping. </li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取This is valid if `Type` is `Rotate`. The angle of rotation around the image center. Value range: 0–360.
                     * @return RotateAngle This is valid if `Type` is `Rotate`. The angle of rotation around the image center. Value range: 0–360.
                     * 
                     */
                    double GetRotateAngle() const;

                    /**
                     * 设置This is valid if `Type` is `Rotate`. The angle of rotation around the image center. Value range: 0–360.
                     * @param _rotateAngle This is valid if `Type` is `Rotate`. The angle of rotation around the image center. Value range: 0–360.
                     * 
                     */
                    void SetRotateAngle(const double& _rotateAngle);

                    /**
                     * 判断参数 RotateAngle 是否已赋值
                     * @return RotateAngle 是否已赋值
                     * 
                     */
                    bool RotateAngleHasBeenSet() const;

                    /**
                     * 获取This is valid if `Type` is `Flip`. How to flip the image. Valid values:xa0
u200c<li>`Horizental`: Flip horizontally. </li>
<li>`Vertical`: Flip vertically. </li>
                     * @return FlipType This is valid if `Type` is `Flip`. How to flip the image. Valid values:xa0
u200c<li>`Horizental`: Flip horizontally. </li>
<li>`Vertical`: Flip vertically. </li>
                     * 
                     */
                    std::string GetFlipType() const;

                    /**
                     * 设置This is valid if `Type` is `Flip`. How to flip the image. Valid values:xa0
u200c<li>`Horizental`: Flip horizontally. </li>
<li>`Vertical`: Flip vertically. </li>
                     * @param _flipType This is valid if `Type` is `Flip`. How to flip the image. Valid values:xa0
u200c<li>`Horizental`: Flip horizontally. </li>
<li>`Vertical`: Flip vertically. </li>
                     * 
                     */
                    void SetFlipType(const std::string& _flipType);

                    /**
                     * 判断参数 FlipType 是否已赋值
                     * @return FlipType 是否已赋值
                     * 
                     */
                    bool FlipTypeHasBeenSet() const;

                private:

                    /**
                     * The type. Valid values:
u200c<li>`Rotate`: Image rotation. </li>
<li>`Flip`: Image flipping. </li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * This is valid if `Type` is `Rotate`. The angle of rotation around the image center. Value range: 0–360.
                     */
                    double m_rotateAngle;
                    bool m_rotateAngleHasBeenSet;

                    /**
                     * This is valid if `Type` is `Flip`. How to flip the image. Valid values:xa0
u200c<li>`Horizental`: Flip horizontally. </li>
<li>`Vertical`: Flip vertically. </li>
                     */
                    std::string m_flipType;
                    bool m_flipTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEIMAGEOPERATION_H_
