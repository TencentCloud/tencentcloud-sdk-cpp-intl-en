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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSCODEDETAILINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSCODEDETAILINFO_H_

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
                * Transcoding details.
                */
                class TranscodeDetailInfo : public AbstractModel
                {
                public:
                    TranscodeDetailInfo();
                    ~TranscodeDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Stream name.
                     * @return StreamName Stream name.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name.
                     * @param _streamName Stream name.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Start time (Beijing time) in the format of `yyyy-mm-dd HH:MM`.
                     * @return StartTime Start time (Beijing time) in the format of `yyyy-mm-dd HH:MM`.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time (Beijing time) in the format of `yyyy-mm-dd HH:MM`.
                     * @param _startTime Start time (Beijing time) in the format of `yyyy-mm-dd HH:MM`.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time (Beijing time) in the format of `yyyy-mm-dd HH:MM`.
                     * @return EndTime End time (Beijing time) in the format of `yyyy-mm-dd HH:MM`.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time (Beijing time) in the format of `yyyy-mm-dd HH:MM`.
                     * @param _endTime End time (Beijing time) in the format of `yyyy-mm-dd HH:MM`.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Transcoding duration in minutes.
Note: given the possible interruptions during push, duration here is the sum of actual duration of transcoding instead of the interval between the start time and end time.
                     * @return Duration Transcoding duration in minutes.
Note: given the possible interruptions during push, duration here is the sum of actual duration of transcoding instead of the interval between the start time and end time.
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置Transcoding duration in minutes.
Note: given the possible interruptions during push, duration here is the sum of actual duration of transcoding instead of the interval between the start time and end time.
                     * @param _duration Transcoding duration in minutes.
Note: given the possible interruptions during push, duration here is the sum of actual duration of transcoding instead of the interval between the start time and end time.
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Codec with modules,
Example:
liveprocessor_H264: LVB transcoding - H264,
liveprocessor_H265: LVB transcoding - H265,
topspeed_H264: top speed codec - H264,
topspeed_H265: top speed codec - H265.
                     * @return ModuleCodec Codec with modules,
Example:
liveprocessor_H264: LVB transcoding - H264,
liveprocessor_H265: LVB transcoding - H265,
topspeed_H264: top speed codec - H264,
topspeed_H265: top speed codec - H265.
                     * 
                     */
                    std::string GetModuleCodec() const;

                    /**
                     * 设置Codec with modules,
Example:
liveprocessor_H264: LVB transcoding - H264,
liveprocessor_H265: LVB transcoding - H265,
topspeed_H264: top speed codec - H264,
topspeed_H265: top speed codec - H265.
                     * @param _moduleCodec Codec with modules,
Example:
liveprocessor_H264: LVB transcoding - H264,
liveprocessor_H265: LVB transcoding - H265,
topspeed_H264: top speed codec - H264,
topspeed_H265: top speed codec - H265.
                     * 
                     */
                    void SetModuleCodec(const std::string& _moduleCodec);

                    /**
                     * 判断参数 ModuleCodec 是否已赋值
                     * @return ModuleCodec 是否已赋值
                     * 
                     */
                    bool ModuleCodecHasBeenSet() const;

                    /**
                     * 获取Bitrate.
                     * @return Bitrate Bitrate.
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置Bitrate.
                     * @param _bitrate Bitrate.
                     * 
                     */
                    void SetBitrate(const uint64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取The task type. Valid values: Transcode, MixStream, WaterMark, Webrtc.
                     * @return Type The task type. Valid values: Transcode, MixStream, WaterMark, Webrtc.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The task type. Valid values: Transcode, MixStream, WaterMark, Webrtc.
                     * @param _type The task type. Valid values: Transcode, MixStream, WaterMark, Webrtc.
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
                     * 获取Push domain name.
                     * @return PushDomain Push domain name.
                     * 
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置Push domain name.
                     * @param _pushDomain Push domain name.
                     * 
                     */
                    void SetPushDomain(const std::string& _pushDomain);

                    /**
                     * 判断参数 PushDomain 是否已赋值
                     * @return PushDomain 是否已赋值
                     * 
                     */
                    bool PushDomainHasBeenSet() const;

                    /**
                     * 获取Resolution.
                     * @return Resolution Resolution.
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置Resolution.
                     * @param _resolution Resolution.
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取The region. Valid values:
`Mainland`: Inside the Chinese mainland.
`Overseas`: Outside the Chinese mainland.
                     * @return MainlandOrOversea The region. Valid values:
`Mainland`: Inside the Chinese mainland.
`Overseas`: Outside the Chinese mainland.
                     * 
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置The region. Valid values:
`Mainland`: Inside the Chinese mainland.
`Overseas`: Outside the Chinese mainland.
                     * @param _mainlandOrOversea The region. Valid values:
`Mainland`: Inside the Chinese mainland.
`Overseas`: Outside the Chinese mainland.
                     * 
                     */
                    void SetMainlandOrOversea(const std::string& _mainlandOrOversea);

                    /**
                     * 判断参数 MainlandOrOversea 是否已赋值
                     * @return MainlandOrOversea 是否已赋值
                     * 
                     */
                    bool MainlandOrOverseaHasBeenSet() const;

                private:

                    /**
                     * Stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Start time (Beijing time) in the format of `yyyy-mm-dd HH:MM`.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time (Beijing time) in the format of `yyyy-mm-dd HH:MM`.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Transcoding duration in minutes.
Note: given the possible interruptions during push, duration here is the sum of actual duration of transcoding instead of the interval between the start time and end time.
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Codec with modules,
Example:
liveprocessor_H264: LVB transcoding - H264,
liveprocessor_H265: LVB transcoding - H265,
topspeed_H264: top speed codec - H264,
topspeed_H265: top speed codec - H265.
                     */
                    std::string m_moduleCodec;
                    bool m_moduleCodecHasBeenSet;

                    /**
                     * Bitrate.
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * The task type. Valid values: Transcode, MixStream, WaterMark, Webrtc.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Push domain name.
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * Resolution.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * The region. Valid values:
`Mainland`: Inside the Chinese mainland.
`Overseas`: Outside the Chinese mainland.
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSCODEDETAILINFO_H_
