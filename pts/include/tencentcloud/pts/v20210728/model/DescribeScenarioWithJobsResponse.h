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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESCENARIOWITHJOBSRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESCENARIOWITHJOBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/ScenarioWithJobs.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeScenarioWithJobs response structure.
                */
                class DescribeScenarioWithJobsResponse : public AbstractModel
                {
                public:
                    DescribeScenarioWithJobsResponse();
                    ~DescribeScenarioWithJobsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Scenario configuration with related jobs.

Note: This field may return null, indicating that no valid value is found.
                     * @return ScenarioWithJobsSet Scenario configuration with related jobs.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<ScenarioWithJobs> GetScenarioWithJobsSet() const;

                    /**
                     * 判断参数 ScenarioWithJobsSet 是否已赋值
                     * @return ScenarioWithJobsSet 是否已赋值
                     * 
                     */
                    bool ScenarioWithJobsSetHasBeenSet() const;

                    /**
                     * 获取Total Scenarios.
                     * @return Total Total Scenarios.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Scenario configuration with related jobs.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<ScenarioWithJobs> m_scenarioWithJobsSet;
                    bool m_scenarioWithJobsSetHasBeenSet;

                    /**
                     * Total Scenarios.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESCENARIOWITHJOBSRESPONSE_H_
