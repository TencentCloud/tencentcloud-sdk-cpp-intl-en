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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONJOBSRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONJOBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/JobItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeMigrationJobs response structure.
                */
                class DescribeMigrationJobsResponse : public AbstractModel
                {
                public:
                    DescribeMigrationJobsResponse();
                    ~DescribeMigrationJobsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of migration tasks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Number of migration tasks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Migration task list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobList Migration task list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<JobItem> GetJobList() const;

                    /**
                     * 判断参数 JobList 是否已赋值
                     * @return JobList 是否已赋值
                     * 
                     */
                    bool JobListHasBeenSet() const;

                private:

                    /**
                     * Number of migration tasks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Migration task list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<JobItem> m_jobList;
                    bool m_jobListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONJOBSRESPONSE_H_
