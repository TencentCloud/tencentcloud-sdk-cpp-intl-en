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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSCLUSTERAGENTSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSCLUSTERAGENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAgentOverview.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusClusterAgents response structure.
                */
                class DescribePrometheusClusterAgentsResponse : public AbstractModel
                {
                public:
                    DescribePrometheusClusterAgentsResponse();
                    ~DescribePrometheusClusterAgentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Information of the associated cluster
                     * @return Agents Information of the associated cluster
                     * 
                     */
                    std::vector<PrometheusAgentOverview> GetAgents() const;

                    /**
                     * 判断参数 Agents 是否已赋值
                     * @return Agents 是否已赋值
                     * 
                     */
                    bool AgentsHasBeenSet() const;

                    /**
                     * 获取The total number of the associated clusters
                     * @return Total The total number of the associated clusters
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Whether the TMP instance is associated with the cluster for the first time. If so, you need to configure recording rules for it. This also applies if it has no default recording rule.
                     * @return IsFirstBind Whether the TMP instance is associated with the cluster for the first time. If so, you need to configure recording rules for it. This also applies if it has no default recording rule.
                     * 
                     */
                    bool GetIsFirstBind() const;

                    /**
                     * 判断参数 IsFirstBind 是否已赋值
                     * @return IsFirstBind 是否已赋值
                     * 
                     */
                    bool IsFirstBindHasBeenSet() const;

                private:

                    /**
                     * Information of the associated cluster
                     */
                    std::vector<PrometheusAgentOverview> m_agents;
                    bool m_agentsHasBeenSet;

                    /**
                     * The total number of the associated clusters
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Whether the TMP instance is associated with the cluster for the first time. If so, you need to configure recording rules for it. This also applies if it has no default recording rule.
                     */
                    bool m_isFirstBind;
                    bool m_isFirstBindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSCLUSTERAGENTSRESPONSE_H_
