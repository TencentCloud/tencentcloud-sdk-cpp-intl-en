/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_BINDCONCURRENTPACKAGESTOPROJECTREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_BINDCONCURRENTPACKAGESTOPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * BindConcurrentPackagesToProject request structure.
                */
                class BindConcurrentPackagesToProjectRequest : public AbstractModel
                {
                public:
                    BindConcurrentPackagesToProjectRequest();
                    ~BindConcurrentPackagesToProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Concurrency pack ID list.
                     * @return ConcurrentIds Concurrency pack ID list.
                     * 
                     */
                    std::vector<std::string> GetConcurrentIds() const;

                    /**
                     * 设置Concurrency pack ID list.
                     * @param _concurrentIds Concurrency pack ID list.
                     * 
                     */
                    void SetConcurrentIds(const std::vector<std::string>& _concurrentIds);

                    /**
                     * 判断参数 ConcurrentIds 是否已赋值
                     * @return ConcurrentIds 是否已赋值
                     * 
                     */
                    bool ConcurrentIdsHasBeenSet() const;

                    /**
                     * 获取Cloud application project ID.
                     * @return ProjectId Cloud application project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Cloud application project ID.
                     * @param _projectId Cloud application project ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * Concurrency pack ID list.
                     */
                    std::vector<std::string> m_concurrentIds;
                    bool m_concurrentIdsHasBeenSet;

                    /**
                     * Cloud application project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_BINDCONCURRENTPACKAGESTOPROJECTREQUEST_H_
