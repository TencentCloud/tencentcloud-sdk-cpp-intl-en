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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TEMPLATEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Transcoding template information.
                */
                class TemplateInfo : public AbstractModel
                {
                public:
                    TemplateInfo();
                    ~TemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video encoding format:
h264/h265.
                     * @return Vcodec Video encoding format:
h264/h265.
                     */
                    std::string GetVcodec() const;

                    /**
                     * 设置Video encoding format:
h264/h265.
                     * @param Vcodec Video encoding format:
h264/h265.
                     */
                    void SetVcodec(const std::string& _vcodec);

                    /**
                     * 判断参数 Vcodec 是否已赋值
                     * @return Vcodec 是否已赋值
                     */
                    bool VcodecHasBeenSet() const;

                    /**
                     * 获取Video bitrate. Value range: 100–8000 Kbps.
                     * @return VideoBitrate Video bitrate. Value range: 100–8000 Kbps.
                     */
                    int64_t GetVideoBitrate() const;

                    /**
                     * 设置Video bitrate. Value range: 100–8000 Kbps.
                     * @param VideoBitrate Video bitrate. Value range: 100–8000 Kbps.
                     */
                    void SetVideoBitrate(const int64_t& _videoBitrate);

                    /**
                     * 判断参数 VideoBitrate 是否已赋值
                     * @return VideoBitrate 是否已赋值
                     */
                    bool VideoBitrateHasBeenSet() const;

                    /**
                     * 获取Audio codec. Valid values: aac, mp3.
                     * @return Acodec Audio codec. Valid values: aac, mp3.
                     */
                    std::string GetAcodec() const;

                    /**
                     * 设置Audio codec. Valid values: aac, mp3.
                     * @param Acodec Audio codec. Valid values: aac, mp3.
                     */
                    void SetAcodec(const std::string& _acodec);

                    /**
                     * 判断参数 Acodec 是否已赋值
                     * @return Acodec 是否已赋值
                     */
                    bool AcodecHasBeenSet() const;

                    /**
                     * 获取Audio bitrate. Value range: 0–500 Kbps.
                     * @return AudioBitrate Audio bitrate. Value range: 0–500 Kbps.
                     */
                    int64_t GetAudioBitrate() const;

                    /**
                     * 设置Audio bitrate. Value range: 0–500 Kbps.
                     * @param AudioBitrate Audio bitrate. Value range: 0–500 Kbps.
                     */
                    void SetAudioBitrate(const int64_t& _audioBitrate);

                    /**
                     * 判断参数 AudioBitrate 是否已赋值
                     * @return AudioBitrate 是否已赋值
                     */
                    bool AudioBitrateHasBeenSet() const;

                    /**
                     * 获取Width. Value range: 0–3000.
                     * @return Width Width. Value range: 0–3000.
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Width. Value range: 0–3000.
                     * @param Width Width. Value range: 0–3000.
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Height. Value range: 0–3000.
                     * @return Height Height. Value range: 0–3000.
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height. Value range: 0–3000.
                     * @param Height Height. Value range: 0–3000.
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Frame rate. Value range: 0–200 FPS.
                     * @return Fps Frame rate. Value range: 0–200 FPS.
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置Frame rate. Value range: 0–200 FPS.
                     * @param Fps Frame rate. Value range: 0–200 FPS.
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Keyframe interval. Value range: 1–50s.
                     * @return Gop Keyframe interval. Value range: 1–50s.
                     */
                    int64_t GetGop() const;

                    /**
                     * 设置Keyframe interval. Value range: 1–50s.
                     * @param Gop Keyframe interval. Value range: 1–50s.
                     */
                    void SetGop(const int64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     */
                    bool GopHasBeenSet() const;

                    /**
                     * 获取Rotation angle. Valid values: 0, 90, 180, 270.
                     * @return Rotate Rotation angle. Valid values: 0, 90, 180, 270.
                     */
                    int64_t GetRotate() const;

                    /**
                     * 设置Rotation angle. Valid values: 0, 90, 180, 270.
                     * @param Rotate Rotation angle. Valid values: 0, 90, 180, 270.
                     */
                    void SetRotate(const int64_t& _rotate);

                    /**
                     * 判断参数 Rotate 是否已赋值
                     * @return Rotate 是否已赋值
                     */
                    bool RotateHasBeenSet() const;

                    /**
                     * 获取Encoding quality. Valid values:
baseline, main, high.
                     * @return Profile Encoding quality. Valid values:
baseline, main, high.
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置Encoding quality. Valid values:
baseline, main, high.
                     * @param Profile Encoding quality. Valid values:
baseline, main, high.
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取Whether to not exceed the original bitrate. 0: no; 1: yes.
                     * @return BitrateToOrig Whether to not exceed the original bitrate. 0: no; 1: yes.
                     */
                    int64_t GetBitrateToOrig() const;

                    /**
                     * 设置Whether to not exceed the original bitrate. 0: no; 1: yes.
                     * @param BitrateToOrig Whether to not exceed the original bitrate. 0: no; 1: yes.
                     */
                    void SetBitrateToOrig(const int64_t& _bitrateToOrig);

                    /**
                     * 判断参数 BitrateToOrig 是否已赋值
                     * @return BitrateToOrig 是否已赋值
                     */
                    bool BitrateToOrigHasBeenSet() const;

                    /**
                     * 获取Whether to not exceed the original height. 0: no; 1: yes.
                     * @return HeightToOrig Whether to not exceed the original height. 0: no; 1: yes.
                     */
                    int64_t GetHeightToOrig() const;

                    /**
                     * 设置Whether to not exceed the original height. 0: no; 1: yes.
                     * @param HeightToOrig Whether to not exceed the original height. 0: no; 1: yes.
                     */
                    void SetHeightToOrig(const int64_t& _heightToOrig);

                    /**
                     * 判断参数 HeightToOrig 是否已赋值
                     * @return HeightToOrig 是否已赋值
                     */
                    bool HeightToOrigHasBeenSet() const;

                    /**
                     * 获取Whether to not exceed the original frame rate. 0: no; 1: yes.
                     * @return FpsToOrig Whether to not exceed the original frame rate. 0: no; 1: yes.
                     */
                    int64_t GetFpsToOrig() const;

                    /**
                     * 设置Whether to not exceed the original frame rate. 0: no; 1: yes.
                     * @param FpsToOrig Whether to not exceed the original frame rate. 0: no; 1: yes.
                     */
                    void SetFpsToOrig(const int64_t& _fpsToOrig);

                    /**
                     * 判断参数 FpsToOrig 是否已赋值
                     * @return FpsToOrig 是否已赋值
                     */
                    bool FpsToOrigHasBeenSet() const;

                    /**
                     * 获取Whether to keep the video. 0: no; 1: yes.
                     * @return NeedVideo Whether to keep the video. 0: no; 1: yes.
                     */
                    int64_t GetNeedVideo() const;

                    /**
                     * 设置Whether to keep the video. 0: no; 1: yes.
                     * @param NeedVideo Whether to keep the video. 0: no; 1: yes.
                     */
                    void SetNeedVideo(const int64_t& _needVideo);

                    /**
                     * 判断参数 NeedVideo 是否已赋值
                     * @return NeedVideo 是否已赋值
                     */
                    bool NeedVideoHasBeenSet() const;

                    /**
                     * 获取Whether to keep the audio. 0: no; 1: yes.
                     * @return NeedAudio Whether to keep the audio. 0: no; 1: yes.
                     */
                    int64_t GetNeedAudio() const;

                    /**
                     * 设置Whether to keep the audio. 0: no; 1: yes.
                     * @param NeedAudio Whether to keep the audio. 0: no; 1: yes.
                     */
                    void SetNeedAudio(const int64_t& _needAudio);

                    /**
                     * 判断参数 NeedAudio 是否已赋值
                     * @return NeedAudio 是否已赋值
                     */
                    bool NeedAudioHasBeenSet() const;

                    /**
                     * 获取Template ID.
                     * @return TemplateId Template ID.
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Template ID.
                     * @param TemplateId Template ID.
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Template name.
                     * @return TemplateName Template name.
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name.
                     * @param TemplateName Template name.
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Template description.
                     * @return Description Template description.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Template description.
                     * @param Description Template description.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Whether it is a top speed codec template. 0: no, 1: yes. Default value: 0.
                     * @return AiTransCode Whether it is a top speed codec template. 0: no, 1: yes. Default value: 0.
                     */
                    int64_t GetAiTransCode() const;

                    /**
                     * 设置Whether it is a top speed codec template. 0: no, 1: yes. Default value: 0.
                     * @param AiTransCode Whether it is a top speed codec template. 0: no, 1: yes. Default value: 0.
                     */
                    void SetAiTransCode(const int64_t& _aiTransCode);

                    /**
                     * 判断参数 AiTransCode 是否已赋值
                     * @return AiTransCode 是否已赋值
                     */
                    bool AiTransCodeHasBeenSet() const;

                    /**
                     * 获取`VideoBitrate` minus top speed codec bitrate. Value range: 0.1–0.5.
                     * @return AdaptBitratePercent `VideoBitrate` minus top speed codec bitrate. Value range: 0.1–0.5.
                     */
                    double GetAdaptBitratePercent() const;

                    /**
                     * 设置`VideoBitrate` minus top speed codec bitrate. Value range: 0.1–0.5.
                     * @param AdaptBitratePercent `VideoBitrate` minus top speed codec bitrate. Value range: 0.1–0.5.
                     */
                    void SetAdaptBitratePercent(const double& _adaptBitratePercent);

                    /**
                     * 判断参数 AdaptBitratePercent 是否已赋值
                     * @return AdaptBitratePercent 是否已赋值
                     */
                    bool AdaptBitratePercentHasBeenSet() const;

                private:

                    /**
                     * Video encoding format:
h264/h265.
                     */
                    std::string m_vcodec;
                    bool m_vcodecHasBeenSet;

                    /**
                     * Video bitrate. Value range: 100–8000 Kbps.
                     */
                    int64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * Audio codec. Valid values: aac, mp3.
                     */
                    std::string m_acodec;
                    bool m_acodecHasBeenSet;

                    /**
                     * Audio bitrate. Value range: 0–500 Kbps.
                     */
                    int64_t m_audioBitrate;
                    bool m_audioBitrateHasBeenSet;

                    /**
                     * Width. Value range: 0–3000.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height. Value range: 0–3000.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Frame rate. Value range: 0–200 FPS.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Keyframe interval. Value range: 1–50s.
                     */
                    int64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * Rotation angle. Valid values: 0, 90, 180, 270.
                     */
                    int64_t m_rotate;
                    bool m_rotateHasBeenSet;

                    /**
                     * Encoding quality. Valid values:
baseline, main, high.
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * Whether to not exceed the original bitrate. 0: no; 1: yes.
                     */
                    int64_t m_bitrateToOrig;
                    bool m_bitrateToOrigHasBeenSet;

                    /**
                     * Whether to not exceed the original height. 0: no; 1: yes.
                     */
                    int64_t m_heightToOrig;
                    bool m_heightToOrigHasBeenSet;

                    /**
                     * Whether to not exceed the original frame rate. 0: no; 1: yes.
                     */
                    int64_t m_fpsToOrig;
                    bool m_fpsToOrigHasBeenSet;

                    /**
                     * Whether to keep the video. 0: no; 1: yes.
                     */
                    int64_t m_needVideo;
                    bool m_needVideoHasBeenSet;

                    /**
                     * Whether to keep the audio. 0: no; 1: yes.
                     */
                    int64_t m_needAudio;
                    bool m_needAudioHasBeenSet;

                    /**
                     * Template ID.
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Template name.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Template description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether it is a top speed codec template. 0: no, 1: yes. Default value: 0.
                     */
                    int64_t m_aiTransCode;
                    bool m_aiTransCodeHasBeenSet;

                    /**
                     * `VideoBitrate` minus top speed codec bitrate. Value range: 0.1–0.5.
                     */
                    double m_adaptBitratePercent;
                    bool m_adaptBitratePercentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TEMPLATEINFO_H_
