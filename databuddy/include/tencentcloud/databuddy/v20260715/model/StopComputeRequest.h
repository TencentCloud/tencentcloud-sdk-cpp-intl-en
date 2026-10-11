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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_STOPCOMPUTEREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_STOPCOMPUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * StopCompute request structure.
                */
                class StopComputeRequest : public AbstractModel
                {
                public:
                    StopComputeRequest();
                    ~StopComputeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Computational resource ID
                     * @return ResourceId Computational resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Computational resource ID
                     * @param _resourceId Computational resource ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Workspace ID
                     * @return WorkspaceId Workspace ID
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置Workspace ID
                     * @param _workspaceId Workspace ID
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                private:

                    /**
                     * Computational resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Workspace ID
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_STOPCOMPUTEREQUEST_H_
