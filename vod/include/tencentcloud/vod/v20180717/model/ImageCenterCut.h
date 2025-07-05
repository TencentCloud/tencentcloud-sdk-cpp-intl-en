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
                * Image cropping details.
                */
                class ImageCenterCut : public AbstractModel
                {
                public:
                    ImageCenterCut();
                    ~ImageCenterCut() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The cropping type. Valid values:
<li>Circle: Cropping to circle. `Radius` specifies the radius of the output image.</li>
<li>Rectangle: Cropping to rectangle. `Width` and `Height` specify the width and height of the output image.</li>
                     * @return Type The cropping type. Valid values:
<li>Circle: Cropping to circle. `Radius` specifies the radius of the output image.</li>
<li>Rectangle: Cropping to rectangle. `Width` and `Height` specify the width and height of the output image.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The cropping type. Valid values:
<li>Circle: Cropping to circle. `Radius` specifies the radius of the output image.</li>
<li>Rectangle: Cropping to rectangle. `Width` and `Height` specify the width and height of the output image.</li>
                     * @param _type The cropping type. Valid values:
<li>Circle: Cropping to circle. `Radius` specifies the radius of the output image.</li>
<li>Rectangle: Cropping to rectangle. `Width` and `Height` specify the width and height of the output image.</li>
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
                     * 获取The width (pixels) of the output image. This parameter is valid if `Type` is `Rectangle`.
                     * @return Width The width (pixels) of the output image. This parameter is valid if `Type` is `Rectangle`.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置The width (pixels) of the output image. This parameter is valid if `Type` is `Rectangle`.
                     * @param _width The width (pixels) of the output image. This parameter is valid if `Type` is `Rectangle`.
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
                     * 获取The height (pixels) of the output image. This parameter is valid if `Type` is `Rectangle`.
                     * @return Height The height (pixels) of the output image. This parameter is valid if `Type` is `Rectangle`.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置The height (pixels) of the output image. This parameter is valid if `Type` is `Rectangle`.
                     * @param _height The height (pixels) of the output image. This parameter is valid if `Type` is `Rectangle`.
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
                     * 获取The radius of the output image. This parameter is valid if `Type` is `Circle`.
                     * @return Radius The radius of the output image. This parameter is valid if `Type` is `Circle`.
                     * 
                     */
                    int64_t GetRadius() const;

                    /**
                     * 设置The radius of the output image. This parameter is valid if `Type` is `Circle`.
                     * @param _radius The radius of the output image. This parameter is valid if `Type` is `Circle`.
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
                     * The cropping type. Valid values:
<li>Circle: Cropping to circle. `Radius` specifies the radius of the output image.</li>
<li>Rectangle: Cropping to rectangle. `Width` and `Height` specify the width and height of the output image.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The width (pixels) of the output image. This parameter is valid if `Type` is `Rectangle`.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The height (pixels) of the output image. This parameter is valid if `Type` is `Rectangle`.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The radius of the output image. This parameter is valid if `Type` is `Circle`.
                     */
                    int64_t m_radius;
                    bool m_radiusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGECENTERCUT_H_
