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
                     * 获取
                     * @return Definition 
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置
                     * @param _definition 
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
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
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
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * 获取
                     * @return Comment 
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置
                     * @param _comment 
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
                     * 获取
                     * @return Configs 
                     * 
                     */
                    std::vector<QualityInspectConfig> GetConfigs() const;

                    /**
                     * 设置
                     * @param _configs 
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
                     * 获取
                     * @return Strategy 
                     * 
                     */
                    QualityInspectStrategy GetStrategy() const;

                    /**
                     * 设置
                     * @param _strategy 
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
                     * 获取
                     * @return ScreenshotInterval 
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置
                     * @param _screenshotInterval 
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
                     * 获取
                     * @return JitterConfigure 
                     * 
                     */
                    JitterConfigureInfoForUpdate GetJitterConfigure() const;

                    /**
                     * 设置
                     * @param _jitterConfigure 
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
                     * 获取
                     * @return BlurConfigure 
                     * 
                     */
                    BlurConfigureInfoForUpdate GetBlurConfigure() const;

                    /**
                     * 设置
                     * @param _blurConfigure 
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
                     * 获取
                     * @return AbnormalLightingConfigure 
                     * 
                     */
                    AbnormalLightingConfigureInfoForUpdate GetAbnormalLightingConfigure() const;

                    /**
                     * 设置
                     * @param _abnormalLightingConfigure 
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
                     * 获取
                     * @return CrashScreenConfigure 
                     * 
                     */
                    CrashScreenConfigureInfoForUpdate GetCrashScreenConfigure() const;

                    /**
                     * 设置
                     * @param _crashScreenConfigure 
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
                     * 获取
                     * @return BlackWhiteEdgeConfigure 
                     * 
                     */
                    BlackWhiteEdgeConfigureInfoForUpdate GetBlackWhiteEdgeConfigure() const;

                    /**
                     * 设置
                     * @param _blackWhiteEdgeConfigure 
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
                     * 获取
                     * @return NoiseConfigure 
                     * 
                     */
                    NoiseConfigureInfoForUpdate GetNoiseConfigure() const;

                    /**
                     * 设置
                     * @param _noiseConfigure 
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
                     * 获取
                     * @return MosaicConfigure 
                     * 
                     */
                    MosaicConfigureInfoForUpdate GetMosaicConfigure() const;

                    /**
                     * 设置
                     * @param _mosaicConfigure 
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
                     * 获取
                     * @return QRCodeConfigure 
                     * 
                     */
                    QRCodeConfigureInfoForUpdate GetQRCodeConfigure() const;

                    /**
                     * 设置
                     * @param _qRCodeConfigure 
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
                     * 获取
                     * @return VoiceConfigure 
                     * 
                     */
                    VoiceConfigureInfoForUpdate GetVoiceConfigure() const;

                    /**
                     * 设置
                     * @param _voiceConfigure 
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
                     * 获取
                     * @return QualityEvaluationConfigure 
                     * 
                     */
                    QualityEvaluationConfigureInfoForUpdate GetQualityEvaluationConfigure() const;

                    /**
                     * 设置
                     * @param _qualityEvaluationConfigure 
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
                     * 
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<QualityInspectConfig> m_configs;
                    bool m_configsHasBeenSet;

                    /**
                     * 
                     */
                    QualityInspectStrategy m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * 
                     */
                    JitterConfigureInfoForUpdate m_jitterConfigure;
                    bool m_jitterConfigureHasBeenSet;

                    /**
                     * 
                     */
                    BlurConfigureInfoForUpdate m_blurConfigure;
                    bool m_blurConfigureHasBeenSet;

                    /**
                     * 
                     */
                    AbnormalLightingConfigureInfoForUpdate m_abnormalLightingConfigure;
                    bool m_abnormalLightingConfigureHasBeenSet;

                    /**
                     * 
                     */
                    CrashScreenConfigureInfoForUpdate m_crashScreenConfigure;
                    bool m_crashScreenConfigureHasBeenSet;

                    /**
                     * 
                     */
                    BlackWhiteEdgeConfigureInfoForUpdate m_blackWhiteEdgeConfigure;
                    bool m_blackWhiteEdgeConfigureHasBeenSet;

                    /**
                     * 
                     */
                    NoiseConfigureInfoForUpdate m_noiseConfigure;
                    bool m_noiseConfigureHasBeenSet;

                    /**
                     * 
                     */
                    MosaicConfigureInfoForUpdate m_mosaicConfigure;
                    bool m_mosaicConfigureHasBeenSet;

                    /**
                     * 
                     */
                    QRCodeConfigureInfoForUpdate m_qRCodeConfigure;
                    bool m_qRCodeConfigureHasBeenSet;

                    /**
                     * 
                     */
                    VoiceConfigureInfoForUpdate m_voiceConfigure;
                    bool m_voiceConfigureHasBeenSet;

                    /**
                     * 
                     */
                    QualityEvaluationConfigureInfoForUpdate m_qualityEvaluationConfigure;
                    bool m_qualityEvaluationConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYQUALITYINSPECTTEMPLATEREQUEST_H_
