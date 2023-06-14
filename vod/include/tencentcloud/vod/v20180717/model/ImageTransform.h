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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGETRANSFORM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGETRANSFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Operation such as image rotation and flipping
                */
                class ImageTransform : public AbstractModel
                {
                public:
                    ImageTransform();
                    ~ImageTransform() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type. Valid values:
<li> Rotate: image rotation.</li>
<li> Flip: image flipping.</li>
                     * @return Type Type. Valid values:
<li> Rotate: image rotation.</li>
<li> Flip: image flipping.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type. Valid values:
<li> Rotate: image rotation.</li>
<li> Flip: image flipping.</li>
                     * @param _type Type. Valid values:
<li> Rotate: image rotation.</li>
<li> Flip: image flipping.</li>
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
                     * 获取Rotation angle of image with its center point as origin. Value range: 0-360. This parameter is valid if `Type` is `Rotate`.
                     * @return RotateAngle Rotation angle of image with its center point as origin. Value range: 0-360. This parameter is valid if `Type` is `Rotate`.
                     * 
                     */
                    double GetRotateAngle() const;

                    /**
                     * 设置Rotation angle of image with its center point as origin. Value range: 0-360. This parameter is valid if `Type` is `Rotate`.
                     * @param _rotateAngle Rotation angle of image with its center point as origin. Value range: 0-360. This parameter is valid if `Type` is `Rotate`.
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
                     * 获取Image flipping action. Valid values:
<li>Horizental: horizontal flipping, i.e., horizontally mirrored.</li>
<li>Vertical: vertical flipping, i.e., vertically mirrored.</li>
This is valid if `Type` is `Flip`.
                     * @return Flip Image flipping action. Valid values:
<li>Horizental: horizontal flipping, i.e., horizontally mirrored.</li>
<li>Vertical: vertical flipping, i.e., vertically mirrored.</li>
This is valid if `Type` is `Flip`.
                     * 
                     */
                    std::string GetFlip() const;

                    /**
                     * 设置Image flipping action. Valid values:
<li>Horizental: horizontal flipping, i.e., horizontally mirrored.</li>
<li>Vertical: vertical flipping, i.e., vertically mirrored.</li>
This is valid if `Type` is `Flip`.
                     * @param _flip Image flipping action. Valid values:
<li>Horizental: horizontal flipping, i.e., horizontally mirrored.</li>
<li>Vertical: vertical flipping, i.e., vertically mirrored.</li>
This is valid if `Type` is `Flip`.
                     * 
                     */
                    void SetFlip(const std::string& _flip);

                    /**
                     * 判断参数 Flip 是否已赋值
                     * @return Flip 是否已赋值
                     * 
                     */
                    bool FlipHasBeenSet() const;

                private:

                    /**
                     * Type. Valid values:
<li> Rotate: image rotation.</li>
<li> Flip: image flipping.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Rotation angle of image with its center point as origin. Value range: 0-360. This parameter is valid if `Type` is `Rotate`.
                     */
                    double m_rotateAngle;
                    bool m_rotateAngleHasBeenSet;

                    /**
                     * Image flipping action. Valid values:
<li>Horizental: horizontal flipping, i.e., horizontally mirrored.</li>
<li>Vertical: vertical flipping, i.e., vertically mirrored.</li>
This is valid if `Type` is `Flip`.
                     */
                    std::string m_flip;
                    bool m_flipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGETRANSFORM_H_
