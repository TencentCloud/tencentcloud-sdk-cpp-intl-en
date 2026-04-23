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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAIMAGESPRITEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAIMAGESPRITEITEM_H_

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
                * Image sprite information
                */
                class MediaImageSpriteItem : public AbstractModel
                {
                public:
                    MediaImageSpriteItem();
                    ~MediaImageSpriteItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Sprite sheet specification. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF">sprite sheet parameter template</a>.</p>
                     * @return Definition <p>Sprite sheet specification. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF">sprite sheet parameter template</a>.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>Sprite sheet specification. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF">sprite sheet parameter template</a>.</p>
                     * @param _definition <p>Sprite sheet specification. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF">sprite sheet parameter template</a>.</p>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>Height of the sprite sheet.</p>
                     * @return Height <p>Height of the sprite sheet.</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>Height of the sprite sheet.</p>
                     * @param _height <p>Height of the sprite sheet.</p>
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
                     * 获取<p>Width of the sprite sheet.</p>
                     * @return Width <p>Width of the sprite sheet.</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>Width of the sprite sheet.</p>
                     * @param _width <p>Width of the sprite sheet.</p>
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
                     * 获取<p>The number of small images in each sprite sheet.</p>
                     * @return TotalCount <p>The number of small images in each sprite sheet.</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>The number of small images in each sprite sheet.</p>
                     * @param _totalCount <p>The number of small images in each sprite sheet.</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>The domain names or IP addresses of each sprite sheet.</p>
                     * @return ImageUrlSet <p>The domain names or IP addresses of each sprite sheet.</p>
                     * 
                     */
                    std::vector<std::string> GetImageUrlSet() const;

                    /**
                     * 设置<p>The domain names or IP addresses of each sprite sheet.</p>
                     * @param _imageUrlSet <p>The domain names or IP addresses of each sprite sheet.</p>
                     * 
                     */
                    void SetImageUrlSet(const std::vector<std::string>& _imageUrlSet);

                    /**
                     * 判断参数 ImageUrlSet 是否已赋值
                     * @return ImageUrlSet 是否已赋值
                     * 
                     */
                    bool ImageUrlSetHasBeenSet() const;

                    /**
                     * 获取Address of WebVtt file for the position-time relationship among subimages in an image sprite. The WebVtt file indicates the corresponding time points of each subimage and their coordinates in the image sprite, which is typically used by the player for implementing preview.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WebVttUrl Address of WebVtt file for the position-time relationship among subimages in an image sprite. The WebVtt file indicates the corresponding time points of each subimage and their coordinates in the image sprite, which is typically used by the player for implementing preview.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWebVttUrl() const;

                    /**
                     * 设置Address of WebVtt file for the position-time relationship among subimages in an image sprite. The WebVtt file indicates the corresponding time points of each subimage and their coordinates in the image sprite, which is typically used by the player for implementing preview.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _webVttUrl Address of WebVtt file for the position-time relationship among subimages in an image sprite. The WebVtt file indicates the corresponding time points of each subimage and their coordinates in the image sprite, which is typically used by the player for implementing preview.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWebVttUrl(const std::string& _webVttUrl);

                    /**
                     * 判断参数 WebVttUrl 是否已赋值
                     * @return WebVttUrl 是否已赋值
                     * 
                     */
                    bool WebVttUrlHasBeenSet() const;

                private:

                    /**
                     * <p>Sprite sheet specification. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF">sprite sheet parameter template</a>.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Height of the sprite sheet.</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>Width of the sprite sheet.</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>The number of small images in each sprite sheet.</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>The domain names or IP addresses of each sprite sheet.</p>
                     */
                    std::vector<std::string> m_imageUrlSet;
                    bool m_imageUrlSetHasBeenSet;

                    /**
                     * Address of WebVtt file for the position-time relationship among subimages in an image sprite. The WebVtt file indicates the corresponding time points of each subimage and their coordinates in the image sprite, which is typically used by the player for implementing preview.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_webVttUrl;
                    bool m_webVttUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAIMAGESPRITEITEM_H_
