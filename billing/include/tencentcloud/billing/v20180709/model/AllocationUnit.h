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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONUNIT_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Specifies the ID and name of a cost allocation unit.
                */
                class AllocationUnit : public AbstractModel
                {
                public:
                    AllocationUnit();
                    ~AllocationUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cost allocation unit ID.
                     * @return NodeId Cost allocation unit ID.
                     * 
                     */
                    uint64_t GetNodeId() const;

                    /**
                     * 设置Cost allocation unit ID.
                     * @param _nodeId Cost allocation unit ID.
                     * 
                     */
                    void SetNodeId(const uint64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Specifies the name of a cost allocation rule.
                     * @return TreeNodeUniqKeyName Specifies the name of a cost allocation rule.
                     * 
                     */
                    std::string GetTreeNodeUniqKeyName() const;

                    /**
                     * 设置Specifies the name of a cost allocation rule.
                     * @param _treeNodeUniqKeyName Specifies the name of a cost allocation rule.
                     * 
                     */
                    void SetTreeNodeUniqKeyName(const std::string& _treeNodeUniqKeyName);

                    /**
                     * 判断参数 TreeNodeUniqKeyName 是否已赋值
                     * @return TreeNodeUniqKeyName 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyNameHasBeenSet() const;

                private:

                    /**
                     * Cost allocation unit ID.
                     */
                    uint64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Specifies the name of a cost allocation rule.
                     */
                    std::string m_treeNodeUniqKeyName;
                    bool m_treeNodeUniqKeyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONUNIT_H_
