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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONUNITDETAILRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONUNITDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAllocationUnitDetail response structure.
                */
                class DescribeAllocationUnitDetailResponse : public AbstractModel
                {
                public:
                    DescribeAllocationUnitDetailResponse();
                    ~DescribeAllocationUnitDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of a cost allocation unit.
                     * @return Id ID of a cost allocation unit.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Associated UIN of the cost allocation unit.
                     * @return Uin Associated UIN of the cost allocation unit.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Specifies the name of a cost allocation unit.
                     * @return Name Specifies the name of a cost allocation unit.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Cost allocation unit parent node ID.
                     * @return ParentId Cost allocation unit parent node ID.
                     * 
                     */
                    uint64_t GetParentId() const;

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取Source organization name.
                     * @return SourceName Source organization name.
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取Source organization ID.
                     * @return SourceId Source organization ID.
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取Specifies remark description.
                     * @return Remark Specifies remark description.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Cost allocation unit identifier.
                     * @return TreeNodeUniqKey Cost allocation unit identifier.
                     * 
                     */
                    std::string GetTreeNodeUniqKey() const;

                    /**
                     * 判断参数 TreeNodeUniqKey 是否已赋值
                     * @return TreeNodeUniqKey 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyHasBeenSet() const;

                    /**
                     * 获取If a cost allocation unit is set with an collection rule, return the collection rule ID. if no collection rule is set, do not return.
                     * @return RuleId If a cost allocation unit is set with an collection rule, return the collection rule ID. if no collection rule is set, do not return.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * ID of a cost allocation unit.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Associated UIN of the cost allocation unit.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Specifies the name of a cost allocation unit.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Cost allocation unit parent node ID.
                     */
                    uint64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * Source organization name.
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * Source organization ID.
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * Specifies remark description.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Cost allocation unit identifier.
                     */
                    std::string m_treeNodeUniqKey;
                    bool m_treeNodeUniqKeyHasBeenSet;

                    /**
                     * If a cost allocation unit is set with an collection rule, return the collection rule ID. if no collection rule is set, do not return.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONUNITDETAILRESPONSE_H_
