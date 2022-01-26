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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MOUNTINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Mount target information
                */
                class MountInfo : public AbstractModel
                {
                public:
                    MountInfo();
                    ~MountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File system ID
                     * @return FileSystemId File system ID
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID
                     * @param FileSystemId File system ID
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取Mount target ID
                     * @return MountTargetId Mount target ID
                     */
                    std::string GetMountTargetId() const;

                    /**
                     * 设置Mount target ID
                     * @param MountTargetId Mount target ID
                     */
                    void SetMountTargetId(const std::string& _mountTargetId);

                    /**
                     * 判断参数 MountTargetId 是否已赋值
                     * @return MountTargetId 是否已赋值
                     */
                    bool MountTargetIdHasBeenSet() const;

                    /**
                     * 获取Mount target IP
                     * @return IpAddress Mount target IP
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置Mount target IP
                     * @param IpAddress Mount target IP
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取Mount root-directory
                     * @return FSID Mount root-directory
                     */
                    std::string GetFSID() const;

                    /**
                     * 设置Mount root-directory
                     * @param FSID Mount root-directory
                     */
                    void SetFSID(const std::string& _fSID);

                    /**
                     * 判断参数 FSID 是否已赋值
                     * @return FSID 是否已赋值
                     */
                    bool FSIDHasBeenSet() const;

                    /**
                     * 获取Mount target status
                     * @return LifeCycleState Mount target status
                     */
                    std::string GetLifeCycleState() const;

                    /**
                     * 设置Mount target status
                     * @param LifeCycleState Mount target status
                     */
                    void SetLifeCycleState(const std::string& _lifeCycleState);

                    /**
                     * 判断参数 LifeCycleState 是否已赋值
                     * @return LifeCycleState 是否已赋值
                     */
                    bool LifeCycleStateHasBeenSet() const;

                    /**
                     * 获取Network type
                     * @return NetworkInterface Network type
                     */
                    std::string GetNetworkInterface() const;

                    /**
                     * 设置Network type
                     * @param NetworkInterface Network type
                     */
                    void SetNetworkInterface(const std::string& _networkInterface);

                    /**
                     * 判断参数 NetworkInterface 是否已赋值
                     * @return NetworkInterface 是否已赋值
                     */
                    bool NetworkInterfaceHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC name
                     * @return VpcName VPC name
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name
                     * @param VpcName VPC name
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param SubnetId Subnet ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Subnet name
                     * @return SubnetName Subnet name
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Subnet name
                     * @param SubnetName Subnet name
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取CCN instance ID used by CFS Turbo
                     * @return CcnID CCN instance ID used by CFS Turbo
                     */
                    std::string GetCcnID() const;

                    /**
                     * 设置CCN instance ID used by CFS Turbo
                     * @param CcnID CCN instance ID used by CFS Turbo
                     */
                    void SetCcnID(const std::string& _ccnID);

                    /**
                     * 判断参数 CcnID 是否已赋值
                     * @return CcnID 是否已赋值
                     */
                    bool CcnIDHasBeenSet() const;

                    /**
                     * 获取CCN IP range used by CFS Turbo
                     * @return CidrBlock CCN IP range used by CFS Turbo
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置CCN IP range used by CFS Turbo
                     * @param CidrBlock CCN IP range used by CFS Turbo
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     */
                    bool CidrBlockHasBeenSet() const;

                private:

                    /**
                     * File system ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Mount target ID
                     */
                    std::string m_mountTargetId;
                    bool m_mountTargetIdHasBeenSet;

                    /**
                     * Mount target IP
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * Mount root-directory
                     */
                    std::string m_fSID;
                    bool m_fSIDHasBeenSet;

                    /**
                     * Mount target status
                     */
                    std::string m_lifeCycleState;
                    bool m_lifeCycleStateHasBeenSet;

                    /**
                     * Network type
                     */
                    std::string m_networkInterface;
                    bool m_networkInterfaceHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Subnet name
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * CCN instance ID used by CFS Turbo
                     */
                    std::string m_ccnID;
                    bool m_ccnIDHasBeenSet;

                    /**
                     * CCN IP range used by CFS Turbo
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MOUNTINFO_H_
