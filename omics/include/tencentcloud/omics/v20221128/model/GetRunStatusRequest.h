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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNSTATUSREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * GetRunStatus request structure.
                */
                class GetRunStatusRequest : public AbstractModel
                {
                public:
                    GetRunStatusRequest();
                    ~GetRunStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Run UUID
                     * @return RunUuid Run UUID
                     * 
                     */
                    std::string GetRunUuid() const;

                    /**
                     * 设置Run UUID
                     * @param _runUuid Run UUID
                     * 
                     */
                    void SetRunUuid(const std::string& _runUuid);

                    /**
                     * 判断参数 RunUuid 是否已赋值
                     * @return RunUuid 是否已赋值
                     * 
                     */
                    bool RunUuidHasBeenSet() const;

                    /**
                     * 获取Project ID
(If you leave it blank, the default item in the specified region will be used.)
                     * @return ProjectId Project ID
(If you leave it blank, the default item in the specified region will be used.)
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
(If you leave it blank, the default item in the specified region will be used.)
                     * @param _projectId Project ID
(If you leave it blank, the default item in the specified region will be used.)
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
                     * Run UUID
                     */
                    std::string m_runUuid;
                    bool m_runUuidHasBeenSet;

                    /**
                     * Project ID
(If you leave it blank, the default item in the specified region will be used.)
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNSTATUSREQUEST_H_
