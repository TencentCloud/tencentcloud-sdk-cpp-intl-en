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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEWATERMARKTEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEWATERMARKTEMPLATE_H_

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
                * Image watermarking template
                */
                class ImageWatermarkTemplate : public AbstractModel
                {
                public:
                    ImageWatermarkTemplate();
                    ~ImageWatermarkTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Watermark image address.
                     * @return ImageUrl Watermark image address.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置Watermark image address.
                     * @param _imageUrl Watermark image address.
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
                     * 获取Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
                     * @return Width Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
                     * @param _width Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
                     * 
                     */
                    void SetWidth(const std::string& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px;</li>
`0px` means that `Height` will be proportionally scaled according to the video width.
                     * @return Height Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px;</li>
`0px` means that `Height` will be proportionally scaled according to the video width.
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px;</li>
`0px` means that `Height` will be proportionally scaled according to the video width.
                     * @param _height Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px;</li>
`0px` means that `Height` will be proportionally scaled according to the video width.
                     * 
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Repeat type of an animated watermark. Valid values:
<li>once: no longer appears after watermark playback ends.</li>
<li>repeat_last_frame: stays on the last frame after watermark playback ends.</li>
<li>repeat (default): repeats the playback until the video ends.</li>
                     * @return RepeatType Repeat type of an animated watermark. Valid values:
<li>once: no longer appears after watermark playback ends.</li>
<li>repeat_last_frame: stays on the last frame after watermark playback ends.</li>
<li>repeat (default): repeats the playback until the video ends.</li>
                     * 
                     */
                    std::string GetRepeatType() const;

                    /**
                     * 设置Repeat type of an animated watermark. Valid values:
<li>once: no longer appears after watermark playback ends.</li>
<li>repeat_last_frame: stays on the last frame after watermark playback ends.</li>
<li>repeat (default): repeats the playback until the video ends.</li>
                     * @param _repeatType Repeat type of an animated watermark. Valid values:
<li>once: no longer appears after watermark playback ends.</li>
<li>repeat_last_frame: stays on the last frame after watermark playback ends.</li>
<li>repeat (default): repeats the playback until the video ends.</li>
                     * 
                     */
                    void SetRepeatType(const std::string& _repeatType);

                    /**
                     * 判断参数 RepeatType 是否已赋值
                     * @return RepeatType 是否已赋值
                     * 
                     */
                    bool RepeatTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Transparency 
                     * 
                     */
                    int64_t GetTransparency() const;

                    /**
                     * 设置
                     * @param _transparency 
                     * 
                     */
                    void SetTransparency(const int64_t& _transparency);

                    /**
                     * 判断参数 Transparency 是否已赋值
                     * @return Transparency 是否已赋值
                     * 
                     */
                    bool TransparencyHasBeenSet() const;

                private:

                    /**
                     * Watermark image address.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px;</li>
`0px` means that `Height` will be proportionally scaled according to the video width.
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Repeat type of an animated watermark. Valid values:
<li>once: no longer appears after watermark playback ends.</li>
<li>repeat_last_frame: stays on the last frame after watermark playback ends.</li>
<li>repeat (default): repeats the playback until the video ends.</li>
                     */
                    std::string m_repeatType;
                    bool m_repeatTypeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_transparency;
                    bool m_transparencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEWATERMARKTEMPLATE_H_
