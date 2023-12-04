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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_AUTOMOUNTCONFIGURATION_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_AUTOMOUNTCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Automatically attach and initialize the data disk.
                */
                class AutoMountConfiguration : public AbstractModel
                {
                public:
                    AutoMountConfiguration();
                    ~AutoMountConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the instance to be mounted to. The instance must be **Running**.
                     * @return InstanceId ID of the instance to be mounted to. The instance must be **Running**.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance to be mounted to. The instance must be **Running**.
                     * @param _instanceId ID of the instance to be mounted to. The instance must be **Running**.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The mount point within the instance. Only Linux instances are supported. If it's not specified, the default mount point is "/data/disk".
                     * @return MountPoint The mount point within the instance. Only Linux instances are supported. If it's not specified, the default mount point is "/data/disk".
                     * 
                     */
                    std::string GetMountPoint() const;

                    /**
                     * 设置The mount point within the instance. Only Linux instances are supported. If it's not specified, the default mount point is "/data/disk".
                     * @param _mountPoint The mount point within the instance. Only Linux instances are supported. If it's not specified, the default mount point is "/data/disk".
                     * 
                     */
                    void SetMountPoint(const std::string& _mountPoint);

                    /**
                     * 判断参数 MountPoint 是否已赋值
                     * @return MountPoint 是否已赋值
                     * 
                     */
                    bool MountPointHasBeenSet() const;

                    /**
                     * 获取The file system type. Values: `ext4` (default) and `xfs`. Only Linux instances are supported. 
                     * @return FileSystemType The file system type. Values: `ext4` (default) and `xfs`. Only Linux instances are supported. 
                     * 
                     */
                    std::string GetFileSystemType() const;

                    /**
                     * 设置The file system type. Values: `ext4` (default) and `xfs`. Only Linux instances are supported. 
                     * @param _fileSystemType The file system type. Values: `ext4` (default) and `xfs`. Only Linux instances are supported. 
                     * 
                     */
                    void SetFileSystemType(const std::string& _fileSystemType);

                    /**
                     * 判断参数 FileSystemType 是否已赋值
                     * @return FileSystemType 是否已赋值
                     * 
                     */
                    bool FileSystemTypeHasBeenSet() const;

                private:

                    /**
                     * ID of the instance to be mounted to. The instance must be **Running**.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The mount point within the instance. Only Linux instances are supported. If it's not specified, the default mount point is "/data/disk".
                     */
                    std::string m_mountPoint;
                    bool m_mountPointHasBeenSet;

                    /**
                     * The file system type. Values: `ext4` (default) and `xfs`. Only Linux instances are supported. 
                     */
                    std::string m_fileSystemType;
                    bool m_fileSystemTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_AUTOMOUNTCONFIGURATION_H_
