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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginPrivateParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Modify origin server configuration parameters.
                */
                class ModifyOriginParameters : public AbstractModel
                {
                public:
                    ModifyOriginParameters();
                    ~ModifyOriginParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin server type. Valid values:
<li>IPDomain: IPV4, IPV6, or domain type origin server;</li>
<li>OriginGroup: origin server group type origin server;</li>
<li>LoadBalance: load balancing. This feature is in beta test. If needed, submit a ticket;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWSS3: supports all COS origin servers using the AWS S3 protocol.</li>
                     * @return OriginType Origin server type. Valid values:
<li>IPDomain: IPV4, IPV6, or domain type origin server;</li>
<li>OriginGroup: origin server group type origin server;</li>
<li>LoadBalance: load balancing. This feature is in beta test. If needed, submit a ticket;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWSS3: supports all COS origin servers using the AWS S3 protocol.</li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Origin server type. Valid values:
<li>IPDomain: IPV4, IPV6, or domain type origin server;</li>
<li>OriginGroup: origin server group type origin server;</li>
<li>LoadBalance: load balancing. This feature is in beta test. If needed, submit a ticket;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWSS3: supports all COS origin servers using the AWS S3 protocol.</li>
                     * @param _originType Origin server type. Valid values:
<li>IPDomain: IPV4, IPV6, or domain type origin server;</li>
<li>OriginGroup: origin server group type origin server;</li>
<li>LoadBalance: load balancing. This feature is in beta test. If needed, submit a ticket;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWSS3: supports all COS origin servers using the AWS S3 protocol.</li>
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取Origin server address, which varies according to the value of OriginType:
<li>When OriginType = IPDomain, fill in an IPV4 address, an IPV6 address, or a domain name;</li>
<li>When OriginType = COS, specify the access domain of the COS bucket;</li>
<li>When OriginType = AWSS3, fill in the access domain name of the S3 bucket;</li>
<li>When OriginType = OriginGroup, fill in the origin server group ID. As an output parameter, if an origin server group from another site is referenced, the format is {origin server group ID}@{ZoneID}. For example: og-testorigin@zone-38moq1z10wwwy;</li>
<li>When OriginType = LoadBalance, specify the Cloud Load Balancer instance ID. This feature is currently only available to the allowlist. As an output parameter, if a load balancer from another site is referenced, the format is {load balancer ID}@{ZoneID}. For example: lb-2rxpamcyqfzg@zone-38moq1z10wwwy.</li>
                     * @return Origin Origin server address, which varies according to the value of OriginType:
<li>When OriginType = IPDomain, fill in an IPV4 address, an IPV6 address, or a domain name;</li>
<li>When OriginType = COS, specify the access domain of the COS bucket;</li>
<li>When OriginType = AWSS3, fill in the access domain name of the S3 bucket;</li>
<li>When OriginType = OriginGroup, fill in the origin server group ID. As an output parameter, if an origin server group from another site is referenced, the format is {origin server group ID}@{ZoneID}. For example: og-testorigin@zone-38moq1z10wwwy;</li>
<li>When OriginType = LoadBalance, specify the Cloud Load Balancer instance ID. This feature is currently only available to the allowlist. As an output parameter, if a load balancer from another site is referenced, the format is {load balancer ID}@{ZoneID}. For example: lb-2rxpamcyqfzg@zone-38moq1z10wwwy.</li>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置Origin server address, which varies according to the value of OriginType:
<li>When OriginType = IPDomain, fill in an IPV4 address, an IPV6 address, or a domain name;</li>
<li>When OriginType = COS, specify the access domain of the COS bucket;</li>
<li>When OriginType = AWSS3, fill in the access domain name of the S3 bucket;</li>
<li>When OriginType = OriginGroup, fill in the origin server group ID. As an output parameter, if an origin server group from another site is referenced, the format is {origin server group ID}@{ZoneID}. For example: og-testorigin@zone-38moq1z10wwwy;</li>
<li>When OriginType = LoadBalance, specify the Cloud Load Balancer instance ID. This feature is currently only available to the allowlist. As an output parameter, if a load balancer from another site is referenced, the format is {load balancer ID}@{ZoneID}. For example: lb-2rxpamcyqfzg@zone-38moq1z10wwwy.</li>
                     * @param _origin Origin server address, which varies according to the value of OriginType:
<li>When OriginType = IPDomain, fill in an IPV4 address, an IPV6 address, or a domain name;</li>
<li>When OriginType = COS, specify the access domain of the COS bucket;</li>
<li>When OriginType = AWSS3, fill in the access domain name of the S3 bucket;</li>
<li>When OriginType = OriginGroup, fill in the origin server group ID. As an output parameter, if an origin server group from another site is referenced, the format is {origin server group ID}@{ZoneID}. For example: og-testorigin@zone-38moq1z10wwwy;</li>
<li>When OriginType = LoadBalance, specify the Cloud Load Balancer instance ID. This feature is currently only available to the allowlist. As an output parameter, if a load balancer from another site is referenced, the format is {load balancer ID}@{ZoneID}. For example: lb-2rxpamcyqfzg@zone-38moq1z10wwwy.</li>
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取Origin-pull protocol configuration. This parameter is required when OriginType is IPDomain, OriginGroup, or LoadBalance. Valid values:
<li>http: use HTTP protocol;</li>
<li>https: Use HTTPS protocol;</li>
<li>follow: follow protocol.</li>
                     * @return OriginProtocol Origin-pull protocol configuration. This parameter is required when OriginType is IPDomain, OriginGroup, or LoadBalance. Valid values:
<li>http: use HTTP protocol;</li>
<li>https: Use HTTPS protocol;</li>
<li>follow: follow protocol.</li>
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置Origin-pull protocol configuration. This parameter is required when OriginType is IPDomain, OriginGroup, or LoadBalance. Valid values:
<li>http: use HTTP protocol;</li>
<li>https: Use HTTPS protocol;</li>
<li>follow: follow protocol.</li>
                     * @param _originProtocol Origin-pull protocol configuration. This parameter is required when OriginType is IPDomain, OriginGroup, or LoadBalance. Valid values:
<li>http: use HTTP protocol;</li>
<li>https: Use HTTPS protocol;</li>
<li>follow: follow protocol.</li>
                     * 
                     */
                    void SetOriginProtocol(const std::string& _originProtocol);

                    /**
                     * 判断参数 OriginProtocol 是否已赋值
                     * @return OriginProtocol 是否已赋值
                     * 
                     */
                    bool OriginProtocolHasBeenSet() const;

                    /**
                     * 获取HTTP origin-pull port, value ranges from 1 to 65535. This parameter is required when the origin-pull protocol OriginProtocol is http or follow.
                     * @return HTTPOriginPort HTTP origin-pull port, value ranges from 1 to 65535. This parameter is required when the origin-pull protocol OriginProtocol is http or follow.
                     * 
                     */
                    int64_t GetHTTPOriginPort() const;

                    /**
                     * 设置HTTP origin-pull port, value ranges from 1 to 65535. This parameter is required when the origin-pull protocol OriginProtocol is http or follow.
                     * @param _hTTPOriginPort HTTP origin-pull port, value ranges from 1 to 65535. This parameter is required when the origin-pull protocol OriginProtocol is http or follow.
                     * 
                     */
                    void SetHTTPOriginPort(const int64_t& _hTTPOriginPort);

                    /**
                     * 判断参数 HTTPOriginPort 是否已赋值
                     * @return HTTPOriginPort 是否已赋值
                     * 
                     */
                    bool HTTPOriginPortHasBeenSet() const;

                    /**
                     * 获取HTTPS origin-pull port, value range: 1–65535. This parameter is required when OriginProtocol is https or follow.
                     * @return HTTPSOriginPort HTTPS origin-pull port, value range: 1–65535. This parameter is required when OriginProtocol is https or follow.
                     * 
                     */
                    int64_t GetHTTPSOriginPort() const;

                    /**
                     * 设置HTTPS origin-pull port, value range: 1–65535. This parameter is required when OriginProtocol is https or follow.
                     * @param _hTTPSOriginPort HTTPS origin-pull port, value range: 1–65535. This parameter is required when OriginProtocol is https or follow.
                     * 
                     */
                    void SetHTTPSOriginPort(const int64_t& _hTTPSOriginPort);

                    /**
                     * 判断参数 HTTPSOriginPort 是否已赋值
                     * @return HTTPSOriginPort 是否已赋值
                     * 
                     */
                    bool HTTPSOriginPortHasBeenSet() const;

                    /**
                     * 获取Whether access to the private object storage origin server is allowed. This parameter is required when the origin server type OriginType is COS or AWSS3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication. </li>
                     * @return PrivateAccess Whether access to the private object storage origin server is allowed. This parameter is required when the origin server type OriginType is COS or AWSS3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication. </li>
                     * 
                     */
                    std::string GetPrivateAccess() const;

                    /**
                     * 设置Whether access to the private object storage origin server is allowed. This parameter is required when the origin server type OriginType is COS or AWSS3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication. </li>
                     * @param _privateAccess Whether access to the private object storage origin server is allowed. This parameter is required when the origin server type OriginType is COS or AWSS3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication. </li>
                     * 
                     */
                    void SetPrivateAccess(const std::string& _privateAccess);

                    /**
                     * 判断参数 PrivateAccess 是否已赋值
                     * @return PrivateAccess 是否已赋值
                     * 
                     */
                    bool PrivateAccessHasBeenSet() const;

                    /**
                     * 获取Private authentication parameter. This parameter is valid only when OriginType = AWSS3 and PrivateAccess = on.
                     * @return PrivateParameters Private authentication parameter. This parameter is valid only when OriginType = AWSS3 and PrivateAccess = on.
                     * 
                     */
                    OriginPrivateParameters GetPrivateParameters() const;

                    /**
                     * 设置Private authentication parameter. This parameter is valid only when OriginType = AWSS3 and PrivateAccess = on.
                     * @param _privateParameters Private authentication parameter. This parameter is valid only when OriginType = AWSS3 and PrivateAccess = on.
                     * 
                     */
                    void SetPrivateParameters(const OriginPrivateParameters& _privateParameters);

                    /**
                     * 判断参数 PrivateParameters 是否已赋值
                     * @return PrivateParameters 是否已赋值
                     * 
                     */
                    bool PrivateParametersHasBeenSet() const;

                private:

                    /**
                     * Origin server type. Valid values:
<li>IPDomain: IPV4, IPV6, or domain type origin server;</li>
<li>OriginGroup: origin server group type origin server;</li>
<li>LoadBalance: load balancing. This feature is in beta test. If needed, submit a ticket;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWSS3: supports all COS origin servers using the AWS S3 protocol.</li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Origin server address, which varies according to the value of OriginType:
<li>When OriginType = IPDomain, fill in an IPV4 address, an IPV6 address, or a domain name;</li>
<li>When OriginType = COS, specify the access domain of the COS bucket;</li>
<li>When OriginType = AWSS3, fill in the access domain name of the S3 bucket;</li>
<li>When OriginType = OriginGroup, fill in the origin server group ID. As an output parameter, if an origin server group from another site is referenced, the format is {origin server group ID}@{ZoneID}. For example: og-testorigin@zone-38moq1z10wwwy;</li>
<li>When OriginType = LoadBalance, specify the Cloud Load Balancer instance ID. This feature is currently only available to the allowlist. As an output parameter, if a load balancer from another site is referenced, the format is {load balancer ID}@{ZoneID}. For example: lb-2rxpamcyqfzg@zone-38moq1z10wwwy.</li>
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Origin-pull protocol configuration. This parameter is required when OriginType is IPDomain, OriginGroup, or LoadBalance. Valid values:
<li>http: use HTTP protocol;</li>
<li>https: Use HTTPS protocol;</li>
<li>follow: follow protocol.</li>
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * HTTP origin-pull port, value ranges from 1 to 65535. This parameter is required when the origin-pull protocol OriginProtocol is http or follow.
                     */
                    int64_t m_hTTPOriginPort;
                    bool m_hTTPOriginPortHasBeenSet;

                    /**
                     * HTTPS origin-pull port, value range: 1–65535. This parameter is required when OriginProtocol is https or follow.
                     */
                    int64_t m_hTTPSOriginPort;
                    bool m_hTTPSOriginPortHasBeenSet;

                    /**
                     * Whether access to the private object storage origin server is allowed. This parameter is required when the origin server type OriginType is COS or AWSS3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication. </li>
                     */
                    std::string m_privateAccess;
                    bool m_privateAccessHasBeenSet;

                    /**
                     * Private authentication parameter. This parameter is valid only when OriginType = AWSS3 and PrivateAccess = on.
                     */
                    OriginPrivateParameters m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINPARAMETERS_H_
