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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPLAYINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPLAYINFOLISTREQUEST_H_

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
                * DescribeStreamPlayInfoList request structure.
                */
                class DescribeStreamPlayInfoListRequest : public AbstractModel
                {
                public:
                    DescribeStreamPlayInfoListRequest();
                    ~DescribeStreamPlayInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time (Beijing time) in the format of yyyy-mm-dd HH:MM:SS
                     * @return StartTime Start time (Beijing time) in the format of yyyy-mm-dd HH:MM:SS
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time (Beijing time) in the format of yyyy-mm-dd HH:MM:SS
                     * @param _startTime Start time (Beijing time) in the format of yyyy-mm-dd HH:MM:SS
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
                     * 获取The end time (Beijing time) in the format of yyyy-mm-dd HH:MM:SS.
The start time and end time cannot be more than 24 hours apart and must be within the past month.
                     * @return EndTime The end time (Beijing time) in the format of yyyy-mm-dd HH:MM:SS.
The start time and end time cannot be more than 24 hours apart and must be within the past month.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time (Beijing time) in the format of yyyy-mm-dd HH:MM:SS.
The start time and end time cannot be more than 24 hours apart and must be within the past month.
                     * @param _endTime The end time (Beijing time) in the format of yyyy-mm-dd HH:MM:SS.
The start time and end time cannot be more than 24 hours apart and must be within the past month.
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
                     * 获取Playback domain name,
If this parameter is left empty, data of live streams of all playback domain names will be queried.
                     * @return PlayDomain Playback domain name,
If this parameter is left empty, data of live streams of all playback domain names will be queried.
                     * 
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 设置Playback domain name,
If this parameter is left empty, data of live streams of all playback domain names will be queried.
                     * @param _playDomain Playback domain name,
If this parameter is left empty, data of live streams of all playback domain names will be queried.
                     * 
                     */
                    void SetPlayDomain(const std::string& _playDomain);

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     * 
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取Stream name (exact match).
If this parameter is left empty, full playback data will be queried.
                     * @return StreamName Stream name (exact match).
If this parameter is left empty, full playback data will be queried.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name (exact match).
If this parameter is left empty, full playback data will be queried.
                     * @param _streamName Stream name (exact match).
If this parameter is left empty, full playback data will be queried.
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
                     * 获取Push address. Its value is the same as the `AppName` in playback address. It supports exact match, and takes effect only when `StreamName` is passed at the same time.
If it is left empty, the full playback data will be queried.
Note: to query by `AppName`, you need to submit a ticket first. After your application succeeds, it will take about 5 business days (subject to the time in the reply) for the configuration to take effect.
                     * @return AppName Push address. Its value is the same as the `AppName` in playback address. It supports exact match, and takes effect only when `StreamName` is passed at the same time.
If it is left empty, the full playback data will be queried.
Note: to query by `AppName`, you need to submit a ticket first. After your application succeeds, it will take about 5 business days (subject to the time in the reply) for the configuration to take effect.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push address. Its value is the same as the `AppName` in playback address. It supports exact match, and takes effect only when `StreamName` is passed at the same time.
If it is left empty, the full playback data will be queried.
Note: to query by `AppName`, you need to submit a ticket first. After your application succeeds, it will take about 5 business days (subject to the time in the reply) for the configuration to take effect.
                     * @param _appName Push address. Its value is the same as the `AppName` in playback address. It supports exact match, and takes effect only when `StreamName` is passed at the same time.
If it is left empty, the full playback data will be queried.
Note: to query by `AppName`, you need to submit a ticket first. After your application succeeds, it will take about 5 business days (subject to the time in the reply) for the configuration to take effect.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Service name. Valid values: LVB, LEB. If this parameter is left empty, all data of LVB and LEB will be queried.
                     * @return ServiceName Service name. Valid values: LVB, LEB. If this parameter is left empty, all data of LVB and LEB will be queried.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name. Valid values: LVB, LEB. If this parameter is left empty, all data of LVB and LEB will be queried.
                     * @param _serviceName Service name. Valid values: LVB, LEB. If this parameter is left empty, all data of LVB and LEB will be queried.
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                private:

                    /**
                     * Start time (Beijing time) in the format of yyyy-mm-dd HH:MM:SS
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time (Beijing time) in the format of yyyy-mm-dd HH:MM:SS.
The start time and end time cannot be more than 24 hours apart and must be within the past month.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Playback domain name,
If this parameter is left empty, data of live streams of all playback domain names will be queried.
                     */
                    std::string m_playDomain;
                    bool m_playDomainHasBeenSet;

                    /**
                     * Stream name (exact match).
If this parameter is left empty, full playback data will be queried.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Push address. Its value is the same as the `AppName` in playback address. It supports exact match, and takes effect only when `StreamName` is passed at the same time.
If it is left empty, the full playback data will be queried.
Note: to query by `AppName`, you need to submit a ticket first. After your application succeeds, it will take about 5 business days (subject to the time in the reply) for the configuration to take effect.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Service name. Valid values: LVB, LEB. If this parameter is left empty, all data of LVB and LEB will be queried.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPLAYINFOLISTREQUEST_H_
