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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGESCALE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGESCALE_H_

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
                * Image scaling.
                */
                class ImageScale : public AbstractModel
                {
                public:
                    ImageScale();
                    ~ImageScale() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation type of image scaling. Optional modes:
<li>WidthFirst: specify the image width as Width, and the height will be proportionally scaled.</li>
<li>HeightFirst: assign the image height as Height, and proportionally scale the width.</li>
<li>LongEdgeFirst: Specify the long side of the image as LongEdge, and proportionally scale the short side.</li>
<li>ShortEdgeFirst: Specify the short edge of the image as ShortEdge, with long edge proportional scaling.</li>
<li>Force: ignore the aspect ratio of the original image, specify the image width as Width and height as Height, and forcefully scale the image, which may cause deformation of the target image.</li>
                     * @return Type Operation type of image scaling. Optional modes:
<li>WidthFirst: specify the image width as Width, and the height will be proportionally scaled.</li>
<li>HeightFirst: assign the image height as Height, and proportionally scale the width.</li>
<li>LongEdgeFirst: Specify the long side of the image as LongEdge, and proportionally scale the short side.</li>
<li>ShortEdgeFirst: Specify the short edge of the image as ShortEdge, with long edge proportional scaling.</li>
<li>Force: ignore the aspect ratio of the original image, specify the image width as Width and height as Height, and forcefully scale the image, which may cause deformation of the target image.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Operation type of image scaling. Optional modes:
<li>WidthFirst: specify the image width as Width, and the height will be proportionally scaled.</li>
<li>HeightFirst: assign the image height as Height, and proportionally scale the width.</li>
<li>LongEdgeFirst: Specify the long side of the image as LongEdge, and proportionally scale the short side.</li>
<li>ShortEdgeFirst: Specify the short edge of the image as ShortEdge, with long edge proportional scaling.</li>
<li>Force: ignore the aspect ratio of the original image, specify the image width as Width and height as Height, and forcefully scale the image, which may cause deformation of the target image.</li>
                     * @param _type Operation type of image scaling. Optional modes:
<li>WidthFirst: specify the image width as Width, and the height will be proportionally scaled.</li>
<li>HeightFirst: assign the image height as Height, and proportionally scale the width.</li>
<li>LongEdgeFirst: Specify the long side of the image as LongEdge, and proportionally scale the short side.</li>
<li>ShortEdgeFirst: Specify the short edge of the image as ShortEdge, with long edge proportional scaling.</li>
<li>Force: ignore the aspect ratio of the original image, specify the image width as Width and height as Height, and forcefully scale the image, which may cause deformation of the target image.</li>
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
                     * 获取Height of the output image in pixels. This field is valid when Type is HeightFirst or Force.
                     * @return Height Height of the output image in pixels. This field is valid when Type is HeightFirst or Force.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Height of the output image in pixels. This field is valid when Type is HeightFirst or Force.
                     * @param _height Height of the output image in pixels. This field is valid when Type is HeightFirst or Force.
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Width of the output image. Unit: pixel. This field is valid when Type is WidthFirst or Force.
                     * @return Width Width of the output image. Unit: pixel. This field is valid when Type is WidthFirst or Force.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Width of the output image. Unit: pixel. This field is valid when Type is WidthFirst or Force.
                     * @param _width Width of the output image. Unit: pixel. This field is valid when Type is WidthFirst or Force.
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
                     * 获取Long side length of the output image. Unit: pixel. This field is valid when Type is LongEdgeFirst.
                     * @return LongEdge Long side length of the output image. Unit: pixel. This field is valid when Type is LongEdgeFirst.
                     * 
                     */
                    uint64_t GetLongEdge() const;

                    /**
                     * 设置Long side length of the output image. Unit: pixel. This field is valid when Type is LongEdgeFirst.
                     * @param _longEdge Long side length of the output image. Unit: pixel. This field is valid when Type is LongEdgeFirst.
                     * 
                     */
                    void SetLongEdge(const uint64_t& _longEdge);

                    /**
                     * 判断参数 LongEdge 是否已赋值
                     * @return LongEdge 是否已赋值
                     * 
                     */
                    bool LongEdgeHasBeenSet() const;

                    /**
                     * 获取Short side length of the output image in pixels. This field is valid when Type is ShortEdgeFirst.
                     * @return ShortEdge Short side length of the output image in pixels. This field is valid when Type is ShortEdgeFirst.
                     * 
                     */
                    uint64_t GetShortEdge() const;

                    /**
                     * 设置Short side length of the output image in pixels. This field is valid when Type is ShortEdgeFirst.
                     * @param _shortEdge Short side length of the output image in pixels. This field is valid when Type is ShortEdgeFirst.
                     * 
                     */
                    void SetShortEdge(const uint64_t& _shortEdge);

                    /**
                     * 判断参数 ShortEdge 是否已赋值
                     * @return ShortEdge 是否已赋值
                     * 
                     */
                    bool ShortEdgeHasBeenSet() const;

                private:

                    /**
                     * Operation type of image scaling. Optional modes:
<li>WidthFirst: specify the image width as Width, and the height will be proportionally scaled.</li>
<li>HeightFirst: assign the image height as Height, and proportionally scale the width.</li>
<li>LongEdgeFirst: Specify the long side of the image as LongEdge, and proportionally scale the short side.</li>
<li>ShortEdgeFirst: Specify the short edge of the image as ShortEdge, with long edge proportional scaling.</li>
<li>Force: ignore the aspect ratio of the original image, specify the image width as Width and height as Height, and forcefully scale the image, which may cause deformation of the target image.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Height of the output image in pixels. This field is valid when Type is HeightFirst or Force.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Width of the output image. Unit: pixel. This field is valid when Type is WidthFirst or Force.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Long side length of the output image. Unit: pixel. This field is valid when Type is LongEdgeFirst.
                     */
                    uint64_t m_longEdge;
                    bool m_longEdgeHasBeenSet;

                    /**
                     * Short side length of the output image in pixels. This field is valid when Type is ShortEdgeFirst.
                     */
                    uint64_t m_shortEdge;
                    bool m_shortEdgeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGESCALE_H_
