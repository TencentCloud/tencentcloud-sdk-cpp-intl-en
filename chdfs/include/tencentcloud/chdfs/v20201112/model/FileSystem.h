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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_FILESYSTEM_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_FILESYSTEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * File system
                */
                class FileSystem : public AbstractModel
                {
                public:
                    FileSystem();
                    ~FileSystem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource owner `AppId`
                     * @return AppId Resource owner `AppId`
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Resource owner `AppId`
                     * @param _appId Resource owner `AppId`
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取File system block size (in bytes)
                     * @return BlockSize File system block size (in bytes)
                     * 
                     */
                    uint64_t GetBlockSize() const;

                    /**
                     * 设置File system block size (in bytes)
                     * @param _blockSize File system block size (in bytes)
                     * 
                     */
                    void SetBlockSize(const uint64_t& _blockSize);

                    /**
                     * 判断参数 BlockSize 是否已赋值
                     * @return BlockSize 是否已赋值
                     * 
                     */
                    bool BlockSizeHasBeenSet() const;

                    /**
                     * 获取File system capacity (in bytes)
                     * @return CapacityQuota File system capacity (in bytes)
                     * 
                     */
                    uint64_t GetCapacityQuota() const;

                    /**
                     * 设置File system capacity (in bytes)
                     * @param _capacityQuota File system capacity (in bytes)
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
                     * 获取File system status (1: creating; 2: created successfully; 3: failed to create)
                     * @return Status File system status (1: creating; 2: created successfully; 3: failed to create)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置File system status (1: creating; 2: created successfully; 3: failed to create)
                     * @param _status File system status (1: creating; 2: created successfully; 3: failed to create)
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取List of superuser names
                     * @return SuperUsers List of superuser names
                     * 
                     */
                    std::vector<std::string> GetSuperUsers() const;

                    /**
                     * 设置List of superuser names
                     * @param _superUsers List of superuser names
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
                     * 获取POSIX permission control
                     * @return PosixAcl POSIX permission control
                     * 
                     */
                    bool GetPosixAcl() const;

                    /**
                     * 设置POSIX permission control
                     * @param _posixAcl POSIX permission control
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
Note: this field may return `null`, indicating that no valid value was found.
                     * @return EnableRanger Whether to enable verification of Ranger service addresses
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    bool GetEnableRanger() const;

                    /**
                     * 设置Whether to enable verification of Ranger service addresses
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _enableRanger Whether to enable verification of Ranger service addresses
Note: this field may return `null`, indicating that no valid value was found.
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
                     * 获取List of Ranger service addresses
Note: this field may return `null`, indicating that no valid value was found.
                     * @return RangerServiceAddresses List of Ranger service addresses
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetRangerServiceAddresses() const;

                    /**
                     * 设置List of Ranger service addresses
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _rangerServiceAddresses List of Ranger service addresses
Note: this field may return `null`, indicating that no valid value was found.
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
                     * Resource owner `AppId`
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

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
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * File system ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * File system block size (in bytes)
                     */
                    uint64_t m_blockSize;
                    bool m_blockSizeHasBeenSet;

                    /**
                     * File system capacity (in bytes)
                     */
                    uint64_t m_capacityQuota;
                    bool m_capacityQuotaHasBeenSet;

                    /**
                     * File system status (1: creating; 2: created successfully; 3: failed to create)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * List of superuser names
                     */
                    std::vector<std::string> m_superUsers;
                    bool m_superUsersHasBeenSet;

                    /**
                     * POSIX permission control
                     */
                    bool m_posixAcl;
                    bool m_posixAclHasBeenSet;

                    /**
                     * Whether to enable verification of Ranger service addresses
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    bool m_enableRanger;
                    bool m_enableRangerHasBeenSet;

                    /**
                     * List of Ranger service addresses
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_rangerServiceAddresses;
                    bool m_rangerServiceAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_FILESYSTEM_H_
