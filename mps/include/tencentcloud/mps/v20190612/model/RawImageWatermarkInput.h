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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RAWIMAGEWATERMARKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RAWIMAGEWATERMARKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Input parameter of image watermark template
                */
                class RawImageWatermarkInput : public AbstractModel
                {
                public:
                    RawImageWatermarkInput();
                    ~RawImageWatermarkInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input content of watermark image. JPEG and PNG images are supported.
                     * @return ImageContent Input content of watermark image. JPEG and PNG images are supported.
                     * 
                     */
                    MediaInputInfo GetImageContent() const;

                    /**
                     * 设置Input content of watermark image. JPEG and PNG images are supported.
                     * @param _imageContent Input content of watermark image. JPEG and PNG images are supported.
                     * 
                     */
                    void SetImageContent(const MediaInputInfo& _imageContent);

                    /**
                     * 判断参数 ImageContent 是否已赋值
                     * @return ImageContent 是否已赋值
                     * 
                     */
                    bool ImageContentHasBeenSet() const;

                    /**
                     * 获取Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
Default value: 10%.
                     * @return Width Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
Default value: 10%.
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
Default value: 10%.
                     * @param _width Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
Default value: 10%.
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
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px.</li>
Default value: 0 px, which means that `Height` will be proportionally scaled according to the aspect ratio of the original watermark image.
                     * @return Height Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px.</li>
Default value: 0 px, which means that `Height` will be proportionally scaled according to the aspect ratio of the original watermark image.
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px.</li>
Default value: 0 px, which means that `Height` will be proportionally scaled according to the aspect ratio of the original watermark image.
                     * @param _height Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px.</li>
Default value: 0 px, which means that `Height` will be proportionally scaled according to the aspect ratio of the original watermark image.
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
<li>`once`: no longer appears after watermark playback ends.</li>
<li>`repeat_last_frame`: stays on the last frame after watermark playback ends.</li>
<li>`repeat` (default): repeats the playback until the video ends.</li>
                     * @return RepeatType Repeat type of an animated watermark. Valid values:
<li>`once`: no longer appears after watermark playback ends.</li>
<li>`repeat_last_frame`: stays on the last frame after watermark playback ends.</li>
<li>`repeat` (default): repeats the playback until the video ends.</li>
                     * 
                     */
                    std::string GetRepeatType() const;

                    /**
                     * 设置Repeat type of an animated watermark. Valid values:
<li>`once`: no longer appears after watermark playback ends.</li>
<li>`repeat_last_frame`: stays on the last frame after watermark playback ends.</li>
<li>`repeat` (default): repeats the playback until the video ends.</li>
                     * @param _repeatType Repeat type of an animated watermark. Valid values:
<li>`once`: no longer appears after watermark playback ends.</li>
<li>`repeat_last_frame`: stays on the last frame after watermark playback ends.</li>
<li>`repeat` (default): repeats the playback until the video ends.</li>
                     * 
                     */
                    void SetRepeatType(const std::string& _repeatType);

                    /**
                     * 判断参数 RepeatType 是否已赋值
                     * @return RepeatType 是否已赋值
                     * 
                     */
                    bool RepeatTypeHasBeenSet() const;

                private:

                    /**
                     * Input content of watermark image. JPEG and PNG images are supported.
                     */
                    MediaInputInfo m_imageContent;
                    bool m_imageContentHasBeenSet;

                    /**
                     * Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
Default value: 10%.
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px.</li>
Default value: 0 px, which means that `Height` will be proportionally scaled according to the aspect ratio of the original watermark image.
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Repeat type of an animated watermark. Valid values:
<li>`once`: no longer appears after watermark playback ends.</li>
<li>`repeat_last_frame`: stays on the last frame after watermark playback ends.</li>
<li>`repeat` (default): repeats the playback until the video ends.</li>
                     */
                    std::string m_repeatType;
                    bool m_repeatTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWIMAGEWATERMARKINPUT_H_
