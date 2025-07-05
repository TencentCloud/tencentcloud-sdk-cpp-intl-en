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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULEEXPRESSION_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULEEXPRESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationRuleExpression.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Cost allocation regular expression.
                */
                class AllocationRuleExpression : public AbstractModel
                {
                public:
                    AllocationRuleExpression();
                    ~AllocationRuleExpression() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RuleKey: cost allocation dimension.
Enumeration value.
ownerUin - user UIN.
Operator UIN.
businessCode - product-level code.
productCode - 2-tier product code.
itemCode - 4-tier product code.
projectId - specifies the project ID.
regionId.
resourceId - specifies the resource ID.
tag - tag key-value pair.
payMode - billing mode.
instanceType - instance type.
actionType - transaction type.
                     * @return RuleKey RuleKey: cost allocation dimension.
Enumeration value.
ownerUin - user UIN.
Operator UIN.
businessCode - product-level code.
productCode - 2-tier product code.
itemCode - 4-tier product code.
projectId - specifies the project ID.
regionId.
resourceId - specifies the resource ID.
tag - tag key-value pair.
payMode - billing mode.
instanceType - instance type.
actionType - transaction type.
                     * 
                     */
                    std::string GetRuleKey() const;

                    /**
                     * 设置RuleKey: cost allocation dimension.
Enumeration value.
ownerUin - user UIN.
Operator UIN.
businessCode - product-level code.
productCode - 2-tier product code.
itemCode - 4-tier product code.
projectId - specifies the project ID.
regionId.
resourceId - specifies the resource ID.
tag - tag key-value pair.
payMode - billing mode.
instanceType - instance type.
actionType - transaction type.
                     * @param _ruleKey RuleKey: cost allocation dimension.
Enumeration value.
ownerUin - user UIN.
Operator UIN.
businessCode - product-level code.
productCode - 2-tier product code.
itemCode - 4-tier product code.
projectId - specifies the project ID.
regionId.
resourceId - specifies the resource ID.
tag - tag key-value pair.
payMode - billing mode.
instanceType - instance type.
actionType - transaction type.
                     * 
                     */
                    void SetRuleKey(const std::string& _ruleKey);

                    /**
                     * 判断参数 RuleKey 是否已赋值
                     * @return RuleKey 是否已赋值
                     * 
                     */
                    bool RuleKeyHasBeenSet() const;

                    /**
                     * 获取Specifies the dimension rules for cost allocation.
Enumeration value.
in.
not in.
                     * @return Operator Specifies the dimension rules for cost allocation.
Enumeration value.
in.
not in.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Specifies the dimension rules for cost allocation.
Enumeration value.
in.
not in.
                     * @param _operator Specifies the dimension rules for cost allocation.
Enumeration value.
in.
not in.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Cost allocation dimension value. for example, when RuleKey is businessCode, ["p_cbs","p_sqlserver"] indicates the cost of products at the "p_cbs","p_sqlserver" level.
                     * @return RuleValue Cost allocation dimension value. for example, when RuleKey is businessCode, ["p_cbs","p_sqlserver"] indicates the cost of products at the "p_cbs","p_sqlserver" level.
                     * 
                     */
                    std::vector<std::string> GetRuleValue() const;

                    /**
                     * 设置Cost allocation dimension value. for example, when RuleKey is businessCode, ["p_cbs","p_sqlserver"] indicates the cost of products at the "p_cbs","p_sqlserver" level.
                     * @param _ruleValue Cost allocation dimension value. for example, when RuleKey is businessCode, ["p_cbs","p_sqlserver"] indicates the cost of products at the "p_cbs","p_sqlserver" level.
                     * 
                     */
                    void SetRuleValue(const std::vector<std::string>& _ruleValue);

                    /**
                     * 判断参数 RuleValue 是否已赋值
                     * @return RuleValue 是否已赋值
                     * 
                     */
                    bool RuleValueHasBeenSet() const;

                    /**
                     * 获取Logical connection for cost allocation, enumeration values are as follows:.
Create and bind a policy query an instance reset the access password of an instance.
Create and bind a policy query an instance reset the access password of an instance.
                     * @return Connectors Logical connection for cost allocation, enumeration values are as follows:.
Create and bind a policy query an instance reset the access password of an instance.
Create and bind a policy query an instance reset the access password of an instance.
                     * 
                     */
                    std::string GetConnectors() const;

                    /**
                     * 设置Logical connection for cost allocation, enumeration values are as follows:.
Create and bind a policy query an instance reset the access password of an instance.
Create and bind a policy query an instance reset the access password of an instance.
                     * @param _connectors Logical connection for cost allocation, enumeration values are as follows:.
Create and bind a policy query an instance reset the access password of an instance.
Create and bind a policy query an instance reset the access password of an instance.
                     * 
                     */
                    void SetConnectors(const std::string& _connectors);

                    /**
                     * 判断参数 Connectors 是否已赋值
                     * @return Connectors 是否已赋值
                     * 
                     */
                    bool ConnectorsHasBeenSet() const;

                    /**
                     * 获取Nested rule.
                     * @return Children Nested rule.
                     * 
                     */
                    std::vector<AllocationRuleExpression> GetChildren() const;

                    /**
                     * 设置Nested rule.
                     * @param _children Nested rule.
                     * 
                     */
                    void SetChildren(const std::vector<AllocationRuleExpression>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * RuleKey: cost allocation dimension.
Enumeration value.
ownerUin - user UIN.
Operator UIN.
businessCode - product-level code.
productCode - 2-tier product code.
itemCode - 4-tier product code.
projectId - specifies the project ID.
regionId.
resourceId - specifies the resource ID.
tag - tag key-value pair.
payMode - billing mode.
instanceType - instance type.
actionType - transaction type.
                     */
                    std::string m_ruleKey;
                    bool m_ruleKeyHasBeenSet;

                    /**
                     * Specifies the dimension rules for cost allocation.
Enumeration value.
in.
not in.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Cost allocation dimension value. for example, when RuleKey is businessCode, ["p_cbs","p_sqlserver"] indicates the cost of products at the "p_cbs","p_sqlserver" level.
                     */
                    std::vector<std::string> m_ruleValue;
                    bool m_ruleValueHasBeenSet;

                    /**
                     * Logical connection for cost allocation, enumeration values are as follows:.
Create and bind a policy query an instance reset the access password of an instance.
Create and bind a policy query an instance reset the access password of an instance.
                     */
                    std::string m_connectors;
                    bool m_connectorsHasBeenSet;

                    /**
                     * Nested rule.
                     */
                    std::vector<AllocationRuleExpression> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULEEXPRESSION_H_
