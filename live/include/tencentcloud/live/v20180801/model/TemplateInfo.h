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
                     * 获取Codec: h264/h265/origin. Default value: h264.

origin: keep the original codec.
                     * @return Vcodec Codec: h264/h265/origin. Default value: h264.

origin: keep the original codec.
                     * 
                     */
                    std::string GetVcodec() const;

                    /**
                     * 设置Codec: h264/h265/origin. Default value: h264.

origin: keep the original codec.
                     * @param _vcodec Codec: h264/h265/origin. Default value: h264.

origin: keep the original codec.
                     * 
                     */
                    void SetVcodec(const std::string& _vcodec);

                    /**
                     * 判断参数 Vcodec 是否已赋值
                     * @return Vcodec 是否已赋值
                     * 
                     */
                    bool VcodecHasBeenSet() const;

                    /**
                     * 获取Video bitrate. Value range: 0–8,000 Kbps.
If the value is 0, the original bitrate will be retained.
Note: transcoding templates require a unique bitrate. The final saved bitrate may differ from the input bitrate.
                     * @return VideoBitrate Video bitrate. Value range: 0–8,000 Kbps.
If the value is 0, the original bitrate will be retained.
Note: transcoding templates require a unique bitrate. The final saved bitrate may differ from the input bitrate.
                     * 
                     */
                    int64_t GetVideoBitrate() const;

                    /**
                     * 设置Video bitrate. Value range: 0–8,000 Kbps.
If the value is 0, the original bitrate will be retained.
Note: transcoding templates require a unique bitrate. The final saved bitrate may differ from the input bitrate.
                     * @param _videoBitrate Video bitrate. Value range: 0–8,000 Kbps.
If the value is 0, the original bitrate will be retained.
Note: transcoding templates require a unique bitrate. The final saved bitrate may differ from the input bitrate.
                     * 
                     */
                    void SetVideoBitrate(const int64_t& _videoBitrate);

                    /**
                     * 判断参数 VideoBitrate 是否已赋值
                     * @return VideoBitrate 是否已赋值
                     * 
                     */
                    bool VideoBitrateHasBeenSet() const;

                    /**
                     * 获取Audio codec: aac. Default value: aac.
Note: This parameter will not take effect for now and will be supported soon.
                     * @return Acodec Audio codec: aac. Default value: aac.
Note: This parameter will not take effect for now and will be supported soon.
                     * 
                     */
                    std::string GetAcodec() const;

                    /**
                     * 设置Audio codec: aac. Default value: aac.
Note: This parameter will not take effect for now and will be supported soon.
                     * @param _acodec Audio codec: aac. Default value: aac.
Note: This parameter will not take effect for now and will be supported soon.
                     * 
                     */
                    void SetAcodec(const std::string& _acodec);

                    /**
                     * 判断参数 Acodec 是否已赋值
                     * @return Acodec 是否已赋值
                     * 
                     */
                    bool AcodecHasBeenSet() const;

                    /**
                     * 获取Audio bitrate. Value range: 0–500 Kbps.
0 by default.
                     * @return AudioBitrate Audio bitrate. Value range: 0–500 Kbps.
0 by default.
                     * 
                     */
                    int64_t GetAudioBitrate() const;

                    /**
                     * 设置Audio bitrate. Value range: 0–500 Kbps.
0 by default.
                     * @param _audioBitrate Audio bitrate. Value range: 0–500 Kbps.
0 by default.
                     * 
                     */
                    void SetAudioBitrate(const int64_t& _audioBitrate);

                    /**
                     * 判断参数 AudioBitrate 是否已赋值
                     * @return AudioBitrate 是否已赋值
                     * 
                     */
                    bool AudioBitrateHasBeenSet() const;

                    /**
                     * 获取Width. Default value: 0.
Value range: [0-3,000].
The value must be a multiple of 2. The original width is 0.
                     * @return Width Width. Default value: 0.
Value range: [0-3,000].
The value must be a multiple of 2. The original width is 0.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Width. Default value: 0.
Value range: [0-3,000].
The value must be a multiple of 2. The original width is 0.
                     * @param _width Width. Default value: 0.
Value range: [0-3,000].
The value must be a multiple of 2. The original width is 0.
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Height. Default value: 0.
Value range: [0-3,000].
The value must be a multiple of 2. The original width is 0.
                     * @return Height Height. Default value: 0.
Value range: [0-3,000].
The value must be a multiple of 2. The original width is 0.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height. Default value: 0.
Value range: [0-3,000].
The value must be a multiple of 2. The original width is 0.
                     * @param _height Height. Default value: 0.
Value range: [0-3,000].
The value must be a multiple of 2. The original width is 0.
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Frame rate. Default value: 0.
Range: 0-60 Fps.
                     * @return Fps Frame rate. Default value: 0.
Range: 0-60 Fps.
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置Frame rate. Default value: 0.
Range: 0-60 Fps.
                     * @param _fps Frame rate. Default value: 0.
Range: 0-60 Fps.
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Keyframe interval, unit: second.
Original interval by default
Range: 2-6
                     * @return Gop Keyframe interval, unit: second.
Original interval by default
Range: 2-6
                     * 
                     */
                    int64_t GetGop() const;

                    /**
                     * 设置Keyframe interval, unit: second.
Original interval by default
Range: 2-6
                     * @param _gop Keyframe interval, unit: second.
Original interval by default
Range: 2-6
                     * 
                     */
                    void SetGop(const int64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     * 
                     */
                    bool GopHasBeenSet() const;

                    /**
                     * 获取Rotation angle. Default value: 0.
Value range: 0, 90, 180, 270
                     * @return Rotate Rotation angle. Default value: 0.
Value range: 0, 90, 180, 270
                     * 
                     */
                    int64_t GetRotate() const;

                    /**
                     * 设置Rotation angle. Default value: 0.
Value range: 0, 90, 180, 270
                     * @param _rotate Rotation angle. Default value: 0.
Value range: 0, 90, 180, 270
                     * 
                     */
                    void SetRotate(const int64_t& _rotate);

                    /**
                     * 判断参数 Rotate 是否已赋值
                     * @return Rotate 是否已赋值
                     * 
                     */
                    bool RotateHasBeenSet() const;

                    /**
                     * 获取Encoding quality:
baseline/main/high. Default value: baseline.
                     * @return Profile Encoding quality:
baseline/main/high. Default value: baseline.
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置Encoding quality:
baseline/main/high. Default value: baseline.
                     * @param _profile Encoding quality:
baseline/main/high. Default value: baseline.
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取Whether to use the original bitrate when the set bitrate is larger than the original bitrate.
0: no, 1: yes
Default value: 0.
                     * @return BitrateToOrig Whether to use the original bitrate when the set bitrate is larger than the original bitrate.
0: no, 1: yes
Default value: 0.
                     * 
                     */
                    int64_t GetBitrateToOrig() const;

                    /**
                     * 设置Whether to use the original bitrate when the set bitrate is larger than the original bitrate.
0: no, 1: yes
Default value: 0.
                     * @param _bitrateToOrig Whether to use the original bitrate when the set bitrate is larger than the original bitrate.
0: no, 1: yes
Default value: 0.
                     * 
                     */
                    void SetBitrateToOrig(const int64_t& _bitrateToOrig);

                    /**
                     * 判断参数 BitrateToOrig 是否已赋值
                     * @return BitrateToOrig 是否已赋值
                     * 
                     */
                    bool BitrateToOrigHasBeenSet() const;

                    /**
                     * 获取Whether to use the original height when the set height is higher than the original height.
0: no, 1: yes
Default value: 0.
                     * @return HeightToOrig Whether to use the original height when the set height is higher than the original height.
0: no, 1: yes
Default value: 0.
                     * 
                     */
                    int64_t GetHeightToOrig() const;

                    /**
                     * 设置Whether to use the original height when the set height is higher than the original height.
0: no, 1: yes
Default value: 0.
                     * @param _heightToOrig Whether to use the original height when the set height is higher than the original height.
0: no, 1: yes
Default value: 0.
                     * 
                     */
                    void SetHeightToOrig(const int64_t& _heightToOrig);

                    /**
                     * 判断参数 HeightToOrig 是否已赋值
                     * @return HeightToOrig 是否已赋值
                     * 
                     */
                    bool HeightToOrigHasBeenSet() const;

                    /**
                     * 获取Whether to use the original frame rate when the set frame rate is larger than the original frame rate.
0: no, 1: yes
Default value: 0.
                     * @return FpsToOrig Whether to use the original frame rate when the set frame rate is larger than the original frame rate.
0: no, 1: yes
Default value: 0.
                     * 
                     */
                    int64_t GetFpsToOrig() const;

                    /**
                     * 设置Whether to use the original frame rate when the set frame rate is larger than the original frame rate.
0: no, 1: yes
Default value: 0.
                     * @param _fpsToOrig Whether to use the original frame rate when the set frame rate is larger than the original frame rate.
0: no, 1: yes
Default value: 0.
                     * 
                     */
                    void SetFpsToOrig(const int64_t& _fpsToOrig);

                    /**
                     * 判断参数 FpsToOrig 是否已赋值
                     * @return FpsToOrig 是否已赋值
                     * 
                     */
                    bool FpsToOrigHasBeenSet() const;

                    /**
                     * 获取Whether to keep the video. 0: no; 1: yes.
                     * @return NeedVideo Whether to keep the video. 0: no; 1: yes.
                     * 
                     */
                    int64_t GetNeedVideo() const;

                    /**
                     * 设置Whether to keep the video. 0: no; 1: yes.
                     * @param _needVideo Whether to keep the video. 0: no; 1: yes.
                     * 
                     */
                    void SetNeedVideo(const int64_t& _needVideo);

                    /**
                     * 判断参数 NeedVideo 是否已赋值
                     * @return NeedVideo 是否已赋值
                     * 
                     */
                    bool NeedVideoHasBeenSet() const;

                    /**
                     * 获取Whether to keep the audio. 0: no; 1: yes.
                     * @return NeedAudio Whether to keep the audio. 0: no; 1: yes.
                     * 
                     */
                    int64_t GetNeedAudio() const;

                    /**
                     * 设置Whether to keep the audio. 0: no; 1: yes.
                     * @param _needAudio Whether to keep the audio. 0: no; 1: yes.
                     * 
                     */
                    void SetNeedAudio(const int64_t& _needAudio);

                    /**
                     * 判断参数 NeedAudio 是否已赋值
                     * @return NeedAudio 是否已赋值
                     * 
                     */
                    bool NeedAudioHasBeenSet() const;

                    /**
                     * 获取Template ID.
                     * @return TemplateId Template ID.
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Template ID.
                     * @param _templateId Template ID.
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Template name.
                     * @return TemplateName Template name.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name.
                     * @param _templateName Template name.
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Template description.
                     * @return Description Template description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Template description.
                     * @param _description Template description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Whether it is a top speed codec template. 0: no, 1: yes. Default value: 0.
                     * @return AiTransCode Whether it is a top speed codec template. 0: no, 1: yes. Default value: 0.
                     * 
                     */
                    int64_t GetAiTransCode() const;

                    /**
                     * 设置Whether it is a top speed codec template. 0: no, 1: yes. Default value: 0.
                     * @param _aiTransCode Whether it is a top speed codec template. 0: no, 1: yes. Default value: 0.
                     * 
                     */
                    void SetAiTransCode(const int64_t& _aiTransCode);

                    /**
                     * 判断参数 AiTransCode 是否已赋值
                     * @return AiTransCode 是否已赋值
                     * 
                     */
                    bool AiTransCodeHasBeenSet() const;

                    /**
                     * 获取Bitrate compression ratio of top speed code video.
Target bitrate of top speed code = VideoBitrate * (1-AdaptBitratePercent)

Value range: 0.0-0.5.
                     * @return AdaptBitratePercent Bitrate compression ratio of top speed code video.
Target bitrate of top speed code = VideoBitrate * (1-AdaptBitratePercent)

Value range: 0.0-0.5.
                     * 
                     */
                    double GetAdaptBitratePercent() const;

                    /**
                     * 设置Bitrate compression ratio of top speed code video.
Target bitrate of top speed code = VideoBitrate * (1-AdaptBitratePercent)

Value range: 0.0-0.5.
                     * @param _adaptBitratePercent Bitrate compression ratio of top speed code video.
Target bitrate of top speed code = VideoBitrate * (1-AdaptBitratePercent)

Value range: 0.0-0.5.
                     * 
                     */
                    void SetAdaptBitratePercent(const double& _adaptBitratePercent);

                    /**
                     * 判断参数 AdaptBitratePercent 是否已赋值
                     * @return AdaptBitratePercent 是否已赋值
                     * 
                     */
                    bool AdaptBitratePercentHasBeenSet() const;

                    /**
                     * 获取Whether to take the shorter side as height. 0: no, 1: yes. Default value: 0.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return ShortEdgeAsHeight Whether to take the shorter side as height. 0: no, 1: yes. Default value: 0.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetShortEdgeAsHeight() const;

                    /**
                     * 设置Whether to take the shorter side as height. 0: no, 1: yes. Default value: 0.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _shortEdgeAsHeight Whether to take the shorter side as height. 0: no, 1: yes. Default value: 0.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetShortEdgeAsHeight(const int64_t& _shortEdgeAsHeight);

                    /**
                     * 判断参数 ShortEdgeAsHeight 是否已赋值
                     * @return ShortEdgeAsHeight 是否已赋值
                     * 
                     */
                    bool ShortEdgeAsHeightHasBeenSet() const;

                    /**
                     * 获取The DRM encryption type. Valid values: fairplay, normalaes, widevine.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DRMType The DRM encryption type. Valid values: fairplay, normalaes, widevine.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDRMType() const;

                    /**
                     * 设置The DRM encryption type. Valid values: fairplay, normalaes, widevine.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dRMType The DRM encryption type. Valid values: fairplay, normalaes, widevine.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDRMType(const std::string& _dRMType);

                    /**
                     * 判断参数 DRMType 是否已赋值
                     * @return DRMType 是否已赋值
                     * 
                     */
                    bool DRMTypeHasBeenSet() const;

                    /**
                     * 获取The tracks to encrypt. Valid values: AUDIO, SD, HD, UHD1, UHD2. Separate multiple tracks with “|”. You can choose only one video track (SD, HD, UHD1, or UHD2).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DRMTracks The tracks to encrypt. Valid values: AUDIO, SD, HD, UHD1, UHD2. Separate multiple tracks with “|”. You can choose only one video track (SD, HD, UHD1, or UHD2).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDRMTracks() const;

                    /**
                     * 设置The tracks to encrypt. Valid values: AUDIO, SD, HD, UHD1, UHD2. Separate multiple tracks with “|”. You can choose only one video track (SD, HD, UHD1, or UHD2).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dRMTracks The tracks to encrypt. Valid values: AUDIO, SD, HD, UHD1, UHD2. Separate multiple tracks with “|”. You can choose only one video track (SD, HD, UHD1, or UHD2).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDRMTracks(const std::string& _dRMTracks);

                    /**
                     * 判断参数 DRMTracks 是否已赋值
                     * @return DRMTracks 是否已赋值
                     * 
                     */
                    bool DRMTracksHasBeenSet() const;

                private:

                    /**
                     * Codec: h264/h265/origin. Default value: h264.

origin: keep the original codec.
                     */
                    std::string m_vcodec;
                    bool m_vcodecHasBeenSet;

                    /**
                     * Video bitrate. Value range: 0–8,000 Kbps.
If the value is 0, the original bitrate will be retained.
Note: transcoding templates require a unique bitrate. The final saved bitrate may differ from the input bitrate.
                     */
                    int64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * Audio codec: aac. Default value: aac.
Note: This parameter will not take effect for now and will be supported soon.
                     */
                    std::string m_acodec;
                    bool m_acodecHasBeenSet;

                    /**
                     * Audio bitrate. Value range: 0–500 Kbps.
0 by default.
                     */
                    int64_t m_audioBitrate;
                    bool m_audioBitrateHasBeenSet;

                    /**
                     * Width. Default value: 0.
Value range: [0-3,000].
The value must be a multiple of 2. The original width is 0.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height. Default value: 0.
Value range: [0-3,000].
The value must be a multiple of 2. The original width is 0.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Frame rate. Default value: 0.
Range: 0-60 Fps.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Keyframe interval, unit: second.
Original interval by default
Range: 2-6
                     */
                    int64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * Rotation angle. Default value: 0.
Value range: 0, 90, 180, 270
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
                     * Whether to use the original bitrate when the set bitrate is larger than the original bitrate.
0: no, 1: yes
Default value: 0.
                     */
                    int64_t m_bitrateToOrig;
                    bool m_bitrateToOrigHasBeenSet;

                    /**
                     * Whether to use the original height when the set height is higher than the original height.
0: no, 1: yes
Default value: 0.
                     */
                    int64_t m_heightToOrig;
                    bool m_heightToOrigHasBeenSet;

                    /**
                     * Whether to use the original frame rate when the set frame rate is larger than the original frame rate.
0: no, 1: yes
Default value: 0.
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
                     * Bitrate compression ratio of top speed code video.
Target bitrate of top speed code = VideoBitrate * (1-AdaptBitratePercent)

Value range: 0.0-0.5.
                     */
                    double m_adaptBitratePercent;
                    bool m_adaptBitratePercentHasBeenSet;

                    /**
                     * Whether to take the shorter side as height. 0: no, 1: yes. Default value: 0.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t m_shortEdgeAsHeight;
                    bool m_shortEdgeAsHeightHasBeenSet;

                    /**
                     * The DRM encryption type. Valid values: fairplay, normalaes, widevine.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dRMType;
                    bool m_dRMTypeHasBeenSet;

                    /**
                     * The tracks to encrypt. Valid values: AUDIO, SD, HD, UHD1, UHD2. Separate multiple tracks with “|”. You can choose only one video track (SD, HD, UHD1, or UHD2).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dRMTracks;
                    bool m_dRMTracksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TEMPLATEINFO_H_
