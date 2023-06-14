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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBETIMERSCALINGPOLICIESREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBETIMERSCALINGPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeTimerScalingPolicies request structure.
                */
                class DescribeTimerScalingPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeTimerScalingPoliciesRequest();
                    ~DescribeTimerScalingPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the fleet to be bound with the policy
                     * @return FleetId ID of the fleet to be bound with the policy
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置ID of the fleet to be bound with the policy
                     * @param _fleetId ID of the fleet to be bound with the policy
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取Scheduled scaling policy name
                     * @return TimerName Scheduled scaling policy name
                     * 
                     */
                    std::string GetTimerName() const;

                    /**
                     * 设置Scheduled scaling policy name
                     * @param _timerName Scheduled scaling policy name
                     * 
                     */
                    void SetTimerName(const std::string& _timerName);

                    /**
                     * 判断参数 TimerName 是否已赋值
                     * @return TimerName 是否已赋值
                     * 
                     */
                    bool TimerNameHasBeenSet() const;

                    /**
                     * 获取Start time of the scheduled scaling policy
                     * @return BeginTime Start time of the scheduled scaling policy
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time of the scheduled scaling policy
                     * @param _beginTime Start time of the scheduled scaling policy
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time of the scheduled scaling policy
                     * @return EndTime End time of the scheduled scaling policy
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the scheduled scaling policy
                     * @param _endTime End time of the scheduled scaling policy
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
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of entries per page
                     * @return Limit Number of entries per page
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page
                     * @param _limit Number of entries per page
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * ID of the fleet to be bound with the policy
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * Scheduled scaling policy name
                     */
                    std::string m_timerName;
                    bool m_timerNameHasBeenSet;

                    /**
                     * Start time of the scheduled scaling policy
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time of the scheduled scaling policy
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBETIMERSCALINGPOLICIESREQUEST_H_
