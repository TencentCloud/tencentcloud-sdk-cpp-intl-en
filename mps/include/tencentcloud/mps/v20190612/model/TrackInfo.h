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
                     * 获取Audio track and sound channel serial number, description:
When the SelectType value is trask, this value is of the integer type, for example: 1.
When the SelectType value is trask_channel, this value is of the decimal type, for example: 1.0.
Default value: `1.0`.
The integer part represents the audio track serial number, and the decimal part represents the sound channel. The audio track serial number is the stream index of the audio track, and input of 0 and positive integers is supported. The decimal part supports up to 2 decimal places, and only 0 - 63 is supported. However, when the Codec is aac/eac3/ac3, only 0 - 15 is supported for the decimal part. For example: for an audio track with a stream index of 1, 1.0 represents the first sound channel of this audio track, and 1.1 represents the second sound channel of this audio track.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TrackNum Audio track and sound channel serial number, description:
When the SelectType value is trask, this value is of the integer type, for example: 1.
When the SelectType value is trask_channel, this value is of the decimal type, for example: 1.0.
Default value: `1.0`.
The integer part represents the audio track serial number, and the decimal part represents the sound channel. The audio track serial number is the stream index of the audio track, and input of 0 and positive integers is supported. The decimal part supports up to 2 decimal places, and only 0 - 63 is supported. However, when the Codec is aac/eac3/ac3, only 0 - 15 is supported for the decimal part. For example: for an audio track with a stream index of 1, 1.0 represents the first sound channel of this audio track, and 1.1 represents the second sound channel of this audio track.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTrackNum() const;

                    /**
                     * 设置Audio track and sound channel serial number, description:
When the SelectType value is trask, this value is of the integer type, for example: 1.
When the SelectType value is trask_channel, this value is of the decimal type, for example: 1.0.
Default value: `1.0`.
The integer part represents the audio track serial number, and the decimal part represents the sound channel. The audio track serial number is the stream index of the audio track, and input of 0 and positive integers is supported. The decimal part supports up to 2 decimal places, and only 0 - 63 is supported. However, when the Codec is aac/eac3/ac3, only 0 - 15 is supported for the decimal part. For example: for an audio track with a stream index of 1, 1.0 represents the first sound channel of this audio track, and 1.1 represents the second sound channel of this audio track.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _trackNum Audio track and sound channel serial number, description:
When the SelectType value is trask, this value is of the integer type, for example: 1.
When the SelectType value is trask_channel, this value is of the decimal type, for example: 1.0.
Default value: `1.0`.
The integer part represents the audio track serial number, and the decimal part represents the sound channel. The audio track serial number is the stream index of the audio track, and input of 0 and positive integers is supported. The decimal part supports up to 2 decimal places, and only 0 - 63 is supported. However, when the Codec is aac/eac3/ac3, only 0 - 15 is supported for the decimal part. For example: for an audio track with a stream index of 1, 1.0 represents the first sound channel of this audio track, and 1.1 represents the second sound channel of this audio track.
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
                     * 获取Sound channel volume. specifies the volume of the sound channel.
Specifies that when the value of AudioChannel is 1, the length of this array is 1, for example: [6].
Specifies that when the value of AudioChannel is 2, the array length is 2. for example: [0,6].
When the value of AudioChannel is 6, the length of this array is greater than 2 and less than 16, for example: [-60,0,0,6].
Specifies the value array of this parameter. the value range is [-60, 6]. among them, -60 indicates mute, 0 indicates keeping the original volume, and 6 indicates doubling the original volume. the default value is -60.
Note: supports 3 decimal places.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ChannelVolume Sound channel volume. specifies the volume of the sound channel.
Specifies that when the value of AudioChannel is 1, the length of this array is 1, for example: [6].
Specifies that when the value of AudioChannel is 2, the array length is 2. for example: [0,6].
When the value of AudioChannel is 6, the length of this array is greater than 2 and less than 16, for example: [-60,0,0,6].
Specifies the value array of this parameter. the value range is [-60, 6]. among them, -60 indicates mute, 0 indicates keeping the original volume, and 6 indicates doubling the original volume. the default value is -60.
Note: supports 3 decimal places.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<double> GetChannelVolume() const;

                    /**
                     * 设置Sound channel volume. specifies the volume of the sound channel.
Specifies that when the value of AudioChannel is 1, the length of this array is 1, for example: [6].
Specifies that when the value of AudioChannel is 2, the array length is 2. for example: [0,6].
When the value of AudioChannel is 6, the length of this array is greater than 2 and less than 16, for example: [-60,0,0,6].
Specifies the value array of this parameter. the value range is [-60, 6]. among them, -60 indicates mute, 0 indicates keeping the original volume, and 6 indicates doubling the original volume. the default value is -60.
Note: supports 3 decimal places.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _channelVolume Sound channel volume. specifies the volume of the sound channel.
Specifies that when the value of AudioChannel is 1, the length of this array is 1, for example: [6].
Specifies that when the value of AudioChannel is 2, the array length is 2. for example: [0,6].
When the value of AudioChannel is 6, the length of this array is greater than 2 and less than 16, for example: [-60,0,0,6].
Specifies the value array of this parameter. the value range is [-60, 6]. among them, -60 indicates mute, 0 indicates keeping the original volume, and 6 indicates doubling the original volume. the default value is -60.
Note: supports 3 decimal places.

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
                     * Audio track and sound channel serial number, description:
When the SelectType value is trask, this value is of the integer type, for example: 1.
When the SelectType value is trask_channel, this value is of the decimal type, for example: 1.0.
Default value: `1.0`.
The integer part represents the audio track serial number, and the decimal part represents the sound channel. The audio track serial number is the stream index of the audio track, and input of 0 and positive integers is supported. The decimal part supports up to 2 decimal places, and only 0 - 63 is supported. However, when the Codec is aac/eac3/ac3, only 0 - 15 is supported for the decimal part. For example: for an audio track with a stream index of 1, 1.0 represents the first sound channel of this audio track, and 1.1 represents the second sound channel of this audio track.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_trackNum;
                    bool m_trackNumHasBeenSet;

                    /**
                     * Sound channel volume. specifies the volume of the sound channel.
Specifies that when the value of AudioChannel is 1, the length of this array is 1, for example: [6].
Specifies that when the value of AudioChannel is 2, the array length is 2. for example: [0,6].
When the value of AudioChannel is 6, the length of this array is greater than 2 and less than 16, for example: [-60,0,0,6].
Specifies the value array of this parameter. the value range is [-60, 6]. among them, -60 indicates mute, 0 indicates keeping the original volume, and 6 indicates doubling the original volume. the default value is -60.
Note: supports 3 decimal places.

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
