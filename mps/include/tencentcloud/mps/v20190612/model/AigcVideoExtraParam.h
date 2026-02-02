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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOEXTRAPARAM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOEXTRAPARAM_H_

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
                * Extended parameters used for AIGC video generation.
                */
                class AigcVideoExtraParam : public AbstractModel
                {
                public:
                    AigcVideoExtraParam();
                    ~AigcVideoExtraParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The resolution of the generated video, which is related to the selected model and set video duration.Supported resolution options for different models:1. Kling: 720P (default) and 1080P.2. Hailuo: 768P (default) and 1080P.3. Vidu: 720P (default) and 1080P.4. GV: 720P (default) and 1080P.5. OS: 720P. For images, only 1280x720 and 720x1280 are supported. Resolution cannot be specified.Note: In addition to the resolution supported by the model, 2K and 4K resolutions are also available.
                     * @return Resolution The resolution of the generated video, which is related to the selected model and set video duration.Supported resolution options for different models:1. Kling: 720P (default) and 1080P.2. Hailuo: 768P (default) and 1080P.3. Vidu: 720P (default) and 1080P.4. GV: 720P (default) and 1080P.5. OS: 720P. For images, only 1280x720 and 720x1280 are supported. Resolution cannot be specified.Note: In addition to the resolution supported by the model, 2K and 4K resolutions are also available.
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置The resolution of the generated video, which is related to the selected model and set video duration.Supported resolution options for different models:1. Kling: 720P (default) and 1080P.2. Hailuo: 768P (default) and 1080P.3. Vidu: 720P (default) and 1080P.4. GV: 720P (default) and 1080P.5. OS: 720P. For images, only 1280x720 and 720x1280 are supported. Resolution cannot be specified.Note: In addition to the resolution supported by the model, 2K and 4K resolutions are also available.
                     * @param _resolution The resolution of the generated video, which is related to the selected model and set video duration.Supported resolution options for different models:1. Kling: 720P (default) and 1080P.2. Hailuo: 768P (default) and 1080P.3. Vidu: 720P (default) and 1080P.4. GV: 720P (default) and 1080P.5. OS: 720P. For images, only 1280x720 and 720x1280 are supported. Resolution cannot be specified.Note: In addition to the resolution supported by the model, 2K and 4K resolutions are also available.
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取The aspect ratio of the generated video.Support for this parameter by different models:1. Kling only supports this parameter for text-to-video, with aspect ratios of 16:9 (default), 9:16, and 1:1.2. Hailuo does not support this parameter.3. Vidu supports [16:9, 9:16, 4:3, 3:4, 1:1] for text-to-video and reference image-to-video only. Only q2 supports 4:3 and 3:4.4. GV supports 16:9 (default) and 9:16.5. OS only supports this parameter for text-to-video, with aspect ratios of 16:9 (default) and 9:16.Note: For more information about the supported aspect ratios of specific models, see the model website.
                     * @return AspectRatio The aspect ratio of the generated video.Support for this parameter by different models:1. Kling only supports this parameter for text-to-video, with aspect ratios of 16:9 (default), 9:16, and 1:1.2. Hailuo does not support this parameter.3. Vidu supports [16:9, 9:16, 4:3, 3:4, 1:1] for text-to-video and reference image-to-video only. Only q2 supports 4:3 and 3:4.4. GV supports 16:9 (default) and 9:16.5. OS only supports this parameter for text-to-video, with aspect ratios of 16:9 (default) and 9:16.Note: For more information about the supported aspect ratios of specific models, see the model website.
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置The aspect ratio of the generated video.Support for this parameter by different models:1. Kling only supports this parameter for text-to-video, with aspect ratios of 16:9 (default), 9:16, and 1:1.2. Hailuo does not support this parameter.3. Vidu supports [16:9, 9:16, 4:3, 3:4, 1:1] for text-to-video and reference image-to-video only. Only q2 supports 4:3 and 3:4.4. GV supports 16:9 (default) and 9:16.5. OS only supports this parameter for text-to-video, with aspect ratios of 16:9 (default) and 9:16.Note: For more information about the supported aspect ratios of specific models, see the model website.
                     * @param _aspectRatio The aspect ratio of the generated video.Support for this parameter by different models:1. Kling only supports this parameter for text-to-video, with aspect ratios of 16:9 (default), 9:16, and 1:1.2. Hailuo does not support this parameter.3. Vidu supports [16:9, 9:16, 4:3, 3:4, 1:1] for text-to-video and reference image-to-video only. Only q2 supports 4:3 and 3:4.4. GV supports 16:9 (default) and 9:16.5. OS only supports this parameter for text-to-video, with aspect ratios of 16:9 (default) and 9:16.Note: For more information about the supported aspect ratios of specific models, see the model website.
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取Indicates whether to add a logo watermark.1. Hailuo supports this parameter.2. Kling supports this parameter.
3. Vidu supports this parameter.
                     * @return LogoAdd Indicates whether to add a logo watermark.1. Hailuo supports this parameter.2. Kling supports this parameter.
3. Vidu supports this parameter.
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置Indicates whether to add a logo watermark.1. Hailuo supports this parameter.2. Kling supports this parameter.
3. Vidu supports this parameter.
                     * @param _logoAdd Indicates whether to add a logo watermark.1. Hailuo supports this parameter.2. Kling supports this parameter.
3. Vidu supports this parameter.
                     * 
                     */
                    void SetLogoAdd(const int64_t& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取Indicates whether to generate audio for the video. Valid values: true or false.Models that support this parameter:1. GV. Default value: true.2. OS. Default value: true.
                     * @return EnableAudio Indicates whether to generate audio for the video. Valid values: true or false.Models that support this parameter:1. GV. Default value: true.2. OS. Default value: true.
                     * 
                     */
                    bool GetEnableAudio() const;

                    /**
                     * 设置Indicates whether to generate audio for the video. Valid values: true or false.Models that support this parameter:1. GV. Default value: true.2. OS. Default value: true.
                     * @param _enableAudio Indicates whether to generate audio for the video. Valid values: true or false.Models that support this parameter:1. GV. Default value: true.2. OS. Default value: true.
                     * 
                     */
                    void SetEnableAudio(const bool& _enableAudio);

                    /**
                     * 判断参数 EnableAudio 是否已赋值
                     * @return EnableAudio 是否已赋值
                     * 
                     */
                    bool EnableAudioHasBeenSet() const;

                    /**
                     * 获取Indicates whether to use the off-peak scheduling mode. Only Vidu supports this parameter.Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled.
                     * @return OffPeak Indicates whether to use the off-peak scheduling mode. Only Vidu supports this parameter.Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled.
                     * 
                     */
                    bool GetOffPeak() const;

                    /**
                     * 设置Indicates whether to use the off-peak scheduling mode. Only Vidu supports this parameter.Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled.
                     * @param _offPeak Indicates whether to use the off-peak scheduling mode. Only Vidu supports this parameter.Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled.
                     * 
                     */
                    void SetOffPeak(const bool& _offPeak);

                    /**
                     * 判断参数 OffPeak 是否已赋值
                     * @return OffPeak 是否已赋值
                     * 
                     */
                    bool OffPeakHasBeenSet() const;

                private:

                    /**
                     * The resolution of the generated video, which is related to the selected model and set video duration.Supported resolution options for different models:1. Kling: 720P (default) and 1080P.2. Hailuo: 768P (default) and 1080P.3. Vidu: 720P (default) and 1080P.4. GV: 720P (default) and 1080P.5. OS: 720P. For images, only 1280x720 and 720x1280 are supported. Resolution cannot be specified.Note: In addition to the resolution supported by the model, 2K and 4K resolutions are also available.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * The aspect ratio of the generated video.Support for this parameter by different models:1. Kling only supports this parameter for text-to-video, with aspect ratios of 16:9 (default), 9:16, and 1:1.2. Hailuo does not support this parameter.3. Vidu supports [16:9, 9:16, 4:3, 3:4, 1:1] for text-to-video and reference image-to-video only. Only q2 supports 4:3 and 3:4.4. GV supports 16:9 (default) and 9:16.5. OS only supports this parameter for text-to-video, with aspect ratios of 16:9 (default) and 9:16.Note: For more information about the supported aspect ratios of specific models, see the model website.
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * Indicates whether to add a logo watermark.1. Hailuo supports this parameter.2. Kling supports this parameter.
3. Vidu supports this parameter.
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * Indicates whether to generate audio for the video. Valid values: true or false.Models that support this parameter:1. GV. Default value: true.2. OS. Default value: true.
                     */
                    bool m_enableAudio;
                    bool m_enableAudioHasBeenSet;

                    /**
                     * Indicates whether to use the off-peak scheduling mode. Only Vidu supports this parameter.Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled.
                     */
                    bool m_offPeak;
                    bool m_offPeakHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOEXTRAPARAM_H_
