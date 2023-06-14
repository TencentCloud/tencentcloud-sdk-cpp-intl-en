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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/IngressRule.h>
#include <tencentcloud/tem/v20210701/model/IngressTls.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Ingress configuration
                */
                class IngressInfo : public AbstractModel
                {
                public:
                    IngressInfo();
                    ~IngressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Environment ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EnvironmentId Environment ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _environmentId Environment ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Environment namespace
                     * @return ClusterNamespace Environment namespace
                     * 
                     */
                    std::string GetClusterNamespace() const;

                    /**
                     * 设置Environment namespace
                     * @param _clusterNamespace Environment namespace
                     * 
                     */
                    void SetClusterNamespace(const std::string& _clusterNamespace);

                    /**
                     * 判断参数 ClusterNamespace 是否已赋值
                     * @return ClusterNamespace 是否已赋值
                     * 
                     */
                    bool ClusterNamespaceHasBeenSet() const;

                    /**
                     * 获取ip version
                     * @return AddressIPVersion ip version
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置ip version
                     * @param _addressIPVersion ip version
                     * 
                     */
                    void SetAddressIPVersion(const std::string& _addressIPVersion);

                    /**
                     * 判断参数 AddressIPVersion 是否已赋值
                     * @return AddressIPVersion 是否已赋值
                     * 
                     */
                    bool AddressIPVersionHasBeenSet() const;

                    /**
                     * 获取ingress name
                     * @return IngressName ingress name
                     * 
                     */
                    std::string GetIngressName() const;

                    /**
                     * 设置ingress name
                     * @param _ingressName ingress name
                     * 
                     */
                    void SetIngressName(const std::string& _ingressName);

                    /**
                     * 判断参数 IngressName 是否已赋值
                     * @return IngressName 是否已赋值
                     * 
                     */
                    bool IngressNameHasBeenSet() const;

                    /**
                     * 获取Rules configuration
                     * @return Rules Rules configuration
                     * 
                     */
                    std::vector<IngressRule> GetRules() const;

                    /**
                     * 设置Rules configuration
                     * @param _rules Rules configuration
                     * 
                     */
                    void SetRules(const std::vector<IngressRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取clb ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ClbId clb ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClbId() const;

                    /**
                     * 设置clb ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _clbId clb ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClbId(const std::string& _clbId);

                    /**
                     * 判断参数 ClbId 是否已赋值
                     * @return ClbId 是否已赋值
                     * 
                     */
                    bool ClbIdHasBeenSet() const;

                    /**
                     * 获取TLS configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Tls TLS configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<IngressTls> GetTls() const;

                    /**
                     * 设置TLS configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _tls TLS configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTls(const std::vector<IngressTls>& _tls);

                    /**
                     * 判断参数 Tls 是否已赋值
                     * @return Tls 是否已赋值
                     * 
                     */
                    bool TlsHasBeenSet() const;

                    /**
                     * 获取Environment cluster ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ClusterId Environment cluster ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Environment cluster ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _clusterId Environment cluster ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取clb ip
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Vip clb ip
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置clb ip
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _vip clb ip
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Whether to listen on both the HTTP 80 port and HTTPS 443 port. The default value is `false`. The optional value `true` means listening on both the HTTP 80 port and HTTPS 443 port.
                     * @return Mixed Whether to listen on both the HTTP 80 port and HTTPS 443 port. The default value is `false`. The optional value `true` means listening on both the HTTP 80 port and HTTPS 443 port.
                     * 
                     */
                    bool GetMixed() const;

                    /**
                     * 设置Whether to listen on both the HTTP 80 port and HTTPS 443 port. The default value is `false`. The optional value `true` means listening on both the HTTP 80 port and HTTPS 443 port.
                     * @param _mixed Whether to listen on both the HTTP 80 port and HTTPS 443 port. The default value is `false`. The optional value `true` means listening on both the HTTP 80 port and HTTPS 443 port.
                     * 
                     */
                    void SetMixed(const bool& _mixed);

                    /**
                     * 判断参数 Mixed 是否已赋值
                     * @return Mixed 是否已赋值
                     * 
                     */
                    bool MixedHasBeenSet() const;

                    /**
                     * 获取Redirection mode. Values:
- `AUTO` (automatically redirect HTTP to HTTPS)
- `NONE` (no redirection)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RewriteType Redirection mode. Values:
- `AUTO` (automatically redirect HTTP to HTTPS)
- `NONE` (no redirection)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRewriteType() const;

                    /**
                     * 设置Redirection mode. Values:
- `AUTO` (automatically redirect HTTP to HTTPS)
- `NONE` (no redirection)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _rewriteType Redirection mode. Values:
- `AUTO` (automatically redirect HTTP to HTTPS)
- `NONE` (no redirection)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRewriteType(const std::string& _rewriteType);

                    /**
                     * 判断参数 RewriteType 是否已赋值
                     * @return RewriteType 是否已赋值
                     * 
                     */
                    bool RewriteTypeHasBeenSet() const;

                    /**
                     * 获取CLB domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Domain CLB domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置CLB domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _domain CLB domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Environment ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Environment namespace
                     */
                    std::string m_clusterNamespace;
                    bool m_clusterNamespaceHasBeenSet;

                    /**
                     * ip version
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * ingress name
                     */
                    std::string m_ingressName;
                    bool m_ingressNameHasBeenSet;

                    /**
                     * Rules configuration
                     */
                    std::vector<IngressRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * clb ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_clbId;
                    bool m_clbIdHasBeenSet;

                    /**
                     * TLS configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<IngressTls> m_tls;
                    bool m_tlsHasBeenSet;

                    /**
                     * Environment cluster ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * clb ip
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Creation time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether to listen on both the HTTP 80 port and HTTPS 443 port. The default value is `false`. The optional value `true` means listening on both the HTTP 80 port and HTTPS 443 port.
                     */
                    bool m_mixed;
                    bool m_mixedHasBeenSet;

                    /**
                     * Redirection mode. Values:
- `AUTO` (automatically redirect HTTP to HTTPS)
- `NONE` (no redirection)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_rewriteType;
                    bool m_rewriteTypeHasBeenSet;

                    /**
                     * CLB domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSINFO_H_
