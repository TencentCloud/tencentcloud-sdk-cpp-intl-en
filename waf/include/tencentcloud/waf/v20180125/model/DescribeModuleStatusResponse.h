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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEMODULESTATUSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEMODULESTATUSRESPONSE_H_

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
                * DescribeModuleStatus response structure.
                */
                class DescribeModuleStatusResponse : public AbstractModel
                {
                public:
                    DescribeModuleStatusResponse();
                    ~DescribeModuleStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether web security rules are enabled
                     * @return WebSecurity Whether web security rules are enabled
                     * 
                     */
                    uint64_t GetWebSecurity() const;

                    /**
                     * 判断参数 WebSecurity 是否已赋值
                     * @return WebSecurity 是否已赋值
                     * 
                     */
                    bool WebSecurityHasBeenSet() const;

                    /**
                     * 获取Whether access control rule is enabled
                     * @return AccessControl Whether access control rule is enabled
                     * 
                     */
                    int64_t GetAccessControl() const;

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     * 
                     */
                    bool AccessControlHasBeenSet() const;

                    /**
                     * 获取Whether CC protection is enabled.
                     * @return CcProtection Whether CC protection is enabled.
                     * 
                     */
                    uint64_t GetCcProtection() const;

                    /**
                     * 判断参数 CcProtection 是否已赋值
                     * @return CcProtection 是否已赋值
                     * 
                     */
                    bool CcProtectionHasBeenSet() const;

                    /**
                     * 获取Whether web tamper-proof is enabled
                     * @return AntiTamper Whether web tamper-proof is enabled
                     * 
                     */
                    uint64_t GetAntiTamper() const;

                    /**
                     * 判断参数 AntiTamper 是否已赋值
                     * @return AntiTamper 是否已赋值
                     * 
                     */
                    bool AntiTamperHasBeenSet() const;

                    /**
                     * 获取Whether information leakage prevention is enabled
                     * @return AntiLeakage Whether information leakage prevention is enabled
                     * 
                     */
                    uint64_t GetAntiLeakage() const;

                    /**
                     * 判断参数 AntiLeakage 是否已赋值
                     * @return AntiLeakage 是否已赋值
                     * 
                     */
                    bool AntiLeakageHasBeenSet() const;

                    /**
                     * 获取Whether API security is enabled
                     * @return ApiProtection Whether API security is enabled
                     * 
                     */
                    uint64_t GetApiProtection() const;

                    /**
                     * 判断参数 ApiProtection 是否已赋值
                     * @return ApiProtection 是否已赋值
                     * 
                     */
                    bool ApiProtectionHasBeenSet() const;

                    /**
                     * 获取Traffic limiting module switch
                     * @return RateLimit Traffic limiting module switch
                     * 
                     */
                    uint64_t GetRateLimit() const;

                    /**
                     * 判断参数 RateLimit 是否已赋值
                     * @return RateLimit 是否已赋值
                     * 
                     */
                    bool RateLimitHasBeenSet() const;

                private:

                    /**
                     * Whether web security rules are enabled
                     */
                    uint64_t m_webSecurity;
                    bool m_webSecurityHasBeenSet;

                    /**
                     * Whether access control rule is enabled
                     */
                    int64_t m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * Whether CC protection is enabled.
                     */
                    uint64_t m_ccProtection;
                    bool m_ccProtectionHasBeenSet;

                    /**
                     * Whether web tamper-proof is enabled
                     */
                    uint64_t m_antiTamper;
                    bool m_antiTamperHasBeenSet;

                    /**
                     * Whether information leakage prevention is enabled
                     */
                    uint64_t m_antiLeakage;
                    bool m_antiLeakageHasBeenSet;

                    /**
                     * Whether API security is enabled
                     */
                    uint64_t m_apiProtection;
                    bool m_apiProtectionHasBeenSet;

                    /**
                     * Traffic limiting module switch
                     */
                    uint64_t m_rateLimit;
                    bool m_rateLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEMODULESTATUSRESPONSE_H_
