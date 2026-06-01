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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MASTERINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MASTERINFO_H_

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
                * Master instance information
                */
                class MasterInfo : public AbstractModel
                {
                public:
                    MasterInfo();
                    ~MasterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Regional information</p>
                     * @return Region <p>Regional information</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Regional information</p>
                     * @param _region <p>Regional information</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Region ID</p>
                     * @return RegionId <p>Region ID</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>Region ID</p>
                     * @param _regionId <p>Region ID</p>
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone ID.</p>
                     * @return ZoneId <p>Availability zone ID.</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>Availability zone ID.</p>
                     * @param _zoneId <p>Availability zone ID.</p>
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>AZ information</p>
                     * @return Zone <p>AZ information</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ information</p>
                     * @param _zone <p>AZ information</p>
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
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance long ID</p>
                     * @return ResourceId <p>Instance long ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Instance long ID</p>
                     * @param _resourceId <p>Instance long ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance status</p>
                     * @return Status <p>Instance status</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Instance status</p>
                     * @param _status <p>Instance status</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Instance name</p>
                     * @return InstanceName <p>Instance name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name</p>
                     * @param _instanceName <p>Instance name</p>
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
                     * 获取<p>Instance type</p>
                     * @return InstanceType <p>Instance type</p>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置<p>Instance type</p>
                     * @param _instanceType <p>Instance type</p>
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Task status.</p>
                     * @return TaskStatus <p>Task status.</p>
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置<p>Task status.</p>
                     * @param _taskStatus <p>Task status.</p>
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>Memory capacity</p>
                     * @return Memory <p>Memory capacity</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>Memory capacity</p>
                     * @param _memory <p>Memory capacity</p>
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>Disk capacity</p>
                     * @return Volume <p>Disk capacity</p>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置<p>Disk capacity</p>
                     * @param _volume <p>Disk capacity</p>
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取<p>Instance model</p>
                     * @return DeviceType <p>Instance model</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>Instance model</p>
                     * @param _deviceType <p>Instance model</p>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Queries per second.</p>
                     * @return Qps <p>Queries per second.</p>
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置<p>Queries per second.</p>
                     * @param _qps <p>Queries per second.</p>
                     * 
                     */
                    void SetQps(const int64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID</p>
                     * @return VpcId <p>VPC ID</p>
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置<p>VPC ID</p>
                     * @param _vpcId <p>VPC ID</p>
                     * 
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>subnet ID</p>
                     * @return SubnetId <p>subnet ID</p>
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置<p>subnet ID</p>
                     * @param _subnetId <p>subnet ID</p>
                     * 
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>Dedicated cluster ID</p>
                     * @return ExClusterId <p>Dedicated cluster ID</p>
                     * 
                     */
                    std::string GetExClusterId() const;

                    /**
                     * 设置<p>Dedicated cluster ID</p>
                     * @param _exClusterId <p>Dedicated cluster ID</p>
                     * 
                     */
                    void SetExClusterId(const std::string& _exClusterId);

                    /**
                     * 判断参数 ExClusterId 是否已赋值
                     * @return ExClusterId 是否已赋值
                     * 
                     */
                    bool ExClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Dedicated cluster name</p>
                     * @return ExClusterName <p>Dedicated cluster name</p>
                     * 
                     */
                    std::string GetExClusterName() const;

                    /**
                     * 设置<p>Dedicated cluster name</p>
                     * @param _exClusterName <p>Dedicated cluster name</p>
                     * 
                     */
                    void SetExClusterName(const std::string& _exClusterName);

                    /**
                     * 判断参数 ExClusterName 是否已赋值
                     * @return ExClusterName 是否已赋值
                     * 
                     */
                    bool ExClusterNameHasBeenSet() const;

                private:

                    /**
                     * <p>Regional information</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Region ID</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>Availability zone ID.</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>AZ information</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance long ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>Instance status</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Instance name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Instance type</p>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Task status.</p>
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>Memory capacity</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Disk capacity</p>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>Instance model</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>Queries per second.</p>
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>subnet ID</p>
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Dedicated cluster ID</p>
                     */
                    std::string m_exClusterId;
                    bool m_exClusterIdHasBeenSet;

                    /**
                     * <p>Dedicated cluster name</p>
                     */
                    std::string m_exClusterName;
                    bool m_exClusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MASTERINFO_H_
