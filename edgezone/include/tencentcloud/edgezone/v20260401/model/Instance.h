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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_INSTANCE_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * Describe physical machine instance information
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
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
                     * 获取<p>Bound Physical Machine ID</p>
                     * @return MachineId <p>Bound Physical Machine ID</p>
                     * 
                     */
                    std::string GetMachineId() const;

                    /**
                     * 设置<p>Bound Physical Machine ID</p>
                     * @param _machineId <p>Bound Physical Machine ID</p>
                     * 
                     */
                    void SetMachineId(const std::string& _machineId);

                    /**
                     * 判断参数 MachineId 是否已赋值
                     * @return MachineId 是否已赋值
                     * 
                     */
                    bool MachineIdHasBeenSet() const;

                    /**
                     * 获取<p>Model specifications</p>
                     * @return InstanceType <p>Model specifications</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Model specifications</p>
                     * @param _instanceType <p>Model specifications</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone code</p>
                     * @return Zone <p>Availability zone code</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Availability zone code</p>
                     * @param _zone <p>Availability zone code</p>
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
                     * 获取<p>Image ID.</p>
                     * @return ImageId <p>Image ID.</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>Image ID.</p>
                     * @param _imageId <p>Image ID.</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>Image version number</p>
                     * @return VersionNumber <p>Image version number</p>
                     * @deprecated
                     */
                    std::string GetVersionNumber() const;

                    /**
                     * 设置<p>Image version number</p>
                     * @param _versionNumber <p>Image version number</p>
                     * @deprecated
                     */
                    void SetVersionNumber(const std::string& _versionNumber);

                    /**
                     * 判断参数 VersionNumber 是否已赋值
                     * @return VersionNumber 是否已赋值
                     * @deprecated
                     */
                    bool VersionNumberHasBeenSet() const;

                    /**
                     * 获取<p>Instance status, value range: allocating, running, isolating, isolated, terminating, error.</p>
                     * @return InstanceStatus <p>Instance status, value range: allocating, running, isolating, isolated, terminating, error.</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>Instance status, value range: allocating, running, isolating, isolated, terminating, error.</p>
                     * @param _instanceStatus <p>Instance status, value range: allocating, running, isolating, isolated, terminating, error.</p>
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>Operation status: normal, starting, stopping, stopped, rebooting.</p>
                     * @return OperateStatus <p>Operation status: normal, starting, stopping, stopped, rebooting.</p>
                     * 
                     */
                    std::string GetOperateStatus() const;

                    /**
                     * 设置<p>Operation status: normal, starting, stopping, stopped, rebooting.</p>
                     * @param _operateStatus <p>Operation status: normal, starting, stopping, stopped, rebooting.</p>
                     * 
                     */
                    void SetOperateStatus(const std::string& _operateStatus);

                    /**
                     * 判断参数 OperateStatus 是否已赋值
                     * @return OperateStatus 是否已赋值
                     * 
                     */
                    bool OperateStatusHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID.</p>
                     * @return PrivateNetworkId <p>VPC ID.</p>
                     * 
                     */
                    std::string GetPrivateNetworkId() const;

                    /**
                     * 设置<p>VPC ID.</p>
                     * @param _privateNetworkId <p>VPC ID.</p>
                     * 
                     */
                    void SetPrivateNetworkId(const std::string& _privateNetworkId);

                    /**
                     * 判断参数 PrivateNetworkId 是否已赋值
                     * @return PrivateNetworkId 是否已赋值
                     * 
                     */
                    bool PrivateNetworkIdHasBeenSet() const;

                    /**
                     * 获取<p>Private IPv4 address</p>
                     * @return PrivateIp <p>Private IPv4 address</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>Private IPv4 address</p>
                     * @param _privateIp <p>Private IPv4 address</p>
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>Private IPv6 address</p>
                     * @return PrivateIpV6 <p>Private IPv6 address</p>
                     * 
                     */
                    std::string GetPrivateIpV6() const;

                    /**
                     * 设置<p>Private IPv6 address</p>
                     * @param _privateIpV6 <p>Private IPv6 address</p>
                     * 
                     */
                    void SetPrivateIpV6(const std::string& _privateIpV6);

                    /**
                     * 判断参数 PrivateIpV6 是否已赋值
                     * @return PrivateIpV6 是否已赋值
                     * 
                     */
                    bool PrivateIpV6HasBeenSet() const;

                    /**
                     * 获取<p>Public network ID.</p>
                     * @return PublicNetworkId <p>Public network ID.</p>
                     * 
                     */
                    std::string GetPublicNetworkId() const;

                    /**
                     * 设置<p>Public network ID.</p>
                     * @param _publicNetworkId <p>Public network ID.</p>
                     * 
                     */
                    void SetPublicNetworkId(const std::string& _publicNetworkId);

                    /**
                     * 判断参数 PublicNetworkId 是否已赋值
                     * @return PublicNetworkId 是否已赋值
                     * 
                     */
                    bool PublicNetworkIdHasBeenSet() const;

                    /**
                     * 获取<p>Public IPv4 address</p>
                     * @return PublicIp <p>Public IPv4 address</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>Public IPv4 address</p>
                     * @param _publicIp <p>Public IPv4 address</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>Public IPv6 address</p>
                     * @return PublicIpV6 <p>Public IPv6 address</p>
                     * 
                     */
                    std::string GetPublicIpV6() const;

                    /**
                     * 设置<p>Public IPv6 address</p>
                     * @param _publicIpV6 <p>Public IPv6 address</p>
                     * 
                     */
                    void SetPublicIpV6(const std::string& _publicIpV6);

                    /**
                     * 判断参数 PublicIpV6 是否已赋值
                     * @return PublicIpV6 是否已赋值
                     * 
                     */
                    bool PublicIpV6HasBeenSet() const;

                    /**
                     * 获取<p>File System Type</p>
                     * @return FileSystemType <p>File System Type</p>
                     * 
                     */
                    std::string GetFileSystemType() const;

                    /**
                     * 设置<p>File System Type</p>
                     * @param _fileSystemType <p>File System Type</p>
                     * 
                     */
                    void SetFileSystemType(const std::string& _fileSystemType);

                    /**
                     * 判断参数 FileSystemType 是否已赋值
                     * @return FileSystemType 是否已赋值
                     * 
                     */
                    bool FileSystemTypeHasBeenSet() const;

                    /**
                     * 获取<p>Creation time, in the ISO 8601 standard format, using UTC time. Format: YYYY-MM-DDThh:mm:ssZ.</p>
                     * @return CreatedTime <p>Creation time, in the ISO 8601 standard format, using UTC time. Format: YYYY-MM-DDThh:mm:ssZ.</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>Creation time, in the ISO 8601 standard format, using UTC time. Format: YYYY-MM-DDThh:mm:ssZ.</p>
                     * @param _createdTime <p>Creation time, in the ISO 8601 standard format, using UTC time. Format: YYYY-MM-DDThh:mm:ssZ.</p>
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
                     * 获取<p>Instance family flag</p>
                     * @return InstanceFamily <p>Instance family flag</p>
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置<p>Instance family flag</p>
                     * @param _instanceFamily <p>Instance family flag</p>
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取<p>Model Family Name</p>
                     * @return InstanceFamilyName <p>Model Family Name</p>
                     * 
                     */
                    std::string GetInstanceFamilyName() const;

                    /**
                     * 设置<p>Model Family Name</p>
                     * @param _instanceFamilyName <p>Model Family Name</p>
                     * 
                     */
                    void SetInstanceFamilyName(const std::string& _instanceFamilyName);

                    /**
                     * 判断参数 InstanceFamilyName 是否已赋值
                     * @return InstanceFamilyName 是否已赋值
                     * 
                     */
                    bool InstanceFamilyNameHasBeenSet() const;

                    /**
                     * 获取<p>CPU Model</p>
                     * @return CpuType <p>CPU Model</p>
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置<p>CPU Model</p>
                     * @param _cpuType <p>CPU Model</p>
                     * 
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取<p>CPU cores.</p>
                     * @return Cpu <p>CPU cores.</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>CPU cores.</p>
                     * @param _cpu <p>CPU cores.</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>Memory size.</p>
                     * @return Memory <p>Memory size.</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>Memory size.</p>
                     * @param _memory <p>Memory size.</p>
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Bound Physical Machine ID</p>
                     */
                    std::string m_machineId;
                    bool m_machineIdHasBeenSet;

                    /**
                     * <p>Model specifications</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Availability zone code</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>Image version number</p>
                     */
                    std::string m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * <p>Instance status, value range: allocating, running, isolating, isolated, terminating, error.</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>Operation status: normal, starting, stopping, stopped, rebooting.</p>
                     */
                    std::string m_operateStatus;
                    bool m_operateStatusHasBeenSet;

                    /**
                     * <p>VPC ID.</p>
                     */
                    std::string m_privateNetworkId;
                    bool m_privateNetworkIdHasBeenSet;

                    /**
                     * <p>Private IPv4 address</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>Private IPv6 address</p>
                     */
                    std::string m_privateIpV6;
                    bool m_privateIpV6HasBeenSet;

                    /**
                     * <p>Public network ID.</p>
                     */
                    std::string m_publicNetworkId;
                    bool m_publicNetworkIdHasBeenSet;

                    /**
                     * <p>Public IPv4 address</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>Public IPv6 address</p>
                     */
                    std::string m_publicIpV6;
                    bool m_publicIpV6HasBeenSet;

                    /**
                     * <p>File System Type</p>
                     */
                    std::string m_fileSystemType;
                    bool m_fileSystemTypeHasBeenSet;

                    /**
                     * <p>Creation time, in the ISO 8601 standard format, using UTC time. Format: YYYY-MM-DDThh:mm:ssZ.</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>Instance family flag</p>
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * <p>Model Family Name</p>
                     */
                    std::string m_instanceFamilyName;
                    bool m_instanceFamilyNameHasBeenSet;

                    /**
                     * <p>CPU Model</p>
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * <p>CPU cores.</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Memory size.</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_INSTANCE_H_
