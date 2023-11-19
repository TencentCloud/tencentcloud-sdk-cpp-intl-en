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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTEMPLATEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Media quality inspection template details.
                */
                class QualityInspectTemplateItem : public AbstractModel
                {
                public:
                    QualityInspectTemplateItem();
                    ~QualityInspectTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Template Type, available options: <li>Preset: Preset Template;</li> <li>Custom: User Custom Template.</li>
                     * @return Type Template Type, available options: <li>Preset: Preset Template;</li> <li>Custom: User Custom Template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template Type, available options: <li>Preset: Preset Template;</li> <li>Custom: User Custom Template.</li>
                     * @param _type Template Type, available options: <li>Preset: Preset Template;</li> <li>Custom: User Custom Template.</li>
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
                     * 获取Media quality inspection template name.
                     * @return Name Media quality inspection template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Media quality inspection template name.
                     * @param _name Media quality inspection template name.
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
                     * 获取Template description. 
                     * @return Comment Template description. 
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. 
                     * @param _comment Template description. 
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
                     * 获取Frame interval, unit in seconds.
                     * @return ScreenshotInterval Frame interval, unit in seconds.
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置Frame interval, unit in seconds.
                     * @param _screenshotInterval Frame interval, unit in seconds.
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
                    JitterConfigureInfo GetJitterConfigure() const;

                    /**
                     * 设置Control parameters for detecting video jitter and ghosting.
                     * @param _jitterConfigure Control parameters for detecting video jitter and ghosting.
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
                     * 获取Control parameters for detecting video blur.
                     * @return BlurConfigure Control parameters for detecting video blur.
                     * 
                     */
                    BlurConfigureInfo GetBlurConfigure() const;

                    /**
                     * 设置Control parameters for detecting video blur.
                     * @param _blurConfigure Control parameters for detecting video blur.
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
                     * 获取Control parameters for detecting low brightness and overexposure of video.
                     * @return AbnormalLightingConfigure Control parameters for detecting low brightness and overexposure of video.
                     * 
                     */
                    AbnormalLightingConfigureInfo GetAbnormalLightingConfigure() const;

                    /**
                     * 设置Control parameters for detecting low brightness and overexposure of video.
                     * @param _abnormalLightingConfigure Control parameters for detecting low brightness and overexposure of video.
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
                     * 获取Control parameters for detecting video crash.
                     * @return CrashScreenConfigure Control parameters for detecting video crash.
                     * 
                     */
                    CrashScreenConfigureInfo GetCrashScreenConfigure() const;

                    /**
                     * 设置Control parameters for detecting video crash.
                     * @param _crashScreenConfigure Control parameters for detecting video crash.
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
                     * 获取Control parameters for detecting video black edges, white edges, black screen, and white screen.
                     * @return BlackWhiteEdgeConfigure Control parameters for detecting video black edges, white edges, black screen, and white screen.
                     * 
                     */
                    BlackWhiteEdgeConfigureInfo GetBlackWhiteEdgeConfigure() const;

                    /**
                     * 设置Control parameters for detecting video black edges, white edges, black screen, and white screen.
                     * @param _blackWhiteEdgeConfigure Control parameters for detecting video black edges, white edges, black screen, and white screen.
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
                     * 获取Control parameters for detecting video noise.
                     * @return NoiseConfigure Control parameters for detecting video noise.
                     * 
                     */
                    NoiseConfigureInfo GetNoiseConfigure() const;

                    /**
                     * 设置Control parameters for detecting video noise.
                     * @param _noiseConfigure Control parameters for detecting video noise.
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
                     * 获取Control parameters for detecting video mosaic.
                     * @return MosaicConfigure Control parameters for detecting video mosaic.
                     * 
                     */
                    MosaicConfigureInfo GetMosaicConfigure() const;

                    /**
                     * 设置Control parameters for detecting video mosaic.
                     * @param _mosaicConfigure Control parameters for detecting video mosaic.
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
                     * 获取Control parameters for QR code detection in video.
                     * @return QRCodeConfigure Control parameters for QR code detection in video.
                     * 
                     */
                    QRCodeConfigureInfo GetQRCodeConfigure() const;

                    /**
                     * 设置Control parameters for QR code detection in video.
                     * @param _qRCodeConfigure Control parameters for QR code detection in video.
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
                     * 获取Control parameters for video quality evaluation.
                     * @return QualityEvaluationConfigure Control parameters for video quality evaluation.
                     * 
                     */
                    QualityEvaluationConfigureInfo GetQualityEvaluationConfigure() const;

                    /**
                     * 设置Control parameters for video quality evaluation.
                     * @param _qualityEvaluationConfigure Control parameters for video quality evaluation.
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
                     * 获取Control parameters for audio (mutes, bass, blast sound).
                     * @return VoiceConfigure Control parameters for audio (mutes, bass, blast sound).
                     * 
                     */
                    VoiceConfigureInfo GetVoiceConfigure() const;

                    /**
                     * 设置Control parameters for audio (mutes, bass, blast sound).
                     * @param _voiceConfigure Control parameters for audio (mutes, bass, blast sound).
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
                     * 获取Template Creation Time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @return CreateTime Template Creation Time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Template Creation Time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @param _createTime Template Creation Time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
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
                     * 获取Template Modification time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @return UpdateTime Template Modification time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Template Modification time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @param _updateTime Template Modification time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Media quality inspection template ID.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Template Type, available options: <li>Preset: Preset Template;</li> <li>Custom: User Custom Template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Media quality inspection template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description. 
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Frame interval, unit in seconds.
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * Control parameters for detecting video jitter and ghosting.
                     */
                    JitterConfigureInfo m_jitterConfigure;
                    bool m_jitterConfigureHasBeenSet;

                    /**
                     * Control parameters for detecting video blur.
                     */
                    BlurConfigureInfo m_blurConfigure;
                    bool m_blurConfigureHasBeenSet;

                    /**
                     * Control parameters for detecting low brightness and overexposure of video.
                     */
                    AbnormalLightingConfigureInfo m_abnormalLightingConfigure;
                    bool m_abnormalLightingConfigureHasBeenSet;

                    /**
                     * Control parameters for detecting video crash.
                     */
                    CrashScreenConfigureInfo m_crashScreenConfigure;
                    bool m_crashScreenConfigureHasBeenSet;

                    /**
                     * Control parameters for detecting video black edges, white edges, black screen, and white screen.
                     */
                    BlackWhiteEdgeConfigureInfo m_blackWhiteEdgeConfigure;
                    bool m_blackWhiteEdgeConfigureHasBeenSet;

                    /**
                     * Control parameters for detecting video noise.
                     */
                    NoiseConfigureInfo m_noiseConfigure;
                    bool m_noiseConfigureHasBeenSet;

                    /**
                     * Control parameters for detecting video mosaic.
                     */
                    MosaicConfigureInfo m_mosaicConfigure;
                    bool m_mosaicConfigureHasBeenSet;

                    /**
                     * Control parameters for QR code detection in video.
                     */
                    QRCodeConfigureInfo m_qRCodeConfigure;
                    bool m_qRCodeConfigureHasBeenSet;

                    /**
                     * Control parameters for video quality evaluation.
                     */
                    QualityEvaluationConfigureInfo m_qualityEvaluationConfigure;
                    bool m_qualityEvaluationConfigureHasBeenSet;

                    /**
                     * Control parameters for audio (mutes, bass, blast sound).
                     */
                    VoiceConfigureInfo m_voiceConfigure;
                    bool m_voiceConfigureHasBeenSet;

                    /**
                     * Template Creation Time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Template Modification time, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTEMPLATEITEM_H_
