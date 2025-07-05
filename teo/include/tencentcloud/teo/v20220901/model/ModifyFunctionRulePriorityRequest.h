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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONRULEPRIORITYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONRULEPRIORITYREQUEST_H_

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
                * ModifyFunctionRulePriority request structure.
                */
                class ModifyFunctionRulePriorityRequest : public AbstractModel
                {
                public:
                    ModifyFunctionRulePriorityRequest();
                    ~ModifyFunctionRulePriorityRequest() = default;
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
                     * 获取Rule ID list. All rule IDs after priority adjustment must be input. Multiple rules are executed from top to bottom. If this parameter is not input, the original priority order is maintained.
                     * @return RuleIds Rule ID list. All rule IDs after priority adjustment must be input. Multiple rules are executed from top to bottom. If this parameter is not input, the original priority order is maintained.
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置Rule ID list. All rule IDs after priority adjustment must be input. Multiple rules are executed from top to bottom. If this parameter is not input, the original priority order is maintained.
                     * @param _ruleIds Rule ID list. All rule IDs after priority adjustment must be input. Multiple rules are executed from top to bottom. If this parameter is not input, the original priority order is maintained.
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
                     * Rule ID list. All rule IDs after priority adjustment must be input. Multiple rules are executed from top to bottom. If this parameter is not input, the original priority order is maintained.
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONRULEPRIORITYREQUEST_H_
