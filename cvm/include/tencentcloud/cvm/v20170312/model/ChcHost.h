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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/VirtualPrivateCloud.h>
#include <tencentcloud/cvm/v20170312/model/ChcDeployExtraConfig.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CHC host information
                */
                class ChcHost : public AbstractModel
                {
                public:
                    ChcHost();
                    ~ChcHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CHC host ID
                     * @return ChcId CHC host ID
                     * 
                     */
                    std::string GetChcId() const;

                    /**
                     * 设置CHC host ID
                     * @param _chcId CHC host ID
                     * 
                     */
                    void SetChcId(const std::string& _chcId);

                    /**
                     * 判断参数 ChcId 是否已赋值
                     * @return ChcId 是否已赋值
                     * 
                     */
                    bool ChcIdHasBeenSet() const;

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
                     * 获取Server serial number
                     * @return SerialNumber Server serial number
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置Server serial number
                     * @param _serialNumber Server serial number
                     * 
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取CHC host status<br/>
<ul>
<li>REGISTERED: The CHC host is registered, but the out-of-band network and deployment network are not configured.</li>
<li>VPC_READY: The out-of-band network and deployment network are configured.</li>
<li>PREPARED: It’s ready and can be associated with a CVM.</li>
<li>ONLINE: It’s already associated with a CVM.</li>
</ul>
                     * @return InstanceState CHC host status<br/>
<ul>
<li>REGISTERED: The CHC host is registered, but the out-of-band network and deployment network are not configured.</li>
<li>VPC_READY: The out-of-band network and deployment network are configured.</li>
<li>PREPARED: It’s ready and can be associated with a CVM.</li>
<li>ONLINE: It’s already associated with a CVM.</li>
</ul>
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置CHC host status<br/>
<ul>
<li>REGISTERED: The CHC host is registered, but the out-of-band network and deployment network are not configured.</li>
<li>VPC_READY: The out-of-band network and deployment network are configured.</li>
<li>PREPARED: It’s ready and can be associated with a CVM.</li>
<li>ONLINE: It’s already associated with a CVM.</li>
</ul>
                     * @param _instanceState CHC host status<br/>
<ul>
<li>REGISTERED: The CHC host is registered, but the out-of-band network and deployment network are not configured.</li>
<li>VPC_READY: The out-of-band network and deployment network are configured.</li>
<li>PREPARED: It’s ready and can be associated with a CVM.</li>
<li>ONLINE: It’s already associated with a CVM.</li>
</ul>
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取Device type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DeviceType Device type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Device type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _deviceType Device type
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Availability zone
                     * @return Placement Availability zone
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Availability zone
                     * @param _placement Availability zone
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Out-of-band network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return BmcVirtualPrivateCloud Out-of-band network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    VirtualPrivateCloud GetBmcVirtualPrivateCloud() const;

                    /**
                     * 设置Out-of-band network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _bmcVirtualPrivateCloud Out-of-band network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBmcVirtualPrivateCloud(const VirtualPrivateCloud& _bmcVirtualPrivateCloud);

                    /**
                     * 判断参数 BmcVirtualPrivateCloud 是否已赋值
                     * @return BmcVirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool BmcVirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取Out-of-band network IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return BmcIp Out-of-band network IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBmcIp() const;

                    /**
                     * 设置Out-of-band network IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _bmcIp Out-of-band network IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBmcIp(const std::string& _bmcIp);

                    /**
                     * 判断参数 BmcIp 是否已赋值
                     * @return BmcIp 是否已赋值
                     * 
                     */
                    bool BmcIpHasBeenSet() const;

                    /**
                     * 获取Out-of-band network security group ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return BmcSecurityGroupIds Out-of-band network security group ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBmcSecurityGroupIds() const;

                    /**
                     * 设置Out-of-band network security group ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _bmcSecurityGroupIds Out-of-band network security group ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBmcSecurityGroupIds(const std::vector<std::string>& _bmcSecurityGroupIds);

                    /**
                     * 判断参数 BmcSecurityGroupIds 是否已赋值
                     * @return BmcSecurityGroupIds 是否已赋值
                     * 
                     */
                    bool BmcSecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Deployment network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DeployVirtualPrivateCloud Deployment network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    VirtualPrivateCloud GetDeployVirtualPrivateCloud() const;

                    /**
                     * 设置Deployment network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _deployVirtualPrivateCloud Deployment network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeployVirtualPrivateCloud(const VirtualPrivateCloud& _deployVirtualPrivateCloud);

                    /**
                     * 判断参数 DeployVirtualPrivateCloud 是否已赋值
                     * @return DeployVirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool DeployVirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取Deployment network IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DeployIp Deployment network IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDeployIp() const;

                    /**
                     * 设置Deployment network IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _deployIp Deployment network IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeployIp(const std::string& _deployIp);

                    /**
                     * 判断参数 DeployIp 是否已赋值
                     * @return DeployIp 是否已赋值
                     * 
                     */
                    bool DeployIpHasBeenSet() const;

                    /**
                     * 获取Deployment network security group ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DeploySecurityGroupIds Deployment network security group ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDeploySecurityGroupIds() const;

                    /**
                     * 设置Deployment network security group ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _deploySecurityGroupIds Deployment network security group ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeploySecurityGroupIds(const std::vector<std::string>& _deploySecurityGroupIds);

                    /**
                     * 判断参数 DeploySecurityGroupIds 是否已赋值
                     * @return DeploySecurityGroupIds 是否已赋值
                     * 
                     */
                    bool DeploySecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取ID of the associated CVM
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CvmInstanceId ID of the associated CVM
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置ID of the associated CVM
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _cvmInstanceId ID of the associated CVM
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取Server creation time
                     * @return CreatedTime Server creation time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Server creation time
                     * @param _createdTime Server creation time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Instance hardware description, including CPU cores, memory capacity and disk capacity.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return HardwareDescription Instance hardware description, including CPU cores, memory capacity and disk capacity.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHardwareDescription() const;

                    /**
                     * 设置Instance hardware description, including CPU cores, memory capacity and disk capacity.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _hardwareDescription Instance hardware description, including CPU cores, memory capacity and disk capacity.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHardwareDescription(const std::string& _hardwareDescription);

                    /**
                     * 判断参数 HardwareDescription 是否已赋值
                     * @return HardwareDescription 是否已赋值
                     * 
                     */
                    bool HardwareDescriptionHasBeenSet() const;

                    /**
                     * 获取CPU cores of the CHC host
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CPU CPU cores of the CHC host
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCPU() const;

                    /**
                     * 设置CPU cores of the CHC host
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _cPU CPU cores of the CHC host
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCPU(const int64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Memory capacity of the CHC host (unit: GB)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Memory Memory capacity of the CHC host (unit: GB)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory capacity of the CHC host (unit: GB)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _memory Memory capacity of the CHC host (unit: GB)
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Disk capacity of the CHC host
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Disk Disk capacity of the CHC host
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDisk() const;

                    /**
                     * 设置Disk capacity of the CHC host
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _disk Disk capacity of the CHC host
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDisk(const std::string& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取MAC address assigned under the out-of-band network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return BmcMAC MAC address assigned under the out-of-band network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBmcMAC() const;

                    /**
                     * 设置MAC address assigned under the out-of-band network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _bmcMAC MAC address assigned under the out-of-band network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBmcMAC(const std::string& _bmcMAC);

                    /**
                     * 判断参数 BmcMAC 是否已赋值
                     * @return BmcMAC 是否已赋值
                     * 
                     */
                    bool BmcMACHasBeenSet() const;

                    /**
                     * 获取MAC address assigned under the deployment network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DeployMAC MAC address assigned under the deployment network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDeployMAC() const;

                    /**
                     * 设置MAC address assigned under the deployment network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _deployMAC MAC address assigned under the deployment network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeployMAC(const std::string& _deployMAC);

                    /**
                     * 判断参数 DeployMAC 是否已赋值
                     * @return DeployMAC 是否已赋值
                     * 
                     */
                    bool DeployMACHasBeenSet() const;

                    /**
                     * 获取Management type
HOSTING: Hosting
TENANT: Leasing
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TenantType Management type
HOSTING: Hosting
TENANT: Leasing
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTenantType() const;

                    /**
                     * 设置Management type
HOSTING: Hosting
TENANT: Leasing
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _tenantType Management type
HOSTING: Hosting
TENANT: Leasing
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTenantType(const std::string& _tenantType);

                    /**
                     * 判断参数 TenantType 是否已赋值
                     * @return TenantType 是否已赋值
                     * 
                     */
                    bool TenantTypeHasBeenSet() const;

                    /**
                     * 获取CHC DHCP option, which is used for MiniOS debugging.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DeployExtraConfig CHC DHCP option, which is used for MiniOS debugging.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    ChcDeployExtraConfig GetDeployExtraConfig() const;

                    /**
                     * 设置CHC DHCP option, which is used for MiniOS debugging.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _deployExtraConfig CHC DHCP option, which is used for MiniOS debugging.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeployExtraConfig(const ChcDeployExtraConfig& _deployExtraConfig);

                    /**
                     * 判断参数 DeployExtraConfig 是否已赋值
                     * @return DeployExtraConfig 是否已赋值
                     * 
                     */
                    bool DeployExtraConfigHasBeenSet() const;

                private:

                    /**
                     * CHC host ID
                     */
                    std::string m_chcId;
                    bool m_chcIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Server serial number
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * CHC host status<br/>
<ul>
<li>REGISTERED: The CHC host is registered, but the out-of-band network and deployment network are not configured.</li>
<li>VPC_READY: The out-of-band network and deployment network are configured.</li>
<li>PREPARED: It’s ready and can be associated with a CVM.</li>
<li>ONLINE: It’s already associated with a CVM.</li>
</ul>
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Device type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Availability zone
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Out-of-band network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    VirtualPrivateCloud m_bmcVirtualPrivateCloud;
                    bool m_bmcVirtualPrivateCloudHasBeenSet;

                    /**
                     * Out-of-band network IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_bmcIp;
                    bool m_bmcIpHasBeenSet;

                    /**
                     * Out-of-band network security group ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_bmcSecurityGroupIds;
                    bool m_bmcSecurityGroupIdsHasBeenSet;

                    /**
                     * Deployment network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    VirtualPrivateCloud m_deployVirtualPrivateCloud;
                    bool m_deployVirtualPrivateCloudHasBeenSet;

                    /**
                     * Deployment network IP
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_deployIp;
                    bool m_deployIpHasBeenSet;

                    /**
                     * Deployment network security group ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_deploySecurityGroupIds;
                    bool m_deploySecurityGroupIdsHasBeenSet;

                    /**
                     * ID of the associated CVM
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * Server creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Instance hardware description, including CPU cores, memory capacity and disk capacity.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_hardwareDescription;
                    bool m_hardwareDescriptionHasBeenSet;

                    /**
                     * CPU cores of the CHC host
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Memory capacity of the CHC host (unit: GB)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Disk capacity of the CHC host
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * MAC address assigned under the out-of-band network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_bmcMAC;
                    bool m_bmcMACHasBeenSet;

                    /**
                     * MAC address assigned under the deployment network
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_deployMAC;
                    bool m_deployMACHasBeenSet;

                    /**
                     * Management type
HOSTING: Hosting
TENANT: Leasing
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_tenantType;
                    bool m_tenantTypeHasBeenSet;

                    /**
                     * CHC DHCP option, which is used for MiniOS debugging.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    ChcDeployExtraConfig m_deployExtraConfig;
                    bool m_deployExtraConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOST_H_
