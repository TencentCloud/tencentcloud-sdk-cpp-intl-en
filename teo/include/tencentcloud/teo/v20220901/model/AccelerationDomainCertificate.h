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
                     * 获取Certificate configuration mode. Values: <li>`disable`: Do not configure the certificate;</li><li>`eofreecert`: Use a free certificate provided by EdgeOne; </li><li>`sslcert`: Configure an SSL certificate.</li>
                     * @return Mode Certificate configuration mode. Values: <li>`disable`: Do not configure the certificate;</li><li>`eofreecert`: Use a free certificate provided by EdgeOne; </li><li>`sslcert`: Configure an SSL certificate.</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Certificate configuration mode. Values: <li>`disable`: Do not configure the certificate;</li><li>`eofreecert`: Use a free certificate provided by EdgeOne; </li><li>`sslcert`: Configure an SSL certificate.</li>
                     * @param _mode Certificate configuration mode. Values: <li>`disable`: Do not configure the certificate;</li><li>`eofreecert`: Use a free certificate provided by EdgeOne; </li><li>`sslcert`: Configure an SSL certificate.</li>
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
                     * 获取The certificate carried during EO node origin-pull is used when the origin server enables the mutual authentication handshake to validate the client certificate, ensuring that the request originates from a trusted EO node.
                     * @return UpstreamCertInfo The certificate carried during EO node origin-pull is used when the origin server enables the mutual authentication handshake to validate the client certificate, ensuring that the request originates from a trusted EO node.
                     * 
                     */
                    UpstreamCertInfo GetUpstreamCertInfo() const;

                    /**
                     * 设置The certificate carried during EO node origin-pull is used when the origin server enables the mutual authentication handshake to validate the client certificate, ensuring that the request originates from a trusted EO node.
                     * @param _upstreamCertInfo The certificate carried during EO node origin-pull is used when the origin server enables the mutual authentication handshake to validate the client certificate, ensuring that the request originates from a trusted EO node.
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
                     * Certificate configuration mode. Values: <li>`disable`: Do not configure the certificate;</li><li>`eofreecert`: Use a free certificate provided by EdgeOne; </li><li>`sslcert`: Configure an SSL certificate.</li>
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
                     * The certificate carried during EO node origin-pull is used when the origin server enables the mutual authentication handshake to validate the client certificate, ensuring that the request originates from a trusted EO node.
                     */
                    UpstreamCertInfo m_upstreamCertInfo;
                    bool m_upstreamCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAINCERTIFICATE_H_
