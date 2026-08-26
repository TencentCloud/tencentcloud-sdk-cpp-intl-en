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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_RENEWTOKENPLANTEAMORDERREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_RENEWTOKENPLANTEAMORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * RenewTokenPlanTeamOrder request structure.
                */
                class RenewTokenPlanTeamOrderRequest : public AbstractModel
                {
                public:
                    RenewTokenPlanTeamOrderRequest();
                    ~RenewTokenPlanTeamOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Package ID, which can be obtained through the DescribeTokenPlanList API.
                     * @return TeamId Package ID, which can be obtained through the DescribeTokenPlanList API.
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Package ID, which can be obtained through the DescribeTokenPlanList API.
                     * @param _teamId Package ID, which can be obtained through the DescribeTokenPlanList API.
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取Renewal duration. Unit: month. Must be greater than 0.
                     * @return TimeSpan Renewal duration. Unit: month. Must be greater than 0.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Renewal duration. Unit: month. Must be greater than 0.
                     * @param _timeSpan Renewal duration. Unit: month. Must be greater than 0.
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                private:

                    /**
                     * Package ID, which can be obtained through the DescribeTokenPlanList API.
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Renewal duration. Unit: month. Must be greater than 0.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_RENEWTOKENPLANTEAMORDERREQUEST_H_
