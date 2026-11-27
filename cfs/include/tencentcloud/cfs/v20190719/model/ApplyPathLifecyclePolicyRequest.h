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
                     * 获取<p>Lifecycle management policy ID.</p>
                     * @return LifecyclePolicyID <p>Lifecycle management policy ID.</p>
                     * 
                     */
                    std::string GetLifecyclePolicyID() const;

                    /**
                     * 设置<p>Lifecycle management policy ID.</p>
                     * @param _lifecyclePolicyID <p>Lifecycle management policy ID.</p>
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
                     * 获取<p>List of directory paths associated with the lifecycle management policy. Each path must start with /cfs/, representing a logical path within the file storage instance, not a local mount point path.</p><p>Examples:</p><ul><li>If the CFS root directory / is mounted and you need to associate test1/test2 under the mount path, the input value is /cfs/test1/test2.</li><li>If the CFS subdirectory /subdir is mounted and you need to associate test1/test2 under the mount path, the input value is /cfs/subdir/test1/test2.</li></ul>
                     * @return Paths <p>List of directory paths associated with the lifecycle management policy. Each path must start with /cfs/, representing a logical path within the file storage instance, not a local mount point path.</p><p>Examples:</p><ul><li>If the CFS root directory / is mounted and you need to associate test1/test2 under the mount path, the input value is /cfs/test1/test2.</li><li>If the CFS subdirectory /subdir is mounted and you need to associate test1/test2 under the mount path, the input value is /cfs/subdir/test1/test2.</li></ul>
                     * 
                     */
                    std::vector<PathInfo> GetPaths() const;

                    /**
                     * 设置<p>List of directory paths associated with the lifecycle management policy. Each path must start with /cfs/, representing a logical path within the file storage instance, not a local mount point path.</p><p>Examples:</p><ul><li>If the CFS root directory / is mounted and you need to associate test1/test2 under the mount path, the input value is /cfs/test1/test2.</li><li>If the CFS subdirectory /subdir is mounted and you need to associate test1/test2 under the mount path, the input value is /cfs/subdir/test1/test2.</li></ul>
                     * @param _paths <p>List of directory paths associated with the lifecycle management policy. Each path must start with /cfs/, representing a logical path within the file storage instance, not a local mount point path.</p><p>Examples:</p><ul><li>If the CFS root directory / is mounted and you need to associate test1/test2 under the mount path, the input value is /cfs/test1/test2.</li><li>If the CFS subdirectory /subdir is mounted and you need to associate test1/test2 under the mount path, the input value is /cfs/subdir/test1/test2.</li></ul>
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
                     * <p>Lifecycle management policy ID.</p>
                     */
                    std::string m_lifecyclePolicyID;
                    bool m_lifecyclePolicyIDHasBeenSet;

                    /**
                     * <p>List of directory paths associated with the lifecycle management policy. Each path must start with /cfs/, representing a logical path within the file storage instance, not a local mount point path.</p><p>Examples:</p><ul><li>If the CFS root directory / is mounted and you need to associate test1/test2 under the mount path, the input value is /cfs/test1/test2.</li><li>If the CFS subdirectory /subdir is mounted and you need to associate test1/test2 under the mount path, the input value is /cfs/subdir/test1/test2.</li></ul>
                     */
                    std::vector<PathInfo> m_paths;
                    bool m_pathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_APPLYPATHLIFECYCLEPOLICYREQUEST_H_
