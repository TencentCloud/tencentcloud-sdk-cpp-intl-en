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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHAGENTSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHAGENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/AgentInfo.h>
#include <tencentcloud/monitor/v20230616/model/PageByNumResult.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * ListAIWorkbenchAgents response structure.
                */
                class ListAIWorkbenchAgentsResponse : public AbstractModel
                {
                public:
                    ListAIWorkbenchAgentsResponse();
                    ~ListAIWorkbenchAgentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Agent list</p>
                     * @return Agents <p>Agent list</p>
                     * 
                     */
                    std::vector<AgentInfo> GetAgents() const;

                    /**
                     * 判断参数 Agents 是否已赋值
                     * @return Agents 是否已赋值
                     * 
                     */
                    bool AgentsHasBeenSet() const;

                    /**
                     * 获取<p>Pagination result</p>
                     * @return PageResult <p>Pagination result</p>
                     * 
                     */
                    PageByNumResult GetPageResult() const;

                    /**
                     * 判断参数 PageResult 是否已赋值
                     * @return PageResult 是否已赋值
                     * 
                     */
                    bool PageResultHasBeenSet() const;

                private:

                    /**
                     * <p>Agent list</p>
                     */
                    std::vector<AgentInfo> m_agents;
                    bool m_agentsHasBeenSet;

                    /**
                     * <p>Pagination result</p>
                     */
                    PageByNumResult m_pageResult;
                    bool m_pageResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHAGENTSRESPONSE_H_
