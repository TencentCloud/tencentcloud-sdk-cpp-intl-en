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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateInstances request structure.
                */
                class CreateInstancesRequest : public AbstractModel
                {
                public:
                    CreateInstancesRequest();
                    ~CreateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Availability zone code, such as ap-guangzhou-1.
                     * @return Zone Availability zone code, such as ap-guangzhou-1.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone code, such as ap-guangzhou-1.
                     * @param _zone Availability zone code, such as ap-guangzhou-1.
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
                     * 获取Model specifications, such as BMS5.MEDIUM8.
                     * @return InstanceType Model specifications, such as BMS5.MEDIUM8.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Model specifications, such as BMS5.MEDIUM8.
                     * @param _instanceType Model specifications, such as BMS5.MEDIUM8.
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
                     * 获取Private network instance ID in the format of net-xxx.
                     * @return PrivateNetworkId Private network instance ID in the format of net-xxx.
                     * 
                     */
                    std::string GetPrivateNetworkId() const;

                    /**
                     * 设置Private network instance ID in the format of net-xxx.
                     * @param _privateNetworkId Private network instance ID in the format of net-xxx.
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
                     * 获取Public network instance ID, in the format of net-xxx.
                     * @return PublicNetworkId Public network instance ID, in the format of net-xxx.
                     * 
                     */
                    std::string GetPublicNetworkId() const;

                    /**
                     * 设置Public network instance ID, in the format of net-xxx.
                     * @param _publicNetworkId Public network instance ID, in the format of net-xxx.
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
                     * 获取Image ID, for example img-centos-7.9.
                     * @return ImageId Image ID, for example img-centos-7.9.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID, for example img-centos-7.9.
                     * @param _imageId Image ID, for example img-centos-7.9.
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
                     * 获取Specify the quantity. Default is 1. Maximum is 50.
                     * @return InstanceCount Specify the quantity. Default is 1. Maximum is 50.
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置Specify the quantity. Default is 1. Maximum is 50.
                     * @param _instanceCount Specify the quantity. Default is 1. Maximum is 50.
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Image version number. Only public images have the concept of version.
                     * @return VersionNumber Image version number. Only public images have the concept of version.
                     * 
                     */
                    std::string GetVersionNumber() const;

                    /**
                     * 设置Image version number. Only public images have the concept of version.
                     * @param _versionNumber Image version number. Only public images have the concept of version.
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
                     * 获取Whether to enable public IPv6, default false. Enabled, the system will allocate an additional IPv6 address after assigning an IPv4 address.
                     * @return EnableIpv6 Whether to enable public IPv6, default false. Enabled, the system will allocate an additional IPv6 address after assigning an IPv4 address.
                     * 
                     */
                    bool GetEnableIpv6() const;

                    /**
                     * 设置Whether to enable public IPv6, default false. Enabled, the system will allocate an additional IPv6 address after assigning an IPv4 address.
                     * @param _enableIpv6 Whether to enable public IPv6, default false. Enabled, the system will allocate an additional IPv6 address after assigning an IPv4 address.
                     * 
                     */
                    void SetEnableIpv6(const bool& _enableIpv6);

                    /**
                     * 判断参数 EnableIpv6 是否已赋值
                     * @return EnableIpv6 是否已赋值
                     * 
                     */
                    bool EnableIpv6HasBeenSet() const;

                private:

                    /**
                     * Availability zone code, such as ap-guangzhou-1.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Model specifications, such as BMS5.MEDIUM8.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Private network instance ID in the format of net-xxx.
                     */
                    std::string m_privateNetworkId;
                    bool m_privateNetworkIdHasBeenSet;

                    /**
                     * Public network instance ID, in the format of net-xxx.
                     */
                    std::string m_publicNetworkId;
                    bool m_publicNetworkIdHasBeenSet;

                    /**
                     * Image ID, for example img-centos-7.9.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Specify the quantity. Default is 1. Maximum is 50.
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Image version number. Only public images have the concept of version.
                     */
                    std::string m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * Whether to enable public IPv6, default false. Enabled, the system will allocate an additional IPv6 address after assigning an IPv4 address.
                     */
                    bool m_enableIpv6;
                    bool m_enableIpv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEINSTANCESREQUEST_H_
