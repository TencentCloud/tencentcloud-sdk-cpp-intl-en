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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYLIFECYCLEPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYLIFECYCLEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyLifecyclePolicy request structure.
                */
                class ModifyLifecyclePolicyRequest : public AbstractModel
                {
                public:
                    ModifyLifecyclePolicyRequest();
                    ~ModifyLifecyclePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Lifecycle management policy name, a combination of chinese/english/digits/underscores/hyphens, no more than 64 characters.
                     * @return LifecyclePolicyName Lifecycle management policy name, a combination of chinese/english/digits/underscores/hyphens, no more than 64 characters.
                     * 
                     */
                    std::string GetLifecyclePolicyName() const;

                    /**
                     * 设置Lifecycle management policy name, a combination of chinese/english/digits/underscores/hyphens, no more than 64 characters.
                     * @param _lifecyclePolicyName Lifecycle management policy name, a combination of chinese/english/digits/underscores/hyphens, no more than 64 characters.
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

                private:

                    /**
                     * Lifecycle management policy name, a combination of chinese/english/digits/underscores/hyphens, no more than 64 characters.
                     */
                    std::string m_lifecyclePolicyName;
                    bool m_lifecyclePolicyNameHasBeenSet;

                    /**
                     * List of management rules associated with the lifecycle management policy.
                     */
                    std::vector<LifecycleRule> m_lifecycleRules;
                    bool m_lifecycleRulesHasBeenSet;

                    /**
                     * Lifecycle management policy ID.
                     */
                    std::string m_lifecyclePolicyID;
                    bool m_lifecyclePolicyIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYLIFECYCLEPOLICYREQUEST_H_
