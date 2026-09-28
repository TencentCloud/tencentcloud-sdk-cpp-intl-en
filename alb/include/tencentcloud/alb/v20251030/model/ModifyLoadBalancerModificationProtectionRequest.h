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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLOADBALANCERMODIFICATIONPROTECTIONREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLOADBALANCERMODIFICATIONPROTECTIONREQUEST_H_

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
                * ModifyLoadBalancerModificationProtection request structure.
                */
                class ModifyLoadBalancerModificationProtectionRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerModificationProtectionRequest();
                    ~ModifyLoadBalancerModificationProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * @return LoadBalancerId Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * @param _loadBalancerId Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取Indicates whether to enable modification protection. Once enabled, the instance is protected from unintended modification or deletion.\n- true: enables modification protection\n- false: disables modification protection
                     * @return ModificationProtectionEnabled Indicates whether to enable modification protection. Once enabled, the instance is protected from unintended modification or deletion.\n- true: enables modification protection\n- false: disables modification protection
                     * 
                     */
                    bool GetModificationProtectionEnabled() const;

                    /**
                     * 设置Indicates whether to enable modification protection. Once enabled, the instance is protected from unintended modification or deletion.\n- true: enables modification protection\n- false: disables modification protection
                     * @param _modificationProtectionEnabled Indicates whether to enable modification protection. Once enabled, the instance is protected from unintended modification or deletion.\n- true: enables modification protection\n- false: disables modification protection
                     * 
                     */
                    void SetModificationProtectionEnabled(const bool& _modificationProtectionEnabled);

                    /**
                     * 判断参数 ModificationProtectionEnabled 是否已赋值
                     * @return ModificationProtectionEnabled 是否已赋值
                     * 
                     */
                    bool ModificationProtectionEnabledHasBeenSet() const;

                    /**
                     * 获取Whether to only precheck this request. Parameter Value:
- true: Only perform precheck without performing operations on a resource. Check parameter integrity, request format, and service limits. If approved, DryRunOperation is returned. If not approved, the corresponding error is returned.
-false (default): Execute a normal request. After the check is passed, directly perform operations on the resource.
                     * @return DryRun Whether to only precheck this request. Parameter Value:
- true: Only perform precheck without performing operations on a resource. Check parameter integrity, request format, and service limits. If approved, DryRunOperation is returned. If not approved, the corresponding error is returned.
-false (default): Execute a normal request. After the check is passed, directly perform operations on the resource.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether to only precheck this request. Parameter Value:
- true: Only perform precheck without performing operations on a resource. Check parameter integrity, request format, and service limits. If approved, DryRunOperation is returned. If not approved, the corresponding error is returned.
-false (default): Execute a normal request. After the check is passed, directly perform operations on the resource.
                     * @param _dryRun Whether to only precheck this request. Parameter Value:
- true: Only perform precheck without performing operations on a resource. Check parameter integrity, request format, and service limits. If approved, DryRunOperation is returned. If not approved, the corresponding error is returned.
-false (default): Execute a normal request. After the check is passed, directly perform operations on the resource.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取Reason explanation for enabling modification protection.
Length: 1–255 characters. It must be a Chinese or harmless string and can contain Chinese characters, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * @return Reason Reason explanation for enabling modification protection.
Length: 1–255 characters. It must be a Chinese or harmless string and can contain Chinese characters, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reason explanation for enabling modification protection.
Length: 1–255 characters. It must be a Chinese or harmless string and can contain Chinese characters, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * @param _reason Reason explanation for enabling modification protection.
Length: 1–255 characters. It must be a Chinese or harmless string and can contain Chinese characters, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Indicates whether to enable modification protection. Once enabled, the instance is protected from unintended modification or deletion.\n- true: enables modification protection\n- false: disables modification protection
                     */
                    bool m_modificationProtectionEnabled;
                    bool m_modificationProtectionEnabledHasBeenSet;

                    /**
                     * Whether to only precheck this request. Parameter Value:
- true: Only perform precheck without performing operations on a resource. Check parameter integrity, request format, and service limits. If approved, DryRunOperation is returned. If not approved, the corresponding error is returned.
-false (default): Execute a normal request. After the check is passed, directly perform operations on the resource.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Reason explanation for enabling modification protection.
Length: 1–255 characters. It must be a Chinese or harmless string and can contain Chinese characters, letters, digits, dashes (-), forward slashes (/), half-width periods (.), and underscores (_).
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLOADBALANCERMODIFICATIONPROTECTIONREQUEST_H_
