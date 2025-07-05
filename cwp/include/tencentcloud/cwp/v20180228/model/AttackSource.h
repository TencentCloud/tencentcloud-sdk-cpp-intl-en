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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AttackSourceNode.h>
#include <tencentcloud/cwp/v20180228/model/AttackSourceEdge.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Attack backtracking
                */
                class AttackSource : public AbstractModel
                {
                public:
                    AttackSource();
                    ~AttackSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attack backtracking node description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nodes Attack backtracking node description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AttackSourceNode> GetNodes() const;

                    /**
                     * 设置Attack backtracking node description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodes Attack backtracking node description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodes(const std::vector<AttackSourceNode>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取Attack backtracking node path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Edges Attack backtracking node path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AttackSourceEdge> GetEdges() const;

                    /**
                     * 设置Attack backtracking node path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _edges Attack backtracking node path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEdges(const std::vector<AttackSourceEdge>& _edges);

                    /**
                     * 判断参数 Edges 是否已赋值
                     * @return Edges 是否已赋值
                     * 
                     */
                    bool EdgesHasBeenSet() const;

                    /**
                     * 获取Parameters for requesting details on node-related events
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventInfoParam Parameters for requesting details on node-related events
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventInfoParam() const;

                    /**
                     * 设置Parameters for requesting details on node-related events
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventInfoParam Parameters for requesting details on node-related events
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventInfoParam(const std::string& _eventInfoParam);

                    /**
                     * 判断参数 EventInfoParam 是否已赋值
                     * @return EventInfoParam 是否已赋值
                     * 
                     */
                    bool EventInfoParamHasBeenSet() const;

                private:

                    /**
                     * Attack backtracking node description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AttackSourceNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * Attack backtracking node path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AttackSourceEdge> m_edges;
                    bool m_edgesHasBeenSet;

                    /**
                     * Parameters for requesting details on node-related events
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventInfoParam;
                    bool m_eventInfoParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCE_H_
