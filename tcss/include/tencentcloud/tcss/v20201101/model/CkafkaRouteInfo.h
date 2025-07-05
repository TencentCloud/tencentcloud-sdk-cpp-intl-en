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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CKAFKAROUTEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CKAFKAROUTEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CKafka route details
                */
                class CkafkaRouteInfo : public AbstractModel
                {
                public:
                    CkafkaRouteInfo();
                    ~CkafkaRouteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Route ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RouteID Route ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRouteID() const;

                    /**
                     * 设置Route ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _routeID Route ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRouteID(const int64_t& _routeID);

                    /**
                     * 判断参数 RouteID 是否已赋值
                     * @return RouteID 是否已赋值
                     * 
                     */
                    bool RouteIDHasBeenSet() const;

                    /**
                     * 获取Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain Domain name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Domain port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainPort Domain port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDomainPort() const;

                    /**
                     * 设置Domain port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domainPort Domain port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomainPort(const uint64_t& _domainPort);

                    /**
                     * 判断参数 DomainPort 是否已赋值
                     * @return DomainPort 是否已赋值
                     * 
                     */
                    bool DomainPortHasBeenSet() const;

                    /**
                     * 获取VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vip VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vip VIP
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取VIP type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VipType VIP type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置VIP type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vipType VIP type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取Access type
// `0`: PLAINTEXT (plaintext method, which does not carry user information and is supported for legacy versions and Community Edition)
	// `1`: SASL_PLAINTEXT (plaintext method, which authenticates the login through SASL before data start and is supported only for Community Edition)
	// `2`: SSL (SSL-encrypted communication, which does not carry user information and is supported for legacy versions and Community Edition)
	// `3`: SASL_SSL (SSL-encrypted communication, which authenticates the login through SASL before data start and is supported only for Community Edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessType Access type
// `0`: PLAINTEXT (plaintext method, which does not carry user information and is supported for legacy versions and Community Edition)
	// `1`: SASL_PLAINTEXT (plaintext method, which authenticates the login through SASL before data start and is supported only for Community Edition)
	// `2`: SSL (SSL-encrypted communication, which does not carry user information and is supported for legacy versions and Community Edition)
	// `3`: SASL_SSL (SSL-encrypted communication, which authenticates the login through SASL before data start and is supported only for Community Edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置Access type
// `0`: PLAINTEXT (plaintext method, which does not carry user information and is supported for legacy versions and Community Edition)
	// `1`: SASL_PLAINTEXT (plaintext method, which authenticates the login through SASL before data start and is supported only for Community Edition)
	// `2`: SSL (SSL-encrypted communication, which does not carry user information and is supported for legacy versions and Community Edition)
	// `3`: SASL_SSL (SSL-encrypted communication, which authenticates the login through SASL before data start and is supported only for Community Edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessType Access type
// `0`: PLAINTEXT (plaintext method, which does not carry user information and is supported for legacy versions and Community Edition)
	// `1`: SASL_PLAINTEXT (plaintext method, which authenticates the login through SASL before data start and is supported only for Community Edition)
	// `2`: SSL (SSL-encrypted communication, which does not carry user information and is supported for legacy versions and Community Edition)
	// `3`: SASL_SSL (SSL-encrypted communication, which authenticates the login through SASL before data start and is supported only for Community Edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                private:

                    /**
                     * Route ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_routeID;
                    bool m_routeIDHasBeenSet;

                    /**
                     * Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_domainPort;
                    bool m_domainPortHasBeenSet;

                    /**
                     * VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * VIP type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * Access type
// `0`: PLAINTEXT (plaintext method, which does not carry user information and is supported for legacy versions and Community Edition)
	// `1`: SASL_PLAINTEXT (plaintext method, which authenticates the login through SASL before data start and is supported only for Community Edition)
	// `2`: SSL (SSL-encrypted communication, which does not carry user information and is supported for legacy versions and Community Edition)
	// `3`: SASL_SSL (SSL-encrypted communication, which authenticates the login through SASL before data start and is supported only for Community Edition)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CKAFKAROUTEINFO_H_
