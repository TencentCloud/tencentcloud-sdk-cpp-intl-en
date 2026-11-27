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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATEAUTODELETEPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATEAUTODELETEPOLICYREQUEST_H_

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
                * CreateAutoDeletePolicy request structure.
                */
                class CreateAutoDeletePolicyRequest : public AbstractModel
                {
                public:
                    CreateAutoDeletePolicyRequest();
                    ~CreateAutoDeletePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>File system ID.</p>
                     * @return FileSystemId <p>File system ID.</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>File system ID.</p>
                     * @param _fileSystemId <p>File system ID.</p>
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
                     * 获取<p>Auto deletion policy name.</p>
                     * @return PolicyName <p>Auto deletion policy name.</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>Auto deletion policy name.</p>
                     * @param _policyName <p>Auto deletion policy name.</p>
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>List of paths for the auto deletion policy.</p>
                     * @return Paths <p>List of paths for the auto deletion policy.</p>
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置<p>List of paths for the auto deletion policy.</p>
                     * @param _paths <p>List of paths for the auto deletion policy.</p>
                     * 
                     */
                    void SetPaths(const std::vector<std::string>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                private:

                    /**
                     * <p>File system ID.</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>Auto deletion policy name.</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>List of paths for the auto deletion policy.</p>
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEAUTODELETEPOLICYREQUEST_H_
