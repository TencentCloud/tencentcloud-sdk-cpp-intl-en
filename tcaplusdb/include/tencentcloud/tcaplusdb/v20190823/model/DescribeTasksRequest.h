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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/Filter.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
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
                     * 获取List of IDs of clusters where the tasks to be queried reside
                     * @return ClusterIds List of IDs of clusters where the tasks to be queried reside
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置List of IDs of clusters where the tasks to be queried reside
                     * @param _clusterIds List of IDs of clusters where the tasks to be queried reside
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取List of IDs of tasks to be queried
                     * @return TaskIds List of IDs of tasks to be queried
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置List of IDs of tasks to be queried
                     * @param _taskIds List of IDs of tasks to be queried
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取Filter. Valid values: Content, TaskType, Operator, Time
                     * @return Filters Filter. Valid values: Content, TaskType, Operator, Time
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. Valid values: Content, TaskType, Operator, Time
                     * @param _filters Filter. Valid values: Content, TaskType, Operator, Time
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Query list offset
                     * @return Offset Query list offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Query list offset
                     * @param _offset Query list offset
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
                     * 获取Number of returned results in query list
                     * @return Limit Number of returned results in query list
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results in query list
                     * @param _limit Number of returned results in query list
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
                     * List of IDs of clusters where the tasks to be queried reside
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * List of IDs of tasks to be queried
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Filter. Valid values: Content, TaskType, Operator, Time
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Query list offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results in query list
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBETASKSREQUEST_H_
