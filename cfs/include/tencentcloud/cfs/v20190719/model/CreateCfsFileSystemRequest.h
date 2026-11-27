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
                     * 获取<p>AZ name</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/213/15707??from_cn_redirect=1">Querying the List of AZs</a></p>
                     * @return Zone <p>AZ name</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/213/15707??from_cn_redirect=1">Querying the List of AZs</a></p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ name</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/213/15707??from_cn_redirect=1">Querying the List of AZs</a></p>
                     * @param _zone <p>AZ name</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/213/15707??from_cn_redirect=1">Querying the List of AZs</a></p>
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
                     * 获取<p>Network type</p><p>Valid values:</p><ul><li><p>VPC: Virtual Private Cloud</p></li><li><p>CCN: Cloud Connect Network</p></li><li><p>For General-purpose Standard/Performance (including enhanced) and Throughput types, select VPC.</p></li><li><p>For Turbo Standard/Performance types, VPC or CCN can be selected.</p></li><li><p>When Scenario=AgentSandbox, this parameter is not required for creating AgentCFS and will be ignored if passed in.</p></li></ul>
                     * @return NetInterface <p>Network type</p><p>Valid values:</p><ul><li><p>VPC: Virtual Private Cloud</p></li><li><p>CCN: Cloud Connect Network</p></li><li><p>For General-purpose Standard/Performance (including enhanced) and Throughput types, select VPC.</p></li><li><p>For Turbo Standard/Performance types, VPC or CCN can be selected.</p></li><li><p>When Scenario=AgentSandbox, this parameter is not required for creating AgentCFS and will be ignored if passed in.</p></li></ul>
                     * 
                     */
                    std::string GetNetInterface() const;

                    /**
                     * 设置<p>Network type</p><p>Valid values:</p><ul><li><p>VPC: Virtual Private Cloud</p></li><li><p>CCN: Cloud Connect Network</p></li><li><p>For General-purpose Standard/Performance (including enhanced) and Throughput types, select VPC.</p></li><li><p>For Turbo Standard/Performance types, VPC or CCN can be selected.</p></li><li><p>When Scenario=AgentSandbox, this parameter is not required for creating AgentCFS and will be ignored if passed in.</p></li></ul>
                     * @param _netInterface <p>Network type</p><p>Valid values:</p><ul><li><p>VPC: Virtual Private Cloud</p></li><li><p>CCN: Cloud Connect Network</p></li><li><p>For General-purpose Standard/Performance (including enhanced) and Throughput types, select VPC.</p></li><li><p>For Turbo Standard/Performance types, VPC or CCN can be selected.</p></li><li><p>When Scenario=AgentSandbox, this parameter is not required for creating AgentCFS and will be ignored if passed in.</p></li></ul>
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
                     * 获取<p>Permission group ID. A permission group defines a set of allowlisted visitors and operation permissions.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/38157?from_cn_redirect=1">DescribeCfsPGroups</a></p><ul><li>pgroupbasic is the default permission group, which allows access and read/write permissions for all IP addresses. </li><li>Note: When Scenario=AgentSandbox, that is, when creating AgentCFS, pgroupbasic (the default permission group) must be passed in. Passing in other values will cause an error.</li></ul>
                     * @return PGroupId <p>Permission group ID. A permission group defines a set of allowlisted visitors and operation permissions.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/38157?from_cn_redirect=1">DescribeCfsPGroups</a></p><ul><li>pgroupbasic is the default permission group, which allows access and read/write permissions for all IP addresses. </li><li>Note: When Scenario=AgentSandbox, that is, when creating AgentCFS, pgroupbasic (the default permission group) must be passed in. Passing in other values will cause an error.</li></ul>
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置<p>Permission group ID. A permission group defines a set of allowlisted visitors and operation permissions.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/38157?from_cn_redirect=1">DescribeCfsPGroups</a></p><ul><li>pgroupbasic is the default permission group, which allows access and read/write permissions for all IP addresses. </li><li>Note: When Scenario=AgentSandbox, that is, when creating AgentCFS, pgroupbasic (the default permission group) must be passed in. Passing in other values will cause an error.</li></ul>
                     * @param _pGroupId <p>Permission group ID. A permission group defines a set of allowlisted visitors and operation permissions.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/38157?from_cn_redirect=1">DescribeCfsPGroups</a></p><ul><li>pgroupbasic is the default permission group, which allows access and read/write permissions for all IP addresses. </li><li>Note: When Scenario=AgentSandbox, that is, when creating AgentCFS, pgroupbasic (the default permission group) must be passed in. Passing in other values will cause an error.</li></ul>
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
                     * 获取<p>File system protocol type</p><p>Valid values:</p><ul><li>NFS: Instances of General-purpose Standard (including enhanced) and General-purpose Performance (including enhanced) types can be created with this protocol.</li><li>CIFS: The SMB protocol. Only General-purpose Standard and Throughput types in certain AZs support this protocol.</li><li>TURBO: Instances of Turbo Standard/Turbo Performance/AgentCFS types can be created with this protocol.</li></ul><p>Default value: NFS</p>
                     * @return Protocol <p>File system protocol type</p><p>Valid values:</p><ul><li>NFS: Instances of General-purpose Standard (including enhanced) and General-purpose Performance (including enhanced) types can be created with this protocol.</li><li>CIFS: The SMB protocol. Only General-purpose Standard and Throughput types in certain AZs support this protocol.</li><li>TURBO: Instances of Turbo Standard/Turbo Performance/AgentCFS types can be created with this protocol.</li></ul><p>Default value: NFS</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>File system protocol type</p><p>Valid values:</p><ul><li>NFS: Instances of General-purpose Standard (including enhanced) and General-purpose Performance (including enhanced) types can be created with this protocol.</li><li>CIFS: The SMB protocol. Only General-purpose Standard and Throughput types in certain AZs support this protocol.</li><li>TURBO: Instances of Turbo Standard/Turbo Performance/AgentCFS types can be created with this protocol.</li></ul><p>Default value: NFS</p>
                     * @param _protocol <p>File system protocol type</p><p>Valid values:</p><ul><li>NFS: Instances of General-purpose Standard (including enhanced) and General-purpose Performance (including enhanced) types can be created with this protocol.</li><li>CIFS: The SMB protocol. Only General-purpose Standard and Throughput types in certain AZs support this protocol.</li><li>TURBO: Instances of Turbo Standard/Turbo Performance/AgentCFS types can be created with this protocol.</li></ul><p>Default value: NFS</p>
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
                     * 获取<p>File system storage type. SD indicates General-purpose Standard storage, HP indicates General-purpose Performance storage, TB indicates Turbo Standard, and TP indicates Turbo Performance.</p><p>Valid values:</p><ul><li>SD: General-purpose Standard (including enhanced). For General-purpose Standard, version = v1.5; for General-purpose Standard (enhanced), version = v3.1.</li><li>HP: General-purpose Performance (including enhanced). For General-purpose Performance, version = v1.5; for General-purpose Performance (enhanced), version = v3.1.</li><li>TB: Turbo Standard</li><li>TP: Turbo Performance</li><li>THP: Throughput</li></ul><p>Default value: SD</p>
                     * @return StorageType <p>File system storage type. SD indicates General-purpose Standard storage, HP indicates General-purpose Performance storage, TB indicates Turbo Standard, and TP indicates Turbo Performance.</p><p>Valid values:</p><ul><li>SD: General-purpose Standard (including enhanced). For General-purpose Standard, version = v1.5; for General-purpose Standard (enhanced), version = v3.1.</li><li>HP: General-purpose Performance (including enhanced). For General-purpose Performance, version = v1.5; for General-purpose Performance (enhanced), version = v3.1.</li><li>TB: Turbo Standard</li><li>TP: Turbo Performance</li><li>THP: Throughput</li></ul><p>Default value: SD</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>File system storage type. SD indicates General-purpose Standard storage, HP indicates General-purpose Performance storage, TB indicates Turbo Standard, and TP indicates Turbo Performance.</p><p>Valid values:</p><ul><li>SD: General-purpose Standard (including enhanced). For General-purpose Standard, version = v1.5; for General-purpose Standard (enhanced), version = v3.1.</li><li>HP: General-purpose Performance (including enhanced). For General-purpose Performance, version = v1.5; for General-purpose Performance (enhanced), version = v3.1.</li><li>TB: Turbo Standard</li><li>TP: Turbo Performance</li><li>THP: Throughput</li></ul><p>Default value: SD</p>
                     * @param _storageType <p>File system storage type. SD indicates General-purpose Standard storage, HP indicates General-purpose Performance storage, TB indicates Turbo Standard, and TP indicates Turbo Performance.</p><p>Valid values:</p><ul><li>SD: General-purpose Standard (including enhanced). For General-purpose Standard, version = v1.5; for General-purpose Standard (enhanced), version = v3.1.</li><li>HP: General-purpose Performance (including enhanced). For General-purpose Performance, version = v1.5; for General-purpose Performance (enhanced), version = v3.1.</li><li>TB: Turbo Standard</li><li>TP: Turbo Performance</li><li>THP: Throughput</li></ul><p>Default value: SD</p>
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
                     * 获取<p>VPC ID. This field is required if VPC is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1">Querying the List of VPCs</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     * @return VpcId <p>VPC ID. This field is required if VPC is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1">Querying the List of VPCs</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID. This field is required if VPC is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1">Querying the List of VPCs</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     * @param _vpcId <p>VPC ID. This field is required if VPC is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1">Querying the List of VPCs</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
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
                     * 获取<p>Subnet ID. This field is required if VPC is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1">Querying the List of Subnets</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     * @return SubnetId <p>Subnet ID. This field is required if VPC is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1">Querying the List of Subnets</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID. This field is required if VPC is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1">Querying the List of Subnets</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     * @param _subnetId <p>Subnet ID. This field is required if VPC is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1">Querying the List of Subnets</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
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
                     * 获取<p>Specifies the IP address. Only VPC networks support this. If this parameter is not specified, an IP address will be randomly assigned from the subnet. Turbo series currently does not support specifying an IP address.</p>
                     * @return MountIP <p>Specifies the IP address. Only VPC networks support this. If this parameter is not specified, an IP address will be randomly assigned from the subnet. Turbo series currently does not support specifying an IP address.</p>
                     * 
                     */
                    std::string GetMountIP() const;

                    /**
                     * 设置<p>Specifies the IP address. Only VPC networks support this. If this parameter is not specified, an IP address will be randomly assigned from the subnet. Turbo series currently does not support specifying an IP address.</p>
                     * @param _mountIP <p>Specifies the IP address. Only VPC networks support this. If this parameter is not specified, an IP address will be randomly assigned from the subnet. Turbo series currently does not support specifying an IP address.</p>
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
                     * 获取<p>User-defined file system name</p>
                     * @return FsName <p>User-defined file system name</p>
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 设置<p>User-defined file system name</p>
                     * @param _fsName <p>User-defined file system name</p>
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
                     * 获取<p>Indicates whether the file system is encrypted. If this parameter is left empty, the file system is not encrypted by default.</p>
                     * @return Encrypted <p>Indicates whether the file system is encrypted. If this parameter is left empty, the file system is not encrypted by default.</p>
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 设置<p>Indicates whether the file system is encrypted. If this parameter is left empty, the file system is not encrypted by default.</p>
                     * @param _encrypted <p>Indicates whether the file system is encrypted. If this parameter is left empty, the file system is not encrypted by default.</p>
                     * 
                     */
                    void SetEncrypted(const bool& _encrypted);

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     * 
                     */
                    bool EncryptedHasBeenSet() const;

                    /**
                     * 获取<p>File system tag</p>
                     * @return ResourceTags <p>File system tag</p>
                     * 
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置<p>File system tag</p>
                     * @param _resourceTags <p>File system tag</p>
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
                     * 获取<p>String used to ensure the idempotency of the request. This string is generated by the customer and must be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. The string used to ensure idempotency expires after 2 hours.</p>
                     * @return ClientToken <p>String used to ensure the idempotency of the request. This string is generated by the customer and must be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. The string used to ensure idempotency expires after 2 hours.</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>String used to ensure the idempotency of the request. This string is generated by the customer and must be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. The string used to ensure idempotency expires after 2 hours.</p>
                     * @param _clientToken <p>String used to ensure the idempotency of the request. This string is generated by the customer and must be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. The string used to ensure idempotency expires after 2 hours.</p>
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
                     * 获取<p>CCN ID. This field is required if CCN is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/19199?from_cn_redirect=1">Querying the List of CCNs</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     * @return CcnId <p>CCN ID. This field is required if CCN is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/19199?from_cn_redirect=1">Querying the List of CCNs</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置<p>CCN ID. This field is required if CCN is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/19199?from_cn_redirect=1">Querying the List of CCNs</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     * @param _ccnId <p>CCN ID. This field is required if CCN is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/19199?from_cn_redirect=1">Querying the List of CCNs</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
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
                     * 获取<p>CIDR block used by CFS in the CCN. This field is required if CCN is selected as the network type, and it cannot conflict with CIDR blocks already bound in the CCN.</p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     * @return CidrBlock <p>CIDR block used by CFS in the CCN. This field is required if CCN is selected as the network type, and it cannot conflict with CIDR blocks already bound in the CCN.</p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p>CIDR block used by CFS in the CCN. This field is required if CCN is selected as the network type, and it cannot conflict with CIDR blocks already bound in the CCN.</p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     * @param _cidrBlock <p>CIDR block used by CFS in the CCN. This field is required if CCN is selected as the network type, and it cannot conflict with CIDR blocks already bound in the CCN.</p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
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
                     * 获取<p>File system capacity. This parameter is required for Turbo series.</p><p>Unit: GiB</p><p>Turbo Standard starts at 20 TiB, that is, 20,480 GiB, with a scale-out step of 10 TiB, that is, 10,240 GiB. Turbo Performance starts at 10 TiB, that is, 10,240 GiB, with a scale-out step of 10 TiB, that is, 10,240 GiB.</p>
                     * @return Capacity <p>File system capacity. This parameter is required for Turbo series.</p><p>Unit: GiB</p><p>Turbo Standard starts at 20 TiB, that is, 20,480 GiB, with a scale-out step of 10 TiB, that is, 10,240 GiB. Turbo Performance starts at 10 TiB, that is, 10,240 GiB, with a scale-out step of 10 TiB, that is, 10,240 GiB.</p>
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置<p>File system capacity. This parameter is required for Turbo series.</p><p>Unit: GiB</p><p>Turbo Standard starts at 20 TiB, that is, 20,480 GiB, with a scale-out step of 10 TiB, that is, 10,240 GiB. Turbo Performance starts at 10 TiB, that is, 10,240 GiB, with a scale-out step of 10 TiB, that is, 10,240 GiB.</p>
                     * @param _capacity <p>File system capacity. This parameter is required for Turbo series.</p><p>Unit: GiB</p><p>Turbo Standard starts at 20 TiB, that is, 20,480 GiB, with a scale-out step of 10 TiB, that is, 10,240 GiB. Turbo Performance starts at 10 TiB, that is, 10,240 GiB, with a scale-out step of 10 TiB, that is, 10,240 GiB.</p>
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
                     * 获取<p>File system snapshot ID</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/80206?from_cn_redirect=1">DescribeCfsSnapshots</a></p>
                     * @return SnapshotId <p>File system snapshot ID</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/80206?from_cn_redirect=1">DescribeCfsSnapshots</a></p>
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>File system snapshot ID</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/80206?from_cn_redirect=1">DescribeCfsSnapshots</a></p>
                     * @param _snapshotId <p>File system snapshot ID</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/80206?from_cn_redirect=1">DescribeCfsSnapshots</a></p>
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
                     * 获取<p>Scheduled snapshot policy ID</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/80208?from_cn_redirect=1">DescribeAutoSnapshotPolicies</a></p>
                     * @return AutoSnapshotPolicyId <p>Scheduled snapshot policy ID</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/80208?from_cn_redirect=1">DescribeAutoSnapshotPolicies</a></p>
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置<p>Scheduled snapshot policy ID</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/80208?from_cn_redirect=1">DescribeAutoSnapshotPolicies</a></p>
                     * @param _autoSnapshotPolicyId <p>Scheduled snapshot policy ID</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/80208?from_cn_redirect=1">DescribeAutoSnapshotPolicies</a></p>
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
                     * 获取<p>Indicates whether to enable the automatic scale-out policy. Only turbo file storage supports this feature.</p>
                     * @return EnableAutoScaleUp <p>Indicates whether to enable the automatic scale-out policy. Only turbo file storage supports this feature.</p>
                     * 
                     */
                    bool GetEnableAutoScaleUp() const;

                    /**
                     * 设置<p>Indicates whether to enable the automatic scale-out policy. Only turbo file storage supports this feature.</p>
                     * @param _enableAutoScaleUp <p>Indicates whether to enable the automatic scale-out policy. Only turbo file storage supports this feature.</p>
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
                     * 获取<p>File system version.</p><p>Valid values:</p><ul><li>v1.5: Creates a General Purpose Standard or General Purpose Performance file system.</li><li>v3.1: Creates a General Purpose Standard (Enhanced) or General Purpose Performance (Enhanced) file system. This parameter is required if you want to create an enhanced file system.</li><li>v4.0: Creates a Turbo Standard, Turbo Performance, or Throughput file system. This parameter is optional.</li></ul><p>To create a General Purpose Standard (Enhanced) or General Purpose Performance (Enhanced) file system, the root account must be added to the allowlist. Contact us if needed.</p>
                     * @return CfsVersion <p>File system version.</p><p>Valid values:</p><ul><li>v1.5: Creates a General Purpose Standard or General Purpose Performance file system.</li><li>v3.1: Creates a General Purpose Standard (Enhanced) or General Purpose Performance (Enhanced) file system. This parameter is required if you want to create an enhanced file system.</li><li>v4.0: Creates a Turbo Standard, Turbo Performance, or Throughput file system. This parameter is optional.</li></ul><p>To create a General Purpose Standard (Enhanced) or General Purpose Performance (Enhanced) file system, the root account must be added to the allowlist. Contact us if needed.</p>
                     * 
                     */
                    std::string GetCfsVersion() const;

                    /**
                     * 设置<p>File system version.</p><p>Valid values:</p><ul><li>v1.5: Creates a General Purpose Standard or General Purpose Performance file system.</li><li>v3.1: Creates a General Purpose Standard (Enhanced) or General Purpose Performance (Enhanced) file system. This parameter is required if you want to create an enhanced file system.</li><li>v4.0: Creates a Turbo Standard, Turbo Performance, or Throughput file system. This parameter is optional.</li></ul><p>To create a General Purpose Standard (Enhanced) or General Purpose Performance (Enhanced) file system, the root account must be added to the allowlist. Contact us if needed.</p>
                     * @param _cfsVersion <p>File system version.</p><p>Valid values:</p><ul><li>v1.5: Creates a General Purpose Standard or General Purpose Performance file system.</li><li>v3.1: Creates a General Purpose Standard (Enhanced) or General Purpose Performance (Enhanced) file system. This parameter is required if you want to create an enhanced file system.</li><li>v4.0: Creates a Turbo Standard, Turbo Performance, or Throughput file system. This parameter is optional.</li></ul><p>To create a General Purpose Standard (Enhanced) or General Purpose Performance (Enhanced) file system, the root account must be added to the allowlist. Contact us if needed.</p>
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
                     * 获取<p>Metadata type of the Turbo file system.</p><p>Valid values:</p><ul><li>basic: Creates standard metadata.</li><li>enhanced: Creates enhanced metadata.</li></ul><p>For details, see <a href="https://www.tencentcloud.com/document/product/582/116836?from_cn_redirect=1">Turbo File System Metadata Types</a></p>
                     * @return MetaType <p>Metadata type of the Turbo file system.</p><p>Valid values:</p><ul><li>basic: Creates standard metadata.</li><li>enhanced: Creates enhanced metadata.</li></ul><p>For details, see <a href="https://www.tencentcloud.com/document/product/582/116836?from_cn_redirect=1">Turbo File System Metadata Types</a></p>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置<p>Metadata type of the Turbo file system.</p><p>Valid values:</p><ul><li>basic: Creates standard metadata.</li><li>enhanced: Creates enhanced metadata.</li></ul><p>For details, see <a href="https://www.tencentcloud.com/document/product/582/116836?from_cn_redirect=1">Turbo File System Metadata Types</a></p>
                     * @param _metaType <p>Metadata type of the Turbo file system.</p><p>Valid values:</p><ul><li>basic: Creates standard metadata.</li><li>enhanced: Creates enhanced metadata.</li></ul><p>For details, see <a href="https://www.tencentcloud.com/document/product/582/116836?from_cn_redirect=1">Turbo File System Metadata Types</a></p>
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取<p>Business scenario.</p><p>Valid values:</p><ul><li>AgentSandbox: Required when creating AgentCFS.</li></ul>
                     * @return Scenario <p>Business scenario.</p><p>Valid values:</p><ul><li>AgentSandbox: Required when creating AgentCFS.</li></ul>
                     * 
                     */
                    std::string GetScenario() const;

                    /**
                     * 设置<p>Business scenario.</p><p>Valid values:</p><ul><li>AgentSandbox: Required when creating AgentCFS.</li></ul>
                     * @param _scenario <p>Business scenario.</p><p>Valid values:</p><ul><li>AgentSandbox: Required when creating AgentCFS.</li></ul>
                     * 
                     */
                    void SetScenario(const std::string& _scenario);

                    /**
                     * 判断参数 Scenario 是否已赋值
                     * @return Scenario 是否已赋值
                     * 
                     */
                    bool ScenarioHasBeenSet() const;

                private:

                    /**
                     * <p>AZ name</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/213/15707??from_cn_redirect=1">Querying the List of AZs</a></p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Network type</p><p>Valid values:</p><ul><li><p>VPC: Virtual Private Cloud</p></li><li><p>CCN: Cloud Connect Network</p></li><li><p>For General-purpose Standard/Performance (including enhanced) and Throughput types, select VPC.</p></li><li><p>For Turbo Standard/Performance types, VPC or CCN can be selected.</p></li><li><p>When Scenario=AgentSandbox, this parameter is not required for creating AgentCFS and will be ignored if passed in.</p></li></ul>
                     */
                    std::string m_netInterface;
                    bool m_netInterfaceHasBeenSet;

                    /**
                     * <p>Permission group ID. A permission group defines a set of allowlisted visitors and operation permissions.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/38157?from_cn_redirect=1">DescribeCfsPGroups</a></p><ul><li>pgroupbasic is the default permission group, which allows access and read/write permissions for all IP addresses. </li><li>Note: When Scenario=AgentSandbox, that is, when creating AgentCFS, pgroupbasic (the default permission group) must be passed in. Passing in other values will cause an error.</li></ul>
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * <p>File system protocol type</p><p>Valid values:</p><ul><li>NFS: Instances of General-purpose Standard (including enhanced) and General-purpose Performance (including enhanced) types can be created with this protocol.</li><li>CIFS: The SMB protocol. Only General-purpose Standard and Throughput types in certain AZs support this protocol.</li><li>TURBO: Instances of Turbo Standard/Turbo Performance/AgentCFS types can be created with this protocol.</li></ul><p>Default value: NFS</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>File system storage type. SD indicates General-purpose Standard storage, HP indicates General-purpose Performance storage, TB indicates Turbo Standard, and TP indicates Turbo Performance.</p><p>Valid values:</p><ul><li>SD: General-purpose Standard (including enhanced). For General-purpose Standard, version = v1.5; for General-purpose Standard (enhanced), version = v3.1.</li><li>HP: General-purpose Performance (including enhanced). For General-purpose Performance, version = v1.5; for General-purpose Performance (enhanced), version = v3.1.</li><li>TB: Turbo Standard</li><li>TP: Turbo Performance</li><li>THP: Throughput</li></ul><p>Default value: SD</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>VPC ID. This field is required if VPC is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/15778?from_cn_redirect=1">Querying the List of VPCs</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID. This field is required if VPC is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/15784?from_cn_redirect=1">Querying the List of Subnets</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Specifies the IP address. Only VPC networks support this. If this parameter is not specified, an IP address will be randomly assigned from the subnet. Turbo series currently does not support specifying an IP address.</p>
                     */
                    std::string m_mountIP;
                    bool m_mountIPHasBeenSet;

                    /**
                     * <p>User-defined file system name</p>
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * <p>Indicates whether the file system is encrypted. If this parameter is left empty, the file system is not encrypted by default.</p>
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                    /**
                     * <p>File system tag</p>
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>String used to ensure the idempotency of the request. This string is generated by the customer and must be unique across different requests, with a maximum length of 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. The string used to ensure idempotency expires after 2 hours.</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>CCN ID. This field is required if CCN is selected as the network type.</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/product/215/19199?from_cn_redirect=1">Querying the List of CCNs</a></p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>CIDR block used by CFS in the CCN. This field is required if CCN is selected as the network type, and it cannot conflict with CIDR blocks already bound in the CCN.</p><p>When Scenario=AgentSandbox, that is, when creating AgentCFS, this parameter is not required and will be ignored if passed in.</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>File system capacity. This parameter is required for Turbo series.</p><p>Unit: GiB</p><p>Turbo Standard starts at 20 TiB, that is, 20,480 GiB, with a scale-out step of 10 TiB, that is, 10,240 GiB. Turbo Performance starts at 10 TiB, that is, 10,240 GiB, with a scale-out step of 10 TiB, that is, 10,240 GiB.</p>
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * <p>File system snapshot ID</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/80206?from_cn_redirect=1">DescribeCfsSnapshots</a></p>
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>Scheduled snapshot policy ID</p><p>For valid values, see <a href="https://www.tencentcloud.com/document/api/582/80208?from_cn_redirect=1">DescribeAutoSnapshotPolicies</a></p>
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * <p>Indicates whether to enable the automatic scale-out policy. Only turbo file storage supports this feature.</p>
                     */
                    bool m_enableAutoScaleUp;
                    bool m_enableAutoScaleUpHasBeenSet;

                    /**
                     * <p>File system version.</p><p>Valid values:</p><ul><li>v1.5: Creates a General Purpose Standard or General Purpose Performance file system.</li><li>v3.1: Creates a General Purpose Standard (Enhanced) or General Purpose Performance (Enhanced) file system. This parameter is required if you want to create an enhanced file system.</li><li>v4.0: Creates a Turbo Standard, Turbo Performance, or Throughput file system. This parameter is optional.</li></ul><p>To create a General Purpose Standard (Enhanced) or General Purpose Performance (Enhanced) file system, the root account must be added to the allowlist. Contact us if needed.</p>
                     */
                    std::string m_cfsVersion;
                    bool m_cfsVersionHasBeenSet;

                    /**
                     * <p>Metadata type of the Turbo file system.</p><p>Valid values:</p><ul><li>basic: Creates standard metadata.</li><li>enhanced: Creates enhanced metadata.</li></ul><p>For details, see <a href="https://www.tencentcloud.com/document/product/582/116836?from_cn_redirect=1">Turbo File System Metadata Types</a></p>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * <p>Business scenario.</p><p>Valid values:</p><ul><li>AgentSandbox: Required when creating AgentCFS.</li></ul>
                     */
                    std::string m_scenario;
                    bool m_scenarioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMREQUEST_H_
