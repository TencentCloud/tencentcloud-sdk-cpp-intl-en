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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_UPDATESCDNDOMAINREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_UPDATESCDNDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnWafConfig.h>
#include <tencentcloud/cdn/v20180606/model/ScdnAclConfig.h>
#include <tencentcloud/cdn/v20180606/model/ScdnConfig.h>
#include <tencentcloud/cdn/v20180606/model/ScdnDdosConfig.h>
#include <tencentcloud/cdn/v20180606/model/ScdnBotConfig.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * UpdateScdnDomain request structure.
                */
                class UpdateScdnDomainRequest : public AbstractModel
                {
                public:
                    UpdateScdnDomainRequest();
                    ~UpdateScdnDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
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
                     * 获取WAF configuration
                     * @return Waf WAF configuration
                     * 
                     */
                    ScdnWafConfig GetWaf() const;

                    /**
                     * 设置WAF configuration
                     * @param _waf WAF configuration
                     * 
                     */
                    void SetWaf(const ScdnWafConfig& _waf);

                    /**
                     * 判断参数 Waf 是否已赋值
                     * @return Waf 是否已赋值
                     * 
                     */
                    bool WafHasBeenSet() const;

                    /**
                     * 获取Custom defense policy configuration
                     * @return Acl Custom defense policy configuration
                     * 
                     */
                    ScdnAclConfig GetAcl() const;

                    /**
                     * 设置Custom defense policy configuration
                     * @param _acl Custom defense policy configuration
                     * 
                     */
                    void SetAcl(const ScdnAclConfig& _acl);

                    /**
                     * 判断参数 Acl 是否已赋值
                     * @return Acl 是否已赋值
                     * 
                     */
                    bool AclHasBeenSet() const;

                    /**
                     * 获取CC attack defense configurations. CC attack defense is enabled by default.
                     * @return CC CC attack defense configurations. CC attack defense is enabled by default.
                     * 
                     */
                    ScdnConfig GetCC() const;

                    /**
                     * 设置CC attack defense configurations. CC attack defense is enabled by default.
                     * @param _cC CC attack defense configurations. CC attack defense is enabled by default.
                     * 
                     */
                    void SetCC(const ScdnConfig& _cC);

                    /**
                     * 判断参数 CC 是否已赋值
                     * @return CC 是否已赋值
                     * 
                     */
                    bool CCHasBeenSet() const;

                    /**
                     * 获取DDoS defense configuration. DDoS defense is enabled by default.
                     * @return Ddos DDoS defense configuration. DDoS defense is enabled by default.
                     * 
                     */
                    ScdnDdosConfig GetDdos() const;

                    /**
                     * 设置DDoS defense configuration. DDoS defense is enabled by default.
                     * @param _ddos DDoS defense configuration. DDoS defense is enabled by default.
                     * 
                     */
                    void SetDdos(const ScdnDdosConfig& _ddos);

                    /**
                     * 判断参数 Ddos 是否已赋值
                     * @return Ddos 是否已赋值
                     * 
                     */
                    bool DdosHasBeenSet() const;

                    /**
                     * 获取Bot defense configuration
                     * @return Bot Bot defense configuration
                     * 
                     */
                    ScdnBotConfig GetBot() const;

                    /**
                     * 设置Bot defense configuration
                     * @param _bot Bot defense configuration
                     * 
                     */
                    void SetBot(const ScdnBotConfig& _bot);

                    /**
                     * 判断参数 Bot 是否已赋值
                     * @return Bot 是否已赋值
                     * 
                     */
                    bool BotHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * WAF configuration
                     */
                    ScdnWafConfig m_waf;
                    bool m_wafHasBeenSet;

                    /**
                     * Custom defense policy configuration
                     */
                    ScdnAclConfig m_acl;
                    bool m_aclHasBeenSet;

                    /**
                     * CC attack defense configurations. CC attack defense is enabled by default.
                     */
                    ScdnConfig m_cC;
                    bool m_cCHasBeenSet;

                    /**
                     * DDoS defense configuration. DDoS defense is enabled by default.
                     */
                    ScdnDdosConfig m_ddos;
                    bool m_ddosHasBeenSet;

                    /**
                     * Bot defense configuration
                     */
                    ScdnBotConfig m_bot;
                    bool m_botHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_UPDATESCDNDOMAINREQUEST_H_
