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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROINSTANCEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * RO instance details
                */
                class RoInstanceInfo : public AbstractModel
                {
                public:
                    RoInstanceInfo();
                    ~RoInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Master instance ID corresponding to the RO group
                     * @return MasterInstanceId Master instance ID corresponding to the RO group
                     */
                    std::string GetMasterInstanceId() const;

                    /**
                     * 设置Master instance ID corresponding to the RO group
                     * @param MasterInstanceId Master instance ID corresponding to the RO group
                     */
                    void SetMasterInstanceId(const std::string& _masterInstanceId);

                    /**
                     * 判断参数 MasterInstanceId 是否已赋值
                     * @return MasterInstanceId 是否已赋值
                     */
                    bool MasterInstanceIdHasBeenSet() const;

                    /**
                     * 获取RO instance status in the RO group. Value range: online, offline
                     * @return RoStatus RO instance status in the RO group. Value range: online, offline
                     */
                    std::string GetRoStatus() const;

                    /**
                     * 设置RO instance status in the RO group. Value range: online, offline
                     * @param RoStatus RO instance status in the RO group. Value range: online, offline
                     */
                    void SetRoStatus(const std::string& _roStatus);

                    /**
                     * 判断参数 RoStatus 是否已赋值
                     * @return RoStatus 是否已赋值
                     */
                    bool RoStatusHasBeenSet() const;

                    /**
                     * 获取Last deactivation time of a RO instance in the RO group
                     * @return OfflineTime Last deactivation time of a RO instance in the RO group
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置Last deactivation time of a RO instance in the RO group
                     * @param OfflineTime Last deactivation time of a RO instance in the RO group
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取RO instance weight in the RO group
                     * @return Weight RO instance weight in the RO group
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置RO instance weight in the RO group
                     * @param Weight RO instance weight in the RO group
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取RO instance region name, such as ap-shanghai
                     * @return Region RO instance region name, such as ap-shanghai
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置RO instance region name, such as ap-shanghai
                     * @param Region RO instance region name, such as ap-shanghai
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Name of RO AZ, such as ap-shanghai-1
                     * @return Zone Name of RO AZ, such as ap-shanghai-1
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Name of RO AZ, such as ap-shanghai-1
                     * @param Zone Name of RO AZ, such as ap-shanghai-1
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取RO instance ID in the format of cdbro-c1nl9rpv
                     * @return InstanceId RO instance ID in the format of cdbro-c1nl9rpv
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置RO instance ID in the format of cdbro-c1nl9rpv
                     * @param InstanceId RO instance ID in the format of cdbro-c1nl9rpv
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取RO instance status. Valid values: `0` (creating), `1` (running), `3` (remote RO), `4` (deleting). When the `DescribeDBInstances` API is used to query the information of the source instance, if the source instance is associated with a remote read-only instance, the returned status value of the remote read-only instance always shows 3.
                     * @return Status RO instance status. Valid values: `0` (creating), `1` (running), `3` (remote RO), `4` (deleting). When the `DescribeDBInstances` API is used to query the information of the source instance, if the source instance is associated with a remote read-only instance, the returned status value of the remote read-only instance always shows 3.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置RO instance status. Valid values: `0` (creating), `1` (running), `3` (remote RO), `4` (deleting). When the `DescribeDBInstances` API is used to query the information of the source instance, if the source instance is associated with a remote read-only instance, the returned status value of the remote read-only instance always shows 3.
                     * @param Status RO instance status. Valid values: `0` (creating), `1` (running), `3` (remote RO), `4` (deleting). When the `DescribeDBInstances` API is used to query the information of the source instance, if the source instance is associated with a remote read-only instance, the returned status value of the remote read-only instance always shows 3.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance type. Value range: 1 (primary), 2 (disaster recovery), 3 (read-only)
                     * @return InstanceType Instance type. Value range: 1 (primary), 2 (disaster recovery), 3 (read-only)
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置Instance type. Value range: 1 (primary), 2 (disaster recovery), 3 (read-only)
                     * @param InstanceType Instance type. Value range: 1 (primary), 2 (disaster recovery), 3 (read-only)
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取RO instance name
                     * @return InstanceName RO instance name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置RO instance name
                     * @param InstanceName RO instance name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Pay-as-you-go billing status. Value range: 1 (normal), 2 (in arrears)
                     * @return HourFeeStatus Pay-as-you-go billing status. Value range: 1 (normal), 2 (in arrears)
                     */
                    int64_t GetHourFeeStatus() const;

                    /**
                     * 设置Pay-as-you-go billing status. Value range: 1 (normal), 2 (in arrears)
                     * @param HourFeeStatus Pay-as-you-go billing status. Value range: 1 (normal), 2 (in arrears)
                     */
                    void SetHourFeeStatus(const int64_t& _hourFeeStatus);

                    /**
                     * 判断参数 HourFeeStatus 是否已赋值
                     * @return HourFeeStatus 是否已赋值
                     */
                    bool HourFeeStatusHasBeenSet() const;

                    /**
                     * 获取RO instance task status. Value range: <br>0 - no task <br>1 - upgrading <br>2 - importing data <br>3 - activating secondary <br>4 - public network access enabled <br>5 - batch operation in progress <br>6 - rolling back <br>7 - public network access not enabled <br>8 - modifying password <br>9 - renaming instance <br>10 - restarting <br>12 - migrating self-built instance <br>13 - dropping table <br>14 - creating and syncing disaster recovery instance
                     * @return TaskStatus RO instance task status. Value range: <br>0 - no task <br>1 - upgrading <br>2 - importing data <br>3 - activating secondary <br>4 - public network access enabled <br>5 - batch operation in progress <br>6 - rolling back <br>7 - public network access not enabled <br>8 - modifying password <br>9 - renaming instance <br>10 - restarting <br>12 - migrating self-built instance <br>13 - dropping table <br>14 - creating and syncing disaster recovery instance
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置RO instance task status. Value range: <br>0 - no task <br>1 - upgrading <br>2 - importing data <br>3 - activating secondary <br>4 - public network access enabled <br>5 - batch operation in progress <br>6 - rolling back <br>7 - public network access not enabled <br>8 - modifying password <br>9 - renaming instance <br>10 - restarting <br>12 - migrating self-built instance <br>13 - dropping table <br>14 - creating and syncing disaster recovery instance
                     * @param TaskStatus RO instance task status. Value range: <br>0 - no task <br>1 - upgrading <br>2 - importing data <br>3 - activating secondary <br>4 - public network access enabled <br>5 - batch operation in progress <br>6 - rolling back <br>7 - public network access not enabled <br>8 - modifying password <br>9 - renaming instance <br>10 - restarting <br>12 - migrating self-built instance <br>13 - dropping table <br>14 - creating and syncing disaster recovery instance
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取RO instance memory size in MB
                     * @return Memory RO instance memory size in MB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置RO instance memory size in MB
                     * @param Memory RO instance memory size in MB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取RO instance disk size in GB
                     * @return Volume RO instance disk size in GB
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置RO instance disk size in GB
                     * @param Volume RO instance disk size in GB
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Queries per second
                     * @return Qps Queries per second
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置Queries per second
                     * @param Qps Queries per second
                     */
                    void SetQps(const int64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取Private IP address of the RO instance
                     * @return Vip Private IP address of the RO instance
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Private IP address of the RO instance
                     * @param Vip Private IP address of the RO instance
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Access port of the RO instance
                     * @return Vport Access port of the RO instance
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Access port of the RO instance
                     * @param Vport Access port of the RO instance
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取VPC ID of the RO instance
                     * @return VpcId VPC ID of the RO instance
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置VPC ID of the RO instance
                     * @param VpcId VPC ID of the RO instance
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID of the RO instance
                     * @return SubnetId VPC subnet ID of the RO instance
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID of the RO instance
                     * @param SubnetId VPC subnet ID of the RO instance
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取RO instance specification description. Value range: CUSTOM
                     * @return DeviceType RO instance specification description. Value range: CUSTOM
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置RO instance specification description. Value range: CUSTOM
                     * @param DeviceType RO instance specification description. Value range: CUSTOM
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取Database engine version of the read-only replica. Valid values: `5.1`, `5.5`, `5.6`, `5.7`, `8.0`
                     * @return EngineVersion Database engine version of the read-only replica. Valid values: `5.1`, `5.5`, `5.6`, `5.7`, `8.0`
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置Database engine version of the read-only replica. Valid values: `5.1`, `5.5`, `5.6`, `5.7`, `8.0`
                     * @param EngineVersion Database engine version of the read-only replica. Valid values: `5.1`, `5.5`, `5.6`, `5.7`, `8.0`
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取RO instance expiration time in the format of yyyy-mm-dd hh:mm:ss. If it is a pay-as-you-go instance, the value of this field is 0000-00-00 00:00:00
                     * @return DeadlineTime RO instance expiration time in the format of yyyy-mm-dd hh:mm:ss. If it is a pay-as-you-go instance, the value of this field is 0000-00-00 00:00:00
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置RO instance expiration time in the format of yyyy-mm-dd hh:mm:ss. If it is a pay-as-you-go instance, the value of this field is 0000-00-00 00:00:00
                     * @param DeadlineTime RO instance expiration time in the format of yyyy-mm-dd hh:mm:ss. If it is a pay-as-you-go instance, the value of this field is 0000-00-00 00:00:00
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取RO instance billing method. Value range: 0 (monthly subscribed), 1 (pay-as-you-go), 2 (monthly postpaid)
                     * @return PayType RO instance billing method. Value range: 0 (monthly subscribed), 1 (pay-as-you-go), 2 (monthly postpaid)
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置RO instance billing method. Value range: 0 (monthly subscribed), 1 (pay-as-you-go), 2 (monthly postpaid)
                     * @param PayType RO instance billing method. Value range: 0 (monthly subscribed), 1 (pay-as-you-go), 2 (monthly postpaid)
                     */
                    void SetPayType(const int64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                private:

                    /**
                     * Master instance ID corresponding to the RO group
                     */
                    std::string m_masterInstanceId;
                    bool m_masterInstanceIdHasBeenSet;

                    /**
                     * RO instance status in the RO group. Value range: online, offline
                     */
                    std::string m_roStatus;
                    bool m_roStatusHasBeenSet;

                    /**
                     * Last deactivation time of a RO instance in the RO group
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * RO instance weight in the RO group
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * RO instance region name, such as ap-shanghai
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Name of RO AZ, such as ap-shanghai-1
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * RO instance ID in the format of cdbro-c1nl9rpv
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * RO instance status. Valid values: `0` (creating), `1` (running), `3` (remote RO), `4` (deleting). When the `DescribeDBInstances` API is used to query the information of the source instance, if the source instance is associated with a remote read-only instance, the returned status value of the remote read-only instance always shows 3.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance type. Value range: 1 (primary), 2 (disaster recovery), 3 (read-only)
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * RO instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Pay-as-you-go billing status. Value range: 1 (normal), 2 (in arrears)
                     */
                    int64_t m_hourFeeStatus;
                    bool m_hourFeeStatusHasBeenSet;

                    /**
                     * RO instance task status. Value range: <br>0 - no task <br>1 - upgrading <br>2 - importing data <br>3 - activating secondary <br>4 - public network access enabled <br>5 - batch operation in progress <br>6 - rolling back <br>7 - public network access not enabled <br>8 - modifying password <br>9 - renaming instance <br>10 - restarting <br>12 - migrating self-built instance <br>13 - dropping table <br>14 - creating and syncing disaster recovery instance
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * RO instance memory size in MB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * RO instance disk size in GB
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Queries per second
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * Private IP address of the RO instance
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Access port of the RO instance
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * VPC ID of the RO instance
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID of the RO instance
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * RO instance specification description. Value range: CUSTOM
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Database engine version of the read-only replica. Valid values: `5.1`, `5.5`, `5.6`, `5.7`, `8.0`
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * RO instance expiration time in the format of yyyy-mm-dd hh:mm:ss. If it is a pay-as-you-go instance, the value of this field is 0000-00-00 00:00:00
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * RO instance billing method. Value range: 0 (monthly subscribed), 1 (pay-as-you-go), 2 (monthly postpaid)
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROINSTANCEINFO_H_
