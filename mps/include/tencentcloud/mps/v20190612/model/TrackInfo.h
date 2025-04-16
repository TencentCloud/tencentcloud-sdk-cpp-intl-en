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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TRACKINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TRACKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Audio track info.
                */
                class TrackInfo : public AbstractModel
                {
                public:
                    TrackInfo();
                    ~TrackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The serial number of the audio track and sound channel.
<li>When the value of SelectType is track, this value is an integer, for example: 1.
<li>When the value of SelectType is track_channel, this value is a decimal, for example: 1.0.
<li>Default value: 1.0.
The integer part represents the audio track serial number, and the decimal part represents the sound channel. The audio track serial number is the stream index value of the audio track, which can be 0 or a positive integer. The decimal part supports up to 2 decimal places, and only 0 - 63 is supported. However, when the Codec is aac/eac3/ac3, only 0 - 15 is supported for the decimal part. For example: for an audio track with a stream index value of 1, 1.0 represents the first sound channel of this audio track, and 1.1 represents the second sound channel of this audio track.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TrackNum The serial number of the audio track and sound channel.
<li>When the value of SelectType is track, this value is an integer, for example: 1.
<li>When the value of SelectType is track_channel, this value is a decimal, for example: 1.0.
<li>Default value: 1.0.
The integer part represents the audio track serial number, and the decimal part represents the sound channel. The audio track serial number is the stream index value of the audio track, which can be 0 or a positive integer. The decimal part supports up to 2 decimal places, and only 0 - 63 is supported. However, when the Codec is aac/eac3/ac3, only 0 - 15 is supported for the decimal part. For example: for an audio track with a stream index value of 1, 1.0 represents the first sound channel of this audio track, and 1.1 represents the second sound channel of this audio track.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTrackNum() const;

                    /**
                     * 设置The serial number of the audio track and sound channel.
<li>When the value of SelectType is track, this value is an integer, for example: 1.
<li>When the value of SelectType is track_channel, this value is a decimal, for example: 1.0.
<li>Default value: 1.0.
The integer part represents the audio track serial number, and the decimal part represents the sound channel. The audio track serial number is the stream index value of the audio track, which can be 0 or a positive integer. The decimal part supports up to 2 decimal places, and only 0 - 63 is supported. However, when the Codec is aac/eac3/ac3, only 0 - 15 is supported for the decimal part. For example: for an audio track with a stream index value of 1, 1.0 represents the first sound channel of this audio track, and 1.1 represents the second sound channel of this audio track.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _trackNum The serial number of the audio track and sound channel.
<li>When the value of SelectType is track, this value is an integer, for example: 1.
<li>When the value of SelectType is track_channel, this value is a decimal, for example: 1.0.
<li>Default value: 1.0.
The integer part represents the audio track serial number, and the decimal part represents the sound channel. The audio track serial number is the stream index value of the audio track, which can be 0 or a positive integer. The decimal part supports up to 2 decimal places, and only 0 - 63 is supported. However, when the Codec is aac/eac3/ac3, only 0 - 15 is supported for the decimal part. For example: for an audio track with a stream index value of 1, 1.0 represents the first sound channel of this audio track, and 1.1 represents the second sound channel of this audio track.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTrackNum(const std::string& _trackNum);

                    /**
                     * 判断参数 TrackNum 是否已赋值
                     * @return TrackNum 是否已赋值
                     * 
                     */
                    bool TrackNumHasBeenSet() const;

                    /**
                     * 获取The volume of the sound channel.
<li>When the value of AudioChannel is 1, the length of this array is 1. For example: [6].
<li>When the value of AudioChannel is 2, the length of this array is 2. For example: [0,6].
<li>When the value of AudioChannel is 6, the length of this array is greater than 2 and less than 16. For example: [-60,0,0,6].

Please specify the value array for this parameter. The value range is between -60 and 6, where -60 indicates mute, 0 maintains the original volume, and 6 doubles the original volume. The default value is -60. Please note: This field supports up to 3 decimal places.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ChannelVolume The volume of the sound channel.
<li>When the value of AudioChannel is 1, the length of this array is 1. For example: [6].
<li>When the value of AudioChannel is 2, the length of this array is 2. For example: [0,6].
<li>When the value of AudioChannel is 6, the length of this array is greater than 2 and less than 16. For example: [-60,0,0,6].

Please specify the value array for this parameter. The value range is between -60 and 6, where -60 indicates mute, 0 maintains the original volume, and 6 doubles the original volume. The default value is -60. Please note: This field supports up to 3 decimal places.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<double> GetChannelVolume() const;

                    /**
                     * 设置The volume of the sound channel.
<li>When the value of AudioChannel is 1, the length of this array is 1. For example: [6].
<li>When the value of AudioChannel is 2, the length of this array is 2. For example: [0,6].
<li>When the value of AudioChannel is 6, the length of this array is greater than 2 and less than 16. For example: [-60,0,0,6].

Please specify the value array for this parameter. The value range is between -60 and 6, where -60 indicates mute, 0 maintains the original volume, and 6 doubles the original volume. The default value is -60. Please note: This field supports up to 3 decimal places.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _channelVolume The volume of the sound channel.
<li>When the value of AudioChannel is 1, the length of this array is 1. For example: [6].
<li>When the value of AudioChannel is 2, the length of this array is 2. For example: [0,6].
<li>When the value of AudioChannel is 6, the length of this array is greater than 2 and less than 16. For example: [-60,0,0,6].

Please specify the value array for this parameter. The value range is between -60 and 6, where -60 indicates mute, 0 maintains the original volume, and 6 doubles the original volume. The default value is -60. Please note: This field supports up to 3 decimal places.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetChannelVolume(const std::vector<double>& _channelVolume);

                    /**
                     * 判断参数 ChannelVolume 是否已赋值
                     * @return ChannelVolume 是否已赋值
                     * 
                     */
                    bool ChannelVolumeHasBeenSet() const;

                private:

                    /**
                     * The serial number of the audio track and sound channel.
<li>When the value of SelectType is track, this value is an integer, for example: 1.
<li>When the value of SelectType is track_channel, this value is a decimal, for example: 1.0.
<li>Default value: 1.0.
The integer part represents the audio track serial number, and the decimal part represents the sound channel. The audio track serial number is the stream index value of the audio track, which can be 0 or a positive integer. The decimal part supports up to 2 decimal places, and only 0 - 63 is supported. However, when the Codec is aac/eac3/ac3, only 0 - 15 is supported for the decimal part. For example: for an audio track with a stream index value of 1, 1.0 represents the first sound channel of this audio track, and 1.1 represents the second sound channel of this audio track.

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_trackNum;
                    bool m_trackNumHasBeenSet;

                    /**
                     * The volume of the sound channel.
<li>When the value of AudioChannel is 1, the length of this array is 1. For example: [6].
<li>When the value of AudioChannel is 2, the length of this array is 2. For example: [0,6].
<li>When the value of AudioChannel is 6, the length of this array is greater than 2 and less than 16. For example: [-60,0,0,6].

Please specify the value array for this parameter. The value range is between -60 and 6, where -60 indicates mute, 0 maintains the original volume, and 6 doubles the original volume. The default value is -60. Please note: This field supports up to 3 decimal places.

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<double> m_channelVolume;
                    bool m_channelVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TRACKINFO_H_
