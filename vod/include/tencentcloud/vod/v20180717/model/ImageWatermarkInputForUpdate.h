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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEWATERMARKINPUTFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEWATERMARKINPUTFORUPDATE_H_

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
                * Input parameters of an image watermark template
                */
                class ImageWatermarkInputForUpdate : public AbstractModel
                {
                public:
                    ImageWatermarkInputForUpdate();
                    ~ImageWatermarkInputForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Base64-encoded string (https://tools.ietf.org/html/rfc4648) of the watermark image. Supports jpeg and png image formats.
                     * @return ImageContent Base64-encoded string (https://tools.ietf.org/html/rfc4648) of the watermark image. Supports jpeg and png image formats.
                     * 
                     */
                    std::string GetImageContent() const;

                    /**
                     * 设置Base64-encoded string (https://tools.ietf.org/html/rfc4648) of the watermark image. Supports jpeg and png image formats.
                     * @param _imageContent Base64-encoded string (https://tools.ietf.org/html/rfc4648) of the watermark image. Supports jpeg and png image formats.
                     * 
                     */
                    void SetImageContent(const std::string& _imageContent);

                    /**
                     * 判断参数 ImageContent 是否已赋值
                     * @return ImageContent 是否已赋值
                     * 
                     */
                    bool ImageContentHasBeenSet() const;

                    /**
                     * 获取Width of a watermark, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark Width is in pixels. For example, 100px means the Width is 100 pixels. Value range: [8, 4096].</li>
                     * @return Width Width of a watermark, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark Width is in pixels. For example, 100px means the Width is 100 pixels. Value range: [8, 4096].</li>
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置Width of a watermark, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark Width is in pixels. For example, 100px means the Width is 100 pixels. Value range: [8, 4096].</li>
                     * @param _width Width of a watermark, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark Width is in pixels. For example, 100px means the Width is 100 pixels. Value range: [8, 4096].</li>
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
                     * 获取Height of a watermark, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark Height is in pixels. For example, 100px means the Height is 100 pixels. Value range: 0 or [8, 4096].</li>
                     * @return Height Height of a watermark, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark Height is in pixels. For example, 100px means the Height is 100 pixels. Value range: 0 or [8, 4096].</li>
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置Height of a watermark, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark Height is in pixels. For example, 100px means the Height is 100 pixels. Value range: 0 or [8, 4096].</li>
                     * @param _height Height of a watermark, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark Height is in pixels. For example, 100px means the Height is 100 pixels. Value range: 0 or [8, 4096].</li>
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
                     * 获取Watermark repeat type. Usage scenario: the watermark is a dynamic image. Value range:
<li>once: The dynamic watermark no longer appears after it is finished playing;</li>
<li>repeat_last_frame: After the watermark finished playing, stay on the last frame;</li>
<li>repeat: The watermark loops until the video ends.</li>
                     * @return RepeatType Watermark repeat type. Usage scenario: the watermark is a dynamic image. Value range:
<li>once: The dynamic watermark no longer appears after it is finished playing;</li>
<li>repeat_last_frame: After the watermark finished playing, stay on the last frame;</li>
<li>repeat: The watermark loops until the video ends.</li>
                     * 
                     */
                    std::string GetRepeatType() const;

                    /**
                     * 设置Watermark repeat type. Usage scenario: the watermark is a dynamic image. Value range:
<li>once: The dynamic watermark no longer appears after it is finished playing;</li>
<li>repeat_last_frame: After the watermark finished playing, stay on the last frame;</li>
<li>repeat: The watermark loops until the video ends.</li>
                     * @param _repeatType Watermark repeat type. Usage scenario: the watermark is a dynamic image. Value range:
<li>once: The dynamic watermark no longer appears after it is finished playing;</li>
<li>repeat_last_frame: After the watermark finished playing, stay on the last frame;</li>
<li>repeat: The watermark loops until the video ends.</li>
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
                     * 获取Image transparency. Value range: [0, 100].
<li>0: completely opaque.</li>
<li>100: completely transparent.</li>
                     * @return Transparency Image transparency. Value range: [0, 100].
<li>0: completely opaque.</li>
<li>100: completely transparent.</li>
                     * 
                     */
                    int64_t GetTransparency() const;

                    /**
                     * 设置Image transparency. Value range: [0, 100].
<li>0: completely opaque.</li>
<li>100: completely transparent.</li>
                     * @param _transparency Image transparency. Value range: [0, 100].
<li>0: completely opaque.</li>
<li>100: completely transparent.</li>
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
                     * Base64-encoded string (https://tools.ietf.org/html/rfc4648) of the watermark image. Supports jpeg and png image formats.
                     */
                    std::string m_imageContent;
                    bool m_imageContentHasBeenSet;

                    /**
                     * Width of a watermark, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with px, it means the watermark Width is in pixels. For example, 100px means the Width is 100 pixels. Value range: [8, 4096].</li>
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height of a watermark, supporting two formats: % and px.
<li>If a string ends with %, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with px, it means the watermark Height is in pixels. For example, 100px means the Height is 100 pixels. Value range: 0 or [8, 4096].</li>
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Watermark repeat type. Usage scenario: the watermark is a dynamic image. Value range:
<li>once: The dynamic watermark no longer appears after it is finished playing;</li>
<li>repeat_last_frame: After the watermark finished playing, stay on the last frame;</li>
<li>repeat: The watermark loops until the video ends.</li>
                     */
                    std::string m_repeatType;
                    bool m_repeatTypeHasBeenSet;

                    /**
                     * Image transparency. Value range: [0, 100].
<li>0: completely opaque.</li>
<li>100: completely transparent.</li>
                     */
                    int64_t m_transparency;
                    bool m_transparencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEWATERMARKINPUTFORUPDATE_H_
