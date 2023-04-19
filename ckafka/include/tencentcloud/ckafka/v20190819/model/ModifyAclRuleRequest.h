/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYACLRULEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyAclRule request structure.
                */
                class ModifyAclRuleRequest : public AbstractModel
                {
                public:
                    ModifyAclRuleRequest();
                    ~ModifyAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取ACL policy name
                     * @return RuleName ACL policy name
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置ACL policy name
                     * @param RuleName ACL policy name
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Whether to be applied to new topics
                     * @return IsApplied Whether to be applied to new topics
                     */
                    int64_t GetIsApplied() const;

                    /**
                     * 设置Whether to be applied to new topics
                     * @param IsApplied Whether to be applied to new topics
                     */
                    void SetIsApplied(const int64_t& _isApplied);

                    /**
                     * 判断参数 IsApplied 是否已赋值
                     * @return IsApplied 是否已赋值
                     */
                    bool IsAppliedHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ACL policy name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Whether to be applied to new topics
                     */
                    int64_t m_isApplied;
                    bool m_isAppliedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYACLRULEREQUEST_H_
