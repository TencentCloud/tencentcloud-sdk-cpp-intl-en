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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPARETASKSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPARETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeCompareTasks request structure.
                */
                class DescribeCompareTasksRequest : public AbstractModel
                {
                public:
                    DescribeCompareTasksRequest();
                    ~DescribeCompareTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Migration task ID
                     * @return JobId Migration task ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Migration task ID
                     * @param JobId Migration task ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Number of tasks to be displayed per page. Default value: `20`.
                     * @return Limit Number of tasks to be displayed per page. Default value: `20`.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of tasks to be displayed per page. Default value: `20`.
                     * @param Limit Number of tasks to be displayed per page. Default value: `20`.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param Offset Pagination offset
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Check task ID
                     * @return CompareTaskId Check task ID
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置Check task ID
                     * @param CompareTaskId Check task ID
                     */
                    void SetCompareTaskId(const std::string& _compareTaskId);

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     */
                    bool CompareTaskIdHasBeenSet() const;

                    /**
                     * 获取Data consistency check task status. Valid values: `created`, `readyRun`, `running`, `success`, `stopping`, `failed`, `canceled`.
                     * @return Status Data consistency check task status. Valid values: `created`, `readyRun`, `running`, `success`, `stopping`, `failed`, `canceled`.
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置Data consistency check task status. Valid values: `created`, `readyRun`, `running`, `success`, `stopping`, `failed`, `canceled`.
                     * @param Status Data consistency check task status. Valid values: `created`, `readyRun`, `running`, `success`, `stopping`, `failed`, `canceled`.
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Migration task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Number of tasks to be displayed per page. Default value: `20`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Check task ID
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * Data consistency check task status. Valid values: `created`, `readyRun`, `running`, `success`, `stopping`, `failed`, `canceled`.
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPARETASKSREQUEST_H_
