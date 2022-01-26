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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAREABILLBANDWIDTHANDFLUXLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAREABILLBANDWIDTHANDFLUXLISTREQUEST_H_

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
                * DescribeAreaBillBandwidthAndFluxList request structure.
                */
                class DescribeAreaBillBandwidthAndFluxListRequest : public AbstractModel
                {
                public:
                    DescribeAreaBillBandwidthAndFluxListRequest();
                    ~DescribeAreaBillBandwidthAndFluxListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time point in the format of yyyy-mm-dd HH:MM:SS.
                     * @return StartTime Start time point in the format of yyyy-mm-dd HH:MM:SS.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time point in the format of yyyy-mm-dd HH:MM:SS.
                     * @param StartTime Start time point in the format of yyyy-mm-dd HH:MM:SS.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time point in the format of yyyy-mm-dd HH:MM:SS. The difference between the start time and end time cannot be greater than 1 days.
                     * @return EndTime End time point in the format of yyyy-mm-dd HH:MM:SS. The difference between the start time and end time cannot be greater than 1 days.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time point in the format of yyyy-mm-dd HH:MM:SS. The difference between the start time and end time cannot be greater than 1 days.
                     * @param EndTime End time point in the format of yyyy-mm-dd HH:MM:SS. The difference between the start time and end time cannot be greater than 1 days.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取LVB playback domain name. If it is left blank, the full data will be queried.
                     * @return PlayDomains LVB playback domain name. If it is left blank, the full data will be queried.
                     */
                    std::vector<std::string> GetPlayDomains() const;

                    /**
                     * 设置LVB playback domain name. If it is left blank, the full data will be queried.
                     * @param PlayDomains LVB playback domain name. If it is left blank, the full data will be queried.
                     */
                    void SetPlayDomains(const std::vector<std::string>& _playDomains);

                    /**
                     * 判断参数 PlayDomains 是否已赋值
                     * @return PlayDomains 是否已赋值
                     */
                    bool PlayDomainsHasBeenSet() const;

                private:

                    /**
                     * Start time point in the format of yyyy-mm-dd HH:MM:SS.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time point in the format of yyyy-mm-dd HH:MM:SS. The difference between the start time and end time cannot be greater than 1 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * LVB playback domain name. If it is left blank, the full data will be queried.
                     */
                    std::vector<std::string> m_playDomains;
                    bool m_playDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAREABILLBANDWIDTHANDFLUXLISTREQUEST_H_
