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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RUNNODEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RUNNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/InvokeAPI.h>
#include <tencentcloud/lke/v20231130/model/ValueInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Node information
                */
                class RunNodeInfo : public AbstractModel
                {
                public:
                    RunNodeInfo();
                    ~RunNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node type, 0: unspecified; 1: start node; 2: api node; 3: inquiry node; 4: answer node.
                     * @return NodeType Node type, 0: unspecified; 1: start node; 2: api node; 3: inquiry node; 4: answer node.
                     * 
                     */
                    int64_t GetNodeType() const;

                    /**
                     * 设置Node type, 0: unspecified; 1: start node; 2: api node; 3: inquiry node; 4: answer node.
                     * @param _nodeType Node type, 0: unspecified; 1: start node; 2: api node; 3: inquiry node; 4: answer node.
                     * 
                     */
                    void SetNodeType(const int64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Node ID.
                     * @return NodeId Node ID.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node ID.
                     * @param _nodeId Node ID.
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
                     * 获取Node name.
                     * @return NodeName Node name.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name.
                     * @param _nodeName Node name.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Requested API.
                     * @return InvokeApi Requested API.
                     * 
                     */
                    InvokeAPI GetInvokeApi() const;

                    /**
                     * 设置Requested API.
                     * @param _invokeApi Requested API.
                     * 
                     */
                    void SetInvokeApi(const InvokeAPI& _invokeApi);

                    /**
                     * 判断参数 InvokeApi 是否已赋值
                     * @return InvokeApi 是否已赋值
                     * 
                     */
                    bool InvokeApiHasBeenSet() const;

                    /**
                     * 获取Values of all slots of the current node, key: SlotID. Return an Null even if there is no value.
                     * @return SlotValues Values of all slots of the current node, key: SlotID. Return an Null even if there is no value.
                     * 
                     */
                    std::vector<ValueInfo> GetSlotValues() const;

                    /**
                     * 设置Values of all slots of the current node, key: SlotID. Return an Null even if there is no value.
                     * @param _slotValues Values of all slots of the current node, key: SlotID. Return an Null even if there is no value.
                     * 
                     */
                    void SetSlotValues(const std::vector<ValueInfo>& _slotValues);

                    /**
                     * 判断参数 SlotValues 是否已赋值
                     * @return SlotValues 是否已赋值
                     * 
                     */
                    bool SlotValuesHasBeenSet() const;

                private:

                    /**
                     * Node type, 0: unspecified; 1: start node; 2: api node; 3: inquiry node; 4: answer node.
                     */
                    int64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Node ID.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Node name.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Requested API.
                     */
                    InvokeAPI m_invokeApi;
                    bool m_invokeApiHasBeenSet;

                    /**
                     * Values of all slots of the current node, key: SlotID. Return an Null even if there is no value.
                     */
                    std::vector<ValueInfo> m_slotValues;
                    bool m_slotValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RUNNODEINFO_H_
