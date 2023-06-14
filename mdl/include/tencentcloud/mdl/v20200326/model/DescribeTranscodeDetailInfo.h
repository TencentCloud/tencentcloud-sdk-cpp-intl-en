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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBETRANSCODEDETAILINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBETRANSCODEDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Transcoding details.
                */
                class DescribeTranscodeDetailInfo : public AbstractModel
                {
                public:
                    DescribeTranscodeDetailInfo();
                    ~DescribeTranscodeDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The channel ID.
                     * @return ChannelId The channel ID.
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置The channel ID.
                     * @param _channelId The channel ID.
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取The start time (UTC+8) of transcoding in the format of yyyy-MM-dd HH:mm:ss.
                     * @return StartTime The start time (UTC+8) of transcoding in the format of yyyy-MM-dd HH:mm:ss.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time (UTC+8) of transcoding in the format of yyyy-MM-dd HH:mm:ss.
                     * @param _startTime The start time (UTC+8) of transcoding in the format of yyyy-MM-dd HH:mm:ss.
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
                     * 获取The end time (UTC+8) of transcoding in the format of yyyy-MM-dd HH:mm:ss.
                     * @return EndTime The end time (UTC+8) of transcoding in the format of yyyy-MM-dd HH:mm:ss.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time (UTC+8) of transcoding in the format of yyyy-MM-dd HH:mm:ss.
                     * @param _endTime The end time (UTC+8) of transcoding in the format of yyyy-MM-dd HH:mm:ss.
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
                     * 获取The duration (s) of transcoding.
                     * @return Duration The duration (s) of transcoding.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置The duration (s) of transcoding.
                     * @param _duration The duration (s) of transcoding.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取The encoding method.
Examples:
`liveprocessor_H264`: Live transcoding-H264
`liveprocessor_H265`: Live transcoding-H265
`topspeed_H264`: Top speed codec-H264
`topspeed_H265`: Top speed codec-H265
                     * @return ModuleCodec The encoding method.
Examples:
`liveprocessor_H264`: Live transcoding-H264
`liveprocessor_H265`: Live transcoding-H265
`topspeed_H264`: Top speed codec-H264
`topspeed_H265`: Top speed codec-H265
                     * 
                     */
                    std::string GetModuleCodec() const;

                    /**
                     * 设置The encoding method.
Examples:
`liveprocessor_H264`: Live transcoding-H264
`liveprocessor_H265`: Live transcoding-H265
`topspeed_H264`: Top speed codec-H264
`topspeed_H265`: Top speed codec-H265
                     * @param _moduleCodec The encoding method.
Examples:
`liveprocessor_H264`: Live transcoding-H264
`liveprocessor_H265`: Live transcoding-H265
`topspeed_H264`: Top speed codec-H264
`topspeed_H265`: Top speed codec-H265
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
                     * 获取The target bitrate (Kbps).
                     * @return Bitrate The target bitrate (Kbps).
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置The target bitrate (Kbps).
                     * @param _bitrate The target bitrate (Kbps).
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取The transcoding type.
                     * @return Type The transcoding type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The transcoding type.
                     * @param _type The transcoding type.
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
                     * 获取The push domain name.
                     * @return PushDomain The push domain name.
                     * 
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置The push domain name.
                     * @param _pushDomain The push domain name.
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
                     * 获取The target resolution.
                     * @return Resolution The target resolution.
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置The target resolution.
                     * @param _resolution The target resolution.
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * The channel ID.
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * The start time (UTC+8) of transcoding in the format of yyyy-MM-dd HH:mm:ss.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time (UTC+8) of transcoding in the format of yyyy-MM-dd HH:mm:ss.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The duration (s) of transcoding.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The encoding method.
Examples:
`liveprocessor_H264`: Live transcoding-H264
`liveprocessor_H265`: Live transcoding-H265
`topspeed_H264`: Top speed codec-H264
`topspeed_H265`: Top speed codec-H265
                     */
                    std::string m_moduleCodec;
                    bool m_moduleCodecHasBeenSet;

                    /**
                     * The target bitrate (Kbps).
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * The transcoding type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The push domain name.
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * The target resolution.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBETRANSCODEDETAILINFO_H_
