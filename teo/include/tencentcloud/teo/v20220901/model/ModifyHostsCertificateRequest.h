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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ServerCertInfo.h>
#include <tencentcloud/teo/v20220901/model/MutualTLS.h>
#include <tencentcloud/teo/v20220901/model/UpstreamCertInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyHostsCertificate request structure.
                */
                class ModifyHostsCertificateRequest : public AbstractModel
                {
                public:
                    ModifyHostsCertificateRequest();
                    ~ModifyHostsCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site.
                     * @return ZoneId ID of the site.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site.
                     * @param _zoneId ID of the site.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Domain names that you need to modify the certificate configuration
                     * @return Hosts Domain names that you need to modify the certificate configuration
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置Domain names that you need to modify the certificate configuration
                     * @param _hosts Domain names that you need to modify the certificate configuration
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取Configures the server certificate mode. valid values:.

- disable: without configuring server certificate.
- eofreecert: specifies to apply for a free certificate through automatic validation and deploy it. for verification methods, see [free certificate application supported verification methods](https://www.tencentcloud.comom/document/product/1552/90437?from_cn_redirect=1).
    - In ns or DNSPod hosting access mode, free certificates can only be applied for via automatic validation.
    - When a free certificate application fails, it can cause deployment failure. you can obtain the failure reason through the <a href = 'https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1)'>check free certificate application result</a> .
- eofreecert_manual: specifies the deployment of free certificates applied through DNS delegation verification or file verification. before deploying a free certificate, you need to trigger the [apply for free certificate](https://www.tencentcloud.comom/document/product/1552/124807?from_cn_redirect=1)) api to apply for a free certificate. once the application is successful, you can use this enumeration value to deploy the free certificate.
Note: when deploying a free certificate, ensure a successful application for a free certificate already exists. you can check whether a successful application for a free certificate already exists through the <a href = 'https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1)'>check free certificate application result</a> api.
- sslcert: specifies the configuration of the managed service side certificate.
                     * @return Mode Configures the server certificate mode. valid values:.

- disable: without configuring server certificate.
- eofreecert: specifies to apply for a free certificate through automatic validation and deploy it. for verification methods, see [free certificate application supported verification methods](https://www.tencentcloud.comom/document/product/1552/90437?from_cn_redirect=1).
    - In ns or DNSPod hosting access mode, free certificates can only be applied for via automatic validation.
    - When a free certificate application fails, it can cause deployment failure. you can obtain the failure reason through the <a href = 'https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1)'>check free certificate application result</a> .
- eofreecert_manual: specifies the deployment of free certificates applied through DNS delegation verification or file verification. before deploying a free certificate, you need to trigger the [apply for free certificate](https://www.tencentcloud.comom/document/product/1552/124807?from_cn_redirect=1)) api to apply for a free certificate. once the application is successful, you can use this enumeration value to deploy the free certificate.
Note: when deploying a free certificate, ensure a successful application for a free certificate already exists. you can check whether a successful application for a free certificate already exists through the <a href = 'https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1)'>check free certificate application result</a> api.
- sslcert: specifies the configuration of the managed service side certificate.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Configures the server certificate mode. valid values:.

- disable: without configuring server certificate.
- eofreecert: specifies to apply for a free certificate through automatic validation and deploy it. for verification methods, see [free certificate application supported verification methods](https://www.tencentcloud.comom/document/product/1552/90437?from_cn_redirect=1).
    - In ns or DNSPod hosting access mode, free certificates can only be applied for via automatic validation.
    - When a free certificate application fails, it can cause deployment failure. you can obtain the failure reason through the <a href = 'https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1)'>check free certificate application result</a> .
- eofreecert_manual: specifies the deployment of free certificates applied through DNS delegation verification or file verification. before deploying a free certificate, you need to trigger the [apply for free certificate](https://www.tencentcloud.comom/document/product/1552/124807?from_cn_redirect=1)) api to apply for a free certificate. once the application is successful, you can use this enumeration value to deploy the free certificate.
Note: when deploying a free certificate, ensure a successful application for a free certificate already exists. you can check whether a successful application for a free certificate already exists through the <a href = 'https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1)'>check free certificate application result</a> api.
- sslcert: specifies the configuration of the managed service side certificate.
                     * @param _mode Configures the server certificate mode. valid values:.

- disable: without configuring server certificate.
- eofreecert: specifies to apply for a free certificate through automatic validation and deploy it. for verification methods, see [free certificate application supported verification methods](https://www.tencentcloud.comom/document/product/1552/90437?from_cn_redirect=1).
    - In ns or DNSPod hosting access mode, free certificates can only be applied for via automatic validation.
    - When a free certificate application fails, it can cause deployment failure. you can obtain the failure reason through the <a href = 'https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1)'>check free certificate application result</a> .
- eofreecert_manual: specifies the deployment of free certificates applied through DNS delegation verification or file verification. before deploying a free certificate, you need to trigger the [apply for free certificate](https://www.tencentcloud.comom/document/product/1552/124807?from_cn_redirect=1)) api to apply for a free certificate. once the application is successful, you can use this enumeration value to deploy the free certificate.
Note: when deploying a free certificate, ensure a successful application for a free certificate already exists. you can check whether a successful application for a free certificate already exists through the <a href = 'https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1)'>check free certificate application result</a> api.
- sslcert: specifies the configuration of the managed service side certificate.
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取SSL certificate configuration. This parameter is effective only when the mode is sslcert. You only need to provide the CertId of the corresponding certificate. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     * @return ServerCertInfo SSL certificate configuration. This parameter is effective only when the mode is sslcert. You only need to provide the CertId of the corresponding certificate. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     * 
                     */
                    std::vector<ServerCertInfo> GetServerCertInfo() const;

                    /**
                     * 设置SSL certificate configuration. This parameter is effective only when the mode is sslcert. You only need to provide the CertId of the corresponding certificate. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     * @param _serverCertInfo SSL certificate configuration. This parameter is effective only when the mode is sslcert. You only need to provide the CertId of the corresponding certificate. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     * 
                     */
                    void SetServerCertInfo(const std::vector<ServerCertInfo>& _serverCertInfo);

                    /**
                     * 判断参数 ServerCertInfo 是否已赋值
                     * @return ServerCertInfo 是否已赋值
                     * 
                     */
                    bool ServerCertInfoHasBeenSet() const;

                    /**
                     * 获取Whether the certificate is managed by EdgeOne. Values:
<li>`none`: Not managed by EdgeOne</li>
<li>`apply`: Managed by EdgeOne</li>
Default value: `none`.
                     * @return ApplyType Whether the certificate is managed by EdgeOne. Values:
<li>`none`: Not managed by EdgeOne</li>
<li>`apply`: Managed by EdgeOne</li>
Default value: `none`.
                     * @deprecated
                     */
                    std::string GetApplyType() const;

                    /**
                     * 设置Whether the certificate is managed by EdgeOne. Values:
<li>`none`: Not managed by EdgeOne</li>
<li>`apply`: Managed by EdgeOne</li>
Default value: `none`.
                     * @param _applyType Whether the certificate is managed by EdgeOne. Values:
<li>`none`: Not managed by EdgeOne</li>
<li>`apply`: Managed by EdgeOne</li>
Default value: `none`.
                     * @deprecated
                     */
                    void SetApplyType(const std::string& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     * @deprecated
                     */
                    bool ApplyTypeHasBeenSet() const;

                    /**
                     * 获取In the mutual authentication scenario, this field represents the client's CA certificate, which is deployed inside the EO node and used for the client to authenticate the EO node. By default, it is disabled. If it is left blank, it indicates retaining the original configuration.
                     * @return ClientCertInfo In the mutual authentication scenario, this field represents the client's CA certificate, which is deployed inside the EO node and used for the client to authenticate the EO node. By default, it is disabled. If it is left blank, it indicates retaining the original configuration.
                     * 
                     */
                    MutualTLS GetClientCertInfo() const;

                    /**
                     * 设置In the mutual authentication scenario, this field represents the client's CA certificate, which is deployed inside the EO node and used for the client to authenticate the EO node. By default, it is disabled. If it is left blank, it indicates retaining the original configuration.
                     * @param _clientCertInfo In the mutual authentication scenario, this field represents the client's CA certificate, which is deployed inside the EO node and used for the client to authenticate the EO node. By default, it is disabled. If it is left blank, it indicates retaining the original configuration.
                     * 
                     */
                    void SetClientCertInfo(const MutualTLS& _clientCertInfo);

                    /**
                     * 判断参数 ClientCertInfo 是否已赋值
                     * @return ClientCertInfo 是否已赋值
                     * 
                     */
                    bool ClientCertInfoHasBeenSet() const;

                    /**
                     * 获取Specifies the certificate carried during EO node origin-pull for origin-pull mutual authentication handshake, off by default. leave blank to indicate retaining the original configuration. this configuration is currently in closed beta testing for the allowlist feature. if you need to use it, please contact us (https://www.tencentcloud.comom/online?from_cn_redirect=1-service).
                     * @return UpstreamCertInfo Specifies the certificate carried during EO node origin-pull for origin-pull mutual authentication handshake, off by default. leave blank to indicate retaining the original configuration. this configuration is currently in closed beta testing for the allowlist feature. if you need to use it, please contact us (https://www.tencentcloud.comom/online?from_cn_redirect=1-service).
                     * 
                     */
                    UpstreamCertInfo GetUpstreamCertInfo() const;

                    /**
                     * 设置Specifies the certificate carried during EO node origin-pull for origin-pull mutual authentication handshake, off by default. leave blank to indicate retaining the original configuration. this configuration is currently in closed beta testing for the allowlist feature. if you need to use it, please contact us (https://www.tencentcloud.comom/online?from_cn_redirect=1-service).
                     * @param _upstreamCertInfo Specifies the certificate carried during EO node origin-pull for origin-pull mutual authentication handshake, off by default. leave blank to indicate retaining the original configuration. this configuration is currently in closed beta testing for the allowlist feature. if you need to use it, please contact us (https://www.tencentcloud.comom/online?from_cn_redirect=1-service).
                     * 
                     */
                    void SetUpstreamCertInfo(const UpstreamCertInfo& _upstreamCertInfo);

                    /**
                     * 判断参数 UpstreamCertInfo 是否已赋值
                     * @return UpstreamCertInfo 是否已赋值
                     * 
                     */
                    bool UpstreamCertInfoHasBeenSet() const;

                private:

                    /**
                     * ID of the site.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Domain names that you need to modify the certificate configuration
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * Configures the server certificate mode. valid values:.

- disable: without configuring server certificate.
- eofreecert: specifies to apply for a free certificate through automatic validation and deploy it. for verification methods, see [free certificate application supported verification methods](https://www.tencentcloud.comom/document/product/1552/90437?from_cn_redirect=1).
    - In ns or DNSPod hosting access mode, free certificates can only be applied for via automatic validation.
    - When a free certificate application fails, it can cause deployment failure. you can obtain the failure reason through the <a href = 'https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1)'>check free certificate application result</a> .
- eofreecert_manual: specifies the deployment of free certificates applied through DNS delegation verification or file verification. before deploying a free certificate, you need to trigger the [apply for free certificate](https://www.tencentcloud.comom/document/product/1552/124807?from_cn_redirect=1)) api to apply for a free certificate. once the application is successful, you can use this enumeration value to deploy the free certificate.
Note: when deploying a free certificate, ensure a successful application for a free certificate already exists. you can check whether a successful application for a free certificate already exists through the <a href = 'https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1)'>check free certificate application result</a> api.
- sslcert: specifies the configuration of the managed service side certificate.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * SSL certificate configuration. This parameter is effective only when the mode is sslcert. You only need to provide the CertId of the corresponding certificate. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     */
                    std::vector<ServerCertInfo> m_serverCertInfo;
                    bool m_serverCertInfoHasBeenSet;

                    /**
                     * Whether the certificate is managed by EdgeOne. Values:
<li>`none`: Not managed by EdgeOne</li>
<li>`apply`: Managed by EdgeOne</li>
Default value: `none`.
                     */
                    std::string m_applyType;
                    bool m_applyTypeHasBeenSet;

                    /**
                     * In the mutual authentication scenario, this field represents the client's CA certificate, which is deployed inside the EO node and used for the client to authenticate the EO node. By default, it is disabled. If it is left blank, it indicates retaining the original configuration.
                     */
                    MutualTLS m_clientCertInfo;
                    bool m_clientCertInfoHasBeenSet;

                    /**
                     * Specifies the certificate carried during EO node origin-pull for origin-pull mutual authentication handshake, off by default. leave blank to indicate retaining the original configuration. this configuration is currently in closed beta testing for the allowlist feature. if you need to use it, please contact us (https://www.tencentcloud.comom/online?from_cn_redirect=1-service).
                     */
                    UpstreamCertInfo m_upstreamCertInfo;
                    bool m_upstreamCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_
