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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCRULEPRIORITYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCRULEPRIORITYREQUEST_H_

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
                * ModifyL7AccRulePriority request structure.
                */
                class ModifyL7AccRulePriorityRequest : public AbstractModel
                {
                public:
                    ModifyL7AccRulePriorityRequest();
                    ~ModifyL7AccRulePriorityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The complete rule ID list under the site ID can be obtained by [Querying the seven-layer acceleration rules](https://intl.cloud.tencent.com/document/product/1552/115820?from_cn_redirect=1). The final priority order will be adjusted to the order of the rule ID list, and will be executed from the front to the back.
                     * @return RuleIds The complete rule ID list under the site ID can be obtained by [Querying the seven-layer acceleration rules](https://intl.cloud.tencent.com/document/product/1552/115820?from_cn_redirect=1). The final priority order will be adjusted to the order of the rule ID list, and will be executed from the front to the back.
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置The complete rule ID list under the site ID can be obtained by [Querying the seven-layer acceleration rules](https://intl.cloud.tencent.com/document/product/1552/115820?from_cn_redirect=1). The final priority order will be adjusted to the order of the rule ID list, and will be executed from the front to the back.
                     * @param _ruleIds The complete rule ID list under the site ID can be obtained by [Querying the seven-layer acceleration rules](https://intl.cloud.tencent.com/document/product/1552/115820?from_cn_redirect=1). The final priority order will be adjusted to the order of the rule ID list, and will be executed from the front to the back.
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The complete rule ID list under the site ID can be obtained by [Querying the seven-layer acceleration rules](https://intl.cloud.tencent.com/document/product/1552/115820?from_cn_redirect=1). The final priority order will be adjusted to the order of the rule ID list, and will be executed from the front to the back.
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCRULEPRIORITYREQUEST_H_
