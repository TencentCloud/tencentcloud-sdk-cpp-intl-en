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
                     * 获取<p>Instance access method 0: PLAINTEXT (plaintext mode, no user information included, supported by older versions and community edition) 1: SASL_PLAINTEXT (plaintext mode, however, login authentication with SASL is performed at data initiation, only supported by community edition) 2: SSL (SSL encrypted communication, no user information included, supported by older versions and community edition) 3: SASL_SSL (SSL encrypted communication, login authentication with SASL is performed at data initiation, only supported by community edition)</p>
                     * @return AccessType <p>Instance access method 0: PLAINTEXT (plaintext mode, no user information included, supported by older versions and community edition) 1: SASL_PLAINTEXT (plaintext mode, however, login authentication with SASL is performed at data initiation, only supported by community edition) 2: SSL (SSL encrypted communication, no user information included, supported by older versions and community edition) 3: SASL_SSL (SSL encrypted communication, login authentication with SASL is performed at data initiation, only supported by community edition)</p>
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置<p>Instance access method 0: PLAINTEXT (plaintext mode, no user information included, supported by older versions and community edition) 1: SASL_PLAINTEXT (plaintext mode, however, login authentication with SASL is performed at data initiation, only supported by community edition) 2: SSL (SSL encrypted communication, no user information included, supported by older versions and community edition) 3: SASL_SSL (SSL encrypted communication, login authentication with SASL is performed at data initiation, only supported by community edition)</p>
                     * @param _accessType <p>Instance access method 0: PLAINTEXT (plaintext mode, no user information included, supported by older versions and community edition) 1: SASL_PLAINTEXT (plaintext mode, however, login authentication with SASL is performed at data initiation, only supported by community edition) 2: SSL (SSL encrypted communication, no user information included, supported by older versions and community edition) 3: SASL_SSL (SSL encrypted communication, login authentication with SASL is performed at data initiation, only supported by community edition)</p>
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
                     * 获取<p>Route Id</p>
                     * @return RouteId <p>Route Id</p>
                     * 
                     */
                    int64_t GetRouteId() const;

                    /**
                     * 设置<p>Route Id</p>
                     * @param _routeId <p>Route Id</p>
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
                     * 获取<p>Routing network type (3: vpc routing; 7: Internal support routing; 1: Public network route)</p>
                     * @return VipType <p>Routing network type (3: vpc routing; 7: Internal support routing; 1: Public network route)</p>
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置<p>Routing network type (3: vpc routing; 7: Internal support routing; 1: Public network route)</p>
                     * @param _vipType <p>Routing network type (3: vpc routing; 7: Internal support routing; 1: Public network route)</p>
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
                     * 获取<p>Virtual IP list</p>
                     * @return VipList <p>Virtual IP list</p>
                     * 
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置<p>Virtual IP list</p>
                     * @param _vipList <p>Virtual IP list</p>
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
                     * 获取<p>Domain name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain <p>Domain name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Domain name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain <p>Domain name</p>
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
                     * 获取<p>Domain name port</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainPort <p>Domain name port</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDomainPort() const;

                    /**
                     * 设置<p>Domain name port</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domainPort <p>Domain name port</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Timestamp</p>
                     * @return DeleteTimestamp <p>Timestamp</p>
                     * 
                     */
                    std::string GetDeleteTimestamp() const;

                    /**
                     * 设置<p>Timestamp</p>
                     * @param _deleteTimestamp <p>Timestamp</p>
                     * 
                     */
                    void SetDeleteTimestamp(const std::string& _deleteTimestamp);

                    /**
                     * 判断参数 DeleteTimestamp 是否已赋值
                     * @return DeleteTimestamp 是否已赋值
                     * 
                     */
                    bool DeleteTimestampHasBeenSet() const;

                    /**
                     * 获取<p>Subnet Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Subnet <p>Subnet Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnet() const;

                    /**
                     * 设置<p>Subnet Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnet <p>Subnet Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnet(const std::string& _subnet);

                    /**
                     * 判断参数 Subnet 是否已赋值
                     * @return Subnet 是否已赋值
                     * 
                     */
                    bool SubnetHasBeenSet() const;

                    /**
                     * 获取<p>Virtual IP list (1:1 broker node)</p>
                     * @return BrokerVipList <p>Virtual IP list (1:1 broker node)</p>
                     * 
                     */
                    std::vector<VipEntity> GetBrokerVipList() const;

                    /**
                     * 设置<p>Virtual IP list (1:1 broker node)</p>
                     * @param _brokerVipList <p>Virtual IP list (1:1 broker node)</p>
                     * 
                     */
                    void SetBrokerVipList(const std::vector<VipEntity>& _brokerVipList);

                    /**
                     * 判断参数 BrokerVipList 是否已赋值
                     * @return BrokerVipList 是否已赋值
                     * 
                     */
                    bool BrokerVipListHasBeenSet() const;

                    /**
                     * 获取<p>VPC Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId <p>VPC Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId <p>VPC Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>Remarks</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Note <p>Remarks</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>Remarks</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _note <p>Remarks</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取<p>Route status. 1: Creating, 2: Successfully created, 3: Creation failed, 4: Deleting, 6: Deletion failed</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status <p>Route status. 1: Creating, 2: Successfully created, 3: Creation failed, 4: Deleting, 6: Deletion failed</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Route status. 1: Creating, 2: Successfully created, 3: Creation failed, 4: Deleting, 6: Deletion failed</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status <p>Route status. 1: Creating, 2: Successfully created, 3: Creation failed, 4: Deleting, 6: Deletion failed</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Instance access method 0: PLAINTEXT (plaintext mode, no user information included, supported by older versions and community edition) 1: SASL_PLAINTEXT (plaintext mode, however, login authentication with SASL is performed at data initiation, only supported by community edition) 2: SSL (SSL encrypted communication, no user information included, supported by older versions and community edition) 3: SASL_SSL (SSL encrypted communication, login authentication with SASL is performed at data initiation, only supported by community edition)</p>
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>Route Id</p>
                     */
                    int64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * <p>Routing network type (3: vpc routing; 7: Internal support routing; 1: Public network route)</p>
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * <p>Virtual IP list</p>
                     */
                    std::vector<VipEntity> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * <p>Domain name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Domain name port</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_domainPort;
                    bool m_domainPortHasBeenSet;

                    /**
                     * <p>Timestamp</p>
                     */
                    std::string m_deleteTimestamp;
                    bool m_deleteTimestampHasBeenSet;

                    /**
                     * <p>Subnet Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnet;
                    bool m_subnetHasBeenSet;

                    /**
                     * <p>Virtual IP list (1:1 broker node)</p>
                     */
                    std::vector<VipEntity> m_brokerVipList;
                    bool m_brokerVipListHasBeenSet;

                    /**
                     * <p>VPC Id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Remarks</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * <p>Route status. 1: Creating, 2: Successfully created, 3: Creation failed, 4: Deleting, 6: Deletion failed</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTE_H_
