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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEBATCHQUERYREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEBATCHQUERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/InternalMetricQuery.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeSampleBatchQuery request structure.
                */
                class DescribeSampleBatchQueryRequest : public AbstractModel
                {
                public:
                    DescribeSampleBatchQueryRequest();
                    ~DescribeSampleBatchQueryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Job ID.
                     * @return JobId Job ID.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Job ID.
                     * @param _jobId Job ID.
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Scenario ID.
                     * @return ScenarioId Scenario ID.
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置Scenario ID.
                     * @param _scenarioId Scenario ID.
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取Array of queries.
                     * @return Queries Array of queries.
                     * 
                     */
                    std::vector<InternalMetricQuery> GetQueries() const;

                    /**
                     * 设置Array of queries.
                     * @param _queries Array of queries.
                     * 
                     */
                    void SetQueries(const std::vector<InternalMetricQuery>& _queries);

                    /**
                     * 判断参数 Queries 是否已赋值
                     * @return Queries 是否已赋值
                     * 
                     */
                    bool QueriesHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * Job ID.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Scenario ID.
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * Array of queries.
                     */
                    std::vector<InternalMetricQuery> m_queries;
                    bool m_queriesHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLEBATCHQUERYREQUEST_H_
