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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEDATATASKREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEDATATASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeLifecycleDataTask request structure.
                */
                class DescribeLifecycleDataTaskRequest : public AbstractModel
                {
                public:
                    DescribeLifecycleDataTaskRequest();
                    ~DescribeLifecycleDataTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time. must be earlier than EndTime. only supports querying task data within the most recent 3 months.
                     * @return StartTime Start time. must be earlier than EndTime. only supports querying task data within the most recent 3 months.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time. must be earlier than EndTime. only supports querying task data within the most recent 3 months.
                     * @param _startTime Start time. must be earlier than EndTime. only supports querying task data within the most recent 3 months.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time. must be later than StartTime. only supports querying task data within the most recent 3 months.
                     * @return EndTime End time. must be later than StartTime. only supports querying task data within the most recent 3 months.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. must be later than StartTime. only supports querying task data within the most recent 3 months.
                     * @param _endTime End time. must be later than StartTime. only supports querying task data within the most recent 3 months.
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
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Offset paging number	
                     * @return Offset Offset paging number	
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset paging number	
                     * @param _offset Offset paging number	
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
                     * 获取Limit page size	
                     * @return Limit Limit page size	
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit page size	
                     * @param _limit Limit page size	
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
                     * 获取Filter conditions, TaskName, FileSystemId, Type.
                     * @return Filters Filter conditions, TaskName, FileSystemId, Type.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions, TaskName, FileSystemId, Type.
                     * @param _filters Filter conditions, TaskName, FileSystemId, Type.
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
                     * 获取File system version; v3.1: pcfs/hifs v4.0: Turbo.
                     * @return CfsVersion File system version; v3.1: pcfs/hifs v4.0: Turbo.
                     * 
                     */
                    std::string GetCfsVersion() const;

                    /**
                     * 设置File system version; v3.1: pcfs/hifs v4.0: Turbo.
                     * @param _cfsVersion File system version; v3.1: pcfs/hifs v4.0: Turbo.
                     * 
                     */
                    void SetCfsVersion(const std::string& _cfsVersion);

                    /**
                     * 判断参数 CfsVersion 是否已赋值
                     * @return CfsVersion 是否已赋值
                     * 
                     */
                    bool CfsVersionHasBeenSet() const;

                private:

                    /**
                     * Start time. must be earlier than EndTime. only supports querying task data within the most recent 3 months.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. must be later than StartTime. only supports querying task data within the most recent 3 months.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Offset paging number	
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit page size	
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter conditions, TaskName, FileSystemId, Type.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * File system version; v3.1: pcfs/hifs v4.0: Turbo.
                     */
                    std::string m_cfsVersion;
                    bool m_cfsVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEDATATASKREQUEST_H_
