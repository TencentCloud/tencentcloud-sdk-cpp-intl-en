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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_SCALEUPFILESYSTEMRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_SCALEUPFILESYSTEMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ScaleUpFileSystem response structure.
                */
                class ScaleUpFileSystemResponse : public AbstractModel
                {
                public:
                    ScaleUpFileSystemResponse();
                    ~ScaleUpFileSystemResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取File system ID
                     * @return FileSystemId File system ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取Target capacity after scaling
                     * @return TargetCapacity Target capacity after scaling
                     * 
                     */
                    uint64_t GetTargetCapacity() const;

                    /**
                     * 判断参数 TargetCapacity 是否已赋值
                     * @return TargetCapacity 是否已赋值
                     * 
                     */
                    bool TargetCapacityHasBeenSet() const;

                private:

                    /**
                     * File system ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Target capacity after scaling
                     */
                    uint64_t m_targetCapacity;
                    bool m_targetCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_SCALEUPFILESYSTEMRESPONSE_H_
