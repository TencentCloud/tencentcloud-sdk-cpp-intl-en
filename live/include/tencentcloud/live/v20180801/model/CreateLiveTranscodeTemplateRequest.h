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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETRANSCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETRANSCODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateLiveTranscodeTemplate request structure.
                */
                class CreateLiveTranscodeTemplateRequest : public AbstractModel
                {
                public:
                    CreateLiveTranscodeTemplateRequest();
                    ~CreateLiveTranscodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name, such as 900 900p. This can be only a combination of letters and digits.
                     * @return TemplateName Template name, such as 900 900p. This can be only a combination of letters and digits.
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name, such as 900 900p. This can be only a combination of letters and digits.
                     * @param TemplateName Template name, such as 900 900p. This can be only a combination of letters and digits.
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Video bitrate. Value range: 100–8,000.
Note: The bitrate must be a multiple of 100.
                     * @return VideoBitrate Video bitrate. Value range: 100–8,000.
Note: The bitrate must be a multiple of 100.
                     */
                    int64_t GetVideoBitrate() const;

                    /**
                     * 设置Video bitrate. Value range: 100–8,000.
Note: The bitrate must be a multiple of 100.
                     * @param VideoBitrate Video bitrate. Value range: 100–8,000.
Note: The bitrate must be a multiple of 100.
                     */
                    void SetVideoBitrate(const int64_t& _videoBitrate);

                    /**
                     * 判断参数 VideoBitrate 是否已赋值
                     * @return VideoBitrate 是否已赋值
                     */
                    bool VideoBitrateHasBeenSet() const;

                    /**
                     * 获取Video encoding format. Valid values: h264, h265. Default value: h264.
                     * @return Vcodec Video encoding format. Valid values: h264, h265. Default value: h264.
                     */
                    std::string GetVcodec() const;

                    /**
                     * 设置Video encoding format. Valid values: h264, h265. Default value: h264.
                     * @param Vcodec Video encoding format. Valid values: h264, h265. Default value: h264.
                     */
                    void SetVcodec(const std::string& _vcodec);

                    /**
                     * 判断参数 Vcodec 是否已赋值
                     * @return Vcodec 是否已赋值
                     */
                    bool VcodecHasBeenSet() const;

                    /**
                     * 获取Audio encoding in ACC format. Default value: original audio format.
Note: This parameter will take effect later.
                     * @return Acodec Audio encoding in ACC format. Default value: original audio format.
Note: This parameter will take effect later.
                     */
                    std::string GetAcodec() const;

                    /**
                     * 设置Audio encoding in ACC format. Default value: original audio format.
Note: This parameter will take effect later.
                     * @param Acodec Audio encoding in ACC format. Default value: original audio format.
Note: This parameter will take effect later.
                     */
                    void SetAcodec(const std::string& _acodec);

                    /**
                     * 判断参数 Acodec 是否已赋值
                     * @return Acodec 是否已赋值
                     */
                    bool AcodecHasBeenSet() const;

                    /**
                     * 获取Audio bitrate. Value range: 0–500. Default value: 0.
                     * @return AudioBitrate Audio bitrate. Value range: 0–500. Default value: 0.
                     */
                    int64_t GetAudioBitrate() const;

                    /**
                     * 设置Audio bitrate. Value range: 0–500. Default value: 0.
                     * @param AudioBitrate Audio bitrate. Value range: 0–500. Default value: 0.
                     */
                    void SetAudioBitrate(const int64_t& _audioBitrate);

                    /**
                     * 判断参数 AudioBitrate 是否已赋值
                     * @return AudioBitrate 是否已赋值
                     */
                    bool AudioBitrateHasBeenSet() const;

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
                     * 获取Width. Default value: 0.
                     * @return Width Width. Default value: 0.
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Width. Default value: 0.
                     * @param Width Width. Default value: 0.
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Whether to keep the video. 0: no; 1: yes. Default value: 1.
                     * @return NeedVideo Whether to keep the video. 0: no; 1: yes. Default value: 1.
                     */
                    int64_t GetNeedVideo() const;

                    /**
                     * 设置Whether to keep the video. 0: no; 1: yes. Default value: 1.
                     * @param NeedVideo Whether to keep the video. 0: no; 1: yes. Default value: 1.
                     */
                    void SetNeedVideo(const int64_t& _needVideo);

                    /**
                     * 判断参数 NeedVideo 是否已赋值
                     * @return NeedVideo 是否已赋值
                     */
                    bool NeedVideoHasBeenSet() const;

                    /**
                     * 获取Whether to keep the audio. 0: no; 1: yes. Default value: 1.
                     * @return NeedAudio Whether to keep the audio. 0: no; 1: yes. Default value: 1.
                     */
                    int64_t GetNeedAudio() const;

                    /**
                     * 设置Whether to keep the audio. 0: no; 1: yes. Default value: 1.
                     * @param NeedAudio Whether to keep the audio. 0: no; 1: yes. Default value: 1.
                     */
                    void SetNeedAudio(const int64_t& _needAudio);

                    /**
                     * 判断参数 NeedAudio 是否已赋值
                     * @return NeedAudio 是否已赋值
                     */
                    bool NeedAudioHasBeenSet() const;

                    /**
                     * 获取Height. Default value: 0.
                     * @return Height Height. Default value: 0.
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height. Default value: 0.
                     * @param Height Height. Default value: 0.
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Frame rate. Default value: 0.
                     * @return Fps Frame rate. Default value: 0.
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置Frame rate. Default value: 0.
                     * @param Fps Frame rate. Default value: 0.
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Keyframe interval in seconds. Original interval by default
                     * @return Gop Keyframe interval in seconds. Original interval by default
                     */
                    int64_t GetGop() const;

                    /**
                     * 设置Keyframe interval in seconds. Original interval by default
                     * @param Gop Keyframe interval in seconds. Original interval by default
                     */
                    void SetGop(const int64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     */
                    bool GopHasBeenSet() const;

                    /**
                     * 获取Whether to rotate. 0: no; 1: yes. Default value: 0.
                     * @return Rotate Whether to rotate. 0: no; 1: yes. Default value: 0.
                     */
                    int64_t GetRotate() const;

                    /**
                     * 设置Whether to rotate. 0: no; 1: yes. Default value: 0.
                     * @param Rotate Whether to rotate. 0: no; 1: yes. Default value: 0.
                     */
                    void SetRotate(const int64_t& _rotate);

                    /**
                     * 判断参数 Rotate 是否已赋值
                     * @return Rotate 是否已赋值
                     */
                    bool RotateHasBeenSet() const;

                    /**
                     * 获取Encoding quality:
baseline/main/high. Default value: baseline.
                     * @return Profile Encoding quality:
baseline/main/high. Default value: baseline.
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置Encoding quality:
baseline/main/high. Default value: baseline.
                     * @param Profile Encoding quality:
baseline/main/high. Default value: baseline.
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取Whether to not exceed the original bitrate. 0: no; 1: yes. Default value: 0.
                     * @return BitrateToOrig Whether to not exceed the original bitrate. 0: no; 1: yes. Default value: 0.
                     */
                    int64_t GetBitrateToOrig() const;

                    /**
                     * 设置Whether to not exceed the original bitrate. 0: no; 1: yes. Default value: 0.
                     * @param BitrateToOrig Whether to not exceed the original bitrate. 0: no; 1: yes. Default value: 0.
                     */
                    void SetBitrateToOrig(const int64_t& _bitrateToOrig);

                    /**
                     * 判断参数 BitrateToOrig 是否已赋值
                     * @return BitrateToOrig 是否已赋值
                     */
                    bool BitrateToOrigHasBeenSet() const;

                    /**
                     * 获取Whether to not exceed the original height. 0: no; 1: yes. Default value: 0.
                     * @return HeightToOrig Whether to not exceed the original height. 0: no; 1: yes. Default value: 0.
                     */
                    int64_t GetHeightToOrig() const;

                    /**
                     * 设置Whether to not exceed the original height. 0: no; 1: yes. Default value: 0.
                     * @param HeightToOrig Whether to not exceed the original height. 0: no; 1: yes. Default value: 0.
                     */
                    void SetHeightToOrig(const int64_t& _heightToOrig);

                    /**
                     * 判断参数 HeightToOrig 是否已赋值
                     * @return HeightToOrig 是否已赋值
                     */
                    bool HeightToOrigHasBeenSet() const;

                    /**
                     * 获取Whether to not exceed the original frame rate. 0: no; 1: yes. Default value: 0.
                     * @return FpsToOrig Whether to not exceed the original frame rate. 0: no; 1: yes. Default value: 0.
                     */
                    int64_t GetFpsToOrig() const;

                    /**
                     * 设置Whether to not exceed the original frame rate. 0: no; 1: yes. Default value: 0.
                     * @param FpsToOrig Whether to not exceed the original frame rate. 0: no; 1: yes. Default value: 0.
                     */
                    void SetFpsToOrig(const int64_t& _fpsToOrig);

                    /**
                     * 判断参数 FpsToOrig 是否已赋值
                     * @return FpsToOrig 是否已赋值
                     */
                    bool FpsToOrigHasBeenSet() const;

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
                     * Template name, such as 900 900p. This can be only a combination of letters and digits.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Video bitrate. Value range: 100–8,000.
Note: The bitrate must be a multiple of 100.
                     */
                    int64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * Video encoding format. Valid values: h264, h265. Default value: h264.
                     */
                    std::string m_vcodec;
                    bool m_vcodecHasBeenSet;

                    /**
                     * Audio encoding in ACC format. Default value: original audio format.
Note: This parameter will take effect later.
                     */
                    std::string m_acodec;
                    bool m_acodecHasBeenSet;

                    /**
                     * Audio bitrate. Value range: 0–500. Default value: 0.
                     */
                    int64_t m_audioBitrate;
                    bool m_audioBitrateHasBeenSet;

                    /**
                     * Template description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Width. Default value: 0.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Whether to keep the video. 0: no; 1: yes. Default value: 1.
                     */
                    int64_t m_needVideo;
                    bool m_needVideoHasBeenSet;

                    /**
                     * Whether to keep the audio. 0: no; 1: yes. Default value: 1.
                     */
                    int64_t m_needAudio;
                    bool m_needAudioHasBeenSet;

                    /**
                     * Height. Default value: 0.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Frame rate. Default value: 0.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Keyframe interval in seconds. Original interval by default
                     */
                    int64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * Whether to rotate. 0: no; 1: yes. Default value: 0.
                     */
                    int64_t m_rotate;
                    bool m_rotateHasBeenSet;

                    /**
                     * Encoding quality:
baseline/main/high. Default value: baseline.
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * Whether to not exceed the original bitrate. 0: no; 1: yes. Default value: 0.
                     */
                    int64_t m_bitrateToOrig;
                    bool m_bitrateToOrigHasBeenSet;

                    /**
                     * Whether to not exceed the original height. 0: no; 1: yes. Default value: 0.
                     */
                    int64_t m_heightToOrig;
                    bool m_heightToOrigHasBeenSet;

                    /**
                     * Whether to not exceed the original frame rate. 0: no; 1: yes. Default value: 0.
                     */
                    int64_t m_fpsToOrig;
                    bool m_fpsToOrigHasBeenSet;

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

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVETRANSCODETEMPLATEREQUEST_H_
