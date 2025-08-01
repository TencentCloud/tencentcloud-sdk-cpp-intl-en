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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCENODEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCENODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Query the current node information of the real-time task instance
                */
                class InstanceNodeInfo : public AbstractModel
                {
                public:
                    InstanceNodeInfo();
                    ~InstanceNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Read from node SOURCE Write to node SINK
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return NodeType Read from node SOURCE Write to node SINK
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Read from node SOURCE Write to node SINK
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _nodeType Read from node SOURCE Write to node SINK
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Node IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return NodeId Node IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _nodeId Node IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Node nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return NodeName Node nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _nodeName Node nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                private:

                    /**
                     * Read from node SOURCE Write to node SINK
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Node IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Node nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCENODEINFO_H_
