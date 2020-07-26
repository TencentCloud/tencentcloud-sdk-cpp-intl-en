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
                     * 获取Start time (Beijing time) in the format of `yyyy-mm-dd HH:MM:SS`,
The start time cannot be more than 30 days after the current time.
                     * @return StartTime Start time (Beijing time) in the format of `yyyy-mm-dd HH:MM:SS`,
The start time cannot be more than 30 days after the current time.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time (Beijing time) in the format of `yyyy-mm-dd HH:MM:SS`,
The start time cannot be more than 30 days after the current time.
                     * @param StartTime Start time (Beijing time) in the format of `yyyy-mm-dd HH:MM:SS`,
The start time cannot be more than 30 days after the current time.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time (Beijing time) in the format of `yyyy-mm-dd HH:MM:SS`.
The end time and start time must be on the same day.
                     * @return EndTime End time (Beijing time) in the format of `yyyy-mm-dd HH:MM:SS`.
The end time and start time must be on the same day.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time (Beijing time) in the format of `yyyy-mm-dd HH:MM:SS`.
The end time and start time must be on the same day.
                     * @param EndTime End time (Beijing time) in the format of `yyyy-mm-dd HH:MM:SS`.
The end time and start time must be on the same day.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Playback domain name,
If this parameter is left empty, data of live streams of all playback domain names will be queried.
                     * @return PlayDomain Playback domain name,
If this parameter is left empty, data of live streams of all playback domain names will be queried.
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 设置Playback domain name,
If this parameter is left empty, data of live streams of all playback domain names will be queried.
                     * @param PlayDomain Playback domain name,
If this parameter is left empty, data of live streams of all playback domain names will be queried.
                     */
                    void SetPlayDomain(const std::string& _playDomain);

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取Stream name (exact match).
If this parameter is left empty, full playback data will be queried.
                     * @return StreamName Stream name (exact match).
If this parameter is left empty, full playback data will be queried.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name (exact match).
If this parameter is left empty, full playback data will be queried.
                     * @param StreamName Stream name (exact match).
If this parameter is left empty, full playback data will be queried.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Push path, which is the same as the `AppName` in the playback address, subject to exact match, and valid if `StreamName` is passed in.
If this parameter is left empty, full playback data will be queried.
Note: to query by `AppName`, you need to submit a ticket for application.
                     * @return AppName Push path, which is the same as the `AppName` in the playback address, subject to exact match, and valid if `StreamName` is passed in.
If this parameter is left empty, full playback data will be queried.
Note: to query by `AppName`, you need to submit a ticket for application.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path, which is the same as the `AppName` in the playback address, subject to exact match, and valid if `StreamName` is passed in.
If this parameter is left empty, full playback data will be queried.
Note: to query by `AppName`, you need to submit a ticket for application.
                     * @param AppName Push path, which is the same as the `AppName` in the playback address, subject to exact match, and valid if `StreamName` is passed in.
If this parameter is left empty, full playback data will be queried.
Note: to query by `AppName`, you need to submit a ticket for application.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                private:

                    /**
                     * Start time (Beijing time) in the format of `yyyy-mm-dd HH:MM:SS`,
The start time cannot be more than 30 days after the current time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time (Beijing time) in the format of `yyyy-mm-dd HH:MM:SS`.
The end time and start time must be on the same day.
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
                     * Push path, which is the same as the `AppName` in the playback address, subject to exact match, and valid if `StreamName` is passed in.
If this parameter is left empty, full playback data will be queried.
Note: to query by `AppName`, you need to submit a ticket for application.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPLAYINFOLISTREQUEST_H_
