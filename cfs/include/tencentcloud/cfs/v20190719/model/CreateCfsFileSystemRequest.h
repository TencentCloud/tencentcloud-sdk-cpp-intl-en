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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/TagInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateCfsFileSystem request structure.
                */
                class CreateCfsFileSystemRequest : public AbstractModel
                {
                public:
                    CreateCfsFileSystemRequest();
                    ~CreateCfsFileSystemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取AZ name, such as "ap-beijing-1". For the list of regions and AZs, please see [Overview](https://cloud.tencent.com/document/product/582/13225)
                     * @return Zone AZ name, such as "ap-beijing-1". For the list of regions and AZs, please see [Overview](https://cloud.tencent.com/document/product/582/13225)
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ name, such as "ap-beijing-1". For the list of regions and AZs, please see [Overview](https://cloud.tencent.com/document/product/582/13225)
                     * @param Zone AZ name, such as "ap-beijing-1". For the list of regions and AZs, please see [Overview](https://cloud.tencent.com/document/product/582/13225)
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Network type. Valid values: VPC (VPC), BASIC (basic network)
                     * @return NetInterface Network type. Valid values: VPC (VPC), BASIC (basic network)
                     */
                    std::string GetNetInterface() const;

                    /**
                     * 设置Network type. Valid values: VPC (VPC), BASIC (basic network)
                     * @param NetInterface Network type. Valid values: VPC (VPC), BASIC (basic network)
                     */
                    void SetNetInterface(const std::string& _netInterface);

                    /**
                     * 判断参数 NetInterface 是否已赋值
                     * @return NetInterface 是否已赋值
                     */
                    bool NetInterfaceHasBeenSet() const;

                    /**
                     * 获取Permission group ID
                     * @return PGroupId Permission group ID
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置Permission group ID
                     * @param PGroupId Permission group ID
                     */
                    void SetPGroupId(const std::string& _pGroupId);

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取File system protocol type. Valid values: NFS, CIFS. If this parameter is left empty, NFS will be used by default
                     * @return Protocol File system protocol type. Valid values: NFS, CIFS. If this parameter is left empty, NFS will be used by default
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置File system protocol type. Valid values: NFS, CIFS. If this parameter is left empty, NFS will be used by default
                     * @param Protocol File system protocol type. Valid values: NFS, CIFS. If this parameter is left empty, NFS will be used by default
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取File system storage class. Valid values: SD (standard), HP (high-performance)
                     * @return StorageType File system storage class. Valid values: SD (standard), HP (high-performance)
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置File system storage class. Valid values: SD (standard), HP (high-performance)
                     * @param StorageType File system storage class. Valid values: SD (standard), HP (high-performance)
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取VPC ID. This field is required if network type is VPC.
                     * @return VpcId VPC ID. This field is required if network type is VPC.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. This field is required if network type is VPC.
                     * @param VpcId VPC ID. This field is required if network type is VPC.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID. This field is required if network type is VPC.
                     * @return SubnetId Subnet ID. This field is required if network type is VPC.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. This field is required if network type is VPC.
                     * @param SubnetId Subnet ID. This field is required if network type is VPC.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Specifies an IP address, which is supported only for VPC. If this parameter is left empty, a random IP will be assigned in the subnet
                     * @return MountIP Specifies an IP address, which is supported only for VPC. If this parameter is left empty, a random IP will be assigned in the subnet
                     */
                    std::string GetMountIP() const;

                    /**
                     * 设置Specifies an IP address, which is supported only for VPC. If this parameter is left empty, a random IP will be assigned in the subnet
                     * @param MountIP Specifies an IP address, which is supported only for VPC. If this parameter is left empty, a random IP will be assigned in the subnet
                     */
                    void SetMountIP(const std::string& _mountIP);

                    /**
                     * 判断参数 MountIP 是否已赋值
                     * @return MountIP 是否已赋值
                     */
                    bool MountIPHasBeenSet() const;

                    /**
                     * 获取Custom file system name
                     * @return FsName Custom file system name
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置Custom file system name
                     * @param FsName Custom file system name
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取File system tag
                     * @return ResourceTags File system tag
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置File system tag
                     * @param ResourceTags File system tag
                     */
                    void SetResourceTags(const std::vector<TagInfo>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * AZ name, such as "ap-beijing-1". For the list of regions and AZs, please see [Overview](https://cloud.tencent.com/document/product/582/13225)
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Network type. Valid values: VPC (VPC), BASIC (basic network)
                     */
                    std::string m_netInterface;
                    bool m_netInterfaceHasBeenSet;

                    /**
                     * Permission group ID
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * File system protocol type. Valid values: NFS, CIFS. If this parameter is left empty, NFS will be used by default
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * File system storage class. Valid values: SD (standard), HP (high-performance)
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * VPC ID. This field is required if network type is VPC.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID. This field is required if network type is VPC.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Specifies an IP address, which is supported only for VPC. If this parameter is left empty, a random IP will be assigned in the subnet
                     */
                    std::string m_mountIP;
                    bool m_mountIPHasBeenSet;

                    /**
                     * Custom file system name
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * File system tag
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_
