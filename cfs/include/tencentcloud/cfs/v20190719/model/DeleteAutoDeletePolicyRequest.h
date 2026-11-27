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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DELETEAUTODELETEPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DELETEAUTODELETEPOLICYREQUEST_H_

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
                * DeleteAutoDeletePolicy request structure.
                */
                class DeleteAutoDeletePolicyRequest : public AbstractModel
                {
                public:
                    DeleteAutoDeletePolicyRequest();
                    ~DeleteAutoDeletePolicyRequest() = default;
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
                     * 获取<p>Auto deletion policy ID.</p>
                     * @return PolicyId <p>Auto deletion policy ID.</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>Auto deletion policy ID.</p>
                     * @param _policyId <p>Auto deletion policy ID.</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * <p>File system ID.</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>Auto deletion policy ID.</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DELETEAUTODELETEPOLICYREQUEST_H_
