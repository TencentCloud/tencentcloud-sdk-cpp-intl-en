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
                     * 获取Template ID.
                     * @return Definition Template ID.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Template ID.
                     * @param _definition Template ID.
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
                     * 获取<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
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
                     * 获取Template name. The length cannot exceed 64 characters.
                     * @return Name Template name. The length cannot exceed 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name. The length cannot exceed 64 characters.
                     * @param _name Template name. The length cannot exceed 64 characters.
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
                     * 获取Template description, with a length limit of 256 characters.
                     * @return Comment Template description, with a length limit of 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description, with a length limit of 256 characters.
                     * @param _comment Template description, with a length limit of 256 characters.
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
                     * 获取Frame interception interval, unit: seconds, minimum value 1.
                     * @return ScreenshotInterval Frame interception interval, unit: seconds, minimum value 1.
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置Frame interception interval, unit: seconds, minimum value 1.
                     * @param _screenshotInterval Frame interception interval, unit: seconds, minimum value 1.
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
                     * 获取Control parameters for video frame jitter and ghosting detection.
                     * @return JitterConfigure Control parameters for video frame jitter and ghosting detection.
                     * 
                     */
                    JitterConfigureInfoForUpdate GetJitterConfigure() const;

                    /**
                     * 设置Control parameters for video frame jitter and ghosting detection.
                     * @param _jitterConfigure Control parameters for video frame jitter and ghosting detection.
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
                     * 获取Control parameters for video frame blur detection.
                     * @return BlurConfigure Control parameters for video frame blur detection.
                     * 
                     */
                    BlurConfigureInfoForUpdate GetBlurConfigure() const;

                    /**
                     * 设置Control parameters for video frame blur detection.
                     * @param _blurConfigure Control parameters for video frame blur detection.
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
                     * 获取Control parameters for low-light and overexposure detection in video frames.
                     * @return AbnormalLightingConfigure Control parameters for low-light and overexposure detection in video frames.
                     * 
                     */
                    AbnormalLightingConfigureInfoForUpdate GetAbnormalLightingConfigure() const;

                    /**
                     * 设置Control parameters for low-light and overexposure detection in video frames.
                     * @param _abnormalLightingConfigure Control parameters for low-light and overexposure detection in video frames.
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
                     * 获取Control parameters for screen glitch detection in video footage.
                     * @return CrashScreenConfigure Control parameters for screen glitch detection in video footage.
                     * 
                     */
                    CrashScreenConfigureInfoForUpdate GetCrashScreenConfigure() const;

                    /**
                     * 设置Control parameters for screen glitch detection in video footage.
                     * @param _crashScreenConfigure Control parameters for screen glitch detection in video footage.
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
                     * 获取Control parameters for video picture black edge, white edge, black screen, and white screen detection.
                     * @return BlackWhiteEdgeConfigure Control parameters for video picture black edge, white edge, black screen, and white screen detection.
                     * 
                     */
                    BlackWhiteEdgeConfigureInfoForUpdate GetBlackWhiteEdgeConfigure() const;

                    /**
                     * 设置Control parameters for video picture black edge, white edge, black screen, and white screen detection.
                     * @param _blackWhiteEdgeConfigure Control parameters for video picture black edge, white edge, black screen, and white screen detection.
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
                     * 获取Control parameters for video frame noise detection.
                     * @return NoiseConfigure Control parameters for video frame noise detection.
                     * 
                     */
                    NoiseConfigureInfoForUpdate GetNoiseConfigure() const;

                    /**
                     * 设置Control parameters for video frame noise detection.
                     * @param _noiseConfigure Control parameters for video frame noise detection.
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
                     * 获取Control parameters for video frame mosaic detection.
                     * @return MosaicConfigure Control parameters for video frame mosaic detection.
                     * 
                     */
                    MosaicConfigureInfoForUpdate GetMosaicConfigure() const;

                    /**
                     * 设置Control parameters for video frame mosaic detection.
                     * @param _mosaicConfigure Control parameters for video frame mosaic detection.
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
                     * 获取Control parameters for video frame QR code detection.
                     * @return QRCodeConfigure Control parameters for video frame QR code detection.
                     * 
                     */
                    QRCodeConfigureInfoForUpdate GetQRCodeConfigure() const;

                    /**
                     * 设置Control parameters for video frame QR code detection.
                     * @param _qRCodeConfigure Control parameters for video frame QR code detection.
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
                     * 获取Audio (mute, bass, clipping) detection control parameters.
                     * @return VoiceConfigure Audio (mute, bass, clipping) detection control parameters.
                     * 
                     */
                    VoiceConfigureInfoForUpdate GetVoiceConfigure() const;

                    /**
                     * 设置Audio (mute, bass, clipping) detection control parameters.
                     * @param _voiceConfigure Audio (mute, bass, clipping) detection control parameters.
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
                     * 获取Control parameters for video frame quality evaluation.
                     * @return QualityEvaluationConfigure Control parameters for video frame quality evaluation.
                     * 
                     */
                    QualityEvaluationConfigureInfoForUpdate GetQualityEvaluationConfigure() const;

                    /**
                     * 设置Control parameters for video frame quality evaluation.
                     * @param _qualityEvaluationConfigure Control parameters for video frame quality evaluation.
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
                     * Template ID.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Template name. The length cannot exceed 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description, with a length limit of 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Frame interception interval, unit: seconds, minimum value 1.
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * Control parameters for video frame jitter and ghosting detection.
                     */
                    JitterConfigureInfoForUpdate m_jitterConfigure;
                    bool m_jitterConfigureHasBeenSet;

                    /**
                     * Control parameters for video frame blur detection.
                     */
                    BlurConfigureInfoForUpdate m_blurConfigure;
                    bool m_blurConfigureHasBeenSet;

                    /**
                     * Control parameters for low-light and overexposure detection in video frames.
                     */
                    AbnormalLightingConfigureInfoForUpdate m_abnormalLightingConfigure;
                    bool m_abnormalLightingConfigureHasBeenSet;

                    /**
                     * Control parameters for screen glitch detection in video footage.
                     */
                    CrashScreenConfigureInfoForUpdate m_crashScreenConfigure;
                    bool m_crashScreenConfigureHasBeenSet;

                    /**
                     * Control parameters for video picture black edge, white edge, black screen, and white screen detection.
                     */
                    BlackWhiteEdgeConfigureInfoForUpdate m_blackWhiteEdgeConfigure;
                    bool m_blackWhiteEdgeConfigureHasBeenSet;

                    /**
                     * Control parameters for video frame noise detection.
                     */
                    NoiseConfigureInfoForUpdate m_noiseConfigure;
                    bool m_noiseConfigureHasBeenSet;

                    /**
                     * Control parameters for video frame mosaic detection.
                     */
                    MosaicConfigureInfoForUpdate m_mosaicConfigure;
                    bool m_mosaicConfigureHasBeenSet;

                    /**
                     * Control parameters for video frame QR code detection.
                     */
                    QRCodeConfigureInfoForUpdate m_qRCodeConfigure;
                    bool m_qRCodeConfigureHasBeenSet;

                    /**
                     * Audio (mute, bass, clipping) detection control parameters.
                     */
                    VoiceConfigureInfoForUpdate m_voiceConfigure;
                    bool m_voiceConfigureHasBeenSet;

                    /**
                     * Control parameters for video frame quality evaluation.
                     */
                    QualityEvaluationConfigureInfoForUpdate m_qualityEvaluationConfigure;
                    bool m_qualityEvaluationConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYQUALITYINSPECTTEMPLATEREQUEST_H_
