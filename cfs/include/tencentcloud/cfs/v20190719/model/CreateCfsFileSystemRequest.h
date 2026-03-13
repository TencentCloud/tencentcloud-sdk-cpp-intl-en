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
                     * 获取Network type. Valid values: `VPC` and `CCN`. Select `VPC` for a Standard or High-Performance file system, and `CCN` for a Standard Turbo or High-Performance Turbo one.
                     * @return NetInterface Network type. Valid values: `VPC` and `CCN`. Select `VPC` for a Standard or High-Performance file system, and `CCN` for a Standard Turbo or High-Performance Turbo one.
                     * 
                     */
                    std::string GetNetInterface() const;

                    /**
                     * 设置Network type. Valid values: `VPC` and `CCN`. Select `VPC` for a Standard or High-Performance file system, and `CCN` for a Standard Turbo or High-Performance Turbo one.
                     * @param _netInterface Network type. Valid values: `VPC` and `CCN`. Select `VPC` for a Standard or High-Performance file system, and `CCN` for a Standard Turbo or High-Performance Turbo one.
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
                     * 获取Permission group ID. pgroupbasic is the default permission group. obtain through the api [DescribeCfsPGroups](https://www.tencentcloud.com/document/product/582/38157?from_cn_redirect=1) to query the permission group list.
                     * @return PGroupId Permission group ID. pgroupbasic is the default permission group. obtain through the api [DescribeCfsPGroups](https://www.tencentcloud.com/document/product/582/38157?from_cn_redirect=1) to query the permission group list.
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置Permission group ID. pgroupbasic is the default permission group. obtain through the api [DescribeCfsPGroups](https://www.tencentcloud.com/document/product/582/38157?from_cn_redirect=1) to query the permission group list.
                     * @param _pGroupId Permission group ID. pgroupbasic is the default permission group. obtain through the api [DescribeCfsPGroups](https://www.tencentcloud.com/document/product/582/38157?from_cn_redirect=1) to query the permission group list.
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
                     * 获取File system protocol type. valid values: NFS, CIFS, and TURBO. if left blank, NFS by default. the TURBO series must select TURBO. NFS and CIFS are not supported.
                     * @return Protocol File system protocol type. valid values: NFS, CIFS, and TURBO. if left blank, NFS by default. the TURBO series must select TURBO. NFS and CIFS are not supported.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置File system protocol type. valid values: NFS, CIFS, and TURBO. if left blank, NFS by default. the TURBO series must select TURBO. NFS and CIFS are not supported.
                     * @param _protocol File system protocol type. valid values: NFS, CIFS, and TURBO. if left blank, NFS by default. the TURBO series must select TURBO. NFS and CIFS are not supported.
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
                     * 获取Storage type of the file system. Valid values: `SD` (Standard), `HP` (High-Performance), `TB` (Standard Turbo), and `TP` (High-Performance Turbo). Default value: `SD`.
                     * @return StorageType Storage type of the file system. Valid values: `SD` (Standard), `HP` (High-Performance), `TB` (Standard Turbo), and `TP` (High-Performance Turbo). Default value: `SD`.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage type of the file system. Valid values: `SD` (Standard), `HP` (High-Performance), `TB` (Standard Turbo), and `TP` (High-Performance Turbo). Default value: `SD`.
                     * @param _storageType Storage type of the file system. Valid values: `SD` (Standard), `HP` (High-Performance), `TB` (Standard Turbo), and `TP` (High-Performance Turbo). Default value: `SD`.
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
                     * 获取Private network (VPC) ID. if the network type is VPC, this field must be specified. obtain it by querying the private network interface.
[DescribeVpcs](https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1)
                     * @return VpcId Private network (VPC) ID. if the network type is VPC, this field must be specified. obtain it by querying the private network interface.
[DescribeVpcs](https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1)
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Private network (VPC) ID. if the network type is VPC, this field must be specified. obtain it by querying the private network interface.
[DescribeVpcs](https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1)
                     * @param _vpcId Private network (VPC) ID. if the network type is VPC, this field must be specified. obtain it by querying the private network interface.
[DescribeVpcs](https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1)
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
                     * 获取Subnet ID. this field must be specified if the network type is VPC. obtain through the api for querying subnets.
[DescribeSubnets](https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1)
                     * @return SubnetId Subnet ID. this field must be specified if the network type is VPC. obtain through the api for querying subnets.
[DescribeSubnets](https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1)
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. this field must be specified if the network type is VPC. obtain through the api for querying subnets.
[DescribeSubnets](https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1)
                     * @param _subnetId Subnet ID. this field must be specified if the network type is VPC. obtain through the api for querying subnets.
[DescribeSubnets](https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1)
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
                     * 获取Cloud connect network ID. this field must be specified if the network type is CCN. obtain it by querying the CCN list through the api.
[DescribeCcns](https://www.tencentcloud.com/document/product/215/19199?from_cn_redirect=1)

                     * @return CcnId Cloud connect network ID. this field must be specified if the network type is CCN. obtain it by querying the CCN list through the api.
[DescribeCcns](https://www.tencentcloud.com/document/product/215/19199?from_cn_redirect=1)

                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置Cloud connect network ID. this field must be specified if the network type is CCN. obtain it by querying the CCN list through the api.
[DescribeCcns](https://www.tencentcloud.com/document/product/215/19199?from_cn_redirect=1)

                     * @param _ccnId Cloud connect network ID. this field must be specified if the network type is CCN. obtain it by querying the CCN list through the api.
[DescribeCcns](https://www.tencentcloud.com/document/product/215/19199?from_cn_redirect=1)

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
                     * 获取File system capacity, required for the turbo series, in GiB. turbo standard type in GB, starting from 20 TiB (20480 GiB); scaling increment 10 TiB (10240 GiB). turbo performance type starts from 10 TiB (10240 GiB); capacity expansion step 10 TiB (10240 GiB).
                     * @return Capacity File system capacity, required for the turbo series, in GiB. turbo standard type in GB, starting from 20 TiB (20480 GiB); scaling increment 10 TiB (10240 GiB). turbo performance type starts from 10 TiB (10240 GiB); capacity expansion step 10 TiB (10240 GiB).
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置File system capacity, required for the turbo series, in GiB. turbo standard type in GB, starting from 20 TiB (20480 GiB); scaling increment 10 TiB (10240 GiB). turbo performance type starts from 10 TiB (10240 GiB); capacity expansion step 10 TiB (10240 GiB).
                     * @param _capacity File system capacity, required for the turbo series, in GiB. turbo standard type in GB, starting from 20 TiB (20480 GiB); scaling increment 10 TiB (10240 GiB). turbo performance type starts from 10 TiB (10240 GiB); capacity expansion step 10 TiB (10240 GiB).
                     * 
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取File system snapshot ID. this parameter can be obtained by querying the snapshot list.
[DescribeCfsSnapshots](https://www.tencentcloud.com/document/product/582/80206?from_cn_redirect=1)
                     * @return SnapshotId File system snapshot ID. this parameter can be obtained by querying the snapshot list.
[DescribeCfsSnapshots](https://www.tencentcloud.com/document/product/582/80206?from_cn_redirect=1)
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置File system snapshot ID. this parameter can be obtained by querying the snapshot list.
[DescribeCfsSnapshots](https://www.tencentcloud.com/document/product/582/80206?from_cn_redirect=1)
                     * @param _snapshotId File system snapshot ID. this parameter can be obtained by querying the snapshot list.
[DescribeCfsSnapshots](https://www.tencentcloud.com/document/product/582/80206?from_cn_redirect=1)
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取Scheduled snapshot policy ID, which can be obtained by querying the snapshot policy information.
[DescribeAutoSnapshotPolicies](https://www.tencentcloud.com/document/product/582/38157?from_cn_redirect=1)
                     * @return AutoSnapshotPolicyId Scheduled snapshot policy ID, which can be obtained by querying the snapshot policy information.
[DescribeAutoSnapshotPolicies](https://www.tencentcloud.com/document/product/582/38157?from_cn_redirect=1)
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置Scheduled snapshot policy ID, which can be obtained by querying the snapshot policy information.
[DescribeAutoSnapshotPolicies](https://www.tencentcloud.com/document/product/582/38157?from_cn_redirect=1)
                     * @param _autoSnapshotPolicyId Scheduled snapshot policy ID, which can be obtained by querying the snapshot policy information.
[DescribeAutoSnapshotPolicies](https://www.tencentcloud.com/document/product/582/38157?from_cn_redirect=1)
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取Whether default expansion is enabled. only turbo file storage supports this feature.
                     * @return EnableAutoScaleUp Whether default expansion is enabled. only turbo file storage supports this feature.
                     * 
                     */
                    bool GetEnableAutoScaleUp() const;

                    /**
                     * 设置Whether default expansion is enabled. only turbo file storage supports this feature.
                     * @param _enableAutoScaleUp Whether default expansion is enabled. only turbo file storage supports this feature.
                     * 
                     */
                    void SetEnableAutoScaleUp(const bool& _enableAutoScaleUp);

                    /**
                     * 判断参数 EnableAutoScaleUp 是否已赋值
                     * @return EnableAutoScaleUp 是否已赋值
                     * 
                     */
                    bool EnableAutoScaleUpHasBeenSet() const;

                    /**
                     * 获取v1.5: create a standard edition general file system.
v3.1: create an enhanced general file system.
Description: the enhanced universal system requires enabling the allowlist to use. if needed, submit a ticket to contact us.
                     * @return CfsVersion v1.5: create a standard edition general file system.
v3.1: create an enhanced general file system.
Description: the enhanced universal system requires enabling the allowlist to use. if needed, submit a ticket to contact us.
                     * 
                     */
                    std::string GetCfsVersion() const;

                    /**
                     * 设置v1.5: create a standard edition general file system.
v3.1: create an enhanced general file system.
Description: the enhanced universal system requires enabling the allowlist to use. if needed, submit a ticket to contact us.
                     * @param _cfsVersion v1.5: create a standard edition general file system.
v3.1: create an enhanced general file system.
Description: the enhanced universal system requires enabling the allowlist to use. if needed, submit a ticket to contact us.
                     * 
                     */
                    void SetCfsVersion(const std::string& _cfsVersion);

                    /**
                     * 判断参数 CfsVersion 是否已赋值
                     * @return CfsVersion 是否已赋值
                     * 
                     */
                    bool CfsVersionHasBeenSet() const;

                    /**
                     * 获取turbo file system metadata attribute.
basic: creates metadata of the standard type.
Enhanced: creates enhanced metadata.
                     * @return MetaType turbo file system metadata attribute.
basic: creates metadata of the standard type.
Enhanced: creates enhanced metadata.
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置turbo file system metadata attribute.
basic: creates metadata of the standard type.
Enhanced: creates enhanced metadata.
                     * @param _metaType turbo file system metadata attribute.
basic: creates metadata of the standard type.
Enhanced: creates enhanced metadata.
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                private:

                    /**
                     * AZ name, such as "ap-beijing-1". For the list of regions and AZs, please see [Overview](https://intl.cloud.tencent.com/document/product/582/13225?from_cn_redirect=1)
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Network type. Valid values: `VPC` and `CCN`. Select `VPC` for a Standard or High-Performance file system, and `CCN` for a Standard Turbo or High-Performance Turbo one.
                     */
                    std::string m_netInterface;
                    bool m_netInterfaceHasBeenSet;

                    /**
                     * Permission group ID. pgroupbasic is the default permission group. obtain through the api [DescribeCfsPGroups](https://www.tencentcloud.com/document/product/582/38157?from_cn_redirect=1) to query the permission group list.
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * File system protocol type. valid values: NFS, CIFS, and TURBO. if left blank, NFS by default. the TURBO series must select TURBO. NFS and CIFS are not supported.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Storage type of the file system. Valid values: `SD` (Standard), `HP` (High-Performance), `TB` (Standard Turbo), and `TP` (High-Performance Turbo). Default value: `SD`.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Private network (VPC) ID. if the network type is VPC, this field must be specified. obtain it by querying the private network interface.
[DescribeVpcs](https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1)
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID. this field must be specified if the network type is VPC. obtain through the api for querying subnets.
[DescribeSubnets](https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1)
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
                     * Cloud connect network ID. this field must be specified if the network type is CCN. obtain it by querying the CCN list through the api.
[DescribeCcns](https://www.tencentcloud.com/document/product/215/19199?from_cn_redirect=1)

                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * CCN IP range used by the CFS (required if the network type is CCN), which cannot conflict with other IP ranges bound in CCN
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * File system capacity, required for the turbo series, in GiB. turbo standard type in GB, starting from 20 TiB (20480 GiB); scaling increment 10 TiB (10240 GiB). turbo performance type starts from 10 TiB (10240 GiB); capacity expansion step 10 TiB (10240 GiB).
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * File system snapshot ID. this parameter can be obtained by querying the snapshot list.
[DescribeCfsSnapshots](https://www.tencentcloud.com/document/product/582/80206?from_cn_redirect=1)
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Scheduled snapshot policy ID, which can be obtained by querying the snapshot policy information.
[DescribeAutoSnapshotPolicies](https://www.tencentcloud.com/document/product/582/38157?from_cn_redirect=1)
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * Whether default expansion is enabled. only turbo file storage supports this feature.
                     */
                    bool m_enableAutoScaleUp;
                    bool m_enableAutoScaleUpHasBeenSet;

                    /**
                     * v1.5: create a standard edition general file system.
v3.1: create an enhanced general file system.
Description: the enhanced universal system requires enabling the allowlist to use. if needed, submit a ticket to contact us.
                     */
                    std::string m_cfsVersion;
                    bool m_cfsVersionHasBeenSet;

                    /**
                     * turbo file system metadata attribute.
basic: creates metadata of the standard type.
Enhanced: creates enhanced metadata.
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_
