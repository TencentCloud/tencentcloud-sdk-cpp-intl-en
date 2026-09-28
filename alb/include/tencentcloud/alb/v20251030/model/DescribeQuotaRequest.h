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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEQUOTAREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeQuota request structure.
                */
                class DescribeQuotaRequest : public AbstractModel
                {
                public:
                    DescribeQuotaRequest();
                    ~DescribeQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of quota types. Supports inputting multiple quota types at the same time. When querying resource-level quotas, can be used in conjunction with ResourceIds to input the corresponding resource IDs. To return the used amount and available amount, input used and available in DisplayFields.

Enumeration description:
- alb_quota_loadbalancers_num: Number of ALB instances creatable per region.
- alb_quota_targetgroups_num: Number of ALB target groups creatable per region.
-alb_quota_loadbalancer_listeners_num: Number of listeners creatable for each ALB instance. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_rules_num: Number of forwarding rules that can be added to each ALB instance, excluding the default rule. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_certificates_num: Number of additional certificates that can be added to each ALB instance, excluding the default certificate. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_targetgroup_num: The number of target groups that can be bound to each ALB instance. Fill in the ALB instance ID in ResourceIds.
-alb_quota_loadbalancer_servers_num: Number of real servers that can be added to each ALB instance. For ResourceIds, fill in the ALB instance ID.
-alb_quota_server_added_num: Number of times one real server IP can be added to an ALB backend target group.
-alb_quota_targetgroup_attached_num: The number of times each target group can be associated with ALB forwarding rules. Fill in the target group ID in ResourceIds.
-alb_quota_targetgroup_targets_num: Number of real servers supported by each target group. It is applicable to IP and port type backends. For ResourceIds, fill in the target group ID.
-alb_quota_targetgroup_targets_num_scf: Number of SCF function backends supported by each target group. For ResourceIds, fill in the target group ID.
-alb_quota_max_request_timeout: Maximum timeout time configurable for a connection request when a listener is created.
-alb_quota_max_idle_timeout: Maximum idle timeout that can be configured for a connection when a listener is created.
-alb_quota_listener_certificates_num: Number of certificates that can be added to each listener. For ResourceIds, fill in the listener ID.
-alb_quota_rule_targetgroups_num: Number of target groups that can be bound to a forwarding rule.
-alb_quota_rule_conditions_num: Number of match conditions that can be added to a forwarding rule.
-alb_quota_rule_wildcards_num: Number of match entries containing wildcards that can be added to a single forwarding rule.
-alb_quota_rule_actions_num: Number of action entries that can be added to a single forwarding rule.
-alb_quota_cipher_template_listeners_num: Number of listeners that can be associated with each encryption suite template.
-alb_quota_healthcheck_templates_num: Number of health check templates that can be created per region.
-alb_quota_securitygroup_templates_num: Number of security groups that can be bound to one ALB instance.
-alb_quota_securitygroup_rules_per_sg_num: Number of rule entries supported by one security group in one ALB instance.
-alb_quota_security_policies_num: Number of custom security policies creatable per region.
                     * @return QuotaTypes List of quota types. Supports inputting multiple quota types at the same time. When querying resource-level quotas, can be used in conjunction with ResourceIds to input the corresponding resource IDs. To return the used amount and available amount, input used and available in DisplayFields.

Enumeration description:
- alb_quota_loadbalancers_num: Number of ALB instances creatable per region.
- alb_quota_targetgroups_num: Number of ALB target groups creatable per region.
-alb_quota_loadbalancer_listeners_num: Number of listeners creatable for each ALB instance. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_rules_num: Number of forwarding rules that can be added to each ALB instance, excluding the default rule. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_certificates_num: Number of additional certificates that can be added to each ALB instance, excluding the default certificate. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_targetgroup_num: The number of target groups that can be bound to each ALB instance. Fill in the ALB instance ID in ResourceIds.
-alb_quota_loadbalancer_servers_num: Number of real servers that can be added to each ALB instance. For ResourceIds, fill in the ALB instance ID.
-alb_quota_server_added_num: Number of times one real server IP can be added to an ALB backend target group.
-alb_quota_targetgroup_attached_num: The number of times each target group can be associated with ALB forwarding rules. Fill in the target group ID in ResourceIds.
-alb_quota_targetgroup_targets_num: Number of real servers supported by each target group. It is applicable to IP and port type backends. For ResourceIds, fill in the target group ID.
-alb_quota_targetgroup_targets_num_scf: Number of SCF function backends supported by each target group. For ResourceIds, fill in the target group ID.
-alb_quota_max_request_timeout: Maximum timeout time configurable for a connection request when a listener is created.
-alb_quota_max_idle_timeout: Maximum idle timeout that can be configured for a connection when a listener is created.
-alb_quota_listener_certificates_num: Number of certificates that can be added to each listener. For ResourceIds, fill in the listener ID.
-alb_quota_rule_targetgroups_num: Number of target groups that can be bound to a forwarding rule.
-alb_quota_rule_conditions_num: Number of match conditions that can be added to a forwarding rule.
-alb_quota_rule_wildcards_num: Number of match entries containing wildcards that can be added to a single forwarding rule.
-alb_quota_rule_actions_num: Number of action entries that can be added to a single forwarding rule.
-alb_quota_cipher_template_listeners_num: Number of listeners that can be associated with each encryption suite template.
-alb_quota_healthcheck_templates_num: Number of health check templates that can be created per region.
-alb_quota_securitygroup_templates_num: Number of security groups that can be bound to one ALB instance.
-alb_quota_securitygroup_rules_per_sg_num: Number of rule entries supported by one security group in one ALB instance.
-alb_quota_security_policies_num: Number of custom security policies creatable per region.
                     * 
                     */
                    std::vector<std::string> GetQuotaTypes() const;

                    /**
                     * 设置List of quota types. Supports inputting multiple quota types at the same time. When querying resource-level quotas, can be used in conjunction with ResourceIds to input the corresponding resource IDs. To return the used amount and available amount, input used and available in DisplayFields.

Enumeration description:
- alb_quota_loadbalancers_num: Number of ALB instances creatable per region.
- alb_quota_targetgroups_num: Number of ALB target groups creatable per region.
-alb_quota_loadbalancer_listeners_num: Number of listeners creatable for each ALB instance. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_rules_num: Number of forwarding rules that can be added to each ALB instance, excluding the default rule. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_certificates_num: Number of additional certificates that can be added to each ALB instance, excluding the default certificate. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_targetgroup_num: The number of target groups that can be bound to each ALB instance. Fill in the ALB instance ID in ResourceIds.
-alb_quota_loadbalancer_servers_num: Number of real servers that can be added to each ALB instance. For ResourceIds, fill in the ALB instance ID.
-alb_quota_server_added_num: Number of times one real server IP can be added to an ALB backend target group.
-alb_quota_targetgroup_attached_num: The number of times each target group can be associated with ALB forwarding rules. Fill in the target group ID in ResourceIds.
-alb_quota_targetgroup_targets_num: Number of real servers supported by each target group. It is applicable to IP and port type backends. For ResourceIds, fill in the target group ID.
-alb_quota_targetgroup_targets_num_scf: Number of SCF function backends supported by each target group. For ResourceIds, fill in the target group ID.
-alb_quota_max_request_timeout: Maximum timeout time configurable for a connection request when a listener is created.
-alb_quota_max_idle_timeout: Maximum idle timeout that can be configured for a connection when a listener is created.
-alb_quota_listener_certificates_num: Number of certificates that can be added to each listener. For ResourceIds, fill in the listener ID.
-alb_quota_rule_targetgroups_num: Number of target groups that can be bound to a forwarding rule.
-alb_quota_rule_conditions_num: Number of match conditions that can be added to a forwarding rule.
-alb_quota_rule_wildcards_num: Number of match entries containing wildcards that can be added to a single forwarding rule.
-alb_quota_rule_actions_num: Number of action entries that can be added to a single forwarding rule.
-alb_quota_cipher_template_listeners_num: Number of listeners that can be associated with each encryption suite template.
-alb_quota_healthcheck_templates_num: Number of health check templates that can be created per region.
-alb_quota_securitygroup_templates_num: Number of security groups that can be bound to one ALB instance.
-alb_quota_securitygroup_rules_per_sg_num: Number of rule entries supported by one security group in one ALB instance.
-alb_quota_security_policies_num: Number of custom security policies creatable per region.
                     * @param _quotaTypes List of quota types. Supports inputting multiple quota types at the same time. When querying resource-level quotas, can be used in conjunction with ResourceIds to input the corresponding resource IDs. To return the used amount and available amount, input used and available in DisplayFields.

Enumeration description:
- alb_quota_loadbalancers_num: Number of ALB instances creatable per region.
- alb_quota_targetgroups_num: Number of ALB target groups creatable per region.
-alb_quota_loadbalancer_listeners_num: Number of listeners creatable for each ALB instance. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_rules_num: Number of forwarding rules that can be added to each ALB instance, excluding the default rule. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_certificates_num: Number of additional certificates that can be added to each ALB instance, excluding the default certificate. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_targetgroup_num: The number of target groups that can be bound to each ALB instance. Fill in the ALB instance ID in ResourceIds.
-alb_quota_loadbalancer_servers_num: Number of real servers that can be added to each ALB instance. For ResourceIds, fill in the ALB instance ID.
-alb_quota_server_added_num: Number of times one real server IP can be added to an ALB backend target group.
-alb_quota_targetgroup_attached_num: The number of times each target group can be associated with ALB forwarding rules. Fill in the target group ID in ResourceIds.
-alb_quota_targetgroup_targets_num: Number of real servers supported by each target group. It is applicable to IP and port type backends. For ResourceIds, fill in the target group ID.
-alb_quota_targetgroup_targets_num_scf: Number of SCF function backends supported by each target group. For ResourceIds, fill in the target group ID.
-alb_quota_max_request_timeout: Maximum timeout time configurable for a connection request when a listener is created.
-alb_quota_max_idle_timeout: Maximum idle timeout that can be configured for a connection when a listener is created.
-alb_quota_listener_certificates_num: Number of certificates that can be added to each listener. For ResourceIds, fill in the listener ID.
-alb_quota_rule_targetgroups_num: Number of target groups that can be bound to a forwarding rule.
-alb_quota_rule_conditions_num: Number of match conditions that can be added to a forwarding rule.
-alb_quota_rule_wildcards_num: Number of match entries containing wildcards that can be added to a single forwarding rule.
-alb_quota_rule_actions_num: Number of action entries that can be added to a single forwarding rule.
-alb_quota_cipher_template_listeners_num: Number of listeners that can be associated with each encryption suite template.
-alb_quota_healthcheck_templates_num: Number of health check templates that can be created per region.
-alb_quota_securitygroup_templates_num: Number of security groups that can be bound to one ALB instance.
-alb_quota_securitygroup_rules_per_sg_num: Number of rule entries supported by one security group in one ALB instance.
-alb_quota_security_policies_num: Number of custom security policies creatable per region.
                     * 
                     */
                    void SetQuotaTypes(const std::vector<std::string>& _quotaTypes);

                    /**
                     * 判断参数 QuotaTypes 是否已赋值
                     * @return QuotaTypes 是否已赋值
                     * 
                     */
                    bool QuotaTypesHasBeenSet() const;

                    /**
                     * 获取Field display list used to control whether to additionally return usage information. Supports used and available: used means to return the currently used amount, and available means to return the current remaining available amount. QuotaType and Limit are always returned. ResourceId will be returned when ResourceIds are input in the request.
                     * @return DisplayFields Field display list used to control whether to additionally return usage information. Supports used and available: used means to return the currently used amount, and available means to return the current remaining available amount. QuotaType and Limit are always returned. ResourceId will be returned when ResourceIds are input in the request.
                     * 
                     */
                    std::vector<std::string> GetDisplayFields() const;

                    /**
                     * 设置Field display list used to control whether to additionally return usage information. Supports used and available: used means to return the currently used amount, and available means to return the current remaining available amount. QuotaType and Limit are always returned. ResourceId will be returned when ResourceIds are input in the request.
                     * @param _displayFields Field display list used to control whether to additionally return usage information. Supports used and available: used means to return the currently used amount, and available means to return the current remaining available amount. QuotaType and Limit are always returned. ResourceId will be returned when ResourceIds are input in the request.
                     * 
                     */
                    void SetDisplayFields(const std::vector<std::string>& _displayFields);

                    /**
                     * 判断参数 DisplayFields 是否已赋值
                     * @return DisplayFields 是否已赋值
                     * 
                     */
                    bool DisplayFieldsHasBeenSet() const;

                    /**
                     * 获取Resource ID list. Used for querying the quota and amount at the specific resource dimension. If not specified, the default quota configuration at the account or region level is queried. The type of resource ID is determined by QuotaTypes. For example, for ALB instance-level quotas, fill in the ALB instance ID; for listener-level quotas, fill in the listener ID; for target group-level quotas, fill in the target group ID.
                     * @return ResourceIds Resource ID list. Used for querying the quota and amount at the specific resource dimension. If not specified, the default quota configuration at the account or region level is queried. The type of resource ID is determined by QuotaTypes. For example, for ALB instance-level quotas, fill in the ALB instance ID; for listener-level quotas, fill in the listener ID; for target group-level quotas, fill in the target group ID.
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置Resource ID list. Used for querying the quota and amount at the specific resource dimension. If not specified, the default quota configuration at the account or region level is queried. The type of resource ID is determined by QuotaTypes. For example, for ALB instance-level quotas, fill in the ALB instance ID; for listener-level quotas, fill in the listener ID; for target group-level quotas, fill in the target group ID.
                     * @param _resourceIds Resource ID list. Used for querying the quota and amount at the specific resource dimension. If not specified, the default quota configuration at the account or region level is queried. The type of resource ID is determined by QuotaTypes. For example, for ALB instance-level quotas, fill in the ALB instance ID; for listener-level quotas, fill in the listener ID; for target group-level quotas, fill in the target group ID.
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                private:

                    /**
                     * List of quota types. Supports inputting multiple quota types at the same time. When querying resource-level quotas, can be used in conjunction with ResourceIds to input the corresponding resource IDs. To return the used amount and available amount, input used and available in DisplayFields.

Enumeration description:
- alb_quota_loadbalancers_num: Number of ALB instances creatable per region.
- alb_quota_targetgroups_num: Number of ALB target groups creatable per region.
-alb_quota_loadbalancer_listeners_num: Number of listeners creatable for each ALB instance. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_rules_num: Number of forwarding rules that can be added to each ALB instance, excluding the default rule. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_certificates_num: Number of additional certificates that can be added to each ALB instance, excluding the default certificate. For ResourceIds, fill in the ALB instance ID.
-alb_quota_loadbalancer_targetgroup_num: The number of target groups that can be bound to each ALB instance. Fill in the ALB instance ID in ResourceIds.
-alb_quota_loadbalancer_servers_num: Number of real servers that can be added to each ALB instance. For ResourceIds, fill in the ALB instance ID.
-alb_quota_server_added_num: Number of times one real server IP can be added to an ALB backend target group.
-alb_quota_targetgroup_attached_num: The number of times each target group can be associated with ALB forwarding rules. Fill in the target group ID in ResourceIds.
-alb_quota_targetgroup_targets_num: Number of real servers supported by each target group. It is applicable to IP and port type backends. For ResourceIds, fill in the target group ID.
-alb_quota_targetgroup_targets_num_scf: Number of SCF function backends supported by each target group. For ResourceIds, fill in the target group ID.
-alb_quota_max_request_timeout: Maximum timeout time configurable for a connection request when a listener is created.
-alb_quota_max_idle_timeout: Maximum idle timeout that can be configured for a connection when a listener is created.
-alb_quota_listener_certificates_num: Number of certificates that can be added to each listener. For ResourceIds, fill in the listener ID.
-alb_quota_rule_targetgroups_num: Number of target groups that can be bound to a forwarding rule.
-alb_quota_rule_conditions_num: Number of match conditions that can be added to a forwarding rule.
-alb_quota_rule_wildcards_num: Number of match entries containing wildcards that can be added to a single forwarding rule.
-alb_quota_rule_actions_num: Number of action entries that can be added to a single forwarding rule.
-alb_quota_cipher_template_listeners_num: Number of listeners that can be associated with each encryption suite template.
-alb_quota_healthcheck_templates_num: Number of health check templates that can be created per region.
-alb_quota_securitygroup_templates_num: Number of security groups that can be bound to one ALB instance.
-alb_quota_securitygroup_rules_per_sg_num: Number of rule entries supported by one security group in one ALB instance.
-alb_quota_security_policies_num: Number of custom security policies creatable per region.
                     */
                    std::vector<std::string> m_quotaTypes;
                    bool m_quotaTypesHasBeenSet;

                    /**
                     * Field display list used to control whether to additionally return usage information. Supports used and available: used means to return the currently used amount, and available means to return the current remaining available amount. QuotaType and Limit are always returned. ResourceId will be returned when ResourceIds are input in the request.
                     */
                    std::vector<std::string> m_displayFields;
                    bool m_displayFieldsHasBeenSet;

                    /**
                     * Resource ID list. Used for querying the quota and amount at the specific resource dimension. If not specified, the default quota configuration at the account or region level is queried. The type of resource ID is determined by QuotaTypes. For example, for ALB instance-level quotas, fill in the ALB instance ID; for listener-level quotas, fill in the listener ID; for target group-level quotas, fill in the target group ID.
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEQUOTAREQUEST_H_
