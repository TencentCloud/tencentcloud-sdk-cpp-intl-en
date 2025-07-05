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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEFILESYSTEMRESPONSE_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEFILESYSTEMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20201112/model/FileSystem.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * DescribeFileSystem response structure.
                */
                class DescribeFileSystemResponse : public AbstractModel
                {
                public:
                    DescribeFileSystemResponse();
                    ~DescribeFileSystemResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取File system
                     * @return FileSystem File system
                     * 
                     */
                    FileSystem GetFileSystem() const;

                    /**
                     * 判断参数 FileSystem 是否已赋值
                     * @return FileSystem 是否已赋值
                     * 
                     */
                    bool FileSystemHasBeenSet() const;

                    /**
                     * 获取Used capacity of the file system, in bytes
Note: this field may return `null`, indicating that no valid value was found.
                     * @return CapacityUsed Used capacity of the file system, in bytes
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetCapacityUsed() const;

                    /**
                     * 判断参数 CapacityUsed 是否已赋值
                     * @return CapacityUsed 是否已赋值
                     * 
                     */
                    bool CapacityUsedHasBeenSet() const;

                    /**
                     * 获取Used ARCHIVE capacity of COS, in bytes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ArchiveCapacityUsed Used ARCHIVE capacity of COS, in bytes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetArchiveCapacityUsed() const;

                    /**
                     * 判断参数 ArchiveCapacityUsed 是否已赋值
                     * @return ArchiveCapacityUsed 是否已赋值
                     * 
                     */
                    bool ArchiveCapacityUsedHasBeenSet() const;

                    /**
                     * 获取Used STANDARD capacity of COS, in bytes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return StandardCapacityUsed Used STANDARD capacity of COS, in bytes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStandardCapacityUsed() const;

                    /**
                     * 判断参数 StandardCapacityUsed 是否已赋值
                     * @return StandardCapacityUsed 是否已赋值
                     * 
                     */
                    bool StandardCapacityUsedHasBeenSet() const;

                    /**
                     * 获取Used STANDARD_IA capacity of COS, in bytes
Note: this field may return `null`, indicating that no valid value was found.
                     * @return DegradeCapacityUsed Used STANDARD_IA capacity of COS, in bytes
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetDegradeCapacityUsed() const;

                    /**
                     * 判断参数 DegradeCapacityUsed 是否已赋值
                     * @return DegradeCapacityUsed 是否已赋值
                     * 
                     */
                    bool DegradeCapacityUsedHasBeenSet() const;

                    /**
                     * 获取COS DEEP ARCHIVE storage usage, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeepArchiveCapacityUsed COS DEEP ARCHIVE storage usage, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDeepArchiveCapacityUsed() const;

                    /**
                     * 判断参数 DeepArchiveCapacityUsed 是否已赋值
                     * @return DeepArchiveCapacityUsed 是否已赋值
                     * 
                     */
                    bool DeepArchiveCapacityUsedHasBeenSet() const;

                    /**
                     * 获取COS INTELLIGENT TIERING storage usage, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IntelligentCapacityUsed COS INTELLIGENT TIERING storage usage, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIntelligentCapacityUsed() const;

                    /**
                     * 判断参数 IntelligentCapacityUsed 是否已赋值
                     * @return IntelligentCapacityUsed 是否已赋值
                     * 
                     */
                    bool IntelligentCapacityUsedHasBeenSet() const;

                private:

                    /**
                     * File system
                     */
                    FileSystem m_fileSystem;
                    bool m_fileSystemHasBeenSet;

                    /**
                     * Used capacity of the file system, in bytes
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_capacityUsed;
                    bool m_capacityUsedHasBeenSet;

                    /**
                     * Used ARCHIVE capacity of COS, in bytes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_archiveCapacityUsed;
                    bool m_archiveCapacityUsedHasBeenSet;

                    /**
                     * Used STANDARD capacity of COS, in bytes
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_standardCapacityUsed;
                    bool m_standardCapacityUsedHasBeenSet;

                    /**
                     * Used STANDARD_IA capacity of COS, in bytes
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_degradeCapacityUsed;
                    bool m_degradeCapacityUsedHasBeenSet;

                    /**
                     * COS DEEP ARCHIVE storage usage, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_deepArchiveCapacityUsed;
                    bool m_deepArchiveCapacityUsedHasBeenSet;

                    /**
                     * COS INTELLIGENT TIERING storage usage, in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_intelligentCapacityUsed;
                    bool m_intelligentCapacityUsedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEFILESYSTEMRESPONSE_H_
