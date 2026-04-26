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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONOVERVIEWNODE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONOVERVIEWNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationOverviewNode.h>
#include <tencentcloud/billing/v20180709/model/AllocationMonthOverviewDetail.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Monthly overview of a cost allocation bill
                */
                class AllocationOverviewNode : public AbstractModel
                {
                public:
                    AllocationOverviewNode();
                    ~AllocationOverviewNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cost allocation unit ID
                     * @return Id Cost allocation unit ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Cost allocation unit ID
                     * @param _id Cost allocation unit ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Name of a cost allocation unit
                     * @return Name Name of a cost allocation unit
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a cost allocation unit
                     * @param _name Name of a cost allocation unit
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Unique identifier of a cost allocation unit
                     * @return TreeNodeUniqKey Unique identifier of a cost allocation unit
                     * 
                     */
                    std::string GetTreeNodeUniqKey() const;

                    /**
                     * 设置Unique identifier of a cost allocation unit
                     * @param _treeNodeUniqKey Unique identifier of a cost allocation unit
                     * 
                     */
                    void SetTreeNodeUniqKey(const std::string& _treeNodeUniqKey);

                    /**
                     * 判断参数 TreeNodeUniqKey 是否已赋值
                     * @return TreeNodeUniqKey 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyHasBeenSet() const;

                    /**
                     * 获取Billing unit including a rule flag
0 - No rule exists.
1 - Both collection rules and allocation rules exist.
2 - Only collection rules exist.
3 - Only allocation rules exist.
                     * @return Symbol Billing unit including a rule flag
0 - No rule exists.
1 - Both collection rules and allocation rules exist.
2 - Only collection rules exist.
3 - Only allocation rules exist.
                     * 
                     */
                    uint64_t GetSymbol() const;

                    /**
                     * 设置Billing unit including a rule flag
0 - No rule exists.
1 - Both collection rules and allocation rules exist.
2 - Only collection rules exist.
3 - Only allocation rules exist.
                     * @param _symbol Billing unit including a rule flag
0 - No rule exists.
1 - Both collection rules and allocation rules exist.
2 - Only collection rules exist.
3 - Only allocation rules exist.
                     * 
                     */
                    void SetSymbol(const uint64_t& _symbol);

                    /**
                     * 判断参数 Symbol 是否已赋值
                     * @return Symbol 是否已赋值
                     * 
                     */
                    bool SymbolHasBeenSet() const;

                    /**
                     * 获取Detailed monthly overview of a sub-unit
                     * @return Children Detailed monthly overview of a sub-unit
                     * 
                     */
                    std::vector<AllocationOverviewNode> GetChildren() const;

                    /**
                     * 设置Detailed monthly overview of a sub-unit
                     * @param _children Detailed monthly overview of a sub-unit
                     * 
                     */
                    void SetChildren(const std::vector<AllocationOverviewNode>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                    /**
                     * 获取Monthly overview amount details of a cost allocation bill
                     * @return Detail Monthly overview amount details of a cost allocation bill
                     * 
                     */
                    AllocationMonthOverviewDetail GetDetail() const;

                    /**
                     * 设置Monthly overview amount details of a cost allocation bill
                     * @param _detail Monthly overview amount details of a cost allocation bill
                     * 
                     */
                    void SetDetail(const AllocationMonthOverviewDetail& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * Cost allocation unit ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Name of a cost allocation unit
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Unique identifier of a cost allocation unit
                     */
                    std::string m_treeNodeUniqKey;
                    bool m_treeNodeUniqKeyHasBeenSet;

                    /**
                     * Billing unit including a rule flag
0 - No rule exists.
1 - Both collection rules and allocation rules exist.
2 - Only collection rules exist.
3 - Only allocation rules exist.
                     */
                    uint64_t m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * Detailed monthly overview of a sub-unit
                     */
                    std::vector<AllocationOverviewNode> m_children;
                    bool m_childrenHasBeenSet;

                    /**
                     * Monthly overview amount details of a cost allocation bill
                     */
                    AllocationMonthOverviewDetail m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONOVERVIEWNODE_H_
