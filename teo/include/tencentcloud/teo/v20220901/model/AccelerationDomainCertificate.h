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
                * Information of the acceleration domain name certificate.
                */
                class AccelerationDomainCertificate : public AbstractModel
                {
                public:
                    AccelerationDomainCertificate();
                    ~AccelerationDomainCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The server certificate configuration mode has the following valid values: <ul><li>disable: do not configure a server certificate.</li> <li>eofreecert: apply for a free certificate through automatic verification and deploy it. for verification methods, see: [supported verification methods for free certificate applications](https://www.tencentcloud.comom/document/product/1552/90437?from_cn_redirect=1). - in NS or DNSPod hosting access mode, only the automatic verification method is supported for free certificate applications. - if the free certificate application fails, it will cause deployment failure. you can obtain the reason for the failure through the <a href='https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api.</li> <li>eofreecert_manual: deploy a free certificate applied through DNS delegation verification or file verification. before deploying the free certificate, you need to trigger the <a href='https://www.tencentcloud.comom/document/product/1552/124807?from_cn_redirect=1'>apply for free certificate</a> API to apply for a free certificate. once the application is successful, you can deploy the free certificate using this enumeration value.</li> <ul><li>note: when deploying a free certificate, ensure that a successfully applied free certificate already exists. you can check whether a successfully applied free certificate exists through the <a href='https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api.</li> </ul> <li>sslcert: configure an SSL managed server-side certificate.</li></ul>.
                     * @return Mode The server certificate configuration mode has the following valid values: <ul><li>disable: do not configure a server certificate.</li> <li>eofreecert: apply for a free certificate through automatic verification and deploy it. for verification methods, see: [supported verification methods for free certificate applications](https://www.tencentcloud.comom/document/product/1552/90437?from_cn_redirect=1). - in NS or DNSPod hosting access mode, only the automatic verification method is supported for free certificate applications. - if the free certificate application fails, it will cause deployment failure. you can obtain the reason for the failure through the <a href='https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api.</li> <li>eofreecert_manual: deploy a free certificate applied through DNS delegation verification or file verification. before deploying the free certificate, you need to trigger the <a href='https://www.tencentcloud.comom/document/product/1552/124807?from_cn_redirect=1'>apply for free certificate</a> API to apply for a free certificate. once the application is successful, you can deploy the free certificate using this enumeration value.</li> <ul><li>note: when deploying a free certificate, ensure that a successfully applied free certificate already exists. you can check whether a successfully applied free certificate exists through the <a href='https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api.</li> </ul> <li>sslcert: configure an SSL managed server-side certificate.</li></ul>.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置The server certificate configuration mode has the following valid values: <ul><li>disable: do not configure a server certificate.</li> <li>eofreecert: apply for a free certificate through automatic verification and deploy it. for verification methods, see: [supported verification methods for free certificate applications](https://www.tencentcloud.comom/document/product/1552/90437?from_cn_redirect=1). - in NS or DNSPod hosting access mode, only the automatic verification method is supported for free certificate applications. - if the free certificate application fails, it will cause deployment failure. you can obtain the reason for the failure through the <a href='https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api.</li> <li>eofreecert_manual: deploy a free certificate applied through DNS delegation verification or file verification. before deploying the free certificate, you need to trigger the <a href='https://www.tencentcloud.comom/document/product/1552/124807?from_cn_redirect=1'>apply for free certificate</a> API to apply for a free certificate. once the application is successful, you can deploy the free certificate using this enumeration value.</li> <ul><li>note: when deploying a free certificate, ensure that a successfully applied free certificate already exists. you can check whether a successfully applied free certificate exists through the <a href='https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api.</li> </ul> <li>sslcert: configure an SSL managed server-side certificate.</li></ul>.
                     * @param _mode The server certificate configuration mode has the following valid values: <ul><li>disable: do not configure a server certificate.</li> <li>eofreecert: apply for a free certificate through automatic verification and deploy it. for verification methods, see: [supported verification methods for free certificate applications](https://www.tencentcloud.comom/document/product/1552/90437?from_cn_redirect=1). - in NS or DNSPod hosting access mode, only the automatic verification method is supported for free certificate applications. - if the free certificate application fails, it will cause deployment failure. you can obtain the reason for the failure through the <a href='https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api.</li> <li>eofreecert_manual: deploy a free certificate applied through DNS delegation verification or file verification. before deploying the free certificate, you need to trigger the <a href='https://www.tencentcloud.comom/document/product/1552/124807?from_cn_redirect=1'>apply for free certificate</a> API to apply for a free certificate. once the application is successful, you can deploy the free certificate using this enumeration value.</li> <ul><li>note: when deploying a free certificate, ensure that a successfully applied free certificate already exists. you can check whether a successfully applied free certificate exists through the <a href='https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api.</li> </ul> <li>sslcert: configure an SSL managed server-side certificate.</li></ul>.
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
                     * 获取List of server certificates. The relevant certificates are deployed on the entrance side of the EO.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return List List of server certificates. The relevant certificates are deployed on the entrance side of the EO.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::vector<CertificateInfo> GetList() const;

                    /**
                     * 设置List of server certificates. The relevant certificates are deployed on the entrance side of the EO.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _list List of server certificates. The relevant certificates are deployed on the entrance side of the EO.
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Specifies whether to enable or disable origin-pull mutual authentication and origin certificate verification. the certificate for origin-pull mutual authentication is carried during EO node origin-pull, and the origin server can choose to validate this certificate to ensure the request originates from a trusted EO node. when origin certificate verification is enabled, the certificate configuration is used for the EO node to verify whether the origin certificate is trustworthy.
                     * @return UpstreamCertInfo Specifies whether to enable or disable origin-pull mutual authentication and origin certificate verification. the certificate for origin-pull mutual authentication is carried during EO node origin-pull, and the origin server can choose to validate this certificate to ensure the request originates from a trusted EO node. when origin certificate verification is enabled, the certificate configuration is used for the EO node to verify whether the origin certificate is trustworthy.
                     * 
                     */
                    UpstreamCertInfo GetUpstreamCertInfo() const;

                    /**
                     * 设置Specifies whether to enable or disable origin-pull mutual authentication and origin certificate verification. the certificate for origin-pull mutual authentication is carried during EO node origin-pull, and the origin server can choose to validate this certificate to ensure the request originates from a trusted EO node. when origin certificate verification is enabled, the certificate configuration is used for the EO node to verify whether the origin certificate is trustworthy.
                     * @param _upstreamCertInfo Specifies whether to enable or disable origin-pull mutual authentication and origin certificate verification. the certificate for origin-pull mutual authentication is carried during EO node origin-pull, and the origin server can choose to validate this certificate to ensure the request originates from a trusted EO node. when origin certificate verification is enabled, the certificate configuration is used for the EO node to verify whether the origin certificate is trustworthy.
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
                     * The server certificate configuration mode has the following valid values: <ul><li>disable: do not configure a server certificate.</li> <li>eofreecert: apply for a free certificate through automatic verification and deploy it. for verification methods, see: [supported verification methods for free certificate applications](https://www.tencentcloud.comom/document/product/1552/90437?from_cn_redirect=1). - in NS or DNSPod hosting access mode, only the automatic verification method is supported for free certificate applications. - if the free certificate application fails, it will cause deployment failure. you can obtain the reason for the failure through the <a href='https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api.</li> <li>eofreecert_manual: deploy a free certificate applied through DNS delegation verification or file verification. before deploying the free certificate, you need to trigger the <a href='https://www.tencentcloud.comom/document/product/1552/124807?from_cn_redirect=1'>apply for free certificate</a> API to apply for a free certificate. once the application is successful, you can deploy the free certificate using this enumeration value.</li> <ul><li>note: when deploying a free certificate, ensure that a successfully applied free certificate already exists. you can check whether a successfully applied free certificate exists through the <a href='https://www.tencentcloud.comom/document/product/1552/124806?from_cn_redirect=1'>check free certificate application result</a> api.</li> </ul> <li>sslcert: configure an SSL managed server-side certificate.</li></ul>.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * List of server certificates. The relevant certificates are deployed on the entrance side of the EO.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::vector<CertificateInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * In the edge mutual authentication scenario, this field represents the client's CA certificate, which is deployed inside the EO node and used for EO node authentication of the client certificate.
                     */
                    MutualTLS m_clientCertInfo;
                    bool m_clientCertInfoHasBeenSet;

                    /**
                     * Specifies whether to enable or disable origin-pull mutual authentication and origin certificate verification. the certificate for origin-pull mutual authentication is carried during EO node origin-pull, and the origin server can choose to validate this certificate to ensure the request originates from a trusted EO node. when origin certificate verification is enabled, the certificate configuration is used for the EO node to verify whether the origin certificate is trustworthy.
                     */
                    UpstreamCertInfo m_upstreamCertInfo;
                    bool m_upstreamCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAINCERTIFICATE_H_
