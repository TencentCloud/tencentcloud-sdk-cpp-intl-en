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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_STREAMEVENTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_STREAMEVENTINFO_H_

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
                * Streaming event information.
                */
                class StreamEventInfo : public AbstractModel
                {
                public:
                    StreamEventInfo();
                    ~StreamEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application name.
                     * @return AppName Application name.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Application name.
                     * @param AppName Application name.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Push domain name.
                     * @return DomainName Push domain name.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Push domain name.
                     * @param DomainName Push domain name.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Stream name.
                     * @return StreamName Stream name.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name.
                     * @param StreamName Stream name.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Push start time.
In UTC format, such as 2019-01-07T12:00:00Z.
                     * @return StreamStartTime Push start time.
In UTC format, such as 2019-01-07T12:00:00Z.
                     */
                    std::string GetStreamStartTime() const;

                    /**
                     * 设置Push start time.
In UTC format, such as 2019-01-07T12:00:00Z.
                     * @param StreamStartTime Push start time.
In UTC format, such as 2019-01-07T12:00:00Z.
                     */
                    void SetStreamStartTime(const std::string& _streamStartTime);

                    /**
                     * 判断参数 StreamStartTime 是否已赋值
                     * @return StreamStartTime 是否已赋值
                     */
                    bool StreamStartTimeHasBeenSet() const;

                    /**
                     * 获取Push end time.
In UTC format, such as 2019-01-07T15:00:00Z.
                     * @return StreamEndTime Push end time.
In UTC format, such as 2019-01-07T15:00:00Z.
                     */
                    std::string GetStreamEndTime() const;

                    /**
                     * 设置Push end time.
In UTC format, such as 2019-01-07T15:00:00Z.
                     * @param StreamEndTime Push end time.
In UTC format, such as 2019-01-07T15:00:00Z.
                     */
                    void SetStreamEndTime(const std::string& _streamEndTime);

                    /**
                     * 判断参数 StreamEndTime 是否已赋值
                     * @return StreamEndTime 是否已赋值
                     */
                    bool StreamEndTimeHasBeenSet() const;

                    /**
                     * 获取Stop reason.
                     * @return StopReason Stop reason.
                     */
                    std::string GetStopReason() const;

                    /**
                     * 设置Stop reason.
                     * @param StopReason Stop reason.
                     */
                    void SetStopReason(const std::string& _stopReason);

                    /**
                     * 判断参数 StopReason 是否已赋值
                     * @return StopReason 是否已赋值
                     */
                    bool StopReasonHasBeenSet() const;

                    /**
                     * 获取Push duration in seconds.
                     * @return Duration Push duration in seconds.
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置Push duration in seconds.
                     * @param Duration Push duration in seconds.
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取The IP address of the host.
If the stream is published from a private network, this parameter will be `-`.
                     * @return ClientIp The IP address of the host.
If the stream is published from a private network, this parameter will be `-`.
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置The IP address of the host.
If the stream is published from a private network, this parameter will be `-`.
                     * @param ClientIp The IP address of the host.
If the stream is published from a private network, this parameter will be `-`.
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取Resolution.
                     * @return Resolution Resolution.
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置Resolution.
                     * @param Resolution Resolution.
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * Application name.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Push domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Push start time.
In UTC format, such as 2019-01-07T12:00:00Z.
                     */
                    std::string m_streamStartTime;
                    bool m_streamStartTimeHasBeenSet;

                    /**
                     * Push end time.
In UTC format, such as 2019-01-07T15:00:00Z.
                     */
                    std::string m_streamEndTime;
                    bool m_streamEndTimeHasBeenSet;

                    /**
                     * Stop reason.
                     */
                    std::string m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * Push duration in seconds.
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The IP address of the host.
If the stream is published from a private network, this parameter will be `-`.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * Resolution.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_STREAMEVENTINFO_H_
