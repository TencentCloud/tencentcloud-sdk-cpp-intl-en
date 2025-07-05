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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/VipEntity.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Route entity object
                */
                class Route : public AbstractModel
                {
                public:
                    Route();
                    ~Route() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance connection method
0: PLAINTEXT (plaintext method, which does not carry user information and is supported for legacy versions and Community Edition)
1: SASL_PLAINTEXT (plaintext method, which authenticates the login through SASL before data start and is supported only for Community Edition)
2: SSL (SSL-encrypted communication, which does not carry user information and is supported for legacy versions and Community Edition)
3: SASL_SSL (SSL-encrypted communication, which authenticates the login through SASL before data start and is supported only for Community Edition)
                     * @return AccessType Instance connection method
0: PLAINTEXT (plaintext method, which does not carry user information and is supported for legacy versions and Community Edition)
1: SASL_PLAINTEXT (plaintext method, which authenticates the login through SASL before data start and is supported only for Community Edition)
2: SSL (SSL-encrypted communication, which does not carry user information and is supported for legacy versions and Community Edition)
3: SASL_SSL (SSL-encrypted communication, which authenticates the login through SASL before data start and is supported only for Community Edition)
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置Instance connection method
0: PLAINTEXT (plaintext method, which does not carry user information and is supported for legacy versions and Community Edition)
1: SASL_PLAINTEXT (plaintext method, which authenticates the login through SASL before data start and is supported only for Community Edition)
2: SSL (SSL-encrypted communication, which does not carry user information and is supported for legacy versions and Community Edition)
3: SASL_SSL (SSL-encrypted communication, which authenticates the login through SASL before data start and is supported only for Community Edition)
                     * @param _accessType Instance connection method
0: PLAINTEXT (plaintext method, which does not carry user information and is supported for legacy versions and Community Edition)
1: SASL_PLAINTEXT (plaintext method, which authenticates the login through SASL before data start and is supported only for Community Edition)
2: SSL (SSL-encrypted communication, which does not carry user information and is supported for legacy versions and Community Edition)
3: SASL_SSL (SSL-encrypted communication, which authenticates the login through SASL before data start and is supported only for Community Edition)
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Route ID
                     * @return RouteId Route ID
                     * 
                     */
                    int64_t GetRouteId() const;

                    /**
                     * 设置Route ID
                     * @param _routeId Route ID
                     * 
                     */
                    void SetRouteId(const int64_t& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取VIP network type (1: Public network TGW; 2: Classic network; 3: VPC; 4: Supporting network (IDC environment); 5: SSL public network access; 6: BM VPC; 7: Supporting network (CVM environment)).
                     * @return VipType VIP network type (1: Public network TGW; 2: Classic network; 3: VPC; 4: Supporting network (IDC environment); 5: SSL public network access; 6: BM VPC; 7: Supporting network (CVM environment)).
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置VIP network type (1: Public network TGW; 2: Classic network; 3: VPC; 4: Supporting network (IDC environment); 5: SSL public network access; 6: BM VPC; 7: Supporting network (CVM environment)).
                     * @param _vipType VIP network type (1: Public network TGW; 2: Classic network; 3: VPC; 4: Supporting network (IDC environment); 5: SSL public network access; 6: BM VPC; 7: Supporting network (CVM environment)).
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
                     * 获取Virtual IP list
                     * @return VipList Virtual IP list
                     * 
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置Virtual IP list
                     * @param _vipList Virtual IP list
                     * 
                     */
                    void SetVipList(const std::vector<VipEntity>& _vipList);

                    /**
                     * 判断参数 VipList 是否已赋值
                     * @return VipList 是否已赋值
                     * 
                     */
                    bool VipListHasBeenSet() const;

                    /**
                     * 获取Domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Domain Domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _domain Domain name
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Domain name port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DomainPort Domain name port
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDomainPort() const;

                    /**
                     * 设置Domain name port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _domainPort Domain name port
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomainPort(const int64_t& _domainPort);

                    /**
                     * 判断参数 DomainPort 是否已赋值
                     * @return DomainPort 是否已赋值
                     * 
                     */
                    bool DomainPortHasBeenSet() const;

                    /**
                     * 获取Timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DeleteTimestamp Timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDeleteTimestamp() const;

                    /**
                     * 设置Timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _deleteTimestamp Timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeleteTimestamp(const std::string& _deleteTimestamp);

                    /**
                     * 判断参数 DeleteTimestamp 是否已赋值
                     * @return DeleteTimestamp 是否已赋值
                     * 
                     */
                    bool DeleteTimestampHasBeenSet() const;

                private:

                    /**
                     * Instance connection method
0: PLAINTEXT (plaintext method, which does not carry user information and is supported for legacy versions and Community Edition)
1: SASL_PLAINTEXT (plaintext method, which authenticates the login through SASL before data start and is supported only for Community Edition)
2: SSL (SSL-encrypted communication, which does not carry user information and is supported for legacy versions and Community Edition)
3: SASL_SSL (SSL-encrypted communication, which authenticates the login through SASL before data start and is supported only for Community Edition)
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Route ID
                     */
                    int64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * VIP network type (1: Public network TGW; 2: Classic network; 3: VPC; 4: Supporting network (IDC environment); 5: SSL public network access; 6: BM VPC; 7: Supporting network (CVM environment)).
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * Virtual IP list
                     */
                    std::vector<VipEntity> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * Domain name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain name port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_domainPort;
                    bool m_domainPortHasBeenSet;

                    /**
                     * Timestamp
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deleteTimestamp;
                    bool m_deleteTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTE_H_
