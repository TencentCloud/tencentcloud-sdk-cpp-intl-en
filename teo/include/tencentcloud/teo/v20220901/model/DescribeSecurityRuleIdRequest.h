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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYRULEIDREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYRULEIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityRuleId request structure.
                */
                class DescribeSecurityRuleIdRequest : public AbstractModel
                {
                public:
                    DescribeSecurityRuleIdRequest();
                    ~DescribeSecurityRuleIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of rule IDs.
                     * @return RuleIdList Array of rule IDs.
                     */
                    std::vector<int64_t> GetRuleIdList() const;

                    /**
                     * 设置Array of rule IDs.
                     * @param RuleIdList Array of rule IDs.
                     */
                    void SetRuleIdList(const std::vector<int64_t>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     */
                    bool RuleIdListHasBeenSet() const;

                    /**
                     * 获取Rule type. Values:
<li>`waf`: Web managed rules</li>
<li>`acl`: Custom rules</li>
<li>`rate`: Rate limiting rules</li>
<li>`bot`: Bot managed rules</li>
                     * @return RuleType Rule type. Values:
<li>`waf`: Web managed rules</li>
<li>`acl`: Custom rules</li>
<li>`rate`: Rate limiting rules</li>
<li>`bot`: Bot managed rules</li>
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type. Values:
<li>`waf`: Web managed rules</li>
<li>`acl`: Custom rules</li>
<li>`rate`: Rate limiting rules</li>
<li>`bot`: Bot managed rules</li>
                     * @param RuleType Rule type. Values:
<li>`waf`: Web managed rules</li>
<li>`acl`: Custom rules</li>
<li>`rate`: Rate limiting rules</li>
<li>`bot`: Bot managed rules</li>
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取The subdomain name/layer-4 proxy.
                     * @return Entity The subdomain name/layer-4 proxy.
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置The subdomain name/layer-4 proxy.
                     * @param Entity The subdomain name/layer-4 proxy.
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                private:

                    /**
                     * Array of rule IDs.
                     */
                    std::vector<int64_t> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                    /**
                     * Rule type. Values:
<li>`waf`: Web managed rules</li>
<li>`acl`: Custom rules</li>
<li>`rate`: Rate limiting rules</li>
<li>`bot`: Bot managed rules</li>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * The subdomain name/layer-4 proxy.
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYRULEIDREQUEST_H_
