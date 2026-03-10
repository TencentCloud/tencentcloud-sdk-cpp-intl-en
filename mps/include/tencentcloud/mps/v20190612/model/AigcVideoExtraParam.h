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
                     * 获取<p>Resolution of the generated video. The resolution is related to the selected model and set video duration.</p><p>Supported resolution options for different models:</p><ol><li>Kling: 720P (default) and 1080P.</li><li>Hailuo: 768P (default) and 1080P.</li><li>Vidu: 720P (default) and 1080P.</li><li>GV: 720P (default) and 1080P.</li><li>OS: 720P. For images, only 1280x720 and 720x1280 are supported. Resolution cannot be specified.</li></ol><p>Note: In addition to the resolution supported by the model, 2K and 4K resolutions are also available.</p>
                     * @return Resolution <p>Resolution of the generated video. The resolution is related to the selected model and set video duration.</p><p>Supported resolution options for different models:</p><ol><li>Kling: 720P (default) and 1080P.</li><li>Hailuo: 768P (default) and 1080P.</li><li>Vidu: 720P (default) and 1080P.</li><li>GV: 720P (default) and 1080P.</li><li>OS: 720P. For images, only 1280x720 and 720x1280 are supported. Resolution cannot be specified.</li></ol><p>Note: In addition to the resolution supported by the model, 2K and 4K resolutions are also available.</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>Resolution of the generated video. The resolution is related to the selected model and set video duration.</p><p>Supported resolution options for different models:</p><ol><li>Kling: 720P (default) and 1080P.</li><li>Hailuo: 768P (default) and 1080P.</li><li>Vidu: 720P (default) and 1080P.</li><li>GV: 720P (default) and 1080P.</li><li>OS: 720P. For images, only 1280x720 and 720x1280 are supported. Resolution cannot be specified.</li></ol><p>Note: In addition to the resolution supported by the model, 2K and 4K resolutions are also available.</p>
                     * @param _resolution <p>Resolution of the generated video. The resolution is related to the selected model and set video duration.</p><p>Supported resolution options for different models:</p><ol><li>Kling: 720P (default) and 1080P.</li><li>Hailuo: 768P (default) and 1080P.</li><li>Vidu: 720P (default) and 1080P.</li><li>GV: 720P (default) and 1080P.</li><li>OS: 720P. For images, only 1280x720 and 720x1280 are supported. Resolution cannot be specified.</li></ol><p>Note: In addition to the resolution supported by the model, 2K and 4K resolutions are also available.</p>
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
                     * 获取<p>Aspect ratio of the generated video.</p><p>Support for this parameter by different models:</p><ol><li>Kling only supports this parameter for text-to-video, with aspect ratios of 16:9 (default), 9:16, and 1:1.</li><li>Hailuo does not support this parameter.</li><li>Vidu supports [16:9, 9:16, 4:3, 3:4, 1:1] for text-to-video and reference image-to-video only. Only q2 supports 4:3 and 3:4.</li><li>GV supports 16:9 (default) and 9:16.</li><li>OS only supports this parameter for text-to-video, with aspect ratios of 16:9 (default) and 9:16.</li></ol><p>Note: For more information about the supported aspect ratios of specific models, see the model website.</p>
                     * @return AspectRatio <p>Aspect ratio of the generated video.</p><p>Support for this parameter by different models:</p><ol><li>Kling only supports this parameter for text-to-video, with aspect ratios of 16:9 (default), 9:16, and 1:1.</li><li>Hailuo does not support this parameter.</li><li>Vidu supports [16:9, 9:16, 4:3, 3:4, 1:1] for text-to-video and reference image-to-video only. Only q2 supports 4:3 and 3:4.</li><li>GV supports 16:9 (default) and 9:16.</li><li>OS only supports this parameter for text-to-video, with aspect ratios of 16:9 (default) and 9:16.</li></ol><p>Note: For more information about the supported aspect ratios of specific models, see the model website.</p>
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置<p>Aspect ratio of the generated video.</p><p>Support for this parameter by different models:</p><ol><li>Kling only supports this parameter for text-to-video, with aspect ratios of 16:9 (default), 9:16, and 1:1.</li><li>Hailuo does not support this parameter.</li><li>Vidu supports [16:9, 9:16, 4:3, 3:4, 1:1] for text-to-video and reference image-to-video only. Only q2 supports 4:3 and 3:4.</li><li>GV supports 16:9 (default) and 9:16.</li><li>OS only supports this parameter for text-to-video, with aspect ratios of 16:9 (default) and 9:16.</li></ol><p>Note: For more information about the supported aspect ratios of specific models, see the model website.</p>
                     * @param _aspectRatio <p>Aspect ratio of the generated video.</p><p>Support for this parameter by different models:</p><ol><li>Kling only supports this parameter for text-to-video, with aspect ratios of 16:9 (default), 9:16, and 1:1.</li><li>Hailuo does not support this parameter.</li><li>Vidu supports [16:9, 9:16, 4:3, 3:4, 1:1] for text-to-video and reference image-to-video only. Only q2 supports 4:3 and 3:4.</li><li>GV supports 16:9 (default) and 9:16.</li><li>OS only supports this parameter for text-to-video, with aspect ratios of 16:9 (default) and 9:16.</li></ol><p>Note: For more information about the supported aspect ratios of specific models, see the model website.</p>
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
                     * 获取<p>Indicates whether to add a logo watermark.</p><ol><li>Hailuo supports this parameter.</li><li>Kling supports this parameter.</li><li>Vidu supports this parameter.</li></ol>
                     * @return LogoAdd <p>Indicates whether to add a logo watermark.</p><ol><li>Hailuo supports this parameter.</li><li>Kling supports this parameter.</li><li>Vidu supports this parameter.</li></ol>
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置<p>Indicates whether to add a logo watermark.</p><ol><li>Hailuo supports this parameter.</li><li>Kling supports this parameter.</li><li>Vidu supports this parameter.</li></ol>
                     * @param _logoAdd <p>Indicates whether to add a logo watermark.</p><ol><li>Hailuo supports this parameter.</li><li>Kling supports this parameter.</li><li>Vidu supports this parameter.</li></ol>
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
                     * 获取<p>Indicates whether to generate audio for the video. Valid values: true or false.</p><p>Models that support this parameter:</p><ol><li>GV. Default value: true.</li><li>OS. Default value: true.</li></ol>
                     * @return EnableAudio <p>Indicates whether to generate audio for the video. Valid values: true or false.</p><p>Models that support this parameter:</p><ol><li>GV. Default value: true.</li><li>OS. Default value: true.</li></ol>
                     * 
                     */
                    bool GetEnableAudio() const;

                    /**
                     * 设置<p>Indicates whether to generate audio for the video. Valid values: true or false.</p><p>Models that support this parameter:</p><ol><li>GV. Default value: true.</li><li>OS. Default value: true.</li></ol>
                     * @param _enableAudio <p>Indicates whether to generate audio for the video. Valid values: true or false.</p><p>Models that support this parameter:</p><ol><li>GV. Default value: true.</li><li>OS. Default value: true.</li></ol>
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
                     * 获取<p>Indicates whether to use the off-peak scheduling mode. Only Vidu supports this parameter.<br>Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled.</p>
                     * @return OffPeak <p>Indicates whether to use the off-peak scheduling mode. Only Vidu supports this parameter.<br>Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled.</p>
                     * 
                     */
                    bool GetOffPeak() const;

                    /**
                     * 设置<p>Indicates whether to use the off-peak scheduling mode. Only Vidu supports this parameter.<br>Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled.</p>
                     * @param _offPeak <p>Indicates whether to use the off-peak scheduling mode. Only Vidu supports this parameter.<br>Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled.</p>
                     * 
                     */
                    void SetOffPeak(const bool& _offPeak);

                    /**
                     * 判断参数 OffPeak 是否已赋值
                     * @return OffPeak 是否已赋值
                     * 
                     */
                    bool OffPeakHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether to add background music to the generated video. Default value: false. Valid values: true or false.<br>Note: Only some model versions support this.</p>
                     * @return EnableBgm <p>Indicates whether to add background music to the generated video. Default value: false. Valid values: true or false.<br>Note: Only some model versions support this.</p>
                     * 
                     */
                    bool GetEnableBgm() const;

                    /**
                     * 设置<p>Indicates whether to add background music to the generated video. Default value: false. Valid values: true or false.<br>Note: Only some model versions support this.</p>
                     * @param _enableBgm <p>Indicates whether to add background music to the generated video. Default value: false. Valid values: true or false.<br>Note: Only some model versions support this.</p>
                     * 
                     */
                    void SetEnableBgm(const bool& _enableBgm);

                    /**
                     * 判断参数 EnableBgm 是否已赋值
                     * @return EnableBgm 是否已赋值
                     * 
                     */
                    bool EnableBgmHasBeenSet() const;

                private:

                    /**
                     * <p>Resolution of the generated video. The resolution is related to the selected model and set video duration.</p><p>Supported resolution options for different models:</p><ol><li>Kling: 720P (default) and 1080P.</li><li>Hailuo: 768P (default) and 1080P.</li><li>Vidu: 720P (default) and 1080P.</li><li>GV: 720P (default) and 1080P.</li><li>OS: 720P. For images, only 1280x720 and 720x1280 are supported. Resolution cannot be specified.</li></ol><p>Note: In addition to the resolution supported by the model, 2K and 4K resolutions are also available.</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>Aspect ratio of the generated video.</p><p>Support for this parameter by different models:</p><ol><li>Kling only supports this parameter for text-to-video, with aspect ratios of 16:9 (default), 9:16, and 1:1.</li><li>Hailuo does not support this parameter.</li><li>Vidu supports [16:9, 9:16, 4:3, 3:4, 1:1] for text-to-video and reference image-to-video only. Only q2 supports 4:3 and 3:4.</li><li>GV supports 16:9 (default) and 9:16.</li><li>OS only supports this parameter for text-to-video, with aspect ratios of 16:9 (default) and 9:16.</li></ol><p>Note: For more information about the supported aspect ratios of specific models, see the model website.</p>
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * <p>Indicates whether to add a logo watermark.</p><ol><li>Hailuo supports this parameter.</li><li>Kling supports this parameter.</li><li>Vidu supports this parameter.</li></ol>
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>Indicates whether to generate audio for the video. Valid values: true or false.</p><p>Models that support this parameter:</p><ol><li>GV. Default value: true.</li><li>OS. Default value: true.</li></ol>
                     */
                    bool m_enableAudio;
                    bool m_enableAudioHasBeenSet;

                    /**
                     * <p>Indicates whether to use the off-peak scheduling mode. Only Vidu supports this parameter.<br>Tasks submitted in off-peak mode will be processed within 48 hours. Uncompleted tasks will be canceled.</p>
                     */
                    bool m_offPeak;
                    bool m_offPeakHasBeenSet;

                    /**
                     * <p>Indicates whether to add background music to the generated video. Default value: false. Valid values: true or false.<br>Note: Only some model versions support this.</p>
                     */
                    bool m_enableBgm;
                    bool m_enableBgmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOEXTRAPARAM_H_
