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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_APPLYPATHLIFECYCLEPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_APPLYPATHLIFECYCLEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * ApplyPathLifecyclePolicy request structure.
                */
                class ApplyPathLifecyclePolicyRequest : public AbstractModel
                {
                public:
                    ApplyPathLifecyclePolicyRequest();
                    ~ApplyPathLifecyclePolicyRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取List of absolute paths for directories associated with the lifecycle management policy.
                     * @return Paths List of absolute paths for directories associated with the lifecycle management policy.
                     * 
                     */
                    std::vector<PathInfo> GetPaths() const;

                    /**
                     * 设置List of absolute paths for directories associated with the lifecycle management policy.
                     * @param _paths List of absolute paths for directories associated with the lifecycle management policy.
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
                     * Lifecycle management policy ID.
                     */
                    std::string m_lifecyclePolicyID;
                    bool m_lifecyclePolicyIDHasBeenSet;

                    /**
                     * List of absolute paths for directories associated with the lifecycle management policy.
                     */
                    std::vector<PathInfo> m_paths;
                    bool m_pathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_APPLYPATHLIFECYCLEPOLICYREQUEST_H_
