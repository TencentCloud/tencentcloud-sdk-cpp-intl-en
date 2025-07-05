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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CKAFKAINSTANCEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CKAFKAINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/CKafkaTopicInfo.h>
#include <tencentcloud/cwp/v20180228/model/CKafkaRouteInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CKafka instance information
                */
                class CKafkaInstanceInfo : public AbstractModel
                {
                public:
                    CKafkaInstanceInfo();
                    ~CKafkaInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceID Instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceID Instance ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Version No.
                     * @return KafkaVersion Version No.
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置Version No.
                     * @param _kafkaVersion Version No.
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                    /**
                     * 获取Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicList Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CKafkaTopicInfo> GetTopicList() const;

                    /**
                     * 设置Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicList Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicList(const std::vector<CKafkaTopicInfo>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                    /**
                     * 获取Routing List
                     * @return RouteList Routing List
                     * 
                     */
                    std::vector<CKafkaRouteInfo> GetRouteList() const;

                    /**
                     * 设置Routing List
                     * @param _routeList Routing List
                     * 
                     */
                    void SetRouteList(const std::vector<CKafkaRouteInfo>& _routeList);

                    /**
                     * 判断参数 RouteList 是否已赋值
                     * @return RouteList 是否已赋值
                     * 
                     */
                    bool RouteListHasBeenSet() const;

                    /**
                     * 获取Disk capacity (unit: GB)
                     * @return DiskSize Disk capacity (unit: GB)
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Disk capacity (unit: GB)
                     * @param _diskSize Disk capacity (unit: GB)
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取vpcId. Leaving it blank indicates a basic network.
                     * @return VpcId vpcId. Leaving it blank indicates a basic network.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId. Leaving it blank indicates a basic network.
                     * @param _vpcId vpcId. Leaving it blank indicates a basic network.
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
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param _subnetId Subnet ID
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
                     * 获取Status: 1 - healthy; 2 - alarm; 3 - abnormal instance status
                     * @return Healthy Status: 1 - healthy; 2 - alarm; 3 - abnormal instance status
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置Status: 1 - healthy; 2 - alarm; 3 - abnormal instance status
                     * @param _healthy Status: 1 - healthy; 2 - alarm; 3 - abnormal instance status
                     * 
                     */
                    void SetHealthy(const int64_t& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取Availability zone
                     * @return Zone Availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
                     * @param _zone Availability zone
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
                     * 获取Region
                     * @return Az Region
                     * 
                     */
                    std::string GetAz() const;

                    /**
                     * 设置Region
                     * @param _az Region
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
                     * 获取Instance bandwidth (unit: Mbps)
                     * @return Bandwidth Instance bandwidth (unit: Mbps)
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Instance bandwidth (unit: Mbps)
                     * @param _bandwidth Instance bandwidth (unit: Mbps)
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Version No.
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CKafkaTopicInfo> m_topicList;
                    bool m_topicListHasBeenSet;

                    /**
                     * Routing List
                     */
                    std::vector<CKafkaRouteInfo> m_routeList;
                    bool m_routeListHasBeenSet;

                    /**
                     * Disk capacity (unit: GB)
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * vpcId. Leaving it blank indicates a basic network.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Status: 1 - healthy; 2 - alarm; 3 - abnormal instance status
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * Availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_az;
                    bool m_azHasBeenSet;

                    /**
                     * Instance bandwidth (unit: Mbps)
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CKAFKAINSTANCEINFO_H_
