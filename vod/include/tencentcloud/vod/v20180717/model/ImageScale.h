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
                * Image scaling details.
                */
                class ImageScale : public AbstractModel
                {
                public:
                    ImageScale();
                    ~ImageScale() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The scaling type. Valid values:
<li>`WidthFirst`: Specify the width and proportionally scale the height.</li>
<li>`HeightFirst`: Specify the height and proportionally scale the width.</li>
<li>`LongEdgeFirst`: Specify the long side (`LongEdge`) and proportionally scale the short side.</li>
<li>`ShortEdgeFirst`: Specify the short side (`ShortEdge`) and proportionally scale the long side.</li>
<li>Force: Specify both the height and width. The output image may be distorted.</li>
                     * @return Type The scaling type. Valid values:
<li>`WidthFirst`: Specify the width and proportionally scale the height.</li>
<li>`HeightFirst`: Specify the height and proportionally scale the width.</li>
<li>`LongEdgeFirst`: Specify the long side (`LongEdge`) and proportionally scale the short side.</li>
<li>`ShortEdgeFirst`: Specify the short side (`ShortEdge`) and proportionally scale the long side.</li>
<li>Force: Specify both the height and width. The output image may be distorted.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The scaling type. Valid values:
<li>`WidthFirst`: Specify the width and proportionally scale the height.</li>
<li>`HeightFirst`: Specify the height and proportionally scale the width.</li>
<li>`LongEdgeFirst`: Specify the long side (`LongEdge`) and proportionally scale the short side.</li>
<li>`ShortEdgeFirst`: Specify the short side (`ShortEdge`) and proportionally scale the long side.</li>
<li>Force: Specify both the height and width. The output image may be distorted.</li>
                     * @param _type The scaling type. Valid values:
<li>`WidthFirst`: Specify the width and proportionally scale the height.</li>
<li>`HeightFirst`: Specify the height and proportionally scale the width.</li>
<li>`LongEdgeFirst`: Specify the long side (`LongEdge`) and proportionally scale the short side.</li>
<li>`ShortEdgeFirst`: Specify the short side (`ShortEdge`) and proportionally scale the long side.</li>
<li>Force: Specify both the height and width. The output image may be distorted.</li>
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
                     * 获取The image height (pixels). This parameter is valid only if `Type` is `HeightFirst` or `Force`.
                     * @return Height The image height (pixels). This parameter is valid only if `Type` is `HeightFirst` or `Force`.
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The image height (pixels). This parameter is valid only if `Type` is `HeightFirst` or `Force`.
                     * @param _height The image height (pixels). This parameter is valid only if `Type` is `HeightFirst` or `Force`.
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
                     * 获取The image width (pixels). This parameter is valid only if `Type` is `WidthFirst` or `Force`.
                     * @return Width The image width (pixels). This parameter is valid only if `Type` is `WidthFirst` or `Force`.
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置The image width (pixels). This parameter is valid only if `Type` is `WidthFirst` or `Force`.
                     * @param _width The image width (pixels). This parameter is valid only if `Type` is `WidthFirst` or `Force`.
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
                     * 获取The long side of the output image (pixels). This parameter is valid only if `Type` is `LongEdgeFirst`.
                     * @return LongEdge The long side of the output image (pixels). This parameter is valid only if `Type` is `LongEdgeFirst`.
                     * 
                     */
                    uint64_t GetLongEdge() const;

                    /**
                     * 设置The long side of the output image (pixels). This parameter is valid only if `Type` is `LongEdgeFirst`.
                     * @param _longEdge The long side of the output image (pixels). This parameter is valid only if `Type` is `LongEdgeFirst`.
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
                     * 获取The short side of the output image (pixels). This parameter is valid only if `Type` is `ShortEdgeFirst`.
                     * @return ShortEdge The short side of the output image (pixels). This parameter is valid only if `Type` is `ShortEdgeFirst`.
                     * 
                     */
                    uint64_t GetShortEdge() const;

                    /**
                     * 设置The short side of the output image (pixels). This parameter is valid only if `Type` is `ShortEdgeFirst`.
                     * @param _shortEdge The short side of the output image (pixels). This parameter is valid only if `Type` is `ShortEdgeFirst`.
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
                     * The scaling type. Valid values:
<li>`WidthFirst`: Specify the width and proportionally scale the height.</li>
<li>`HeightFirst`: Specify the height and proportionally scale the width.</li>
<li>`LongEdgeFirst`: Specify the long side (`LongEdge`) and proportionally scale the short side.</li>
<li>`ShortEdgeFirst`: Specify the short side (`ShortEdge`) and proportionally scale the long side.</li>
<li>Force: Specify both the height and width. The output image may be distorted.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The image height (pixels). This parameter is valid only if `Type` is `HeightFirst` or `Force`.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The image width (pixels). This parameter is valid only if `Type` is `WidthFirst` or `Force`.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The long side of the output image (pixels). This parameter is valid only if `Type` is `LongEdgeFirst`.
                     */
                    uint64_t m_longEdge;
                    bool m_longEdgeHasBeenSet;

                    /**
                     * The short side of the output image (pixels). This parameter is valid only if `Type` is `ShortEdgeFirst`.
                     */
                    uint64_t m_shortEdge;
                    bool m_shortEdgeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGESCALE_H_
