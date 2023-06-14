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
                     * 获取AZ name, such as "ap-beijing-1". For the list of regions and AZs, please see [Overview](https://intl.cloud.tencent.com/document/product/582/13225?from_cn_redirect=1)
                     * @return Zone AZ name, such as "ap-beijing-1". For the list of regions and AZs, please see [Overview](https://intl.cloud.tencent.com/document/product/582/13225?from_cn_redirect=1)
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ name, such as "ap-beijing-1". For the list of regions and AZs, please see [Overview](https://intl.cloud.tencent.com/document/product/582/13225?from_cn_redirect=1)
                     * @param _zone AZ name, such as "ap-beijing-1". For the list of regions and AZs, please see [Overview](https://intl.cloud.tencent.com/document/product/582/13225?from_cn_redirect=1)
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
                     * 获取Network type. Valid values: `VPC` (private network), `BASIC` (classic network), `CCN` (Cloud Connect Network). You must set this parameter to `CCN` if you use the Turbo series. Classic network will be phased out and is not recommended.
                     * @return NetInterface Network type. Valid values: `VPC` (private network), `BASIC` (classic network), `CCN` (Cloud Connect Network). You must set this parameter to `CCN` if you use the Turbo series. Classic network will be phased out and is not recommended.
                     * 
                     */
                    std::string GetNetInterface() const;

                    /**
                     * 设置Network type. Valid values: `VPC` (private network), `BASIC` (classic network), `CCN` (Cloud Connect Network). You must set this parameter to `CCN` if you use the Turbo series. Classic network will be phased out and is not recommended.
                     * @param _netInterface Network type. Valid values: `VPC` (private network), `BASIC` (classic network), `CCN` (Cloud Connect Network). You must set this parameter to `CCN` if you use the Turbo series. Classic network will be phased out and is not recommended.
                     * 
                     */
                    void SetNetInterface(const std::string& _netInterface);

                    /**
                     * 判断参数 NetInterface 是否已赋值
                     * @return NetInterface 是否已赋值
                     * 
                     */
                    bool NetInterfaceHasBeenSet() const;

                    /**
                     * 获取Permission group ID (required for Standard and High-Performance). For the Turbo series, set it to `pgroupbasic`.
                     * @return PGroupId Permission group ID (required for Standard and High-Performance). For the Turbo series, set it to `pgroupbasic`.
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置Permission group ID (required for Standard and High-Performance). For the Turbo series, set it to `pgroupbasic`.
                     * @param _pGroupId Permission group ID (required for Standard and High-Performance). For the Turbo series, set it to `pgroupbasic`.
                     * 
                     */
                    void SetPGroupId(const std::string& _pGroupId);

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     * 
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取File system protocol. Valid values: `NFS`, `CIFS`, `TURBO`. If this parameter is left empty, `NFS` is used by default. For the Turbo series, you must set this parameter to `TURBO`.
                     * @return Protocol File system protocol. Valid values: `NFS`, `CIFS`, `TURBO`. If this parameter is left empty, `NFS` is used by default. For the Turbo series, you must set this parameter to `TURBO`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置File system protocol. Valid values: `NFS`, `CIFS`, `TURBO`. If this parameter is left empty, `NFS` is used by default. For the Turbo series, you must set this parameter to `TURBO`.
                     * @param _protocol File system protocol. Valid values: `NFS`, `CIFS`, `TURBO`. If this parameter is left empty, `NFS` is used by default. For the Turbo series, you must set this parameter to `TURBO`.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Storage class of the file system. Valid values: `SD` (Standard), `HP` (High-Performance), `TB` (Standard Turbo), `TP` (High-Performance Turbo)
                     * @return StorageType Storage class of the file system. Valid values: `SD` (Standard), `HP` (High-Performance), `TB` (Standard Turbo), `TP` (High-Performance Turbo)
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage class of the file system. Valid values: `SD` (Standard), `HP` (High-Performance), `TB` (Standard Turbo), `TP` (High-Performance Turbo)
                     * @param _storageType Storage class of the file system. Valid values: `SD` (Standard), `HP` (High-Performance), `TB` (Standard Turbo), `TP` (High-Performance Turbo)
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取VPC ID. This field is required if network type is VPC.
                     * @return VpcId VPC ID. This field is required if network type is VPC.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. This field is required if network type is VPC.
                     * @param _vpcId VPC ID. This field is required if network type is VPC.
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
                     * 获取Subnet ID. This field is required if network type is VPC.
                     * @return SubnetId Subnet ID. This field is required if network type is VPC.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. This field is required if network type is VPC.
                     * @param _subnetId Subnet ID. This field is required if network type is VPC.
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
                     * 获取IP address (this parameter supports only the VPC network type, and the Turbo series is not supported). If this parameter is left empty, a random IP in the subnet will be assigned.
                     * @return MountIP IP address (this parameter supports only the VPC network type, and the Turbo series is not supported). If this parameter is left empty, a random IP in the subnet will be assigned.
                     * 
                     */
                    std::string GetMountIP() const;

                    /**
                     * 设置IP address (this parameter supports only the VPC network type, and the Turbo series is not supported). If this parameter is left empty, a random IP in the subnet will be assigned.
                     * @param _mountIP IP address (this parameter supports only the VPC network type, and the Turbo series is not supported). If this parameter is left empty, a random IP in the subnet will be assigned.
                     * 
                     */
                    void SetMountIP(const std::string& _mountIP);

                    /**
                     * 判断参数 MountIP 是否已赋值
                     * @return MountIP 是否已赋值
                     * 
                     */
                    bool MountIPHasBeenSet() const;

                    /**
                     * 获取Custom file system name
                     * @return FsName Custom file system name
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置Custom file system name
                     * @param _fsName Custom file system name
                     * 
                     */
                    void SetFsName(const std::string& _fsName);

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     * 
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取File system tag
                     * @return ResourceTags File system tag
                     * 
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置File system tag
                     * @param _resourceTags File system tag
                     * 
                     */
                    void SetResourceTags(const std::vector<TagInfo>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. This string is valid for 2 hours.
                     * @return ClientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. This string is valid for 2 hours.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. This string is valid for 2 hours.
                     * @param _clientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. This string is valid for 2 hours.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取CCN instance ID (required if the network type is CCN)
                     * @return CcnId CCN instance ID (required if the network type is CCN)
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置CCN instance ID (required if the network type is CCN)
                     * @param _ccnId CCN instance ID (required if the network type is CCN)
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取CCN IP range used by the CFS (required if the network type is CCN), which cannot conflict with other IP ranges bound in CCN
                     * @return CidrBlock CCN IP range used by the CFS (required if the network type is CCN), which cannot conflict with other IP ranges bound in CCN
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置CCN IP range used by the CFS (required if the network type is CCN), which cannot conflict with other IP ranges bound in CCN
                     * @param _cidrBlock CCN IP range used by the CFS (required if the network type is CCN), which cannot conflict with other IP ranges bound in CCN
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取File system capacity, in GiB (required for the Turbo series). For Standard Turbo, the minimum purchase required is 40,960 GiB (40 TiB) and the expansion increment is 20,480 GiB (20 TiB). For High-Performance Turbo, the minimum purchase required is 20,480 GiB (20 TiB) and the expansion increment is 10,240 GiB (10 TiB).
                     * @return Capacity File system capacity, in GiB (required for the Turbo series). For Standard Turbo, the minimum purchase required is 40,960 GiB (40 TiB) and the expansion increment is 20,480 GiB (20 TiB). For High-Performance Turbo, the minimum purchase required is 20,480 GiB (20 TiB) and the expansion increment is 10,240 GiB (10 TiB).
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置File system capacity, in GiB (required for the Turbo series). For Standard Turbo, the minimum purchase required is 40,960 GiB (40 TiB) and the expansion increment is 20,480 GiB (20 TiB). For High-Performance Turbo, the minimum purchase required is 20,480 GiB (20 TiB) and the expansion increment is 10,240 GiB (10 TiB).
                     * @param _capacity File system capacity, in GiB (required for the Turbo series). For Standard Turbo, the minimum purchase required is 40,960 GiB (40 TiB) and the expansion increment is 20,480 GiB (20 TiB). For High-Performance Turbo, the minimum purchase required is 20,480 GiB (20 TiB) and the expansion increment is 10,240 GiB (10 TiB).
                     * 
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                private:

                    /**
                     * AZ name, such as "ap-beijing-1". For the list of regions and AZs, please see [Overview](https://intl.cloud.tencent.com/document/product/582/13225?from_cn_redirect=1)
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Network type. Valid values: `VPC` (private network), `BASIC` (classic network), `CCN` (Cloud Connect Network). You must set this parameter to `CCN` if you use the Turbo series. Classic network will be phased out and is not recommended.
                     */
                    std::string m_netInterface;
                    bool m_netInterfaceHasBeenSet;

                    /**
                     * Permission group ID (required for Standard and High-Performance). For the Turbo series, set it to `pgroupbasic`.
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * File system protocol. Valid values: `NFS`, `CIFS`, `TURBO`. If this parameter is left empty, `NFS` is used by default. For the Turbo series, you must set this parameter to `TURBO`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Storage class of the file system. Valid values: `SD` (Standard), `HP` (High-Performance), `TB` (Standard Turbo), `TP` (High-Performance Turbo)
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
                     * IP address (this parameter supports only the VPC network type, and the Turbo series is not supported). If this parameter is left empty, a random IP in the subnet will be assigned.
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

                    /**
                     * A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. This string is valid for 2 hours.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * CCN instance ID (required if the network type is CCN)
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * CCN IP range used by the CFS (required if the network type is CCN), which cannot conflict with other IP ranges bound in CCN
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * File system capacity, in GiB (required for the Turbo series). For Standard Turbo, the minimum purchase required is 40,960 GiB (40 TiB) and the expansion increment is 20,480 GiB (20 TiB). For High-Performance Turbo, the minimum purchase required is 20,480 GiB (20 TiB) and the expansion increment is 10,240 GiB (10 TiB).
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_
