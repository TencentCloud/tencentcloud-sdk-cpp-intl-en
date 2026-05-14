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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETOPOLOGYNEWRESPONSE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETOPOLOGYNEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/TopologyNode.h>
#include <tencentcloud/apm/v20210622/model/TopologyEdgeNew.h>
#include <tencentcloud/apm/v20210622/model/SelectorView.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTopologyNew response structure.
                */
                class DescribeTopologyNewResponse : public AbstractModel
                {
                public:
                    DescribeTopologyNewResponse();
                    ~DescribeTopologyNewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Node collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nodes Node collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TopologyNode> GetNodes() const;

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取Edge set.
                     * @return Edges Edge set.
                     * 
                     */
                    std::vector<TopologyEdgeNew> GetEdges() const;

                    /**
                     * 判断参数 Edges 是否已赋值
                     * @return Edges 是否已赋值
                     * 
                     */
                    bool EdgesHasBeenSet() const;

                    /**
                     * 获取Whether the topology map is modified
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopologyModifyFlag Whether the topology map is modified
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTopologyModifyFlag() const;

                    /**
                     * 判断参数 TopologyModifyFlag 是否已赋值
                     * @return TopologyModifyFlag 是否已赋值
                     * 
                     */
                    bool TopologyModifyFlagHasBeenSet() const;

                    /**
                     * 获取Number of nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Selectors Number of nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SelectorView GetSelectors() const;

                    /**
                     * 判断参数 Selectors 是否已赋值
                     * @return Selectors 是否已赋值
                     * 
                     */
                    bool SelectorsHasBeenSet() const;

                private:

                    /**
                     * Node collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TopologyNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * Edge set.
                     */
                    std::vector<TopologyEdgeNew> m_edges;
                    bool m_edgesHasBeenSet;

                    /**
                     * Whether the topology map is modified
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_topologyModifyFlag;
                    bool m_topologyModifyFlagHasBeenSet;

                    /**
                     * Number of nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SelectorView m_selectors;
                    bool m_selectorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETOPOLOGYNEWRESPONSE_H_
