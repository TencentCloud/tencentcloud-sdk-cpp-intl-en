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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYRULEPRIORITYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYRULEPRIORITYREQUEST_H_

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
                * ModifyRulePriority request structure.
                */
                class ModifyRulePriorityRequest : public AbstractModel
                {
                public:
                    ModifyRulePriorityRequest();
                    ~ModifyRulePriorityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site
                     * @return ZoneId ID of the site
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site
                     * @param _zoneId ID of the site
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
                     * 获取Order of rule IDs. If there are multiple rules, they will be executed in order from top to bottom.
                     * @return RuleIds Order of rule IDs. If there are multiple rules, they will be executed in order from top to bottom.
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置Order of rule IDs. If there are multiple rules, they will be executed in order from top to bottom.
                     * @param _ruleIds Order of rule IDs. If there are multiple rules, they will be executed in order from top to bottom.
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
                     * ID of the site
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Order of rule IDs. If there are multiple rules, they will be executed in order from top to bottom.
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYRULEPRIORITYREQUEST_H_
