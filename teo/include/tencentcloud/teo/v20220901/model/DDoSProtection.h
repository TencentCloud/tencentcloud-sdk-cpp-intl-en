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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPROTECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPROTECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DomainDDoSProtection.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Exclusive DDoS protection configuration.
                */
                class DDoSProtection : public AbstractModel
                {
                public:
                    DDoSProtection();
                    ~DDoSProtection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specify the protection scope of standalone DDoS. Value:
<li> protect_all_domains: exclusive DDoS protection takes effect for all domains in the site. Newly added domain names automatically enable exclusive DDoS protection. When the input parameter is protect_all_domains, the input parameter DomainDDoSProtections will not be processed;</li>
<li> protect_specified_domains: only applicable to specified domains. The specific scope can be specified via the DomainDDoSProtection parameter.</li>
                     * @return ProtectionOption Specify the protection scope of standalone DDoS. Value:
<li> protect_all_domains: exclusive DDoS protection takes effect for all domains in the site. Newly added domain names automatically enable exclusive DDoS protection. When the input parameter is protect_all_domains, the input parameter DomainDDoSProtections will not be processed;</li>
<li> protect_specified_domains: only applicable to specified domains. The specific scope can be specified via the DomainDDoSProtection parameter.</li>
                     * 
                     */
                    std::string GetProtectionOption() const;

                    /**
                     * 设置Specify the protection scope of standalone DDoS. Value:
<li> protect_all_domains: exclusive DDoS protection takes effect for all domains in the site. Newly added domain names automatically enable exclusive DDoS protection. When the input parameter is protect_all_domains, the input parameter DomainDDoSProtections will not be processed;</li>
<li> protect_specified_domains: only applicable to specified domains. The specific scope can be specified via the DomainDDoSProtection parameter.</li>
                     * @param _protectionOption Specify the protection scope of standalone DDoS. Value:
<li> protect_all_domains: exclusive DDoS protection takes effect for all domains in the site. Newly added domain names automatically enable exclusive DDoS protection. When the input parameter is protect_all_domains, the input parameter DomainDDoSProtections will not be processed;</li>
<li> protect_specified_domains: only applicable to specified domains. The specific scope can be specified via the DomainDDoSProtection parameter.</li>
                     * 
                     */
                    void SetProtectionOption(const std::string& _protectionOption);

                    /**
                     * 判断参数 ProtectionOption 是否已赋值
                     * @return ProtectionOption 是否已赋值
                     * 
                     */
                    bool ProtectionOptionHasBeenSet() const;

                    /**
                     * 获取Exclusive DDoS protection configuration of the domain. In the input parameter scenario:
<li> When ProtectionOption remains protect_specified_domains: domains not filled in keep their exclusive DDoS protection configuration unchanged, and explicitly specified domains are updated based on the input parameter;</li>
<li> When ProtectionOption is switched from protect_all_domains to protect_specified_domains: if DomainDDoSProtections is empty, exclusive DDoS protection is disabled for all domain names under the site; if DomainDDoSProtections is not empty, exclusive DDoS protection is disabled or retained for the specified domain names in the parameter, and exclusive DDoS protection is disabled for the rest of the unlisted domain names.</li>
                     * @return DomainDDoSProtections Exclusive DDoS protection configuration of the domain. In the input parameter scenario:
<li> When ProtectionOption remains protect_specified_domains: domains not filled in keep their exclusive DDoS protection configuration unchanged, and explicitly specified domains are updated based on the input parameter;</li>
<li> When ProtectionOption is switched from protect_all_domains to protect_specified_domains: if DomainDDoSProtections is empty, exclusive DDoS protection is disabled for all domain names under the site; if DomainDDoSProtections is not empty, exclusive DDoS protection is disabled or retained for the specified domain names in the parameter, and exclusive DDoS protection is disabled for the rest of the unlisted domain names.</li>
                     * 
                     */
                    std::vector<DomainDDoSProtection> GetDomainDDoSProtections() const;

                    /**
                     * 设置Exclusive DDoS protection configuration of the domain. In the input parameter scenario:
<li> When ProtectionOption remains protect_specified_domains: domains not filled in keep their exclusive DDoS protection configuration unchanged, and explicitly specified domains are updated based on the input parameter;</li>
<li> When ProtectionOption is switched from protect_all_domains to protect_specified_domains: if DomainDDoSProtections is empty, exclusive DDoS protection is disabled for all domain names under the site; if DomainDDoSProtections is not empty, exclusive DDoS protection is disabled or retained for the specified domain names in the parameter, and exclusive DDoS protection is disabled for the rest of the unlisted domain names.</li>
                     * @param _domainDDoSProtections Exclusive DDoS protection configuration of the domain. In the input parameter scenario:
<li> When ProtectionOption remains protect_specified_domains: domains not filled in keep their exclusive DDoS protection configuration unchanged, and explicitly specified domains are updated based on the input parameter;</li>
<li> When ProtectionOption is switched from protect_all_domains to protect_specified_domains: if DomainDDoSProtections is empty, exclusive DDoS protection is disabled for all domain names under the site; if DomainDDoSProtections is not empty, exclusive DDoS protection is disabled or retained for the specified domain names in the parameter, and exclusive DDoS protection is disabled for the rest of the unlisted domain names.</li>
                     * 
                     */
                    void SetDomainDDoSProtections(const std::vector<DomainDDoSProtection>& _domainDDoSProtections);

                    /**
                     * 判断参数 DomainDDoSProtections 是否已赋值
                     * @return DomainDDoSProtections 是否已赋值
                     * 
                     */
                    bool DomainDDoSProtectionsHasBeenSet() const;

                    /**
                     * 获取Configuration of exclusive DDoS protection with a shared CNAME. Used only as an output parameter.
                     * @return SharedCNAMEDDoSProtections Configuration of exclusive DDoS protection with a shared CNAME. Used only as an output parameter.
                     * 
                     */
                    std::vector<DomainDDoSProtection> GetSharedCNAMEDDoSProtections() const;

                    /**
                     * 设置Configuration of exclusive DDoS protection with a shared CNAME. Used only as an output parameter.
                     * @param _sharedCNAMEDDoSProtections Configuration of exclusive DDoS protection with a shared CNAME. Used only as an output parameter.
                     * 
                     */
                    void SetSharedCNAMEDDoSProtections(const std::vector<DomainDDoSProtection>& _sharedCNAMEDDoSProtections);

                    /**
                     * 判断参数 SharedCNAMEDDoSProtections 是否已赋值
                     * @return SharedCNAMEDDoSProtections 是否已赋值
                     * 
                     */
                    bool SharedCNAMEDDoSProtectionsHasBeenSet() const;

                private:

                    /**
                     * Specify the protection scope of standalone DDoS. Value:
<li> protect_all_domains: exclusive DDoS protection takes effect for all domains in the site. Newly added domain names automatically enable exclusive DDoS protection. When the input parameter is protect_all_domains, the input parameter DomainDDoSProtections will not be processed;</li>
<li> protect_specified_domains: only applicable to specified domains. The specific scope can be specified via the DomainDDoSProtection parameter.</li>
                     */
                    std::string m_protectionOption;
                    bool m_protectionOptionHasBeenSet;

                    /**
                     * Exclusive DDoS protection configuration of the domain. In the input parameter scenario:
<li> When ProtectionOption remains protect_specified_domains: domains not filled in keep their exclusive DDoS protection configuration unchanged, and explicitly specified domains are updated based on the input parameter;</li>
<li> When ProtectionOption is switched from protect_all_domains to protect_specified_domains: if DomainDDoSProtections is empty, exclusive DDoS protection is disabled for all domain names under the site; if DomainDDoSProtections is not empty, exclusive DDoS protection is disabled or retained for the specified domain names in the parameter, and exclusive DDoS protection is disabled for the rest of the unlisted domain names.</li>
                     */
                    std::vector<DomainDDoSProtection> m_domainDDoSProtections;
                    bool m_domainDDoSProtectionsHasBeenSet;

                    /**
                     * Configuration of exclusive DDoS protection with a shared CNAME. Used only as an output parameter.
                     */
                    std::vector<DomainDDoSProtection> m_sharedCNAMEDDoSProtections;
                    bool m_sharedCNAMEDDoSProtectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPROTECTION_H_
