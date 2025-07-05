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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UNBINDAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UNBINDAUTOSNAPSHOTPOLICYREQUEST_H_

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
                * UnbindAutoSnapshotPolicy request structure.
                */
                class UnbindAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    UnbindAutoSnapshotPolicyRequest();
                    ~UnbindAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of the file systems to be unbound, separated by comma
                     * @return FileSystemIds List of IDs of the file systems to be unbound, separated by comma
                     * 
                     */
                    std::string GetFileSystemIds() const;

                    /**
                     * 设置List of IDs of the file systems to be unbound, separated by comma
                     * @param _fileSystemIds List of IDs of the file systems to be unbound, separated by comma
                     * 
                     */
                    void SetFileSystemIds(const std::string& _fileSystemIds);

                    /**
                     * 判断参数 FileSystemIds 是否已赋值
                     * @return FileSystemIds 是否已赋值
                     * 
                     */
                    bool FileSystemIdsHasBeenSet() const;

                    /**
                     * 获取ID of the snapshot to be unbound
                     * @return AutoSnapshotPolicyId ID of the snapshot to be unbound
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置ID of the snapshot to be unbound
                     * @param _autoSnapshotPolicyId ID of the snapshot to be unbound
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                private:

                    /**
                     * List of IDs of the file systems to be unbound, separated by comma
                     */
                    std::string m_fileSystemIds;
                    bool m_fileSystemIdsHasBeenSet;

                    /**
                     * ID of the snapshot to be unbound
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UNBINDAUTOSNAPSHOTPOLICYREQUEST_H_
