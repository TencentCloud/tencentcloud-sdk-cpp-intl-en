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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGECENTERCUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGECENTERCUT_H_

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
                * Crop the image center.
                */
                class ImageCenterCut : public AbstractModel
                {
                public:
                    ImageCenterCut();
                    ~ImageCenterCut() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image cropping type. Selectable values: Circle and Rectangle.
<li>Circle: inscribed circle cropping, the radius of the output image is Radius.</li>
<li>Rectangle: Rectangular crop. The output image width is Width and height is Height.</li>
                     * @return Type Image cropping type. Selectable values: Circle and Rectangle.
<li>Circle: inscribed circle cropping, the radius of the output image is Radius.</li>
<li>Rectangle: Rectangular crop. The output image width is Width and height is Height.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Image cropping type. Selectable values: Circle and Rectangle.
<li>Circle: inscribed circle cropping, the radius of the output image is Radius.</li>
<li>Rectangle: Rectangular crop. The output image width is Width and height is Height.</li>
                     * @param _type Image cropping type. Selectable values: Circle and Rectangle.
<li>Circle: inscribed circle cropping, the radius of the output image is Radius.</li>
<li>Rectangle: Rectangular crop. The output image width is Width and height is Height.</li>
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
                     * 获取Width of the output image in pixels. Valid when Type is Rectangle.
                     * @return Width Width of the output image in pixels. Valid when Type is Rectangle.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Width of the output image in pixels. Valid when Type is Rectangle.
                     * @param _width Width of the output image in pixels. Valid when Type is Rectangle.
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
                     * 获取Height of the output image in pixels. Valid when Type is Rectangle.
                     * @return Height Height of the output image in pixels. Valid when Type is Rectangle.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height of the output image in pixels. Valid when Type is Rectangle.
                     * @param _height Height of the output image in pixels. Valid when Type is Rectangle.
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
                     * 获取Radius of the output image in pixels. Valid when Type is Circle.
                     * @return Radius Radius of the output image in pixels. Valid when Type is Circle.
                     * 
                     */
                    int64_t GetRadius() const;

                    /**
                     * 设置Radius of the output image in pixels. Valid when Type is Circle.
                     * @param _radius Radius of the output image in pixels. Valid when Type is Circle.
                     * 
                     */
                    void SetRadius(const int64_t& _radius);

                    /**
                     * 判断参数 Radius 是否已赋值
                     * @return Radius 是否已赋值
                     * 
                     */
                    bool RadiusHasBeenSet() const;

                private:

                    /**
                     * Image cropping type. Selectable values: Circle and Rectangle.
<li>Circle: inscribed circle cropping, the radius of the output image is Radius.</li>
<li>Rectangle: Rectangular crop. The output image width is Width and height is Height.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Width of the output image in pixels. Valid when Type is Rectangle.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height of the output image in pixels. Valid when Type is Rectangle.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Radius of the output image in pixels. Valid when Type is Circle.
                     */
                    int64_t m_radius;
                    bool m_radiusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGECENTERCUT_H_
