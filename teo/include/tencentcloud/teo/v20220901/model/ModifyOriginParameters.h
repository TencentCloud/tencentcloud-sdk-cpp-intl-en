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
                * Modifying origin server configuration parameters
                */
                class ModifyOriginParameters : public AbstractModel
                {
                public:
                    ModifyOriginParameters();
                    ~ModifyOriginParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The origin type. values:.
<Li>IPDomain: ipv4, ipv6, or domain name type origin server;</li>.
<Li>OriginGroup: origin server group type origin server;</li>.
<Li>LoadBalance: cloud load balancer (clb), this feature is in beta test. to use it, please submit a ticket or contact smart customer service;</li>.
<Li>COS: tencent cloud COS origin server;</li>.
<Li>AWSS3: all object storage origin servers that support the aws s3 protocol.</li>.
                     * @return OriginType The origin type. values:.
<Li>IPDomain: ipv4, ipv6, or domain name type origin server;</li>.
<Li>OriginGroup: origin server group type origin server;</li>.
<Li>LoadBalance: cloud load balancer (clb), this feature is in beta test. to use it, please submit a ticket or contact smart customer service;</li>.
<Li>COS: tencent cloud COS origin server;</li>.
<Li>AWSS3: all object storage origin servers that support the aws s3 protocol.</li>.
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置The origin type. values:.
<Li>IPDomain: ipv4, ipv6, or domain name type origin server;</li>.
<Li>OriginGroup: origin server group type origin server;</li>.
<Li>LoadBalance: cloud load balancer (clb), this feature is in beta test. to use it, please submit a ticket or contact smart customer service;</li>.
<Li>COS: tencent cloud COS origin server;</li>.
<Li>AWSS3: all object storage origin servers that support the aws s3 protocol.</li>.
                     * @param _originType The origin type. values:.
<Li>IPDomain: ipv4, ipv6, or domain name type origin server;</li>.
<Li>OriginGroup: origin server group type origin server;</li>.
<Li>LoadBalance: cloud load balancer (clb), this feature is in beta test. to use it, please submit a ticket or contact smart customer service;</li>.
<Li>COS: tencent cloud COS origin server;</li>.
<Li>AWSS3: all object storage origin servers that support the aws s3 protocol.</li>.
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
                     * 获取Origin server address, which varies according to the value of origintype:.
<Li>When origintype = ipdomain, fill in an ipv4 address, an ipv6 address, or a domain name;</li>.
<Li>When origintype = cos, please fill in the access domain name of the cos bucket;</li>.
<Li>When origintype = awss3, fill in the access domain name of the s3 bucket;</li>.
<Li>When origintype = origingroup, fill in the origin server group id;</li>.
<Li>When origintype = loadbalance, fill in the cloud load balancer instance id. this feature is currently only available to the allowlist.</li>.
                     * @return Origin Origin server address, which varies according to the value of origintype:.
<Li>When origintype = ipdomain, fill in an ipv4 address, an ipv6 address, or a domain name;</li>.
<Li>When origintype = cos, please fill in the access domain name of the cos bucket;</li>.
<Li>When origintype = awss3, fill in the access domain name of the s3 bucket;</li>.
<Li>When origintype = origingroup, fill in the origin server group id;</li>.
<Li>When origintype = loadbalance, fill in the cloud load balancer instance id. this feature is currently only available to the allowlist.</li>.
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置Origin server address, which varies according to the value of origintype:.
<Li>When origintype = ipdomain, fill in an ipv4 address, an ipv6 address, or a domain name;</li>.
<Li>When origintype = cos, please fill in the access domain name of the cos bucket;</li>.
<Li>When origintype = awss3, fill in the access domain name of the s3 bucket;</li>.
<Li>When origintype = origingroup, fill in the origin server group id;</li>.
<Li>When origintype = loadbalance, fill in the cloud load balancer instance id. this feature is currently only available to the allowlist.</li>.
                     * @param _origin Origin server address, which varies according to the value of origintype:.
<Li>When origintype = ipdomain, fill in an ipv4 address, an ipv6 address, or a domain name;</li>.
<Li>When origintype = cos, please fill in the access domain name of the cos bucket;</li>.
<Li>When origintype = awss3, fill in the access domain name of the s3 bucket;</li>.
<Li>When origintype = origingroup, fill in the origin server group id;</li>.
<Li>When origintype = loadbalance, fill in the cloud load balancer instance id. this feature is currently only available to the allowlist.</li>.
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
                     * 获取Origin-Pull protocol configuration. this parameter is required when origintype is ipdomain, origingroup, or loadbalance. valid values are:.
<Li>Http: use http protocol;</li>.
<Li>Https: use https protocol;</li>.
<Li>Follow: follow the protocol.</li>.
                     * @return OriginProtocol Origin-Pull protocol configuration. this parameter is required when origintype is ipdomain, origingroup, or loadbalance. valid values are:.
<Li>Http: use http protocol;</li>.
<Li>Https: use https protocol;</li>.
<Li>Follow: follow the protocol.</li>.
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置Origin-Pull protocol configuration. this parameter is required when origintype is ipdomain, origingroup, or loadbalance. valid values are:.
<Li>Http: use http protocol;</li>.
<Li>Https: use https protocol;</li>.
<Li>Follow: follow the protocol.</li>.
                     * @param _originProtocol Origin-Pull protocol configuration. this parameter is required when origintype is ipdomain, origingroup, or loadbalance. valid values are:.
<Li>Http: use http protocol;</li>.
<Li>Https: use https protocol;</li>.
<Li>Follow: follow the protocol.</li>.
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
                     * 获取Ports for http origin-pull requests. value range: 1-65535. this parameter takes effect only when the origin-pull protocol originprotocol is http or follow.
                     * @return HTTPOriginPort Ports for http origin-pull requests. value range: 1-65535. this parameter takes effect only when the origin-pull protocol originprotocol is http or follow.
                     * 
                     */
                    int64_t GetHTTPOriginPort() const;

                    /**
                     * 设置Ports for http origin-pull requests. value range: 1-65535. this parameter takes effect only when the origin-pull protocol originprotocol is http or follow.
                     * @param _hTTPOriginPort Ports for http origin-pull requests. value range: 1-65535. this parameter takes effect only when the origin-pull protocol originprotocol is http or follow.
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
                     * 获取Ports for https origin-pull requests. value range: 1-65535. this parameter takes effect only when the origin-pull protocol originprotocol is https or follow.
                     * @return HTTPSOriginPort Ports for https origin-pull requests. value range: 1-65535. this parameter takes effect only when the origin-pull protocol originprotocol is https or follow.
                     * 
                     */
                    int64_t GetHTTPSOriginPort() const;

                    /**
                     * 设置Ports for https origin-pull requests. value range: 1-65535. this parameter takes effect only when the origin-pull protocol originprotocol is https or follow.
                     * @param _hTTPSOriginPort Ports for https origin-pull requests. value range: 1-65535. this parameter takes effect only when the origin-pull protocol originprotocol is https or follow.
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
                     * 获取Whether access to the private object storage origin server is allowed. this parameter is valid only when the origin server type origintype is COS or awss3. valid values:.
<Li>On: enable private authentication;</li>.
<Li>Off: disable private authentication.</li> if not specified, the default value is off.
                     * @return PrivateAccess Whether access to the private object storage origin server is allowed. this parameter is valid only when the origin server type origintype is COS or awss3. valid values:.
<Li>On: enable private authentication;</li>.
<Li>Off: disable private authentication.</li> if not specified, the default value is off.
                     * 
                     */
                    std::string GetPrivateAccess() const;

                    /**
                     * 设置Whether access to the private object storage origin server is allowed. this parameter is valid only when the origin server type origintype is COS or awss3. valid values:.
<Li>On: enable private authentication;</li>.
<Li>Off: disable private authentication.</li> if not specified, the default value is off.
                     * @param _privateAccess Whether access to the private object storage origin server is allowed. this parameter is valid only when the origin server type origintype is COS or awss3. valid values:.
<Li>On: enable private authentication;</li>.
<Li>Off: disable private authentication.</li> if not specified, the default value is off.
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
                     * 获取Private authentication parameter. this parameter is valid only when origintype = awss3 and privateaccess = on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return PrivateParameters Private authentication parameter. this parameter is valid only when origintype = awss3 and privateaccess = on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    OriginPrivateParameters GetPrivateParameters() const;

                    /**
                     * 设置Private authentication parameter. this parameter is valid only when origintype = awss3 and privateaccess = on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _privateParameters Private authentication parameter. this parameter is valid only when origintype = awss3 and privateaccess = on.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
                     * The origin type. values:.
<Li>IPDomain: ipv4, ipv6, or domain name type origin server;</li>.
<Li>OriginGroup: origin server group type origin server;</li>.
<Li>LoadBalance: cloud load balancer (clb), this feature is in beta test. to use it, please submit a ticket or contact smart customer service;</li>.
<Li>COS: tencent cloud COS origin server;</li>.
<Li>AWSS3: all object storage origin servers that support the aws s3 protocol.</li>.
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Origin server address, which varies according to the value of origintype:.
<Li>When origintype = ipdomain, fill in an ipv4 address, an ipv6 address, or a domain name;</li>.
<Li>When origintype = cos, please fill in the access domain name of the cos bucket;</li>.
<Li>When origintype = awss3, fill in the access domain name of the s3 bucket;</li>.
<Li>When origintype = origingroup, fill in the origin server group id;</li>.
<Li>When origintype = loadbalance, fill in the cloud load balancer instance id. this feature is currently only available to the allowlist.</li>.
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Origin-Pull protocol configuration. this parameter is required when origintype is ipdomain, origingroup, or loadbalance. valid values are:.
<Li>Http: use http protocol;</li>.
<Li>Https: use https protocol;</li>.
<Li>Follow: follow the protocol.</li>.
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * Ports for http origin-pull requests. value range: 1-65535. this parameter takes effect only when the origin-pull protocol originprotocol is http or follow.
                     */
                    int64_t m_hTTPOriginPort;
                    bool m_hTTPOriginPortHasBeenSet;

                    /**
                     * Ports for https origin-pull requests. value range: 1-65535. this parameter takes effect only when the origin-pull protocol originprotocol is https or follow.
                     */
                    int64_t m_hTTPSOriginPort;
                    bool m_hTTPSOriginPortHasBeenSet;

                    /**
                     * Whether access to the private object storage origin server is allowed. this parameter is valid only when the origin server type origintype is COS or awss3. valid values:.
<Li>On: enable private authentication;</li>.
<Li>Off: disable private authentication.</li> if not specified, the default value is off.
                     */
                    std::string m_privateAccess;
                    bool m_privateAccessHasBeenSet;

                    /**
                     * Private authentication parameter. this parameter is valid only when origintype = awss3 and privateaccess = on.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    OriginPrivateParameters m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINPARAMETERS_H_
