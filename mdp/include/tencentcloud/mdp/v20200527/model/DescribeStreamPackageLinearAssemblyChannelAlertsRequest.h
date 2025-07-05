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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYCHANNELALERTSREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYCHANNELALERTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * DescribeStreamPackageLinearAssemblyChannelAlerts request structure.
                */
                class DescribeStreamPackageLinearAssemblyChannelAlertsRequest : public AbstractModel
                {
                public:
                    DescribeStreamPackageLinearAssemblyChannelAlertsRequest();
                    ~DescribeStreamPackageLinearAssemblyChannelAlertsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID.
                     * @return ChannelId Channel ID.
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID.
                     * @param _channelId Channel ID.
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
                     * 获取Query start time, Unix timestamp, supports queries in the last seven days.
                     * @return StartTime Query start time, Unix timestamp, supports queries in the last seven days.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Query start time, Unix timestamp, supports queries in the last seven days.
                     * @param _startTime Query start time, Unix timestamp, supports queries in the last seven days.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time, Unix timestamp, supports queries in the last seven days.
                     * @return EndTime Query end time, Unix timestamp, supports queries in the last seven days.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Query end time, Unix timestamp, supports queries in the last seven days.
                     * @param _endTime Query end time, Unix timestamp, supports queries in the last seven days.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Channel ID.
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Query start time, Unix timestamp, supports queries in the last seven days.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time, Unix timestamp, supports queries in the last seven days.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYCHANNELALERTSREQUEST_H_
