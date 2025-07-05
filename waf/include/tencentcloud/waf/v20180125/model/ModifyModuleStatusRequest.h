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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYMODULESTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYMODULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyModuleStatus request structure.
                */
                class ModifyModuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyModuleStatusRequest();
                    ~ModifyModuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain to be set
                     * @return Domain Domain to be set
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain to be set
                     * @param _domain Domain to be set
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Enabling status of the web security module. The value is 0 or 1.
                     * @return WebSecurity Enabling status of the web security module. The value is 0 or 1.
                     * 
                     */
                    uint64_t GetWebSecurity() const;

                    /**
                     * 设置Enabling status of the web security module. The value is 0 or 1.
                     * @param _webSecurity Enabling status of the web security module. The value is 0 or 1.
                     * 
                     */
                    void SetWebSecurity(const uint64_t& _webSecurity);

                    /**
                     * 判断参数 WebSecurity 是否已赋值
                     * @return WebSecurity 是否已赋值
                     * 
                     */
                    bool WebSecurityHasBeenSet() const;

                    /**
                     * 获取Access control module switch: 0 or 1
                     * @return AccessControl Access control module switch: 0 or 1
                     * 
                     */
                    uint64_t GetAccessControl() const;

                    /**
                     * 设置Access control module switch: 0 or 1
                     * @param _accessControl Access control module switch: 0 or 1
                     * 
                     */
                    void SetAccessControl(const uint64_t& _accessControl);

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     * 
                     */
                    bool AccessControlHasBeenSet() const;

                    /**
                     * 获取CC module switch, 0 or 1
                     * @return CcProtection CC module switch, 0 or 1
                     * 
                     */
                    uint64_t GetCcProtection() const;

                    /**
                     * 设置CC module switch, 0 or 1
                     * @param _ccProtection CC module switch, 0 or 1
                     * 
                     */
                    void SetCcProtection(const uint64_t& _ccProtection);

                    /**
                     * 判断参数 CcProtection 是否已赋值
                     * @return CcProtection 是否已赋值
                     * 
                     */
                    bool CcProtectionHasBeenSet() const;

                    /**
                     * 获取API security module switch, 0 or 1
                     * @return ApiProtection API security module switch, 0 or 1
                     * 
                     */
                    uint64_t GetApiProtection() const;

                    /**
                     * 设置API security module switch, 0 or 1
                     * @param _apiProtection API security module switch, 0 or 1
                     * 
                     */
                    void SetApiProtection(const uint64_t& _apiProtection);

                    /**
                     * 判断参数 ApiProtection 是否已赋值
                     * @return ApiProtection 是否已赋值
                     * 
                     */
                    bool ApiProtectionHasBeenSet() const;

                    /**
                     * 获取Tamper-proof module switch: 0 or 1
                     * @return AntiTamper Tamper-proof module switch: 0 or 1
                     * 
                     */
                    uint64_t GetAntiTamper() const;

                    /**
                     * 设置Tamper-proof module switch: 0 or 1
                     * @param _antiTamper Tamper-proof module switch: 0 or 1
                     * 
                     */
                    void SetAntiTamper(const uint64_t& _antiTamper);

                    /**
                     * 判断参数 AntiTamper 是否已赋值
                     * @return AntiTamper 是否已赋值
                     * 
                     */
                    bool AntiTamperHasBeenSet() const;

                    /**
                     * 获取Leakage prevention module switch: 0 or 1
                     * @return AntiLeakage Leakage prevention module switch: 0 or 1
                     * 
                     */
                    uint64_t GetAntiLeakage() const;

                    /**
                     * 设置Leakage prevention module switch: 0 or 1
                     * @param _antiLeakage Leakage prevention module switch: 0 or 1
                     * 
                     */
                    void SetAntiLeakage(const uint64_t& _antiLeakage);

                    /**
                     * 判断参数 AntiLeakage 是否已赋值
                     * @return AntiLeakage 是否已赋值
                     * 
                     */
                    bool AntiLeakageHasBeenSet() const;

                    /**
                     * 获取Traffic limiting module switch: 0 or 1
                     * @return RateLimit Traffic limiting module switch: 0 or 1
                     * 
                     */
                    uint64_t GetRateLimit() const;

                    /**
                     * 设置Traffic limiting module switch: 0 or 1
                     * @param _rateLimit Traffic limiting module switch: 0 or 1
                     * 
                     */
                    void SetRateLimit(const uint64_t& _rateLimit);

                    /**
                     * 判断参数 RateLimit 是否已赋值
                     * @return RateLimit 是否已赋值
                     * 
                     */
                    bool RateLimitHasBeenSet() const;

                private:

                    /**
                     * Domain to be set
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Enabling status of the web security module. The value is 0 or 1.
                     */
                    uint64_t m_webSecurity;
                    bool m_webSecurityHasBeenSet;

                    /**
                     * Access control module switch: 0 or 1
                     */
                    uint64_t m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * CC module switch, 0 or 1
                     */
                    uint64_t m_ccProtection;
                    bool m_ccProtectionHasBeenSet;

                    /**
                     * API security module switch, 0 or 1
                     */
                    uint64_t m_apiProtection;
                    bool m_apiProtectionHasBeenSet;

                    /**
                     * Tamper-proof module switch: 0 or 1
                     */
                    uint64_t m_antiTamper;
                    bool m_antiTamperHasBeenSet;

                    /**
                     * Leakage prevention module switch: 0 or 1
                     */
                    uint64_t m_antiLeakage;
                    bool m_antiLeakageHasBeenSet;

                    /**
                     * Traffic limiting module switch: 0 or 1
                     */
                    uint64_t m_rateLimit;
                    bool m_rateLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYMODULESTATUSREQUEST_H_
