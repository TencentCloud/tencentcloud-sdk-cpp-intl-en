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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATELIFECYCLERULESREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATELIFECYCLERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20201112/model/LifeCycleRule.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * CreateLifeCycleRules request structure.
                */
                class CreateLifeCycleRulesRequest : public AbstractModel
                {
                public:
                    CreateLifeCycleRulesRequest();
                    ~CreateLifeCycleRulesRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Multiple lifecycle rules (up to 10)
                     * @return LifeCycleRules Multiple lifecycle rules (up to 10)
                     * 
                     */
                    std::vector<LifeCycleRule> GetLifeCycleRules() const;

                    /**
                     * 设置Multiple lifecycle rules (up to 10)
                     * @param _lifeCycleRules Multiple lifecycle rules (up to 10)
                     * 
                     */
                    void SetLifeCycleRules(const std::vector<LifeCycleRule>& _lifeCycleRules);

                    /**
                     * 判断参数 LifeCycleRules 是否已赋值
                     * @return LifeCycleRules 是否已赋值
                     * 
                     */
                    bool LifeCycleRulesHasBeenSet() const;

                private:

                    /**
                     * File system ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Multiple lifecycle rules (up to 10)
                     */
                    std::vector<LifeCycleRule> m_lifeCycleRules;
                    bool m_lifeCycleRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATELIFECYCLERULESREQUEST_H_
