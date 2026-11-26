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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAINCERTIFICATE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAINCERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CertificateInfo.h>
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
                * Certificate information of the acceleration domain name.
                */
                class AccelerationDomainCertificate : public AbstractModel
                {
                public:
                    AccelerationDomainCertificate();
                    ~AccelerationDomainCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mode for configuring the server certificate. Valid values: <ul><li>disable: Do not configure a server certificate.</li> <li>eofreecert: Apply for a free certificate through automatic verification and deploy it. For details on the verification method, see [Supported Verification Methods for Free Certificate Application](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). - In NS or DNSPod hosting access mode, free certificates can only be applied for through automatic verification. - If the free certificate application fails, the certificate deployment will fail. You can obtain the failure reason through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API.</li><li>eofreecert_manual: Deploy a free certificate applied for through DNS delegated verification or file verification. Before deploying a free certificate, you need to trigger the <a href = 'https://www.tencentcloud.com/document/product/1552/124807?from_cn_redirect=1'>Apply for Free Certificate</a> API to apply for a free certificate. After the free certificate application succeeds, you can use this enumeration value to deploy the free certificate.</li> <ul><li>Note: When deploying a free certificate, ensure that a successfully applied free certificate already exists. You can check whether a successfully applied free certificate already exists through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API.</li> </ul> <li>sslcert: Configure an SSL managed server certificate.</li></ul>
                     * @return Mode Mode for configuring the server certificate. Valid values: <ul><li>disable: Do not configure a server certificate.</li> <li>eofreecert: Apply for a free certificate through automatic verification and deploy it. For details on the verification method, see [Supported Verification Methods for Free Certificate Application](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). - In NS or DNSPod hosting access mode, free certificates can only be applied for through automatic verification. - If the free certificate application fails, the certificate deployment will fail. You can obtain the failure reason through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API.</li><li>eofreecert_manual: Deploy a free certificate applied for through DNS delegated verification or file verification. Before deploying a free certificate, you need to trigger the <a href = 'https://www.tencentcloud.com/document/product/1552/124807?from_cn_redirect=1'>Apply for Free Certificate</a> API to apply for a free certificate. After the free certificate application succeeds, you can use this enumeration value to deploy the free certificate.</li> <ul><li>Note: When deploying a free certificate, ensure that a successfully applied free certificate already exists. You can check whether a successfully applied free certificate already exists through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API.</li> </ul> <li>sslcert: Configure an SSL managed server certificate.</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Mode for configuring the server certificate. Valid values: <ul><li>disable: Do not configure a server certificate.</li> <li>eofreecert: Apply for a free certificate through automatic verification and deploy it. For details on the verification method, see [Supported Verification Methods for Free Certificate Application](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). - In NS or DNSPod hosting access mode, free certificates can only be applied for through automatic verification. - If the free certificate application fails, the certificate deployment will fail. You can obtain the failure reason through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API.</li><li>eofreecert_manual: Deploy a free certificate applied for through DNS delegated verification or file verification. Before deploying a free certificate, you need to trigger the <a href = 'https://www.tencentcloud.com/document/product/1552/124807?from_cn_redirect=1'>Apply for Free Certificate</a> API to apply for a free certificate. After the free certificate application succeeds, you can use this enumeration value to deploy the free certificate.</li> <ul><li>Note: When deploying a free certificate, ensure that a successfully applied free certificate already exists. You can check whether a successfully applied free certificate already exists through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API.</li> </ul> <li>sslcert: Configure an SSL managed server certificate.</li></ul>
                     * @param _mode Mode for configuring the server certificate. Valid values: <ul><li>disable: Do not configure a server certificate.</li> <li>eofreecert: Apply for a free certificate through automatic verification and deploy it. For details on the verification method, see [Supported Verification Methods for Free Certificate Application](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). - In NS or DNSPod hosting access mode, free certificates can only be applied for through automatic verification. - If the free certificate application fails, the certificate deployment will fail. You can obtain the failure reason through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API.</li><li>eofreecert_manual: Deploy a free certificate applied for through DNS delegated verification or file verification. Before deploying a free certificate, you need to trigger the <a href = 'https://www.tencentcloud.com/document/product/1552/124807?from_cn_redirect=1'>Apply for Free Certificate</a> API to apply for a free certificate. After the free certificate application succeeds, you can use this enumeration value to deploy the free certificate.</li> <ul><li>Note: When deploying a free certificate, ensure that a successfully applied free certificate already exists. You can check whether a successfully applied free certificate already exists through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API.</li> </ul> <li>sslcert: Configure an SSL managed server certificate.</li></ul>
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
                     * 获取List of server certificates. The related certificates are deployed at the EO entry side.
                     * @return List List of server certificates. The related certificates are deployed at the EO entry side.
                     * 
                     */
                    std::vector<CertificateInfo> GetList() const;

                    /**
                     * 设置List of server certificates. The related certificates are deployed at the EO entry side.
                     * @param _list List of server certificates. The related certificates are deployed at the EO entry side.
                     * 
                     */
                    void SetList(const std::vector<CertificateInfo>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取In the edge mutual authentication scenario, this field represents the client's CA certificate, which is deployed inside the EO node and used for EO node authentication of the client certificate.
                     * @return ClientCertInfo In the edge mutual authentication scenario, this field represents the client's CA certificate, which is deployed inside the EO node and used for EO node authentication of the client certificate.
                     * 
                     */
                    MutualTLS GetClientCertInfo() const;

                    /**
                     * 设置In the edge mutual authentication scenario, this field represents the client's CA certificate, which is deployed inside the EO node and used for EO node authentication of the client certificate.
                     * @param _clientCertInfo In the edge mutual authentication scenario, this field represents the client's CA certificate, which is deployed inside the EO node and used for EO node authentication of the client certificate.
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
                     * 获取Used to enable or disable origin-pull mutual authentication and origin certificate verification. The certificate for origin-pull mutual authentication is carried during EO origin-pull. The origin server can choose to verify this certificate to ensure the request originates from a trusted EO node. When origin certificate verification is enabled, the certificate configuration is used for EO nodes to verify whether the origin certificate is trustworthy.
                     * @return UpstreamCertInfo Used to enable or disable origin-pull mutual authentication and origin certificate verification. The certificate for origin-pull mutual authentication is carried during EO origin-pull. The origin server can choose to verify this certificate to ensure the request originates from a trusted EO node. When origin certificate verification is enabled, the certificate configuration is used for EO nodes to verify whether the origin certificate is trustworthy.
                     * 
                     */
                    UpstreamCertInfo GetUpstreamCertInfo() const;

                    /**
                     * 设置Used to enable or disable origin-pull mutual authentication and origin certificate verification. The certificate for origin-pull mutual authentication is carried during EO origin-pull. The origin server can choose to verify this certificate to ensure the request originates from a trusted EO node. When origin certificate verification is enabled, the certificate configuration is used for EO nodes to verify whether the origin certificate is trustworthy.
                     * @param _upstreamCertInfo Used to enable or disable origin-pull mutual authentication and origin certificate verification. The certificate for origin-pull mutual authentication is carried during EO origin-pull. The origin server can choose to verify this certificate to ensure the request originates from a trusted EO node. When origin certificate verification is enabled, the certificate configuration is used for EO nodes to verify whether the origin certificate is trustworthy.
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
                     * Mode for configuring the server certificate. Valid values: <ul><li>disable: Do not configure a server certificate.</li> <li>eofreecert: Apply for a free certificate through automatic verification and deploy it. For details on the verification method, see [Supported Verification Methods for Free Certificate Application](https://www.tencentcloud.com/document/product/1552/90437?from_cn_redirect=1). - In NS or DNSPod hosting access mode, free certificates can only be applied for through automatic verification. - If the free certificate application fails, the certificate deployment will fail. You can obtain the failure reason through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API.</li><li>eofreecert_manual: Deploy a free certificate applied for through DNS delegated verification or file verification. Before deploying a free certificate, you need to trigger the <a href = 'https://www.tencentcloud.com/document/product/1552/124807?from_cn_redirect=1'>Apply for Free Certificate</a> API to apply for a free certificate. After the free certificate application succeeds, you can use this enumeration value to deploy the free certificate.</li> <ul><li>Note: When deploying a free certificate, ensure that a successfully applied free certificate already exists. You can check whether a successfully applied free certificate already exists through the <a href = 'https://www.tencentcloud.com/document/product/1552/124806?from_cn_redirect=1'>Check Free Certificate Application Result</a> API.</li> </ul> <li>sslcert: Configure an SSL managed server certificate.</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * List of server certificates. The related certificates are deployed at the EO entry side.
                     */
                    std::vector<CertificateInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * In the edge mutual authentication scenario, this field represents the client's CA certificate, which is deployed inside the EO node and used for EO node authentication of the client certificate.
                     */
                    MutualTLS m_clientCertInfo;
                    bool m_clientCertInfoHasBeenSet;

                    /**
                     * Used to enable or disable origin-pull mutual authentication and origin certificate verification. The certificate for origin-pull mutual authentication is carried during EO origin-pull. The origin server can choose to verify this certificate to ensure the request originates from a trusted EO node. When origin certificate verification is enabled, the certificate configuration is used for EO nodes to verify whether the origin certificate is trustworthy.
                     */
                    UpstreamCertInfo m_upstreamCertInfo;
                    bool m_upstreamCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAINCERTIFICATE_H_
