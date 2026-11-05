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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONTENTFILTER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONTENTFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Content filtering configuration (image name regular/minimum width and height). By default, filtering is not enabled.
                */
                class ContentFilter : public AbstractModel
                {
                public:
                    ContentFilter();
                    ~ContentFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Minimum image height (pixel). Images with a height less than this value will be filtered; &lt;=0 means not enabled</p>
                     * @return ImageMinHeight <p>Minimum image height (pixel). Images with a height less than this value will be filtered; &lt;=0 means not enabled</p>
                     * 
                     */
                    int64_t GetImageMinHeight() const;

                    /**
                     * 设置<p>Minimum image height (pixel). Images with a height less than this value will be filtered; &lt;=0 means not enabled</p>
                     * @param _imageMinHeight <p>Minimum image height (pixel). Images with a height less than this value will be filtered; &lt;=0 means not enabled</p>
                     * 
                     */
                    void SetImageMinHeight(const int64_t& _imageMinHeight);

                    /**
                     * 判断参数 ImageMinHeight 是否已赋值
                     * @return ImageMinHeight 是否已赋值
                     * 
                     */
                    bool ImageMinHeightHasBeenSet() const;

                    /**
                     * 获取<p>Minimum image width (pixel). Images with a smaller width will be filtered; &lt;=0 means not enabled</p>
                     * @return ImageMinWidth <p>Minimum image width (pixel). Images with a smaller width will be filtered; &lt;=0 means not enabled</p>
                     * 
                     */
                    int64_t GetImageMinWidth() const;

                    /**
                     * 设置<p>Minimum image width (pixel). Images with a smaller width will be filtered; &lt;=0 means not enabled</p>
                     * @param _imageMinWidth <p>Minimum image width (pixel). Images with a smaller width will be filtered; &lt;=0 means not enabled</p>
                     * 
                     */
                    void SetImageMinWidth(const int64_t& _imageMinWidth);

                    /**
                     * 判断参数 ImageMinWidth 是否已赋值
                     * @return ImageMinWidth 是否已赋值
                     * 
                     */
                    bool ImageMinWidthHasBeenSet() const;

                    /**
                     * 获取<p>Image name filter rule (multiple regular expressions separated by semicolons &#39;;&#39;, for example &#39;icon;notice;warning;info.*&#39;)</p>
                     * @return ImageNamePatterns <p>Image name filter rule (multiple regular expressions separated by semicolons &#39;;&#39;, for example &#39;icon;notice;warning;info.*&#39;)</p>
                     * 
                     */
                    std::string GetImageNamePatterns() const;

                    /**
                     * 设置<p>Image name filter rule (multiple regular expressions separated by semicolons &#39;;&#39;, for example &#39;icon;notice;warning;info.*&#39;)</p>
                     * @param _imageNamePatterns <p>Image name filter rule (multiple regular expressions separated by semicolons &#39;;&#39;, for example &#39;icon;notice;warning;info.*&#39;)</p>
                     * 
                     */
                    void SetImageNamePatterns(const std::string& _imageNamePatterns);

                    /**
                     * 判断参数 ImageNamePatterns 是否已赋值
                     * @return ImageNamePatterns 是否已赋值
                     * 
                     */
                    bool ImageNamePatternsHasBeenSet() const;

                private:

                    /**
                     * <p>Minimum image height (pixel). Images with a height less than this value will be filtered; &lt;=0 means not enabled</p>
                     */
                    int64_t m_imageMinHeight;
                    bool m_imageMinHeightHasBeenSet;

                    /**
                     * <p>Minimum image width (pixel). Images with a smaller width will be filtered; &lt;=0 means not enabled</p>
                     */
                    int64_t m_imageMinWidth;
                    bool m_imageMinWidthHasBeenSet;

                    /**
                     * <p>Image name filter rule (multiple regular expressions separated by semicolons &#39;;&#39;, for example &#39;icon;notice;warning;info.*&#39;)</p>
                     */
                    std::string m_imageNamePatterns;
                    bool m_imageNamePatternsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONTENTFILTER_H_
