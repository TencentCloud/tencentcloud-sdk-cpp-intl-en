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
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
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
                     * 获取Bound Physical Machine ID
                     * @return MachineId Bound Physical Machine ID
                     * 
                     */
                    std::string GetMachineId() const;

                    /**
                     * 设置Bound Physical Machine ID
                     * @param _machineId Bound Physical Machine ID
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
                     * 获取Model specifications
                     * @return InstanceType Model specifications
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Model specifications
                     * @param _instanceType Model specifications
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
                     * 获取Availability zone code
                     * @return Zone Availability zone code
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone code
                     * @param _zone Availability zone code
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
                     * 获取Image ID
                     * @return ImageId Image ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
                     * @param _imageId Image ID
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
                     * 获取Image version number
                     * @return VersionNumber Image version number
                     * 
                     */
                    std::string GetVersionNumber() const;

                    /**
                     * 设置Image version number
                     * @param _versionNumber Image version number
                     * 
                     */
                    void SetVersionNumber(const std::string& _versionNumber);

                    /**
                     * 判断参数 VersionNumber 是否已赋值
                     * @return VersionNumber 是否已赋值
                     * 
                     */
                    bool VersionNumberHasBeenSet() const;

                    /**
                     * 获取Instance status, value range: allocating, running, isolating, isolated, terminating, error.
                     * @return InstanceStatus Instance status, value range: allocating, running, isolating, isolated, terminating, error.
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Instance status, value range: allocating, running, isolating, isolated, terminating, error.
                     * @param _instanceStatus Instance status, value range: allocating, running, isolating, isolated, terminating, error.
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
                     * 获取Operation status: normal, starting, stopping, stopped, rebooting.
                     * @return OperateStatus Operation status: normal, starting, stopping, stopped, rebooting.
                     * 
                     */
                    std::string GetOperateStatus() const;

                    /**
                     * 设置Operation status: normal, starting, stopping, stopped, rebooting.
                     * @param _operateStatus Operation status: normal, starting, stopping, stopped, rebooting.
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
                     * 获取VPC ID
                     * @return PrivateNetworkId VPC ID
                     * 
                     */
                    std::string GetPrivateNetworkId() const;

                    /**
                     * 设置VPC ID
                     * @param _privateNetworkId VPC ID
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
                     * 获取private IPv4 address
                     * @return PrivateIp private IPv4 address
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置private IPv4 address
                     * @param _privateIp private IPv4 address
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
                     * 获取private IPv6 address
                     * @return PrivateIpV6 private IPv6 address
                     * 
                     */
                    std::string GetPrivateIpV6() const;

                    /**
                     * 设置private IPv6 address
                     * @param _privateIpV6 private IPv6 address
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
                     * 获取Public network ID
                     * @return PublicNetworkId Public network ID
                     * 
                     */
                    std::string GetPublicNetworkId() const;

                    /**
                     * 设置Public network ID
                     * @param _publicNetworkId Public network ID
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
                     * 获取Public IPv4 address
                     * @return PublicIp Public IPv4 address
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IPv4 address
                     * @param _publicIp Public IPv4 address
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
                     * 获取Public IPv6 address
                     * @return PublicIpV6 Public IPv6 address
                     * 
                     */
                    std::string GetPublicIpV6() const;

                    /**
                     * 设置Public IPv6 address
                     * @param _publicIpV6 Public IPv6 address
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
                     * 获取Creation time, expressed according to the ISO8601 standard and using the UTC time. The format is YYYY-MM-DDThh:mm:ssZ.
                     * @return CreatedTime Creation time, expressed according to the ISO8601 standard and using the UTC time. The format is YYYY-MM-DDThh:mm:ssZ.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time, expressed according to the ISO8601 standard and using the UTC time. The format is YYYY-MM-DDThh:mm:ssZ.
                     * @param _createdTime Creation time, expressed according to the ISO8601 standard and using the UTC time. The format is YYYY-MM-DDThh:mm:ssZ.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Bound Physical Machine ID
                     */
                    std::string m_machineId;
                    bool m_machineIdHasBeenSet;

                    /**
                     * Model specifications
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Availability zone code
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Image ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image version number
                     */
                    std::string m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * Instance status, value range: allocating, running, isolating, isolated, terminating, error.
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Operation status: normal, starting, stopping, stopped, rebooting.
                     */
                    std::string m_operateStatus;
                    bool m_operateStatusHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_privateNetworkId;
                    bool m_privateNetworkIdHasBeenSet;

                    /**
                     * private IPv4 address
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * private IPv6 address
                     */
                    std::string m_privateIpV6;
                    bool m_privateIpV6HasBeenSet;

                    /**
                     * Public network ID
                     */
                    std::string m_publicNetworkId;
                    bool m_publicNetworkIdHasBeenSet;

                    /**
                     * Public IPv4 address
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Public IPv6 address
                     */
                    std::string m_publicIpV6;
                    bool m_publicIpV6HasBeenSet;

                    /**
                     * Creation time, expressed according to the ISO8601 standard and using the UTC time. The format is YYYY-MM-DDThh:mm:ssZ.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_INSTANCE_H_
