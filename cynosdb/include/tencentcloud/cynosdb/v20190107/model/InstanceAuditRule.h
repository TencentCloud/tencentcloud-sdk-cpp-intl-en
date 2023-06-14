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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITRULE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/AuditRuleFilters.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Audit rule details of the instance, which is an output parameter of the `DescribeAuditRuleWithInstanceIds` API.
                */
                class InstanceAuditRule : public AbstractModel
                {
                public:
                    InstanceAuditRule();
                    ~InstanceAuditRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Whether the audit is rule audit. Valid values: `true` (rule audit), `false` (full audit).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuditRule Whether the audit is rule audit. Valid values: `true` (rule audit), `false` (full audit).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAuditRule() const;

                    /**
                     * 设置Whether the audit is rule audit. Valid values: `true` (rule audit), `false` (full audit).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _auditRule Whether the audit is rule audit. Valid values: `true` (rule audit), `false` (full audit).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuditRule(const bool& _auditRule);

                    /**
                     * 判断参数 AuditRule 是否已赋值
                     * @return AuditRule 是否已赋值
                     * 
                     */
                    bool AuditRuleHasBeenSet() const;

                    /**
                     * 获取Audit rule details, which is valid only when `AuditRule` is `true`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuditRuleFilters Audit rule details, which is valid only when `AuditRule` is `true`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AuditRuleFilters> GetAuditRuleFilters() const;

                    /**
                     * 设置Audit rule details, which is valid only when `AuditRule` is `true`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _auditRuleFilters Audit rule details, which is valid only when `AuditRule` is `true`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuditRuleFilters(const std::vector<AuditRuleFilters>& _auditRuleFilters);

                    /**
                     * 判断参数 AuditRuleFilters 是否已赋值
                     * @return AuditRuleFilters 是否已赋值
                     * 
                     */
                    bool AuditRuleFiltersHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether the audit is rule audit. Valid values: `true` (rule audit), `false` (full audit).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_auditRule;
                    bool m_auditRuleHasBeenSet;

                    /**
                     * Audit rule details, which is valid only when `AuditRule` is `true`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AuditRuleFilters> m_auditRuleFilters;
                    bool m_auditRuleFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITRULE_H_
