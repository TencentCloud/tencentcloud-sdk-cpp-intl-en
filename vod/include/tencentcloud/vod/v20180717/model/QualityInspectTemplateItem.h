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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTEMPLATEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
#include <tencentcloud/vod/v20180717/model/QualityEvaluationConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/VoiceConfigureInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Audio and video quality detection template details.
                */
                class QualityInspectTemplateItem : public AbstractModel
                {
                public:
                    QualityInspectTemplateItem();
                    ~QualityInspectTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Template type. Available values:</p><li>Preset: preset template;</li><li>Custom: custom template.</li>
                     * @return Type <p>Template type. Available values:</p><li>Preset: preset template;</li><li>Custom: custom template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Template type. Available values:</p><li>Preset: preset template;</li><li>Custom: custom template.</li>
                     * @param _type <p>Template type. Available values:</p><li>Preset: preset template;</li><li>Custom: custom template.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Template name.</p>
                     * @return Name <p>Template name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Template name.</p>
                     * @param _name <p>Template name.</p>
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
                     * 获取<p>Template description.</p>
                     * @return Comment <p>Template description.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Template description.</p>
                     * @param _comment <p>Template description.</p>
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
                     * 获取<p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return CreateTime <p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _createTime <p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Template last modified time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return UpdateTime <p>Template last modified time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Template last modified time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _updateTime <p>Template last modified time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended. Use Configs as an alternative.) Frame interception interval in seconds.</p>
                     * @return ScreenshotInterval <p>(Not recommended. Use Configs as an alternative.) Frame interception interval in seconds.</p>
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs as an alternative.) Frame interception interval in seconds.</p>
                     * @param _screenshotInterval <p>(Not recommended. Use Configs as an alternative.) Frame interception interval in seconds.</p>
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
                     * 获取<p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame jitter and ghosting detection.</p>
                     * @return JitterConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame jitter and ghosting detection.</p>
                     * 
                     */
                    JitterConfigureInfo GetJitterConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame jitter and ghosting detection.</p>
                     * @param _jitterConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame jitter and ghosting detection.</p>
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
                     * 获取<p>(Not recommended. Use Configs instead.) Control parameters for low-light and overexposure detection in video frames.</p>
                     * @return AbnormalLightingConfigure <p>(Not recommended. Use Configs instead.) Control parameters for low-light and overexposure detection in video frames.</p>
                     * 
                     */
                    AbnormalLightingConfigureInfo GetAbnormalLightingConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs instead.) Control parameters for low-light and overexposure detection in video frames.</p>
                     * @param _abnormalLightingConfigure <p>(Not recommended. Use Configs instead.) Control parameters for low-light and overexposure detection in video frames.</p>
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
                     * 获取<p>(Not recommended. Use Configs as an alternative.) Control parameters for video footage distortion detection.</p>
                     * @return CrashScreenConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for video footage distortion detection.</p>
                     * 
                     */
                    CrashScreenConfigureInfo GetCrashScreenConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs as an alternative.) Control parameters for video footage distortion detection.</p>
                     * @param _crashScreenConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for video footage distortion detection.</p>
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
                     * 获取<p>Control parameters for detecting black edges, white edges, black screen, and white screen in video picture.</p>
                     * @return BlackWhiteEdgeConfigure <p>Control parameters for detecting black edges, white edges, black screen, and white screen in video picture.</p>
                     * 
                     */
                    BlackWhiteEdgeConfigureInfo GetBlackWhiteEdgeConfigure() const;

                    /**
                     * 设置<p>Control parameters for detecting black edges, white edges, black screen, and white screen in video picture.</p>
                     * @param _blackWhiteEdgeConfigure <p>Control parameters for detecting black edges, white edges, black screen, and white screen in video picture.</p>
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
                     * 获取<p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame noise detection.</p>
                     * @return NoiseConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame noise detection.</p>
                     * 
                     */
                    NoiseConfigureInfo GetNoiseConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame noise detection.</p>
                     * @param _noiseConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame noise detection.</p>
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

                    /**
                     * 获取<p>(Not recommended. Use Configs as an alternative.) Control parameters for audio (mute, bass, pop) detection.</p>
                     * @return VoiceConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for audio (mute, bass, pop) detection.</p>
                     * 
                     */
                    VoiceConfigureInfo GetVoiceConfigure() const;

                    /**
                     * 设置<p>(Not recommended. Use Configs as an alternative.) Control parameters for audio (mute, bass, pop) detection.</p>
                     * @param _voiceConfigure <p>(Not recommended. Use Configs as an alternative.) Control parameters for audio (mute, bass, pop) detection.</p>
                     * 
                     */
                    void SetVoiceConfigure(const VoiceConfigureInfo& _voiceConfigure);

                    /**
                     * 判断参数 VoiceConfigure 是否已赋值
                     * @return VoiceConfigure 是否已赋值
                     * 
                     */
                    bool VoiceConfigureHasBeenSet() const;

                private:

                    /**
                     * <p>Template ID.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Template type. Available values:</p><li>Preset: preset template;</li><li>Custom: custom template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Template name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Template description.</p>
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
                     * <p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Template last modified time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative.) Frame interception interval in seconds.</p>
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame jitter and ghosting detection.</p>
                     */
                    JitterConfigureInfo m_jitterConfigure;
                    bool m_jitterConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame blur detection.</p>
                     */
                    BlurConfigureInfo m_blurConfigure;
                    bool m_blurConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs instead.) Control parameters for low-light and overexposure detection in video frames.</p>
                     */
                    AbnormalLightingConfigureInfo m_abnormalLightingConfigure;
                    bool m_abnormalLightingConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative.) Control parameters for video footage distortion detection.</p>
                     */
                    CrashScreenConfigureInfo m_crashScreenConfigure;
                    bool m_crashScreenConfigureHasBeenSet;

                    /**
                     * <p>Control parameters for detecting black edges, white edges, black screen, and white screen in video picture.</p>
                     */
                    BlackWhiteEdgeConfigureInfo m_blackWhiteEdgeConfigure;
                    bool m_blackWhiteEdgeConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative.) Control parameters for video frame noise detection.</p>
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
                     * <p>(Not recommended. Use Configs instead.) Control parameters for video frame quality evaluation.</p>
                     */
                    QualityEvaluationConfigureInfo m_qualityEvaluationConfigure;
                    bool m_qualityEvaluationConfigureHasBeenSet;

                    /**
                     * <p>(Not recommended. Use Configs as an alternative.) Control parameters for audio (mute, bass, pop) detection.</p>
                     */
                    VoiceConfigureInfo m_voiceConfigure;
                    bool m_voiceConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTEMPLATEITEM_H_
