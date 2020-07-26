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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEHTTPSTATUSINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEHTTPSTATUSINFOLISTREQUEST_H_

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
                * DescribeHttpStatusInfoList request structure.
                */
                class DescribeHttpStatusInfoListRequest : public AbstractModel
                {
                public:
                    DescribeHttpStatusInfoListRequest();
                    ~DescribeHttpStatusInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time (Beijing time),
In the format of `yyyy-mm-dd HH:MM:SS`.
`StartTime` cannot be more than 3 months ago.
                     * @return StartTime Start time (Beijing time),
In the format of `yyyy-mm-dd HH:MM:SS`.
`StartTime` cannot be more than 3 months ago.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time (Beijing time),
In the format of `yyyy-mm-dd HH:MM:SS`.
`StartTime` cannot be more than 3 months ago.
                     * @param StartTime Start time (Beijing time),
In the format of `yyyy-mm-dd HH:MM:SS`.
`StartTime` cannot be more than 3 months ago.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time (Beijing time),
In the format of `yyyy-mm-dd HH:MM:SS`.
Note: `EndTime` and `StartTime` only support querying data for the last day.
                     * @return EndTime End time (Beijing time),
In the format of `yyyy-mm-dd HH:MM:SS`.
Note: `EndTime` and `StartTime` only support querying data for the last day.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time (Beijing time),
In the format of `yyyy-mm-dd HH:MM:SS`.
Note: `EndTime` and `StartTime` only support querying data for the last day.
                     * @param EndTime End time (Beijing time),
In the format of `yyyy-mm-dd HH:MM:SS`.
Note: `EndTime` and `StartTime` only support querying data for the last day.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Playback domain name list.
                     * @return PlayDomains Playback domain name list.
                     */
                    std::vector<std::string> GetPlayDomains() const;

                    /**
                     * 设置Playback domain name list.
                     * @param PlayDomains Playback domain name list.
                     */
                    void SetPlayDomains(const std::vector<std::string>& _playDomains);

                    /**
                     * 判断参数 PlayDomains 是否已赋值
                     * @return PlayDomains 是否已赋值
                     */
                    bool PlayDomainsHasBeenSet() const;

                private:

                    /**
                     * Start time (Beijing time),
In the format of `yyyy-mm-dd HH:MM:SS`.
`StartTime` cannot be more than 3 months ago.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time (Beijing time),
In the format of `yyyy-mm-dd HH:MM:SS`.
Note: `EndTime` and `StartTime` only support querying data for the last day.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Playback domain name list.
                     */
                    std::vector<std::string> m_playDomains;
                    bool m_playDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEHTTPSTATUSINFOLISTREQUEST_H_
