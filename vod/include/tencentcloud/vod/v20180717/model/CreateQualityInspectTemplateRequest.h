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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEQUALITYINSPECTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEQUALITYINSPECTTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectConfig.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectStrategy.h>
#include <tencentcloud/vod/v20180717/model/JitterConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/BlurConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/AbnormalLightingConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/CrashScreenConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/BlackWhiteEdgeConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/NoiseConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/MosaicConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/QRCodeConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/VoiceConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/QualityEvaluationConfigureInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateQualityInspectTemplate request structure.
                */
                class CreateQualityInspectTemplateRequest : public AbstractModel
                {
                public:
                    CreateQualityInspectTemplateRequest();
                    ~CreateQualityInspectTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled in as the application ID.</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled in as the application ID.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled in as the application ID.</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled in as the application ID.</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Audio and video quality inspection template name.</p>
                     * @return Name <p>Audio and video quality inspection template name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Audio and video quality inspection template name.</p>
                     * @param _name <p>Audio and video quality inspection template name.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Audio and video quality inspection template description.</p>
                     * @return Comment <p>Audio and video quality inspection template description.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Audio and video quality inspection template description.</p>
                     * @param _comment <p>Audio and video quality inspection template description.</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>Audio and video quality detection configuration parameters.</p>
                     * @return Configs <p>Audio and video quality detection configuration parameters.</p>
                     * 
                     */
                    std::vector<QualityInspectConfig> GetConfigs() const;

                    /**
                     * 设置<p>Audio and video quality detection configuration parameters.</p>
                     * @param _configs <p>Audio and video quality detection configuration parameters.</p>
                     * 
                     */
                    void SetConfigs(const std::vector<QualityInspectConfig>& _configs);

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     * 
                     */
                    bool ConfigsHasBeenSet() const;

                    /**
                     * 获取<p>Spot check policy parameters for audio and video quality inspection.</p>
                     * @return Strategy <p>Spot check policy parameters for audio and video quality inspection.</p>
                     * 
                     */
                    QualityInspectStrategy GetStrategy() const;

                    /**
                     * 设置<p>Spot check policy parameters for audio and video quality inspection.</p>
                     * @param _strategy <p>Spot check policy parameters for audio and video quality inspection.</p>
                     * 
                     */
                    void SetStrategy(const QualityInspectStrategy& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs instead.) Frame interception interval in seconds. Minimum value: 1. If not specified, the default frame interval is 1 second.</p>
                     * @return ScreenshotInterval <p>(Not recommended. Use Configs instead.) Frame interception interval in seconds. Minimum value: 1. If not specified, the default frame interval is 1 second.</p>
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Frame interception interval in seconds. Minimum value: 1. If not specified, the default frame interval is 1 second.</p>
                     * @param _screenshotInterval <p>(Not recommended. Use Configs instead.) Frame interception interval in seconds. Minimum value: 1. If not specified, the default frame interval is 1 second.</p>
                     * 
                     */
                    void SetScreenshotInterval(const double& _screenshotInterval);

                    /**
                     * 判断参数 ScreenshotInterval 是否已赋值
                     * @return ScreenshotInterval 是否已赋值
                     * 
                     */
                    bool ScreenshotIntervalHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs instead.) Control parameters for video frame jitter and ghosting detection.</p>
                     * @return JitterConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame jitter and ghosting detection.</p>
                     * 
                     */
                    JitterConfigureInfo GetJitterConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Control parameters for video frame jitter and ghosting detection.</p>
                     * @param _jitterConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame jitter and ghosting detection.</p>
                     * 
                     */
                    void SetJitterConfigure(const JitterConfigureInfo& _jitterConfigure);

                    /**
                     * 判断参数 JitterConfigure 是否已赋值
                     * @return JitterConfigure 是否已赋值
                     * 
                     */
                    bool JitterConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame blur detection.</p>
                     * @return BlurConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame blur detection.</p>
                     * 
                     */
                    BlurConfigureInfo GetBlurConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame blur detection.</p>
                     * @param _blurConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame blur detection.</p>
                     * 
                     */
                    void SetBlurConfigure(const BlurConfigureInfo& _blurConfigure);

                    /**
                     * 判断参数 BlurConfigure 是否已赋值
                     * @return BlurConfigure 是否已赋值
                     * 
                     */
                    bool BlurConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs as an alternative.) Control parameters for low-light and overexposure detection in video frames.</p>
                     * @return AbnormalLightingConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for low-light and overexposure detection in video frames.</p>
                     * 
                     */
                    AbnormalLightingConfigureInfo GetAbnormalLightingConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs as an alternative.) Control parameters for low-light and overexposure detection in video frames.</p>
                     * @param _abnormalLightingConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for low-light and overexposure detection in video frames.</p>
                     * 
                     */
                    void SetAbnormalLightingConfigure(const AbnormalLightingConfigureInfo& _abnormalLightingConfigure);

                    /**
                     * 判断参数 AbnormalLightingConfigure 是否已赋值
                     * @return AbnormalLightingConfigure 是否已赋值
                     * 
                     */
                    bool AbnormalLightingConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs as an alternative.) Control parameters for distortion detection in video footage.</p>
                     * @return CrashScreenConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for distortion detection in video footage.</p>
                     * 
                     */
                    CrashScreenConfigureInfo GetCrashScreenConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs as an alternative.) Control parameters for distortion detection in video footage.</p>
                     * @param _crashScreenConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for distortion detection in video footage.</p>
                     * 
                     */
                    void SetCrashScreenConfigure(const CrashScreenConfigureInfo& _crashScreenConfigure);

                    /**
                     * 判断参数 CrashScreenConfigure 是否已赋值
                     * @return CrashScreenConfigure 是否已赋值
                     * 
                     */
                    bool CrashScreenConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs as an alternative.) Control parameters for detecting video picture black edges, white edges, black screen, and white screen.</p>
                     * @return BlackWhiteEdgeConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for detecting video picture black edges, white edges, black screen, and white screen.</p>
                     * 
                     */
                    BlackWhiteEdgeConfigureInfo GetBlackWhiteEdgeConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs as an alternative.) Control parameters for detecting video picture black edges, white edges, black screen, and white screen.</p>
                     * @param _blackWhiteEdgeConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for detecting video picture black edges, white edges, black screen, and white screen.</p>
                     * 
                     */
                    void SetBlackWhiteEdgeConfigure(const BlackWhiteEdgeConfigureInfo& _blackWhiteEdgeConfigure);

                    /**
                     * 判断参数 BlackWhiteEdgeConfigure 是否已赋值
                     * @return BlackWhiteEdgeConfigure 是否已赋值
                     * 
                     */
                    bool BlackWhiteEdgeConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs instead.) Control parameters for video frame noise detection.</p>
                     * @return NoiseConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame noise detection.</p>
                     * 
                     */
                    NoiseConfigureInfo GetNoiseConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Control parameters for video frame noise detection.</p>
                     * @param _noiseConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame noise detection.</p>
                     * 
                     */
                    void SetNoiseConfigure(const NoiseConfigureInfo& _noiseConfigure);

                    /**
                     * 判断参数 NoiseConfigure 是否已赋值
                     * @return NoiseConfigure 是否已赋值
                     * 
                     */
                    bool NoiseConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs instead.) Control parameters for video frame mosaic detection.</p>
                     * @return MosaicConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame mosaic detection.</p>
                     * 
                     */
                    MosaicConfigureInfo GetMosaicConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Control parameters for video frame mosaic detection.</p>
                     * @param _mosaicConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame mosaic detection.</p>
                     * 
                     */
                    void SetMosaicConfigure(const MosaicConfigureInfo& _mosaicConfigure);

                    /**
                     * 判断参数 MosaicConfigure 是否已赋值
                     * @return MosaicConfigure 是否已赋值
                     * 
                     */
                    bool MosaicConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame QR code detection.</p>
                     * @return QRCodeConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame QR code detection.</p>
                     * 
                     */
                    QRCodeConfigureInfo GetQRCodeConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame QR code detection.</p>
                     * @param _qRCodeConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame QR code detection.</p>
                     * 
                     */
                    void SetQRCodeConfigure(const QRCodeConfigureInfo& _qRCodeConfigure);

                    /**
                     * 判断参数 QRCodeConfigure 是否已赋值
                     * @return QRCodeConfigure 是否已赋值
                     * 
                     */
                    bool QRCodeConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended, use Configs as an alternative) Control parameters for audio (mute, bass, pop) detection.</p>
                     * @return VoiceConfigure <p>(Not recommended, use Configs as an alternative) Control parameters for audio (mute, bass, pop) detection.</p>
                     * 
                     */
                    VoiceConfigureInfo GetVoiceConfigure() const;

                    /**
                     * 设置<p>(Not recommended, use Configs as an alternative) Control parameters for audio (mute, bass, pop) detection.</p>
                     * @param _voiceConfigure <p>(Not recommended, use Configs as an alternative) Control parameters for audio (mute, bass, pop) detection.</p>
                     * 
                     */
                    void SetVoiceConfigure(const VoiceConfigureInfo& _voiceConfigure);

                    /**
                     * 判断参数 VoiceConfigure 是否已赋值
                     * @return VoiceConfigure 是否已赋值
                     * 
                     */
                    bool VoiceConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs instead.) Control parameters for video frame quality evaluation.</p>
                     * @return QualityEvaluationConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame quality evaluation.</p>
                     * 
                     */
                    QualityEvaluationConfigureInfo GetQualityEvaluationConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Control parameters for video frame quality evaluation.</p>
                     * @param _qualityEvaluationConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame quality evaluation.</p>
                     * 
                     */
                    void SetQualityEvaluationConfigure(const QualityEvaluationConfigureInfo& _qualityEvaluationConfigure);

                    /**
                     * 判断参数 QualityEvaluationConfigure 是否已赋值
                     * @return QualityEvaluationConfigure 是否已赋值
                     * 
                     */
                    bool QualityEvaluationConfigureHasBeenSet() const;

                private:

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled in as the application ID.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Audio and video quality inspection template name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Audio and video quality inspection template description.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Audio and video quality detection configuration parameters.</p>
                     */
                    std::vector<QualityInspectConfig> m_configs;
                    bool m_configsHasBeenSet;

                    /**
                     * <p>Spot check policy parameters for audio and video quality inspection.</p>
                     */
                    QualityInspectStrategy m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Frame interception interval in seconds. Minimum value: 1. If not specified, the default frame interval is 1 second.</p>
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Control parameters for video frame jitter and ghosting detection.</p>
                     */
                    JitterConfigureInfo m_jitterConfigure;
                    bool m_jitterConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame blur detection.</p>
                     */
                    BlurConfigureInfo m_blurConfigure;
                    bool m_blurConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative.) Control parameters for low-light and overexposure detection in video frames.</p>
                     */
                    AbnormalLightingConfigureInfo m_abnormalLightingConfigure;
                    bool m_abnormalLightingConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative.) Control parameters for distortion detection in video footage.</p>
                     */
                    CrashScreenConfigureInfo m_crashScreenConfigure;
                    bool m_crashScreenConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative.) Control parameters for detecting video picture black edges, white edges, black screen, and white screen.</p>
                     */
                    BlackWhiteEdgeConfigureInfo m_blackWhiteEdgeConfigure;
                    bool m_blackWhiteEdgeConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Control parameters for video frame noise detection.</p>
                     */
                    NoiseConfigureInfo m_noiseConfigure;
                    bool m_noiseConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Control parameters for video frame mosaic detection.</p>
                     */
                    MosaicConfigureInfo m_mosaicConfigure;
                    bool m_mosaicConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame QR code detection.</p>
                     */
                    QRCodeConfigureInfo m_qRCodeConfigure;
                    bool m_qRCodeConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended, use Configs as an alternative) Control parameters for audio (mute, bass, pop) detection.</p>
                     */
                    VoiceConfigureInfo m_voiceConfigure;
                    bool m_voiceConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Control parameters for video frame quality evaluation.</p>
                     */
                    QualityEvaluationConfigureInfo m_qualityEvaluationConfigure;
                    bool m_qualityEvaluationConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEQUALITYINSPECTTEMPLATEREQUEST_H_
