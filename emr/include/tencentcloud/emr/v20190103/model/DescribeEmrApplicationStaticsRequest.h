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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMRAPPLICATIONSTATICSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMRAPPLICATIONSTATICSREQUEST_H_

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
                * DescribeEmrApplicationStatics request structure.
                */
                class DescribeEmrApplicationStaticsRequest : public AbstractModel
                {
                public:
                    DescribeEmrApplicationStaticsRequest();
                    ~DescribeEmrApplicationStaticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return InstanceId Cluster ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID
                     * @param InstanceId Cluster ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time in the format of timestamp. Unit: seconds.
                     * @return StartTime Start time in the format of timestamp. Unit: seconds.
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time in the format of timestamp. Unit: seconds.
                     * @param StartTime Start time in the format of timestamp. Unit: seconds.
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time in the format of timestamp. Unit: seconds.
                     * @return EndTime End time in the format of timestamp. Unit: seconds.
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time in the format of timestamp. Unit: seconds.
                     * @param EndTime End time in the format of timestamp. Unit: seconds.
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Queue name used for filtering
                     * @return Queues Queue name used for filtering
                     */
                    std::vector<std::string> GetQueues() const;

                    /**
                     * 设置Queue name used for filtering
                     * @param Queues Queue name used for filtering
                     */
                    void SetQueues(const std::vector<std::string>& _queues);

                    /**
                     * 判断参数 Queues 是否已赋值
                     * @return Queues 是否已赋值
                     */
                    bool QueuesHasBeenSet() const;

                    /**
                     * 获取Username used for filtering
                     * @return Users Username used for filtering
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置Username used for filtering
                     * @param Users Username used for filtering
                     */
                    void SetUsers(const std::vector<std::string>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取Application type used for filtering
                     * @return ApplicationTypes Application type used for filtering
                     */
                    std::vector<std::string> GetApplicationTypes() const;

                    /**
                     * 设置Application type used for filtering
                     * @param ApplicationTypes Application type used for filtering
                     */
                    void SetApplicationTypes(const std::vector<std::string>& _applicationTypes);

                    /**
                     * 判断参数 ApplicationTypes 是否已赋值
                     * @return ApplicationTypes 是否已赋值
                     */
                    bool ApplicationTypesHasBeenSet() const;

                    /**
                     * 获取Group field. Valid values: `queue`, `user`, and `applicationType`.
                     * @return GroupBy Group field. Valid values: `queue`, `user`, and `applicationType`.
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置Group field. Valid values: `queue`, `user`, and `applicationType`.
                     * @param GroupBy Group field. Valid values: `queue`, `user`, and `applicationType`.
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取Sorting field. Valid values: `sumMemorySeconds`, `sumVCoreSeconds`, `sumHDFSBytesWritten`, and `sumHDFSBytesRead`.
                     * @return OrderBy Sorting field. Valid values: `sumMemorySeconds`, `sumVCoreSeconds`, `sumHDFSBytesWritten`, and `sumHDFSBytesRead`.
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. Valid values: `sumMemorySeconds`, `sumVCoreSeconds`, `sumHDFSBytesWritten`, and `sumHDFSBytesRead`.
                     * @param OrderBy Sorting field. Valid values: `sumMemorySeconds`, `sumVCoreSeconds`, `sumHDFSBytesWritten`, and `sumHDFSBytesRead`.
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Order type. Valid values: `0` (descending) and `1`(ascending).
                     * @return IsAsc Order type. Valid values: `0` (descending) and `1`(ascending).
                     */
                    int64_t GetIsAsc() const;

                    /**
                     * 设置Order type. Valid values: `0` (descending) and `1`(ascending).
                     * @param IsAsc Order type. Valid values: `0` (descending) and `1`(ascending).
                     */
                    void SetIsAsc(const int64_t& _isAsc);

                    /**
                     * 判断参数 IsAsc 是否已赋值
                     * @return IsAsc 是否已赋值
                     */
                    bool IsAscHasBeenSet() const;

                    /**
                     * 获取Page number
                     * @return Offset Page number
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number
                     * @param Offset Page number
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Page limit
                     * @return Limit Page limit
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Page limit
                     * @param Limit Page limit
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time in the format of timestamp. Unit: seconds.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in the format of timestamp. Unit: seconds.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Queue name used for filtering
                     */
                    std::vector<std::string> m_queues;
                    bool m_queuesHasBeenSet;

                    /**
                     * Username used for filtering
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * Application type used for filtering
                     */
                    std::vector<std::string> m_applicationTypes;
                    bool m_applicationTypesHasBeenSet;

                    /**
                     * Group field. Valid values: `queue`, `user`, and `applicationType`.
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * Sorting field. Valid values: `sumMemorySeconds`, `sumVCoreSeconds`, `sumHDFSBytesWritten`, and `sumHDFSBytesRead`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Order type. Valid values: `0` (descending) and `1`(ascending).
                     */
                    int64_t m_isAsc;
                    bool m_isAscHasBeenSet;

                    /**
                     * Page number
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMRAPPLICATIONSTATICSREQUEST_H_
