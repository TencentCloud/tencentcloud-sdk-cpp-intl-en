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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGKAFKASTATEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGKAFKASTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyLogKafkaState request structure.
                */
                class ModifyLogKafkaStateRequest : public AbstractModel
                {
                public:
                    ModifyLogKafkaStateRequest();
                    ~ModifyLogKafkaStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance name, e.g. CWPP test environment
                     * @return KafkaEnvName Instance name, e.g. CWPP test environment
                     * 
                     */
                    std::string GetKafkaEnvName() const;

                    /**
                     * 设置Instance name, e.g. CWPP test environment
                     * @param _kafkaEnvName Instance name, e.g. CWPP test environment
                     * 
                     */
                    void SetKafkaEnvName(const std::string& _kafkaEnvName);

                    /**
                     * 判断参数 KafkaEnvName 是否已赋值
                     * @return KafkaEnvName 是否已赋值
                     * 
                     */
                    bool KafkaEnvNameHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return KafkaId Instance ID
                     * 
                     */
                    std::string GetKafkaId() const;

                    /**
                     * 设置Instance ID
                     * @param _kafkaId Instance ID
                     * 
                     */
                    void SetKafkaId(const std::string& _kafkaId);

                    /**
                     * 判断参数 KafkaId 是否已赋值
                     * @return KafkaId 是否已赋值
                     * 
                     */
                    bool KafkaIdHasBeenSet() const;

                    /**
                     * 获取Access method: 1 - public network domain name access; 2 - support environment access
                     * @return AccessType Access method: 1 - public network domain name access; 2 - support environment access
                     * 
                     */
                    uint64_t GetAccessType() const;

                    /**
                     * 设置Access method: 1 - public network domain name access; 2 - support environment access
                     * @param _accessType Access method: 1 - public network domain name access; 2 - support environment access
                     * 
                     */
                    void SetAccessType(const uint64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Access address
                     * @return AccessAddr Access address
                     * 
                     */
                    std::string GetAccessAddr() const;

                    /**
                     * 设置Access address
                     * @param _accessAddr Access address
                     * 
                     */
                    void SetAccessAddr(const std::string& _accessAddr);

                    /**
                     * 判断参数 AccessAddr 是否已赋值
                     * @return AccessAddr 是否已赋值
                     * 
                     */
                    bool AccessAddrHasBeenSet() const;

                    /**
                     * 获取Username
                     * @return Username Username
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Username
                     * @param _username Username
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Zone Region
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region
                     * @param _zone Region
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Availability zone
                     * @return Az Availability zone
                     * 
                     */
                    std::string GetAz() const;

                    /**
                     * 设置Availability zone
                     * @param _az Availability zone
                     * 
                     */
                    void SetAz(const std::string& _az);

                    /**
                     * 判断参数 Az 是否已赋值
                     * @return Az 是否已赋值
                     * 
                     */
                    bool AzHasBeenSet() const;

                    /**
                     * 获取Network
                     * @return VpcId Network
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Network
                     * @param _vpcId Network
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
                     * 获取Subnet
                     * @return SubnetId Subnet
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet
                     * @param _subnetId Subnet
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Shipping status: 1 - healthy; 2 - alarm; 3 - abnormal
                     * @return DeliverStatus Shipping status: 1 - healthy; 2 - alarm; 3 - abnormal
                     * 
                     */
                    uint64_t GetDeliverStatus() const;

                    /**
                     * 设置Shipping status: 1 - healthy; 2 - alarm; 3 - abnormal
                     * @param _deliverStatus Shipping status: 1 - healthy; 2 - alarm; 3 - abnormal
                     * 
                     */
                    void SetDeliverStatus(const uint64_t& _deliverStatus);

                    /**
                     * 判断参数 DeliverStatus 是否已赋值
                     * @return DeliverStatus 是否已赋值
                     * 
                     */
                    bool DeliverStatusHasBeenSet() const;

                    /**
                     * 获取Kafka edition
                     * @return InsVersion Kafka edition
                     * 
                     */
                    std::string GetInsVersion() const;

                    /**
                     * 设置Kafka edition
                     * @param _insVersion Kafka edition
                     * 
                     */
                    void SetInsVersion(const std::string& _insVersion);

                    /**
                     * 判断参数 InsVersion 是否已赋值
                     * @return InsVersion 是否已赋值
                     * 
                     */
                    bool InsVersionHasBeenSet() const;

                    /**
                     * 获取Peak bandwidth
                     * @return BandWidth Peak bandwidth
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置Peak bandwidth
                     * @param _bandWidth Peak bandwidth
                     * 
                     */
                    void SetBandWidth(const int64_t& _bandWidth);

                    /**
                     * 判断参数 BandWidth 是否已赋值
                     * @return BandWidth 是否已赋值
                     * 
                     */
                    bool BandWidthHasBeenSet() const;

                    /**
                     * 获取Disk capacity
                     * @return DiskSize Disk capacity
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Disk capacity
                     * @param _diskSize Disk capacity
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * Instance name, e.g. CWPP test environment
                     */
                    std::string m_kafkaEnvName;
                    bool m_kafkaEnvNameHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_kafkaId;
                    bool m_kafkaIdHasBeenSet;

                    /**
                     * Access method: 1 - public network domain name access; 2 - support environment access
                     */
                    uint64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Access address
                     */
                    std::string m_accessAddr;
                    bool m_accessAddrHasBeenSet;

                    /**
                     * Username
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Availability zone
                     */
                    std::string m_az;
                    bool m_azHasBeenSet;

                    /**
                     * Network
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Shipping status: 1 - healthy; 2 - alarm; 3 - abnormal
                     */
                    uint64_t m_deliverStatus;
                    bool m_deliverStatusHasBeenSet;

                    /**
                     * Kafka edition
                     */
                    std::string m_insVersion;
                    bool m_insVersionHasBeenSet;

                    /**
                     * Peak bandwidth
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * Disk capacity
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGKAFKASTATEREQUEST_H_
