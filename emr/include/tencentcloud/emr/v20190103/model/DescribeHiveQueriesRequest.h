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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHIVEQUERIESREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHIVEQUERIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeHiveQueries request structure.
                */
                class DescribeHiveQueriesRequest : public AbstractModel
                {
                public:
                    DescribeHiveQueriesRequest();
                    ~DescribeHiveQueriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return InstanceId Cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _instanceId Cluster ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time (s).
                     * @return StartTime Start time (s).
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start time (s).
                     * @param _startTime Start time (s).
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
                     * 获取End time (s). The difference between the values of EndTime and StartTime cannot exceed 86,400 seconds (one day).
                     * @return EndTime End time (s). The difference between the values of EndTime and StartTime cannot exceed 86,400 seconds (one day).
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End time (s). The difference between the values of EndTime and StartTime cannot exceed 86,400 seconds (one day).
                     * @param _endTime End time (s). The difference between the values of EndTime and StartTime cannot exceed 86,400 seconds (one day).
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Starting offset for pages, starting from 0.
                     * @return Offset Starting offset for pages, starting from 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting offset for pages, starting from 0.
                     * @param _offset Starting offset for pages, starting from 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Value range: [1, 100].
                     * @return Limit Number of entries per page. Value range: [1, 100].
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Value range: [1, 100].
                     * @param _limit Number of entries per page. Value range: [1, 100].
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Execution status, for example, ERROR.
                     * @return State Execution status, for example, ERROR.
                     * 
                     */
                    std::vector<std::string> GetState() const;

                    /**
                     * 设置Execution status, for example, ERROR.
                     * @param _state Execution status, for example, ERROR.
                     * 
                     */
                    void SetState(const std::vector<std::string>& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Time point earlier than the end time.
                     * @return EndTimeGte Time point earlier than the end time.
                     * 
                     */
                    uint64_t GetEndTimeGte() const;

                    /**
                     * 设置Time point earlier than the end time.
                     * @param _endTimeGte Time point earlier than the end time.
                     * 
                     */
                    void SetEndTimeGte(const uint64_t& _endTimeGte);

                    /**
                     * 判断参数 EndTimeGte 是否已赋值
                     * @return EndTimeGte 是否已赋值
                     * 
                     */
                    bool EndTimeGteHasBeenSet() const;

                    /**
                     * 获取Time point later than the end time.
                     * @return EndTimeLte Time point later than the end time.
                     * 
                     */
                    uint64_t GetEndTimeLte() const;

                    /**
                     * 设置Time point later than the end time.
                     * @param _endTimeLte Time point later than the end time.
                     * 
                     */
                    void SetEndTimeLte(const uint64_t& _endTimeLte);

                    /**
                     * 判断参数 EndTimeLte 是否已赋值
                     * @return EndTimeLte 是否已赋值
                     * 
                     */
                    bool EndTimeLteHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time (s).
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time (s). The difference between the values of EndTime and StartTime cannot exceed 86,400 seconds (one day).
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Starting offset for pages, starting from 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page. Value range: [1, 100].
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Execution status, for example, ERROR.
                     */
                    std::vector<std::string> m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Time point earlier than the end time.
                     */
                    uint64_t m_endTimeGte;
                    bool m_endTimeGteHasBeenSet;

                    /**
                     * Time point later than the end time.
                     */
                    uint64_t m_endTimeLte;
                    bool m_endTimeLteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHIVEQUERIESREQUEST_H_
