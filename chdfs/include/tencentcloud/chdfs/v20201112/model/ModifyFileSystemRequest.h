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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYFILESYSTEMREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYFILESYSTEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * ModifyFileSystem request structure.
                */
                class ModifyFileSystemRequest : public AbstractModel
                {
                public:
                    ModifyFileSystemRequest();
                    ~ModifyFileSystemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File system ID
                     * @return FileSystemId File system ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID
                     * @param _fileSystemId File system ID
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
                     * 获取File system description
                     * @return Description File system description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置File system description
                     * @param _description File system description
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
                     * 获取File system capacity (in bytes), which can range from 1 GB to 1 PB and must be an integer multiple of 1 GB
Note: the file system capacity after change cannot be smaller than the currently used capacity
                     * @return CapacityQuota File system capacity (in bytes), which can range from 1 GB to 1 PB and must be an integer multiple of 1 GB
Note: the file system capacity after change cannot be smaller than the currently used capacity
                     * 
                     */
                    uint64_t GetCapacityQuota() const;

                    /**
                     * 设置File system capacity (in bytes), which can range from 1 GB to 1 PB and must be an integer multiple of 1 GB
Note: the file system capacity after change cannot be smaller than the currently used capacity
                     * @param _capacityQuota File system capacity (in bytes), which can range from 1 GB to 1 PB and must be an integer multiple of 1 GB
Note: the file system capacity after change cannot be smaller than the currently used capacity
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
                     * 获取List of superuser names, which can be an empty array
                     * @return SuperUsers List of superuser names, which can be an empty array
                     * 
                     */
                    std::vector<std::string> GetSuperUsers() const;

                    /**
                     * 设置List of superuser names, which can be an empty array
                     * @param _superUsers List of superuser names, which can be an empty array
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
                     * 获取List of Ranger service addresses, which can be an empty array
                     * @return RangerServiceAddresses List of Ranger service addresses, which can be an empty array
                     * 
                     */
                    std::vector<std::string> GetRangerServiceAddresses() const;

                    /**
                     * 设置List of Ranger service addresses, which can be an empty array
                     * @param _rangerServiceAddresses List of Ranger service addresses, which can be an empty array
                     * 
                     */
                    void SetRangerServiceAddresses(const std::vector<std::string>& _rangerServiceAddresses);

                    /**
                     * 判断参数 RangerServiceAddresses 是否已赋值
                     * @return RangerServiceAddresses 是否已赋值
                     * 
                     */
                    bool RangerServiceAddressesHasBeenSet() const;

                private:

                    /**
                     * File system ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * File system name
                     */
                    std::string m_fileSystemName;
                    bool m_fileSystemNameHasBeenSet;

                    /**
                     * File system description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * File system capacity (in bytes), which can range from 1 GB to 1 PB and must be an integer multiple of 1 GB
Note: the file system capacity after change cannot be smaller than the currently used capacity
                     */
                    uint64_t m_capacityQuota;
                    bool m_capacityQuotaHasBeenSet;

                    /**
                     * List of superuser names, which can be an empty array
                     */
                    std::vector<std::string> m_superUsers;
                    bool m_superUsersHasBeenSet;

                    /**
                     * Whether to verify POSIX ACL
                     */
                    bool m_posixAcl;
                    bool m_posixAclHasBeenSet;

                    /**
                     * Whether to enable verification of Ranger service addresses
                     */
                    bool m_enableRanger;
                    bool m_enableRangerHasBeenSet;

                    /**
                     * List of Ranger service addresses, which can be an empty array
                     */
                    std::vector<std::string> m_rangerServiceAddresses;
                    bool m_rangerServiceAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYFILESYSTEMREQUEST_H_
