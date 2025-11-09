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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/QueryFilter.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeTasks request structure.
                */
                class DescribeTasksRequest : public AbstractModel
                {
                public:
                    DescribeTasksRequest();
                    ~DescribeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Starting value of the task start time.
                     * @return StartTimeBegin Starting value of the task start time.
                     * 
                     */
                    std::string GetStartTimeBegin() const;

                    /**
                     * 设置Starting value of the task start time.
                     * @param _startTimeBegin Starting value of the task start time.
                     * 
                     */
                    void SetStartTimeBegin(const std::string& _startTimeBegin);

                    /**
                     * 判断参数 StartTimeBegin 是否已赋值
                     * @return StartTimeBegin 是否已赋值
                     * 
                     */
                    bool StartTimeBeginHasBeenSet() const;

                    /**
                     * 获取End value of the task start time.
                     * @return StartTimeEnd End value of the task start time.
                     * 
                     */
                    std::string GetStartTimeEnd() const;

                    /**
                     * 设置End value of the task start time.
                     * @param _startTimeEnd End value of the task start time.
                     * 
                     */
                    void SetStartTimeEnd(const std::string& _startTimeEnd);

                    /**
                     * 判断参数 StartTimeEnd 是否已赋值
                     * @return StartTimeEnd 是否已赋值
                     * 
                     */
                    bool StartTimeEndHasBeenSet() const;

                    /**
                     * 获取Filtering conditions. Supported fields for searching: "ClusterId", "ClusterName", "InstanceId", "InstanceName", "Status", "TaskId", and "TaskType".
                     * @return Filters Filtering conditions. Supported fields for searching: "ClusterId", "ClusterName", "InstanceId", "InstanceName", "Status", "TaskId", and "TaskType".
                     * 
                     */
                    std::vector<QueryFilter> GetFilters() const;

                    /**
                     * 设置Filtering conditions. Supported fields for searching: "ClusterId", "ClusterName", "InstanceId", "InstanceName", "Status", "TaskId", and "TaskType".
                     * @param _filters Filtering conditions. Supported fields for searching: "ClusterId", "ClusterName", "InstanceId", "InstanceName", "Status", "TaskId", and "TaskType".
                     * 
                     */
                    void SetFilters(const std::vector<QueryFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Length of the list to be queried.
                     * @return Limit Length of the list to be queried.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Length of the list to be queried.
                     * @param _limit Length of the list to be queried.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset of the list to be queried.
                     * @return Offset Offset of the list to be queried.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset of the list to be queried.
                     * @param _offset Offset of the list to be queried.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Starting value of the task start time.
                     */
                    std::string m_startTimeBegin;
                    bool m_startTimeBeginHasBeenSet;

                    /**
                     * End value of the task start time.
                     */
                    std::string m_startTimeEnd;
                    bool m_startTimeEndHasBeenSet;

                    /**
                     * Filtering conditions. Supported fields for searching: "ClusterId", "ClusterName", "InstanceId", "InstanceName", "Status", "TaskId", and "TaskType".
                     */
                    std::vector<QueryFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Length of the list to be queried.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset of the list to be queried.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBETASKSREQUEST_H_
