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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEPOLICY_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/LifecycleRule.h>
#include <tencentcloud/cfs/v20190719/model/PathInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Lifecycle management policy information.
                */
                class LifecyclePolicy : public AbstractModel
                {
                public:
                    LifecyclePolicy();
                    ~LifecyclePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<P>The time when the lifecycle management policy was created</p>.
                     * @return CreateTime <P>The time when the lifecycle management policy was created</p>.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<P>The time when the lifecycle management policy was created</p>.
                     * @param _createTime <P>The time when the lifecycle management policy was created</p>.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Lifecycle management policy ID.</p>.
                     * @return LifecyclePolicyID <p>Lifecycle management policy ID.</p>.
                     * 
                     */
                    std::string GetLifecyclePolicyID() const;

                    /**
                     * 设置<p>Lifecycle management policy ID.</p>.
                     * @param _lifecyclePolicyID <p>Lifecycle management policy ID.</p>.
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
                     * 获取<P>Lifecycle management policy name</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LifecyclePolicyName <P>Lifecycle management policy name</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLifecyclePolicyName() const;

                    /**
                     * 设置<P>Lifecycle management policy name</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lifecyclePolicyName <P>Lifecycle management policy name</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLifecyclePolicyName(const std::string& _lifecyclePolicyName);

                    /**
                     * 判断参数 LifecyclePolicyName 是否已赋值
                     * @return LifecyclePolicyName 是否已赋值
                     * 
                     */
                    bool LifecyclePolicyNameHasBeenSet() const;

                    /**
                     * 获取<P>List of management rules associated with the lifecycle management policy.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LifecycleRules <P>List of management rules associated with the lifecycle management policy.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LifecycleRule> GetLifecycleRules() const;

                    /**
                     * 设置<P>List of management rules associated with the lifecycle management policy.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lifecycleRules <P>List of management rules associated with the lifecycle management policy.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<P>List of absolute paths for directories associated with the lifecycle management policy</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Paths <P>List of absolute paths for directories associated with the lifecycle management policy</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PathInfo> GetPaths() const;

                    /**
                     * 设置<P>List of absolute paths for directories associated with the lifecycle management policy</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paths <P>List of absolute paths for directories associated with the lifecycle management policy</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPaths(const std::vector<PathInfo>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                private:

                    /**
                     * <P>The time when the lifecycle management policy was created</p>.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Lifecycle management policy ID.</p>.
                     */
                    std::string m_lifecyclePolicyID;
                    bool m_lifecyclePolicyIDHasBeenSet;

                    /**
                     * <P>Lifecycle management policy name</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lifecyclePolicyName;
                    bool m_lifecyclePolicyNameHasBeenSet;

                    /**
                     * <P>List of management rules associated with the lifecycle management policy.</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LifecycleRule> m_lifecycleRules;
                    bool m_lifecycleRulesHasBeenSet;

                    /**
                     * <P>List of absolute paths for directories associated with the lifecycle management policy</p>.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PathInfo> m_paths;
                    bool m_pathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLEPOLICY_H_
