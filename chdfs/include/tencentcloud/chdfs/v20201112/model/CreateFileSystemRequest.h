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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEFILESYSTEMREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEFILESYSTEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20201112/model/Tag.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * CreateFileSystem request structure.
                */
                class CreateFileSystemRequest : public AbstractModel
                {
                public:
                    CreateFileSystemRequest();
                    ~CreateFileSystemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File system name
                     * @return FileSystemName File system name
                     * 
                     */
                    std::string GetFileSystemName() const;

                    /**
                     * 设置File system name
                     * @param _fileSystemName File system name
                     * 
                     */
                    void SetFileSystemName(const std::string& _fileSystemName);

                    /**
                     * 判断参数 FileSystemName 是否已赋值
                     * @return FileSystemName 是否已赋值
                     * 
                     */
                    bool FileSystemNameHasBeenSet() const;

                    /**
                     * 获取File system capacity (in bytes), which can range from 1 GB to 1 PB and must be an integer multiple of 1 GB
                     * @return CapacityQuota File system capacity (in bytes), which can range from 1 GB to 1 PB and must be an integer multiple of 1 GB
                     * 
                     */
                    uint64_t GetCapacityQuota() const;

                    /**
                     * 设置File system capacity (in bytes), which can range from 1 GB to 1 PB and must be an integer multiple of 1 GB
                     * @param _capacityQuota File system capacity (in bytes), which can range from 1 GB to 1 PB and must be an integer multiple of 1 GB
                     * 
                     */
                    void SetCapacityQuota(const uint64_t& _capacityQuota);

                    /**
                     * 判断参数 CapacityQuota 是否已赋值
                     * @return CapacityQuota 是否已赋值
                     * 
                     */
                    bool CapacityQuotaHasBeenSet() const;

                    /**
                     * 获取Whether to verify POSIX ACL
                     * @return PosixAcl Whether to verify POSIX ACL
                     * 
                     */
                    bool GetPosixAcl() const;

                    /**
                     * 设置Whether to verify POSIX ACL
                     * @param _posixAcl Whether to verify POSIX ACL
                     * 
                     */
                    void SetPosixAcl(const bool& _posixAcl);

                    /**
                     * 判断参数 PosixAcl 是否已赋值
                     * @return PosixAcl 是否已赋值
                     * 
                     */
                    bool PosixAclHasBeenSet() const;

                    /**
                     * 获取File system description, which is an empty string by default
                     * @return Description File system description, which is an empty string by default
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置File system description, which is an empty string by default
                     * @param _description File system description, which is an empty string by default
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取List of superuser names, which is an empty array by default
                     * @return SuperUsers List of superuser names, which is an empty array by default
                     * 
                     */
                    std::vector<std::string> GetSuperUsers() const;

                    /**
                     * 设置List of superuser names, which is an empty array by default
                     * @param _superUsers List of superuser names, which is an empty array by default
                     * 
                     */
                    void SetSuperUsers(const std::vector<std::string>& _superUsers);

                    /**
                     * 判断参数 SuperUsers 是否已赋值
                     * @return SuperUsers 是否已赋值
                     * 
                     */
                    bool SuperUsersHasBeenSet() const;

                    /**
                     * 获取Username of the root directory Inode, which is `hadoop` by default
                     * @return RootInodeUser Username of the root directory Inode, which is `hadoop` by default
                     * 
                     */
                    std::string GetRootInodeUser() const;

                    /**
                     * 设置Username of the root directory Inode, which is `hadoop` by default
                     * @param _rootInodeUser Username of the root directory Inode, which is `hadoop` by default
                     * 
                     */
                    void SetRootInodeUser(const std::string& _rootInodeUser);

                    /**
                     * 判断参数 RootInodeUser 是否已赋值
                     * @return RootInodeUser 是否已赋值
                     * 
                     */
                    bool RootInodeUserHasBeenSet() const;

                    /**
                     * 获取Group name of the root directory Inode, which is `supergroup` by default
                     * @return RootInodeGroup Group name of the root directory Inode, which is `supergroup` by default
                     * 
                     */
                    std::string GetRootInodeGroup() const;

                    /**
                     * 设置Group name of the root directory Inode, which is `supergroup` by default
                     * @param _rootInodeGroup Group name of the root directory Inode, which is `supergroup` by default
                     * 
                     */
                    void SetRootInodeGroup(const std::string& _rootInodeGroup);

                    /**
                     * 判断参数 RootInodeGroup 是否已赋值
                     * @return RootInodeGroup 是否已赋值
                     * 
                     */
                    bool RootInodeGroupHasBeenSet() const;

                    /**
                     * 获取Whether to enable verification of Ranger service addresses
                     * @return EnableRanger Whether to enable verification of Ranger service addresses
                     * 
                     */
                    bool GetEnableRanger() const;

                    /**
                     * 设置Whether to enable verification of Ranger service addresses
                     * @param _enableRanger Whether to enable verification of Ranger service addresses
                     * 
                     */
                    void SetEnableRanger(const bool& _enableRanger);

                    /**
                     * 判断参数 EnableRanger 是否已赋值
                     * @return EnableRanger 是否已赋值
                     * 
                     */
                    bool EnableRangerHasBeenSet() const;

                    /**
                     * 获取List of Ranger service addresses (empty array by default)
                     * @return RangerServiceAddresses List of Ranger service addresses (empty array by default)
                     * 
                     */
                    std::vector<std::string> GetRangerServiceAddresses() const;

                    /**
                     * 设置List of Ranger service addresses (empty array by default)
                     * @param _rangerServiceAddresses List of Ranger service addresses (empty array by default)
                     * 
                     */
                    void SetRangerServiceAddresses(const std::vector<std::string>& _rangerServiceAddresses);

                    /**
                     * 判断参数 RangerServiceAddresses 是否已赋值
                     * @return RangerServiceAddresses 是否已赋值
                     * 
                     */
                    bool RangerServiceAddressesHasBeenSet() const;

                    /**
                     * 获取Multiple resource tags, which can be an empty array
                     * @return Tags Multiple resource tags, which can be an empty array
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Multiple resource tags, which can be an empty array
                     * @param _tags Multiple resource tags, which can be an empty array
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * File system name
                     */
                    std::string m_fileSystemName;
                    bool m_fileSystemNameHasBeenSet;

                    /**
                     * File system capacity (in bytes), which can range from 1 GB to 1 PB and must be an integer multiple of 1 GB
                     */
                    uint64_t m_capacityQuota;
                    bool m_capacityQuotaHasBeenSet;

                    /**
                     * Whether to verify POSIX ACL
                     */
                    bool m_posixAcl;
                    bool m_posixAclHasBeenSet;

                    /**
                     * File system description, which is an empty string by default
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * List of superuser names, which is an empty array by default
                     */
                    std::vector<std::string> m_superUsers;
                    bool m_superUsersHasBeenSet;

                    /**
                     * Username of the root directory Inode, which is `hadoop` by default
                     */
                    std::string m_rootInodeUser;
                    bool m_rootInodeUserHasBeenSet;

                    /**
                     * Group name of the root directory Inode, which is `supergroup` by default
                     */
                    std::string m_rootInodeGroup;
                    bool m_rootInodeGroupHasBeenSet;

                    /**
                     * Whether to enable verification of Ranger service addresses
                     */
                    bool m_enableRanger;
                    bool m_enableRangerHasBeenSet;

                    /**
                     * List of Ranger service addresses (empty array by default)
                     */
                    std::vector<std::string> m_rangerServiceAddresses;
                    bool m_rangerServiceAddressesHasBeenSet;

                    /**
                     * Multiple resource tags, which can be an empty array
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEFILESYSTEMREQUEST_H_
