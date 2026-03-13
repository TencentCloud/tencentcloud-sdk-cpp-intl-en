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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CHECKRESULT_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CHECKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/LifecycleRule.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Returns the rule information list if there is a rule conflict.
                */
                class CheckResult : public AbstractModel
                {
                public:
                    CheckResult();
                    ~CheckResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Lifecycle management policy ID.
                     * @return LifecyclePolicyID Lifecycle management policy ID.
                     * 
                     */
                    std::string GetLifecyclePolicyID() const;

                    /**
                     * 设置Lifecycle management policy ID.
                     * @param _lifecyclePolicyID Lifecycle management policy ID.
                     * 
                     */
                    void SetLifecyclePolicyID(const std::string& _lifecyclePolicyID);

                    /**
                     * 判断参数 LifecyclePolicyID 是否已赋值
                     * @return LifecyclePolicyID 是否已赋值
                     * 
                     */
                    bool LifecyclePolicyIDHasBeenSet() const;

                    /**
                     * 获取File system ID.
                     * @return FileSystemId File system ID.
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID.
                     * @param _fileSystemId File system ID.
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
                     * 获取Directory absolute path.
                     * @return Path Directory absolute path.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Directory absolute path.
                     * @param _path Directory absolute path.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取List of management rules associated with the lifecycle management policy.
                     * @return LifecycleRules List of management rules associated with the lifecycle management policy.
                     * 
                     */
                    std::vector<LifecycleRule> GetLifecycleRules() const;

                    /**
                     * 设置List of management rules associated with the lifecycle management policy.
                     * @param _lifecycleRules List of management rules associated with the lifecycle management policy.
                     * 
                     */
                    void SetLifecycleRules(const std::vector<LifecycleRule>& _lifecycleRules);

                    /**
                     * 判断参数 LifecycleRules 是否已赋值
                     * @return LifecycleRules 是否已赋值
                     * 
                     */
                    bool LifecycleRulesHasBeenSet() const;

                    /**
                     * 获取Target path.
                     * @return TargetPath Target path.
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置Target path.
                     * @param _targetPath Target path.
                     * 
                     */
                    void SetTargetPath(const std::string& _targetPath);

                    /**
                     * 判断参数 TargetPath 是否已赋值
                     * @return TargetPath 是否已赋值
                     * 
                     */
                    bool TargetPathHasBeenSet() const;

                private:

                    /**
                     * Lifecycle management policy ID.
                     */
                    std::string m_lifecyclePolicyID;
                    bool m_lifecyclePolicyIDHasBeenSet;

                    /**
                     * File system ID.
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Directory absolute path.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * List of management rules associated with the lifecycle management policy.
                     */
                    std::vector<LifecycleRule> m_lifecycleRules;
                    bool m_lifecycleRulesHasBeenSet;

                    /**
                     * Target path.
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CHECKRESULT_H_
