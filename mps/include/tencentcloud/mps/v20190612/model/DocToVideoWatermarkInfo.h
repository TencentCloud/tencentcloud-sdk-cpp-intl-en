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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOWATERMARKINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOWATERMARKINFO_H_

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
                * Watermark image information for AIGC document-to-video generation
                */
                class DocToVideoWatermarkInfo : public AbstractModel
                {
                public:
                    DocToVideoWatermarkInfo();
                    ~DocToVideoWatermarkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Watermark image URL for video generation.</p>
                     * @return ImageUrl <p>Watermark image URL for video generation.</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>Watermark image URL for video generation.</p>
                     * @param _imageUrl <p>Watermark image URL for video generation.</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>Watermark image location.</p><p>Enumeration values:</p><ul><li>top-left: top-left corner</li><li>top-right: top-right corner</li><li>bottom-left: bottom-left corner</li><li>bottom-right: bottom-right corner</li></ul>
                     * @return Position <p>Watermark image location.</p><p>Enumeration values:</p><ul><li>top-left: top-left corner</li><li>top-right: top-right corner</li><li>bottom-left: bottom-left corner</li><li>bottom-right: bottom-right corner</li></ul>
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置<p>Watermark image location.</p><p>Enumeration values:</p><ul><li>top-left: top-left corner</li><li>top-right: top-right corner</li><li>bottom-left: bottom-left corner</li><li>bottom-right: bottom-right corner</li></ul>
                     * @param _position <p>Watermark image location.</p><p>Enumeration values:</p><ul><li>top-left: top-left corner</li><li>top-right: top-right corner</li><li>bottom-left: bottom-left corner</li><li>bottom-right: bottom-right corner</li></ul>
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                private:

                    /**
                     * <p>Watermark image URL for video generation.</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>Watermark image location.</p><p>Enumeration values:</p><ul><li>top-left: top-left corner</li><li>top-right: top-right corner</li><li>bottom-left: bottom-left corner</li><li>bottom-right: bottom-right corner</li></ul>
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOWATERMARKINFO_H_
