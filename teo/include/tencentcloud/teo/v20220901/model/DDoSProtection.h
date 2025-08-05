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
                * Exclusive Anti-DDoS protection configuration.
                */
                class DDoSProtection : public AbstractModel
                {
                public:
                    DDoSProtection();
                    ~DDoSProtection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the protection scope of standalone DDoS. valid values:.
<li>protect_all_domains: specifies exclusive Anti-DDoS protection for all domain names in the site. newly added domain names automatically enable exclusive Anti-DDoS protection. when this parameter is specified, DomainDDoSProtections will not be processed.</li>.
<li>protect_specified_domains: only applicable to specified domains. specific scope can be set via DomainDDoSProtection parameter.</li>.
                     * @return ProtectionOption Specifies the protection scope of standalone DDoS. valid values:.
<li>protect_all_domains: specifies exclusive Anti-DDoS protection for all domain names in the site. newly added domain names automatically enable exclusive Anti-DDoS protection. when this parameter is specified, DomainDDoSProtections will not be processed.</li>.
<li>protect_specified_domains: only applicable to specified domains. specific scope can be set via DomainDDoSProtection parameter.</li>.
                     * 
                     */
                    std::string GetProtectionOption() const;

                    /**
                     * 设置Specifies the protection scope of standalone DDoS. valid values:.
<li>protect_all_domains: specifies exclusive Anti-DDoS protection for all domain names in the site. newly added domain names automatically enable exclusive Anti-DDoS protection. when this parameter is specified, DomainDDoSProtections will not be processed.</li>.
<li>protect_specified_domains: only applicable to specified domains. specific scope can be set via DomainDDoSProtection parameter.</li>.
                     * @param _protectionOption Specifies the protection scope of standalone DDoS. valid values:.
<li>protect_all_domains: specifies exclusive Anti-DDoS protection for all domain names in the site. newly added domain names automatically enable exclusive Anti-DDoS protection. when this parameter is specified, DomainDDoSProtections will not be processed.</li>.
<li>protect_specified_domains: only applicable to specified domains. specific scope can be set via DomainDDoSProtection parameter.</li>.
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
                     * 获取Anti-DDoS configuration of the domain. specifies the exclusive ddos protection settings for the domain in request parameters.
<li>When ProtectionOption remains protect_specified_domains, the domain names not filled in keep their exclusive Anti-DDoS protection configuration unchanged, while explicitly specified domain names are updated according to the input parameters.</li>.
<li>When ProtectionOption switches from protect_all_domains to protect_specified_domains: if DomainDDoSProtections is empty, disable exclusive DDoS protection for all domains under the site; if DomainDDoSProtections is not empty, disable or maintain exclusive DDoS protection for the domain names specified in the parameter, and disable exclusive DDoS protection for other unlisted domain names.</li>.
                     * @return DomainDDoSProtections Anti-DDoS configuration of the domain. specifies the exclusive ddos protection settings for the domain in request parameters.
<li>When ProtectionOption remains protect_specified_domains, the domain names not filled in keep their exclusive Anti-DDoS protection configuration unchanged, while explicitly specified domain names are updated according to the input parameters.</li>.
<li>When ProtectionOption switches from protect_all_domains to protect_specified_domains: if DomainDDoSProtections is empty, disable exclusive DDoS protection for all domains under the site; if DomainDDoSProtections is not empty, disable or maintain exclusive DDoS protection for the domain names specified in the parameter, and disable exclusive DDoS protection for other unlisted domain names.</li>.
                     * 
                     */
                    std::vector<DomainDDoSProtection> GetDomainDDoSProtections() const;

                    /**
                     * 设置Anti-DDoS configuration of the domain. specifies the exclusive ddos protection settings for the domain in request parameters.
<li>When ProtectionOption remains protect_specified_domains, the domain names not filled in keep their exclusive Anti-DDoS protection configuration unchanged, while explicitly specified domain names are updated according to the input parameters.</li>.
<li>When ProtectionOption switches from protect_all_domains to protect_specified_domains: if DomainDDoSProtections is empty, disable exclusive DDoS protection for all domains under the site; if DomainDDoSProtections is not empty, disable or maintain exclusive DDoS protection for the domain names specified in the parameter, and disable exclusive DDoS protection for other unlisted domain names.</li>.
                     * @param _domainDDoSProtections Anti-DDoS configuration of the domain. specifies the exclusive ddos protection settings for the domain in request parameters.
<li>When ProtectionOption remains protect_specified_domains, the domain names not filled in keep their exclusive Anti-DDoS protection configuration unchanged, while explicitly specified domain names are updated according to the input parameters.</li>.
<li>When ProtectionOption switches from protect_all_domains to protect_specified_domains: if DomainDDoSProtections is empty, disable exclusive DDoS protection for all domains under the site; if DomainDDoSProtections is not empty, disable or maintain exclusive DDoS protection for the domain names specified in the parameter, and disable exclusive DDoS protection for other unlisted domain names.</li>.
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
                     * 获取Specifies the exclusive DDoS protection configuration of a shared CNAME. used as an output parameter.
                     * @return SharedCNAMEDDoSProtections Specifies the exclusive DDoS protection configuration of a shared CNAME. used as an output parameter.
                     * 
                     */
                    std::vector<DomainDDoSProtection> GetSharedCNAMEDDoSProtections() const;

                    /**
                     * 设置Specifies the exclusive DDoS protection configuration of a shared CNAME. used as an output parameter.
                     * @param _sharedCNAMEDDoSProtections Specifies the exclusive DDoS protection configuration of a shared CNAME. used as an output parameter.
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
                     * Specifies the protection scope of standalone DDoS. valid values:.
<li>protect_all_domains: specifies exclusive Anti-DDoS protection for all domain names in the site. newly added domain names automatically enable exclusive Anti-DDoS protection. when this parameter is specified, DomainDDoSProtections will not be processed.</li>.
<li>protect_specified_domains: only applicable to specified domains. specific scope can be set via DomainDDoSProtection parameter.</li>.
                     */
                    std::string m_protectionOption;
                    bool m_protectionOptionHasBeenSet;

                    /**
                     * Anti-DDoS configuration of the domain. specifies the exclusive ddos protection settings for the domain in request parameters.
<li>When ProtectionOption remains protect_specified_domains, the domain names not filled in keep their exclusive Anti-DDoS protection configuration unchanged, while explicitly specified domain names are updated according to the input parameters.</li>.
<li>When ProtectionOption switches from protect_all_domains to protect_specified_domains: if DomainDDoSProtections is empty, disable exclusive DDoS protection for all domains under the site; if DomainDDoSProtections is not empty, disable or maintain exclusive DDoS protection for the domain names specified in the parameter, and disable exclusive DDoS protection for other unlisted domain names.</li>.
                     */
                    std::vector<DomainDDoSProtection> m_domainDDoSProtections;
                    bool m_domainDDoSProtectionsHasBeenSet;

                    /**
                     * Specifies the exclusive DDoS protection configuration of a shared CNAME. used as an output parameter.
                     */
                    std::vector<DomainDDoSProtection> m_sharedCNAMEDDoSProtections;
                    bool m_sharedCNAMEDDoSProtectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPROTECTION_H_
