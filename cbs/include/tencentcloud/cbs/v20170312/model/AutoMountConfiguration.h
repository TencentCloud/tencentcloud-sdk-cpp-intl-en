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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_AUTOMOUNTCONFIGURATION_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_AUTOMOUNTCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes how a newly purchased cloud disk is initialized and attached to a CVM instance.
                */
                class AutoMountConfiguration : public AbstractModel
                {
                public:
                    AutoMountConfiguration();
                    ~AutoMountConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the instance to which the cloud disk is attached.
                     * @return InstanceId ID of the instance to which the cloud disk is attached.
                     */
                    std::vector<std::string> GetInstanceId() const;

                    /**
                     * 设置ID of the instance to which the cloud disk is attached.
                     * @param InstanceId ID of the instance to which the cloud disk is attached.
                     */
                    void SetInstanceId(const std::vector<std::string>& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Mount point in the instance.
                     * @return MountPoint Mount point in the instance.
                     */
                    std::vector<std::string> GetMountPoint() const;

                    /**
                     * 设置Mount point in the instance.
                     * @param MountPoint Mount point in the instance.
                     */
                    void SetMountPoint(const std::vector<std::string>& _mountPoint);

                    /**
                     * 判断参数 MountPoint 是否已赋值
                     * @return MountPoint 是否已赋值
                     */
                    bool MountPointHasBeenSet() const;

                    /**
                     * 获取File system type. Valid values: `ext4`, `xfs`.
                     * @return FileSystemType File system type. Valid values: `ext4`, `xfs`.
                     */
                    std::string GetFileSystemType() const;

                    /**
                     * 设置File system type. Valid values: `ext4`, `xfs`.
                     * @param FileSystemType File system type. Valid values: `ext4`, `xfs`.
                     */
                    void SetFileSystemType(const std::string& _fileSystemType);

                    /**
                     * 判断参数 FileSystemType 是否已赋值
                     * @return FileSystemType 是否已赋值
                     */
                    bool FileSystemTypeHasBeenSet() const;

                private:

                    /**
                     * ID of the instance to which the cloud disk is attached.
                     */
                    std::vector<std::string> m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Mount point in the instance.
                     */
                    std::vector<std::string> m_mountPoint;
                    bool m_mountPointHasBeenSet;

                    /**
                     * File system type. Valid values: `ext4`, `xfs`.
                     */
                    std::string m_fileSystemType;
                    bool m_fileSystemTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_AUTOMOUNTCONFIGURATION_H_
