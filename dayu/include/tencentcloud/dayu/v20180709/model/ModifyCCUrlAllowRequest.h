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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCURLALLOWREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCURLALLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyCCUrlAllow request structure.
                */
                class ModifyCCUrlAllowRequest : public AbstractModel
                {
                public:
                    ModifyCCUrlAllowRequest();
                    ~ModifyCCUrlAllowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * @param _business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID
                     * @return Id Anti-DDoS instance ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param _id Anti-DDoS instance ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取add: add, delete: delete
                     * @return Method add: add, delete: delete
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置add: add, delete: delete
                     * @param _method add: add, delete: delete
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Blocklist/allowlist type. Valid value: [white (allowlist)]
                     * @return Type Blocklist/allowlist type. Valid value: [white (allowlist)]
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Blocklist/allowlist type. Valid value: [white (allowlist)]
                     * @param _type Blocklist/allowlist type. Valid value: [white (allowlist)]
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取URL array. URL format:
http://domain name/cgi
https://domain name/cgi
                     * @return UrlList URL array. URL format:
http://domain name/cgi
https://domain name/cgi
                     * 
                     */
                    std::vector<std::string> GetUrlList() const;

                    /**
                     * 设置URL array. URL format:
http://domain name/cgi
https://domain name/cgi
                     * @param _urlList URL array. URL format:
http://domain name/cgi
https://domain name/cgi
                     * 
                     */
                    void SetUrlList(const std::vector<std::string>& _urlList);

                    /**
                     * 判断参数 UrlList 是否已赋值
                     * @return UrlList 是否已赋值
                     * 
                     */
                    bool UrlListHasBeenSet() const;

                    /**
                     * 获取CC protection type, which is optional. Valid values: [http (HTTP CC protection), https (HTTPS CC protection)]; if this field is left empty, HTTPS CC protection will be used by default; if `https` is entered, the `Domain` and `RuleId` fields are required;
                     * @return Protocol CC protection type, which is optional. Valid values: [http (HTTP CC protection), https (HTTPS CC protection)]; if this field is left empty, HTTPS CC protection will be used by default; if `https` is entered, the `Domain` and `RuleId` fields are required;
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置CC protection type, which is optional. Valid values: [http (HTTP CC protection), https (HTTPS CC protection)]; if this field is left empty, HTTPS CC protection will be used by default; if `https` is entered, the `Domain` and `RuleId` fields are required;
                     * @param _protocol CC protection type, which is optional. Valid values: [http (HTTP CC protection), https (HTTPS CC protection)]; if this field is left empty, HTTPS CC protection will be used by default; if `https` is entered, the `Domain` and `RuleId` fields are required;
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取HTTPS layer-7 forwarding rule domain name (which is optional and can be obtained from the layer-7 forwarding rule API). This field is required only if `Protocol` is `https`;
                     * @return Domain HTTPS layer-7 forwarding rule domain name (which is optional and can be obtained from the layer-7 forwarding rule API). This field is required only if `Protocol` is `https`;
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置HTTPS layer-7 forwarding rule domain name (which is optional and can be obtained from the layer-7 forwarding rule API). This field is required only if `Protocol` is `https`;
                     * @param _domain HTTPS layer-7 forwarding rule domain name (which is optional and can be obtained from the layer-7 forwarding rule API). This field is required only if `Protocol` is `https`;
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
                     * 获取HTTPS layer-7 forwarding rule ID (which is optional and can be obtained from the layer-7 forwarding rule API). This field is required only when adding a rule and `Protocol` is `https`;
If `Method` is `delete`, this field can be left empty;
                     * @return RuleId HTTPS layer-7 forwarding rule ID (which is optional and can be obtained from the layer-7 forwarding rule API). This field is required only when adding a rule and `Protocol` is `https`;
If `Method` is `delete`, this field can be left empty;
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置HTTPS layer-7 forwarding rule ID (which is optional and can be obtained from the layer-7 forwarding rule API). This field is required only when adding a rule and `Protocol` is `https`;
If `Method` is `delete`, this field can be left empty;
                     * @param _ruleId HTTPS layer-7 forwarding rule ID (which is optional and can be obtained from the layer-7 forwarding rule API). This field is required only when adding a rule and `Protocol` is `https`;
If `Method` is `delete`, this field can be left empty;
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * add: add, delete: delete
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Blocklist/allowlist type. Valid value: [white (allowlist)]
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * URL array. URL format:
http://domain name/cgi
https://domain name/cgi
                     */
                    std::vector<std::string> m_urlList;
                    bool m_urlListHasBeenSet;

                    /**
                     * CC protection type, which is optional. Valid values: [http (HTTP CC protection), https (HTTPS CC protection)]; if this field is left empty, HTTPS CC protection will be used by default; if `https` is entered, the `Domain` and `RuleId` fields are required;
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * HTTPS layer-7 forwarding rule domain name (which is optional and can be obtained from the layer-7 forwarding rule API). This field is required only if `Protocol` is `https`;
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * HTTPS layer-7 forwarding rule ID (which is optional and can be obtained from the layer-7 forwarding rule API). This field is required only when adding a rule and `Protocol` is `https`;
If `Method` is `delete`, this field can be left empty;
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCURLALLOWREQUEST_H_
