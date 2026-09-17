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
                     * 获取<p>Availability zone code, such as ap-guangzhou-1.</p>
                     * @return Zone <p>Availability zone code, such as ap-guangzhou-1.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Availability zone code, such as ap-guangzhou-1.</p>
                     * @param _zone <p>Availability zone code, such as ap-guangzhou-1.</p>
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
                     * 获取<p>Model specifications, such as BMS5.MEDIUM8.</p>
                     * @return InstanceType <p>Model specifications, such as BMS5.MEDIUM8.</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Model specifications, such as BMS5.MEDIUM8.</p>
                     * @param _instanceType <p>Model specifications, such as BMS5.MEDIUM8.</p>
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
                     * 获取<p>Private network instance ID in the format of net-xxx.</p>
                     * @return PrivateNetworkId <p>Private network instance ID in the format of net-xxx.</p>
                     * 
                     */
                    std::string GetPrivateNetworkId() const;

                    /**
                     * 设置<p>Private network instance ID in the format of net-xxx.</p>
                     * @param _privateNetworkId <p>Private network instance ID in the format of net-xxx.</p>
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
                     * 获取<p>Public network instance ID, in the format of net-xxx.</p>
                     * @return PublicNetworkId <p>Public network instance ID, in the format of net-xxx.</p>
                     * 
                     */
                    std::string GetPublicNetworkId() const;

                    /**
                     * 设置<p>Public network instance ID, in the format of net-xxx.</p>
                     * @param _publicNetworkId <p>Public network instance ID, in the format of net-xxx.</p>
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
                     * 获取<p>Image ID, for example img-centos-7.9.</p>
                     * @return ImageId <p>Image ID, for example img-centos-7.9.</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>Image ID, for example img-centos-7.9.</p>
                     * @param _imageId <p>Image ID, for example img-centos-7.9.</p>
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
                     * 获取<p>Specify the quantity. Default is 1. Maximum is 50.</p>
                     * @return InstanceCount <p>Specify the quantity. Default is 1. Maximum is 50.</p>
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置<p>Specify the quantity. Default is 1. Maximum is 50.</p>
                     * @param _instanceCount <p>Specify the quantity. Default is 1. Maximum is 50.</p>
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
                     * 获取<p>Login password. Either it or SSHKey is required.</p>
                     * @return Password <p>Login password. Either it or SSHKey is required.</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Login password. Either it or SSHKey is required.</p>
                     * @param _password <p>Login password. Either it or SSHKey is required.</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>Public key string of the SSH key. Either this parameter or Password must be specified.</p>
                     * @return SSHKey <p>Public key string of the SSH key. Either this parameter or Password must be specified.</p>
                     * 
                     */
                    std::string GetSSHKey() const;

                    /**
                     * 设置<p>Public key string of the SSH key. Either this parameter or Password must be specified.</p>
                     * @param _sSHKey <p>Public key string of the SSH key. Either this parameter or Password must be specified.</p>
                     * 
                     */
                    void SetSSHKey(const std::string& _sSHKey);

                    /**
                     * 判断参数 SSHKey 是否已赋值
                     * @return SSHKey 是否已赋值
                     * 
                     */
                    bool SSHKeyHasBeenSet() const;

                    /**
                     * 获取<p>Image version number. Only public images have the concept of version.</p>
                     * @return VersionNumber <p>Image version number. Only public images have the concept of version.</p>
                     * @deprecated
                     */
                    std::string GetVersionNumber() const;

                    /**
                     * 设置<p>Image version number. Only public images have the concept of version.</p>
                     * @param _versionNumber <p>Image version number. Only public images have the concept of version.</p>
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
                     * 获取<p>Whether to enable public IPv6, default false. Enabled, the system will allocate an additional IPv6 address after assigning an IPv4 address.</p>
                     * @return EnableIpv6 <p>Whether to enable public IPv6, default false. Enabled, the system will allocate an additional IPv6 address after assigning an IPv4 address.</p>
                     * @deprecated
                     */
                    bool GetEnableIpv6() const;

                    /**
                     * 设置<p>Whether to enable public IPv6, default false. Enabled, the system will allocate an additional IPv6 address after assigning an IPv4 address.</p>
                     * @param _enableIpv6 <p>Whether to enable public IPv6, default false. Enabled, the system will allocate an additional IPv6 address after assigning an IPv4 address.</p>
                     * @deprecated
                     */
                    void SetEnableIpv6(const bool& _enableIpv6);

                    /**
                     * 判断参数 EnableIpv6 是否已赋值
                     * @return EnableIpv6 是否已赋值
                     * @deprecated
                     */
                    bool EnableIpv6HasBeenSet() const;

                private:

                    /**
                     * <p>Availability zone code, such as ap-guangzhou-1.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Model specifications, such as BMS5.MEDIUM8.</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Private network instance ID in the format of net-xxx.</p>
                     */
                    std::string m_privateNetworkId;
                    bool m_privateNetworkIdHasBeenSet;

                    /**
                     * <p>Public network instance ID, in the format of net-xxx.</p>
                     */
                    std::string m_publicNetworkId;
                    bool m_publicNetworkIdHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Image ID, for example img-centos-7.9.</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>Specify the quantity. Default is 1. Maximum is 50.</p>
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>Login password. Either it or SSHKey is required.</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Public key string of the SSH key. Either this parameter or Password must be specified.</p>
                     */
                    std::string m_sSHKey;
                    bool m_sSHKeyHasBeenSet;

                    /**
                     * <p>Image version number. Only public images have the concept of version.</p>
                     */
                    std::string m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * <p>Whether to enable public IPv6, default false. Enabled, the system will allocate an additional IPv6 address after assigning an IPv4 address.</p>
                     */
                    bool m_enableIpv6;
                    bool m_enableIpv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_CREATEINSTANCESREQUEST_H_
