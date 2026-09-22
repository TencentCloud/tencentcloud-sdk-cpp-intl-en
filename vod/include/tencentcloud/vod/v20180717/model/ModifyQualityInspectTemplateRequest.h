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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYQUALITYINSPECTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYQUALITYINSPECTTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectConfig.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectStrategy.h>
#include <tencentcloud/vod/v20180717/model/JitterConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/BlurConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/AbnormalLightingConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/CrashScreenConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/BlackWhiteEdgeConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/NoiseConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/MosaicConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/QRCodeConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/VoiceConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/QualityEvaluationConfigureInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyQualityInspectTemplate request structure.
                */
                class ModifyQualityInspectTemplateRequest : public AbstractModel
                {
                public:
                    ModifyQualityInspectTemplateRequest();
                    ~ModifyQualityInspectTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Template ID.</p>
                     * @return Definition <p>Template ID.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>Template ID.</p>
                     * @param _definition <p>Template ID.</p>
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
                     * 获取<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
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
                     * 获取<p>Template name. Length limit: 64 characters.</p>
                     * @return Name <p>Template name. Length limit: 64 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Template name. Length limit: 64 characters.</p>
                     * @param _name <p>Template name. Length limit: 64 characters.</p>
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
                     * 获取<p>Transcoding template description. Length limit: 256 characters.</p>
                     * @return Comment <p>Transcoding template description. Length limit: 256 characters.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Transcoding template description. Length limit: 256 characters.</p>
                     * @param _comment <p>Transcoding template description. Length limit: 256 characters.</p>
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
                     * 获取<p>Configuration parameters for audio and video quality detection.</p>
                     * @return Configs <p>Configuration parameters for audio and video quality detection.</p>
                     * 
                     */
                    std::vector<QualityInspectConfig> GetConfigs() const;

                    /**
                     * 设置<p>Configuration parameters for audio and video quality detection.</p>
                     * @param _configs <p>Configuration parameters for audio and video quality detection.</p>
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
                     * 获取<p>Spot check policy for audio and video quality inspection.</p>
                     * @return Strategy <p>Spot check policy for audio and video quality inspection.</p>
                     * 
                     */
                    QualityInspectStrategy GetStrategy() const;

                    /**
                     * 设置<p>Spot check policy for audio and video quality inspection.</p>
                     * @param _strategy <p>Spot check policy for audio and video quality inspection.</p>
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
                     * 获取<p>(Not recommended. Use Configs instead.) Frame interception interval in seconds. Minimum value: 1.</p>
                     * @return ScreenshotInterval <p>(Not recommended. Use Configs instead.) Frame interception interval in seconds. Minimum value: 1.</p>
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Frame interception interval in seconds. Minimum value: 1.</p>
                     * @param _screenshotInterval <p>(Not recommended. Use Configs instead.) Frame interception interval in seconds. Minimum value: 1.</p>
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
                    JitterConfigureInfoForUpdate GetJitterConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Control parameters for video frame jitter and ghosting detection.</p>
                     * @param _jitterConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame jitter and ghosting detection.</p>
                     * 
                     */
                    void SetJitterConfigure(const JitterConfigureInfoForUpdate& _jitterConfigure);

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
                    BlurConfigureInfoForUpdate GetBlurConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame blur detection.</p>
                     * @param _blurConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame blur detection.</p>
                     * 
                     */
                    void SetBlurConfigure(const BlurConfigureInfoForUpdate& _blurConfigure);

                    /**
                     * 判断参数 BlurConfigure 是否已赋值
                     * @return BlurConfigure 是否已赋值
                     * 
                     */
                    bool BlurConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs instead.) Control parameters for low-light and overexposure detection in video frames.</p>
                     * @return AbnormalLightingConfigure <p>(Not recommended. Use Configs instead.) Control parameters for low-light and overexposure detection in video frames.</p>
                     * 
                     */
                    AbnormalLightingConfigureInfoForUpdate GetAbnormalLightingConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Control parameters for low-light and overexposure detection in video frames.</p>
                     * @param _abnormalLightingConfigure <p>(Not recommended. Use Configs instead.) Control parameters for low-light and overexposure detection in video frames.</p>
                     * 
                     */
                    void SetAbnormalLightingConfigure(const AbnormalLightingConfigureInfoForUpdate& _abnormalLightingConfigure);

                    /**
                     * 判断参数 AbnormalLightingConfigure 是否已赋值
                     * @return AbnormalLightingConfigure 是否已赋值
                     * 
                     */
                    bool AbnormalLightingConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs instead.) Control parameters for video image distortion detection.</p>
                     * @return CrashScreenConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video image distortion detection.</p>
                     * 
                     */
                    CrashScreenConfigureInfoForUpdate GetCrashScreenConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Control parameters for video image distortion detection.</p>
                     * @param _crashScreenConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video image distortion detection.</p>
                     * 
                     */
                    void SetCrashScreenConfigure(const CrashScreenConfigureInfoForUpdate& _crashScreenConfigure);

                    /**
                     * 判断参数 CrashScreenConfigure 是否已赋值
                     * @return CrashScreenConfigure 是否已赋值
                     * 
                     */
                    bool CrashScreenConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs as an alternative) Control parameters for detecting black edges, white edges, black screen, and white screen in video pictures.</p>
                     * @return BlackWhiteEdgeConfigure <p>(Not recommended. Use Configs as an alternative) Control parameters for detecting black edges, white edges, black screen, and white screen in video pictures.</p>
                     * 
                     */
                    BlackWhiteEdgeConfigureInfoForUpdate GetBlackWhiteEdgeConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs as an alternative) Control parameters for detecting black edges, white edges, black screen, and white screen in video pictures.</p>
                     * @param _blackWhiteEdgeConfigure <p>(Not recommended. Use Configs as an alternative) Control parameters for detecting black edges, white edges, black screen, and white screen in video pictures.</p>
                     * 
                     */
                    void SetBlackWhiteEdgeConfigure(const BlackWhiteEdgeConfigureInfoForUpdate& _blackWhiteEdgeConfigure);

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
                    NoiseConfigureInfoForUpdate GetNoiseConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Control parameters for video frame noise detection.</p>
                     * @param _noiseConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame noise detection.</p>
                     * 
                     */
                    void SetNoiseConfigure(const NoiseConfigureInfoForUpdate& _noiseConfigure);

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
                    MosaicConfigureInfoForUpdate GetMosaicConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Control parameters for video frame mosaic detection.</p>
                     * @param _mosaicConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame mosaic detection.</p>
                     * 
                     */
                    void SetMosaicConfigure(const MosaicConfigureInfoForUpdate& _mosaicConfigure);

                    /**
                     * 判断参数 MosaicConfigure 是否已赋值
                     * @return MosaicConfigure 是否已赋值
                     * 
                     */
                    bool MosaicConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs instead.) Control parameters for video frame QR code detection.</p>
                     * @return QRCodeConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame QR code detection.</p>
                     * 
                     */
                    QRCodeConfigureInfoForUpdate GetQRCodeConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Control parameters for video frame QR code detection.</p>
                     * @param _qRCodeConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame QR code detection.</p>
                     * 
                     */
                    void SetQRCodeConfigure(const QRCodeConfigureInfoForUpdate& _qRCodeConfigure);

                    /**
                     * 判断参数 QRCodeConfigure 是否已赋值
                     * @return QRCodeConfigure 是否已赋值
                     * 
                     */
                    bool QRCodeConfigureHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs as an alternative) Control parameters for audio (mute, bass, pop) detection.</p>
                     * @return VoiceConfigure <p>(Not recommended. Use Configs as an alternative) Control parameters for audio (mute, bass, pop) detection.</p>
                     * 
                     */
                    VoiceConfigureInfoForUpdate GetVoiceConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs as an alternative) Control parameters for audio (mute, bass, pop) detection.</p>
                     * @param _voiceConfigure <p>(Not recommended. Use Configs as an alternative) Control parameters for audio (mute, bass, pop) detection.</p>
                     * 
                     */
                    void SetVoiceConfigure(const VoiceConfigureInfoForUpdate& _voiceConfigure);

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
                    QualityEvaluationConfigureInfoForUpdate GetQualityEvaluationConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Control parameters for video frame quality evaluation.</p>
                     * @param _qualityEvaluationConfigure <p>(Not recommended. Use Configs instead.) Control parameters for video frame quality evaluation.</p>
                     * 
                     */
                    void SetQualityEvaluationConfigure(const QualityEvaluationConfigureInfoForUpdate& _qualityEvaluationConfigure);

                    /**
                     * 判断参数 QualityEvaluationConfigure 是否已赋值
                     * @return QualityEvaluationConfigure 是否已赋值
                     * 
                     */
                    bool QualityEvaluationConfigureHasBeenSet() const;

                private:

                    /**
                     * <p>Template ID.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Template name. Length limit: 64 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Transcoding template description. Length limit: 256 characters.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Configuration parameters for audio and video quality detection.</p>
                     */
                    std::vector<QualityInspectConfig> m_configs;
                    bool m_configsHasBeenSet;

                    /**
                     * <p>Spot check policy for audio and video quality inspection.</p>
                     */
                    QualityInspectStrategy m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Frame interception interval in seconds. Minimum value: 1.</p>
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Control parameters for video frame jitter and ghosting detection.</p>
                     */
                    JitterConfigureInfoForUpdate m_jitterConfigure;
                    bool m_jitterConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame blur detection.</p>
                     */
                    BlurConfigureInfoForUpdate m_blurConfigure;
                    bool m_blurConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Control parameters for low-light and overexposure detection in video frames.</p>
                     */
                    AbnormalLightingConfigureInfoForUpdate m_abnormalLightingConfigure;
                    bool m_abnormalLightingConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Control parameters for video image distortion detection.</p>
                     */
                    CrashScreenConfigureInfoForUpdate m_crashScreenConfigure;
                    bool m_crashScreenConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative) Control parameters for detecting black edges, white edges, black screen, and white screen in video pictures.</p>
                     */
                    BlackWhiteEdgeConfigureInfoForUpdate m_blackWhiteEdgeConfigure;
                    bool m_blackWhiteEdgeConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Control parameters for video frame noise detection.</p>
                     */
                    NoiseConfigureInfoForUpdate m_noiseConfigure;
                    bool m_noiseConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Control parameters for video frame mosaic detection.</p>
                     */
                    MosaicConfigureInfoForUpdate m_mosaicConfigure;
                    bool m_mosaicConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Control parameters for video frame QR code detection.</p>
                     */
                    QRCodeConfigureInfoForUpdate m_qRCodeConfigure;
                    bool m_qRCodeConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative) Control parameters for audio (mute, bass, pop) detection.</p>
                     */
                    VoiceConfigureInfoForUpdate m_voiceConfigure;
                    bool m_voiceConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Control parameters for video frame quality evaluation.</p>
                     */
                    QualityEvaluationConfigureInfoForUpdate m_qualityEvaluationConfigure;
                    bool m_qualityEvaluationConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYQUALITYINSPECTTEMPLATEREQUEST_H_
