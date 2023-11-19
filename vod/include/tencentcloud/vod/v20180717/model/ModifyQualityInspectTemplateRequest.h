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
                     * 获取Media quality inspection template ID.
                     * @return Definition Media quality inspection template ID.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Media quality inspection template ID.
                     * @param _definition Media quality inspection template ID.
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
                     * 获取<b>The VOD [subapplication](https://www.tencentcloud.com/zh/document/product/266/33987?has_map=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://www.tencentcloud.com/zh/document/product/266/33987?has_map=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://www.tencentcloud.com/zh/document/product/266/33987?has_map=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param _subAppId <b>The VOD [subapplication](https://www.tencentcloud.com/zh/document/product/266/33987?has_map=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
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
                     * 获取Media quality inspection template name.Length limit: 64 characters.
                     * @return Name Media quality inspection template name.Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Media quality inspection template name.Length limit: 64 characters.
                     * @param _name Media quality inspection template name.Length limit: 64 characters.
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
                     * 获取Template description. Length limit: 256 characters.
                     * @return Comment Template description. Length limit: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. Length limit: 256 characters.
                     * @param _comment Template description. Length limit: 256 characters.
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
                     * 获取Frame interval, unit in seconds, minimum value is 1. When not filled, the default frame interval is 1 second.
                     * @return ScreenshotInterval Frame interval, unit in seconds, minimum value is 1. When not filled, the default frame interval is 1 second.
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置Frame interval, unit in seconds, minimum value is 1. When not filled, the default frame interval is 1 second.
                     * @param _screenshotInterval Frame interval, unit in seconds, minimum value is 1. When not filled, the default frame interval is 1 second.
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
                     * 获取Control parameters for detecting video jitter and ghosting.
                     * @return JitterConfigure Control parameters for detecting video jitter and ghosting.
                     * 
                     */
                    JitterConfigureInfoForUpdate GetJitterConfigure() const;

                    /**
                     * 设置Control parameters for detecting video jitter and ghosting.
                     * @param _jitterConfigure Control parameters for detecting video jitter and ghosting.
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
                     * 获取Control parameters for detecting video blur.
                     * @return BlurConfigure Control parameters for detecting video blur.
                     * 
                     */
                    BlurConfigureInfoForUpdate GetBlurConfigure() const;

                    /**
                     * 设置Control parameters for detecting video blur.
                     * @param _blurConfigure Control parameters for detecting video blur.
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
                     * 获取Control parameters for detecting low brightness and overexposure of video.
                     * @return AbnormalLightingConfigure Control parameters for detecting low brightness and overexposure of video.
                     * 
                     */
                    AbnormalLightingConfigureInfoForUpdate GetAbnormalLightingConfigure() const;

                    /**
                     * 设置Control parameters for detecting low brightness and overexposure of video.
                     * @param _abnormalLightingConfigure Control parameters for detecting low brightness and overexposure of video.
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
                     * 获取Control parameters for detecting video crash.
                     * @return CrashScreenConfigure Control parameters for detecting video crash.
                     * 
                     */
                    CrashScreenConfigureInfoForUpdate GetCrashScreenConfigure() const;

                    /**
                     * 设置Control parameters for detecting video crash.
                     * @param _crashScreenConfigure Control parameters for detecting video crash.
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
                     * 获取Control parameters for detecting video black edges, white edges, black screen, and white screen.
                     * @return BlackWhiteEdgeConfigure Control parameters for detecting video black edges, white edges, black screen, and white screen.
                     * 
                     */
                    BlackWhiteEdgeConfigureInfoForUpdate GetBlackWhiteEdgeConfigure() const;

                    /**
                     * 设置Control parameters for detecting video black edges, white edges, black screen, and white screen.
                     * @param _blackWhiteEdgeConfigure Control parameters for detecting video black edges, white edges, black screen, and white screen.
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
                     * 获取Control parameters for detecting video noise.
                     * @return NoiseConfigure Control parameters for detecting video noise.
                     * 
                     */
                    NoiseConfigureInfoForUpdate GetNoiseConfigure() const;

                    /**
                     * 设置Control parameters for detecting video noise.
                     * @param _noiseConfigure Control parameters for detecting video noise.
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
                     * 获取Control parameters for detecting video mosaic.
                     * @return MosaicConfigure Control parameters for detecting video mosaic.
                     * 
                     */
                    MosaicConfigureInfoForUpdate GetMosaicConfigure() const;

                    /**
                     * 设置Control parameters for detecting video mosaic.
                     * @param _mosaicConfigure Control parameters for detecting video mosaic.
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
                     * 获取Control parameters for QR code detection in video.
                     * @return QRCodeConfigure Control parameters for QR code detection in video.
                     * 
                     */
                    QRCodeConfigureInfoForUpdate GetQRCodeConfigure() const;

                    /**
                     * 设置Control parameters for QR code detection in video.
                     * @param _qRCodeConfigure Control parameters for QR code detection in video.
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
                     * 获取Control parameters for audio (mutes, bass, blast sound).
                     * @return VoiceConfigure Control parameters for audio (mutes, bass, blast sound).
                     * 
                     */
                    VoiceConfigureInfoForUpdate GetVoiceConfigure() const;

                    /**
                     * 设置Control parameters for audio (mutes, bass, blast sound).
                     * @param _voiceConfigure Control parameters for audio (mutes, bass, blast sound).
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
                     * 获取Control parameters for video quality evaluation.
                     * @return QualityEvaluationConfigure Control parameters for video quality evaluation.
                     * 
                     */
                    QualityEvaluationConfigureInfoForUpdate GetQualityEvaluationConfigure() const;

                    /**
                     * 设置Control parameters for video quality evaluation.
                     * @param _qualityEvaluationConfigure Control parameters for video quality evaluation.
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
                     * Media quality inspection template ID.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://www.tencentcloud.com/zh/document/product/266/33987?has_map=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Media quality inspection template name.Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Frame interval, unit in seconds, minimum value is 1. When not filled, the default frame interval is 1 second.
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * Control parameters for detecting video jitter and ghosting.
                     */
                    JitterConfigureInfoForUpdate m_jitterConfigure;
                    bool m_jitterConfigureHasBeenSet;

                    /**
                     * Control parameters for detecting video blur.
                     */
                    BlurConfigureInfoForUpdate m_blurConfigure;
                    bool m_blurConfigureHasBeenSet;

                    /**
                     * Control parameters for detecting low brightness and overexposure of video.
                     */
                    AbnormalLightingConfigureInfoForUpdate m_abnormalLightingConfigure;
                    bool m_abnormalLightingConfigureHasBeenSet;

                    /**
                     * Control parameters for detecting video crash.
                     */
                    CrashScreenConfigureInfoForUpdate m_crashScreenConfigure;
                    bool m_crashScreenConfigureHasBeenSet;

                    /**
                     * Control parameters for detecting video black edges, white edges, black screen, and white screen.
                     */
                    BlackWhiteEdgeConfigureInfoForUpdate m_blackWhiteEdgeConfigure;
                    bool m_blackWhiteEdgeConfigureHasBeenSet;

                    /**
                     * Control parameters for detecting video noise.
                     */
                    NoiseConfigureInfoForUpdate m_noiseConfigure;
                    bool m_noiseConfigureHasBeenSet;

                    /**
                     * Control parameters for detecting video mosaic.
                     */
                    MosaicConfigureInfoForUpdate m_mosaicConfigure;
                    bool m_mosaicConfigureHasBeenSet;

                    /**
                     * Control parameters for QR code detection in video.
                     */
                    QRCodeConfigureInfoForUpdate m_qRCodeConfigure;
                    bool m_qRCodeConfigureHasBeenSet;

                    /**
                     * Control parameters for audio (mutes, bass, blast sound).
                     */
                    VoiceConfigureInfoForUpdate m_voiceConfigure;
                    bool m_voiceConfigureHasBeenSet;

                    /**
                     * Control parameters for video quality evaluation.
                     */
                    QualityEvaluationConfigureInfoForUpdate m_qualityEvaluationConfigure;
                    bool m_qualityEvaluationConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYQUALITYINSPECTTEMPLATEREQUEST_H_
