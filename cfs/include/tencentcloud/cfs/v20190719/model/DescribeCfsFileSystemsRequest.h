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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMSREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/Filter.h>
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
                * DescribeCfsFileSystems request structure.
                */
                class DescribeCfsFileSystemsRequest : public AbstractModel
                {
                public:
                    DescribeCfsFileSystemsRequest();
                    ~DescribeCfsFileSystemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>File system ID.</p>
                     * @return FileSystemId <p>File system ID.</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>File system ID.</p>
                     * @param _fileSystemId <p>File system ID.</p>
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>Virtual Private Cloud (VPC) ID.</p>
                     * @return VpcId <p>Virtual Private Cloud (VPC) ID.</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>Virtual Private Cloud (VPC) ID.</p>
                     * @param _vpcId <p>Virtual Private Cloud (VPC) ID.</p>
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
                     * 获取<p>Subnet ID.</p>
                     * @return SubnetId <p>Subnet ID.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID.</p>
                     * @param _subnetId <p>Subnet ID.</p>
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
                     * 获取<p>Offset for pagination. Default value: 0.</p>
                     * @return Offset <p>Offset for pagination. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset for pagination. Default value: 0.</p>
                     * @param _offset <p>Offset for pagination. Default value: 0.</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Limit for page size. Default value: 10.</p>
                     * @return Limit <p>Limit for page size. Default value: 10.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Limit for page size. Default value: 10.</p>
                     * @param _limit <p>Limit for page size. Default value: 10.</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>User-defined name.</p>
                     * @return CreationToken <p>User-defined name.</p>
                     * 
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 设置<p>User-defined name.</p>
                     * @param _creationToken <p>User-defined name.</p>
                     * 
                     */
                    void SetCreationToken(const std::string& _creationToken);

                    /**
                     * 判断参数 CreationToken 是否已赋值
                     * @return CreationToken 是否已赋值
                     * 
                     */
                    bool CreationTokenHasBeenSet() const;

                    /**
                     * 获取<p>Filter conditions.<br><br><li>Protocol - Array of String - optional - (Filter condition) Filters by protocol. (NFS | CIFS | TURBO) </li><br><br><li>StorageType - Array of String - optional - (Filter condition) Filters by storage type. (SD | HP | TB | TP | THP) </li><br><br><li>LifeCycleState - Array of String - optional - (Filter condition) Filters by lifecycle state. (creating | create_failed | available | deleting | delete_failed | upgrading | unserviced | expanding) </li><br><br><li>Zone - Array of String - optional - (Filter condition) Filters by AZ. (For example: ap-guangzhou-3) </li><br><br><li>IpAddress - Array of String - optional - (Filter condition) Filters by export point IP address. (For example: 10.0.0.3) </li><br><br><li>PGroupId - Array of String - optional - (Filter condition) Filters by permission group ID. (For example: pgroup-xxxxxrxt) </li><br><br><li>PGroupName - Array of String - optional - (Filter condition) Filters by permission group name. (For example: default permission group) </li><br><br><li>Scenario- Array of String - optional - (Filter condition) Filters by permission group name. (For example: AgentSandbox) </li></p>
                     * @return Filters <p>Filter conditions.<br><br><li>Protocol - Array of String - optional - (Filter condition) Filters by protocol. (NFS | CIFS | TURBO) </li><br><br><li>StorageType - Array of String - optional - (Filter condition) Filters by storage type. (SD | HP | TB | TP | THP) </li><br><br><li>LifeCycleState - Array of String - optional - (Filter condition) Filters by lifecycle state. (creating | create_failed | available | deleting | delete_failed | upgrading | unserviced | expanding) </li><br><br><li>Zone - Array of String - optional - (Filter condition) Filters by AZ. (For example: ap-guangzhou-3) </li><br><br><li>IpAddress - Array of String - optional - (Filter condition) Filters by export point IP address. (For example: 10.0.0.3) </li><br><br><li>PGroupId - Array of String - optional - (Filter condition) Filters by permission group ID. (For example: pgroup-xxxxxrxt) </li><br><br><li>PGroupName - Array of String - optional - (Filter condition) Filters by permission group name. (For example: default permission group) </li><br><br><li>Scenario- Array of String - optional - (Filter condition) Filters by permission group name. (For example: AgentSandbox) </li></p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Filter conditions.<br><br><li>Protocol - Array of String - optional - (Filter condition) Filters by protocol. (NFS | CIFS | TURBO) </li><br><br><li>StorageType - Array of String - optional - (Filter condition) Filters by storage type. (SD | HP | TB | TP | THP) </li><br><br><li>LifeCycleState - Array of String - optional - (Filter condition) Filters by lifecycle state. (creating | create_failed | available | deleting | delete_failed | upgrading | unserviced | expanding) </li><br><br><li>Zone - Array of String - optional - (Filter condition) Filters by AZ. (For example: ap-guangzhou-3) </li><br><br><li>IpAddress - Array of String - optional - (Filter condition) Filters by export point IP address. (For example: 10.0.0.3) </li><br><br><li>PGroupId - Array of String - optional - (Filter condition) Filters by permission group ID. (For example: pgroup-xxxxxrxt) </li><br><br><li>PGroupName - Array of String - optional - (Filter condition) Filters by permission group name. (For example: default permission group) </li><br><br><li>Scenario- Array of String - optional - (Filter condition) Filters by permission group name. (For example: AgentSandbox) </li></p>
                     * @param _filters <p>Filter conditions.<br><br><li>Protocol - Array of String - optional - (Filter condition) Filters by protocol. (NFS | CIFS | TURBO) </li><br><br><li>StorageType - Array of String - optional - (Filter condition) Filters by storage type. (SD | HP | TB | TP | THP) </li><br><br><li>LifeCycleState - Array of String - optional - (Filter condition) Filters by lifecycle state. (creating | create_failed | available | deleting | delete_failed | upgrading | unserviced | expanding) </li><br><br><li>Zone - Array of String - optional - (Filter condition) Filters by AZ. (For example: ap-guangzhou-3) </li><br><br><li>IpAddress - Array of String - optional - (Filter condition) Filters by export point IP address. (For example: 10.0.0.3) </li><br><br><li>PGroupId - Array of String - optional - (Filter condition) Filters by permission group ID. (For example: pgroup-xxxxxrxt) </li><br><br><li>PGroupName - Array of String - optional - (Filter condition) Filters by permission group name. (For example: default permission group) </li><br><br><li>Scenario- Array of String - optional - (Filter condition) Filters by permission group name. (For example: AgentSandbox) </li></p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Tag.</p>
                     * @return Tags <p>Tag.</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _tags <p>Tag.</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>File system ID.</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>Virtual Private Cloud (VPC) ID.</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Offset for pagination. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Limit for page size. Default value: 10.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>User-defined name.</p>
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                    /**
                     * <p>Filter conditions.<br><br><li>Protocol - Array of String - optional - (Filter condition) Filters by protocol. (NFS | CIFS | TURBO) </li><br><br><li>StorageType - Array of String - optional - (Filter condition) Filters by storage type. (SD | HP | TB | TP | THP) </li><br><br><li>LifeCycleState - Array of String - optional - (Filter condition) Filters by lifecycle state. (creating | create_failed | available | deleting | delete_failed | upgrading | unserviced | expanding) </li><br><br><li>Zone - Array of String - optional - (Filter condition) Filters by AZ. (For example: ap-guangzhou-3) </li><br><br><li>IpAddress - Array of String - optional - (Filter condition) Filters by export point IP address. (For example: 10.0.0.3) </li><br><br><li>PGroupId - Array of String - optional - (Filter condition) Filters by permission group ID. (For example: pgroup-xxxxxrxt) </li><br><br><li>PGroupName - Array of String - optional - (Filter condition) Filters by permission group name. (For example: default permission group) </li><br><br><li>Scenario- Array of String - optional - (Filter condition) Filters by permission group name. (For example: AgentSandbox) </li></p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMSREQUEST_H_
