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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_MOUNTDATADISK_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_MOUNTDATADISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Data disk mounting option
                */
                class MountDataDisk : public AbstractModel
                {
                public:
                    MountDataDisk();
                    ~MountDataDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mounting point. A valid path (for Linux) for a drive (for Windows, such as "H:\\")
                     * @return LocalPath Mounting point. A valid path (for Linux) for a drive (for Windows, such as "H:\\")
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置Mounting point. A valid path (for Linux) for a drive (for Windows, such as "H:\\")
                     * @param LocalPath Mounting point. A valid path (for Linux) for a drive (for Windows, such as "H:\\")
                     */
                    void SetLocalPath(const std::string& _localPath);

                    /**
                     * 判断参数 LocalPath 是否已赋值
                     * @return LocalPath 是否已赋值
                     */
                    bool LocalPathHasBeenSet() const;

                    /**
                     * 获取File system type. Linux: `EXT3` (default) and `EXT4`. Windows: `NTFS`
                     * @return FileSystemType File system type. Linux: `EXT3` (default) and `EXT4`. Windows: `NTFS`
                     */
                    std::string GetFileSystemType() const;

                    /**
                     * 设置File system type. Linux: `EXT3` (default) and `EXT4`. Windows: `NTFS`
                     * @param FileSystemType File system type. Linux: `EXT3` (default) and `EXT4`. Windows: `NTFS`
                     */
                    void SetFileSystemType(const std::string& _fileSystemType);

                    /**
                     * 判断参数 FileSystemType 是否已赋值
                     * @return FileSystemType 是否已赋值
                     */
                    bool FileSystemTypeHasBeenSet() const;

                private:

                    /**
                     * Mounting point. A valid path (for Linux) for a drive (for Windows, such as "H:\\")
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                    /**
                     * File system type. Linux: `EXT3` (default) and `EXT4`. Windows: `NTFS`
                     */
                    std::string m_fileSystemType;
                    bool m_fileSystemTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_MOUNTDATADISK_H_
