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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIOWITHJOBS_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIOWITHJOBS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Scenario.h>
#include <tencentcloud/pts/v20210728/model/Job.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Scenario with jobs.
                */
                class ScenarioWithJobs : public AbstractModel
                {
                public:
                    ScenarioWithJobs();
                    ~ScenarioWithJobs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scenario.

Note: This field may return null, indicating that no valid value is found.
                     * @return Scenario Scenario.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    Scenario GetScenario() const;

                    /**
                     * 设置Scenario.

Note: This field may return null, indicating that no valid value is found.
                     * @param _scenario Scenario.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetScenario(const Scenario& _scenario);

                    /**
                     * 判断参数 Scenario 是否已赋值
                     * @return Scenario 是否已赋值
                     * 
                     */
                    bool ScenarioHasBeenSet() const;

                    /**
                     * 获取Job list.

Note: This field may return null, indicating that no valid value is found.
                     * @return Jobs Job list.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<Job> GetJobs() const;

                    /**
                     * 设置Job list.

Note: This field may return null, indicating that no valid value is found.
                     * @param _jobs Job list.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetJobs(const std::vector<Job>& _jobs);

                    /**
                     * 判断参数 Jobs 是否已赋值
                     * @return Jobs 是否已赋值
                     * 
                     */
                    bool JobsHasBeenSet() const;

                private:

                    /**
                     * Scenario.

Note: This field may return null, indicating that no valid value is found.
                     */
                    Scenario m_scenario;
                    bool m_scenarioHasBeenSet;

                    /**
                     * Job list.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<Job> m_jobs;
                    bool m_jobsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIOWITHJOBS_H_
