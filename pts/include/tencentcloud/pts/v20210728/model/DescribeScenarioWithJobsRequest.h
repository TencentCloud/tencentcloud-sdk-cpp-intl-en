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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESCENARIOWITHJOBSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESCENARIOWITHJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/ScenarioRelatedJobsParams.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeScenarioWithJobs request structure.
                */
                class DescribeScenarioWithJobsRequest : public AbstractModel
                {
                public:
                    DescribeScenarioWithJobsRequest();
                    ~DescribeScenarioWithJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset. Default value is 0.
                     * @return Offset Offset. Default value is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value is 0.
                     * @param _offset Offset. Default value is 0.
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
                     * 获取Number of returns. Default value is 20, maximum is 100.
                     * @return Limit Number of returns. Default value is 20, maximum is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returns. Default value is 20, maximum is 100.
                     * @param _limit Number of returns. Default value is 20, maximum is 100.
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
                     * 获取Array of Project ID.
                     * @return ProjectIds Array of Project ID.
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置Array of Project ID.
                     * @param _projectIds Array of Project ID.
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Array of Scenario ID.
                     * @return ScenarioIds Array of Scenario ID.
                     * 
                     */
                    std::vector<std::string> GetScenarioIds() const;

                    /**
                     * 设置Array of Scenario ID.
                     * @param _scenarioIds Array of Scenario ID.
                     * 
                     */
                    void SetScenarioIds(const std::vector<std::string>& _scenarioIds);

                    /**
                     * 判断参数 ScenarioIds 是否已赋值
                     * @return ScenarioIds 是否已赋值
                     * 
                     */
                    bool ScenarioIdsHasBeenSet() const;

                    /**
                     * 获取Scenario Name.
                     * @return ScenarioName Scenario Name.
                     * 
                     */
                    std::string GetScenarioName() const;

                    /**
                     * 设置Scenario Name.
                     * @param _scenarioName Scenario Name.
                     * 
                     */
                    void SetScenarioName(const std::string& _scenarioName);

                    /**
                     * 判断参数 ScenarioName 是否已赋值
                     * @return ScenarioName 是否已赋值
                     * 
                     */
                    bool ScenarioNameHasBeenSet() const;

                    /**
                     * 获取Array of Scenario status.
                     * @return ScenarioStatus Array of Scenario status.
                     * 
                     */
                    int64_t GetScenarioStatus() const;

                    /**
                     * 设置Array of Scenario status.
                     * @param _scenarioStatus Array of Scenario status.
                     * 
                     */
                    void SetScenarioStatus(const int64_t& _scenarioStatus);

                    /**
                     * 判断参数 ScenarioStatus 是否已赋值
                     * @return ScenarioStatus 是否已赋值
                     * 
                     */
                    bool ScenarioStatusHasBeenSet() const;

                    /**
                     * 获取Column for sorting.
                     * @return OrderBy Column for sorting.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Column for sorting.
                     * @param _orderBy Column for sorting.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Whether in ascending order.
                     * @return Ascend Whether in ascending order.
                     * 
                     */
                    bool GetAscend() const;

                    /**
                     * 设置Whether in ascending order.
                     * @param _ascend Whether in ascending order.
                     * 
                     */
                    void SetAscend(const bool& _ascend);

                    /**
                     * 判断参数 Ascend 是否已赋值
                     * @return Ascend 是否已赋值
                     * 
                     */
                    bool AscendHasBeenSet() const;

                    /**
                     * 获取Parameters related to job.
                     * @return ScenarioRelatedJobsParams Parameters related to job.
                     * 
                     */
                    ScenarioRelatedJobsParams GetScenarioRelatedJobsParams() const;

                    /**
                     * 设置Parameters related to job.
                     * @param _scenarioRelatedJobsParams Parameters related to job.
                     * 
                     */
                    void SetScenarioRelatedJobsParams(const ScenarioRelatedJobsParams& _scenarioRelatedJobsParams);

                    /**
                     * 判断参数 ScenarioRelatedJobsParams 是否已赋值
                     * @return ScenarioRelatedJobsParams 是否已赋值
                     * 
                     */
                    bool ScenarioRelatedJobsParamsHasBeenSet() const;

                    /**
                     * 获取Whether to return the test script content of the scenario.
                     * @return IgnoreScript Whether to return the test script content of the scenario.
                     * 
                     */
                    bool GetIgnoreScript() const;

                    /**
                     * 设置Whether to return the test script content of the scenario.
                     * @param _ignoreScript Whether to return the test script content of the scenario.
                     * 
                     */
                    void SetIgnoreScript(const bool& _ignoreScript);

                    /**
                     * 判断参数 IgnoreScript 是否已赋值
                     * @return IgnoreScript 是否已赋值
                     * 
                     */
                    bool IgnoreScriptHasBeenSet() const;

                    /**
                     * 获取Whether to return test data file information of the scenario.
                     * @return IgnoreDataset Whether to return test data file information of the scenario.
                     * 
                     */
                    bool GetIgnoreDataset() const;

                    /**
                     * 设置Whether to return test data file information of the scenario.
                     * @param _ignoreDataset Whether to return test data file information of the scenario.
                     * 
                     */
                    void SetIgnoreDataset(const bool& _ignoreDataset);

                    /**
                     * 判断参数 IgnoreDataset 是否已赋值
                     * @return IgnoreDataset 是否已赋值
                     * 
                     */
                    bool IgnoreDatasetHasBeenSet() const;

                    /**
                     * 获取Scenario type, such as pts-http, pts-js, pts-jmeter.
                     * @return ScenarioType Scenario type, such as pts-http, pts-js, pts-jmeter.
                     * 
                     */
                    std::string GetScenarioType() const;

                    /**
                     * 设置Scenario type, such as pts-http, pts-js, pts-jmeter.
                     * @param _scenarioType Scenario type, such as pts-http, pts-js, pts-jmeter.
                     * 
                     */
                    void SetScenarioType(const std::string& _scenarioType);

                    /**
                     * 判断参数 ScenarioType 是否已赋值
                     * @return ScenarioType 是否已赋值
                     * 
                     */
                    bool ScenarioTypeHasBeenSet() const;

                    /**
                     * 获取Creator.
                     * @return Owner Creator.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Creator.
                     * @param _owner Creator.
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                private:

                    /**
                     * Offset. Default value is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returns. Default value is 20, maximum is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Array of Project ID.
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Array of Scenario ID.
                     */
                    std::vector<std::string> m_scenarioIds;
                    bool m_scenarioIdsHasBeenSet;

                    /**
                     * Scenario Name.
                     */
                    std::string m_scenarioName;
                    bool m_scenarioNameHasBeenSet;

                    /**
                     * Array of Scenario status.
                     */
                    int64_t m_scenarioStatus;
                    bool m_scenarioStatusHasBeenSet;

                    /**
                     * Column for sorting.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Whether in ascending order.
                     */
                    bool m_ascend;
                    bool m_ascendHasBeenSet;

                    /**
                     * Parameters related to job.
                     */
                    ScenarioRelatedJobsParams m_scenarioRelatedJobsParams;
                    bool m_scenarioRelatedJobsParamsHasBeenSet;

                    /**
                     * Whether to return the test script content of the scenario.
                     */
                    bool m_ignoreScript;
                    bool m_ignoreScriptHasBeenSet;

                    /**
                     * Whether to return test data file information of the scenario.
                     */
                    bool m_ignoreDataset;
                    bool m_ignoreDatasetHasBeenSet;

                    /**
                     * Scenario type, such as pts-http, pts-js, pts-jmeter.
                     */
                    std::string m_scenarioType;
                    bool m_scenarioTypeHasBeenSet;

                    /**
                     * Creator.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESCENARIOWITHJOBSREQUEST_H_
