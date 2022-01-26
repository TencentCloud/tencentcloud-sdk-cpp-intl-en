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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_MOUNTPOINT_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_MOUNTPOINT_H_

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
                * Mount point
                */
                class MountPoint : public AbstractModel
                {
                public:
                    MountPoint();
                    ~MountPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mount point ID
                     * @return MountPointId Mount point ID
                     */
                    std::string GetMountPointId() const;

                    /**
                     * 设置Mount point ID
                     * @param MountPointId Mount point ID
                     */
                    void SetMountPointId(const std::string& _mountPointId);

                    /**
                     * 判断参数 MountPointId 是否已赋值
                     * @return MountPointId 是否已赋值
                     */
                    bool MountPointIdHasBeenSet() const;

                    /**
                     * 获取Mount point name
                     * @return MountPointName Mount point name
                     */
                    std::string GetMountPointName() const;

                    /**
                     * 设置Mount point name
                     * @param MountPointName Mount point name
                     */
                    void SetMountPointName(const std::string& _mountPointName);

                    /**
                     * 判断参数 MountPointName 是否已赋值
                     * @return MountPointName 是否已赋值
                     */
                    bool MountPointNameHasBeenSet() const;

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
                     * 获取Mount point status (1: enabled; 2: disabled)
                     * @return Status Mount point status (1: enabled; 2: disabled)
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Mount point status (1: enabled; 2: disabled)
                     * @param Status Mount point status (1: enabled; 2: disabled)
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取List of IDs of the bound permission groups
                     * @return AccessGroupIds List of IDs of the bound permission groups
                     */
                    std::vector<std::string> GetAccessGroupIds() const;

                    /**
                     * 设置List of IDs of the bound permission groups
                     * @param AccessGroupIds List of IDs of the bound permission groups
                     */
                    void SetAccessGroupIds(const std::vector<std::string>& _accessGroupIds);

                    /**
                     * 判断参数 AccessGroupIds 是否已赋值
                     * @return AccessGroupIds 是否已赋值
                     */
                    bool AccessGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Mount point ID
                     */
                    std::string m_mountPointId;
                    bool m_mountPointIdHasBeenSet;

                    /**
                     * Mount point name
                     */
                    std::string m_mountPointName;
                    bool m_mountPointNameHasBeenSet;

                    /**
                     * File system ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Mount point status (1: enabled; 2: disabled)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * List of IDs of the bound permission groups
                     */
                    std::vector<std::string> m_accessGroupIds;
                    bool m_accessGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_MOUNTPOINT_H_
