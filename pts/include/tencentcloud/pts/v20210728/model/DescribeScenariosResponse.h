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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESCENARIOSRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESCENARIOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Scenario.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeScenarios response structure.
                */
                class DescribeScenariosResponse : public AbstractModel
                {
                public:
                    DescribeScenariosResponse();
                    ~DescribeScenariosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Scenario list.

Note: This field may return null, indicating that no valid value is found.
                     * @return ScenarioSet Scenario list.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<Scenario> GetScenarioSet() const;

                    /**
                     * 判断参数 ScenarioSet 是否已赋值
                     * @return ScenarioSet 是否已赋值
                     * 
                     */
                    bool ScenarioSetHasBeenSet() const;

                    /**
                     * 获取Total number of scenarios.
                     * @return Total Total number of scenarios.
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
                     * Scenario list.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<Scenario> m_scenarioSet;
                    bool m_scenarioSetHasBeenSet;

                    /**
                     * Total number of scenarios.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESCENARIOSRESPONSE_H_
