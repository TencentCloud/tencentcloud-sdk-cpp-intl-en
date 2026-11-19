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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBECOSTEMPTOKENREQUEST_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBECOSTEMPTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * DescribeCosTempToken request structure.
                */
                class DescribeCosTempTokenRequest : public AbstractModel
                {
                public:
                    DescribeCosTempTokenRequest();
                    ~DescribeCosTempTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Makers site ID</p>
                     * @return ZoneId <p>Makers site ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Makers site ID</p>
                     * @param _zoneId <p>Makers site ID</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Project name. The temporary path is concatenated based on it.</p>
                     * @return ProjectName <p>Project name. The temporary path is concatenated based on it.</p>
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置<p>Project name. The temporary path is concatenated based on it.</p>
                     * @param _projectName <p>Project name. The temporary path is concatenated based on it.</p>
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取<p>Project ID. Used to reverse-check the project name when ProjectName is not passed in.</p>
                     * @return ProjectId <p>Project ID. Used to reverse-check the project name when ProjectName is not passed in.</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>Project ID. Used to reverse-check the project name when ProjectName is not passed in.</p>
                     * @param _projectId <p>Project ID. Used to reverse-check the project name when ProjectName is not passed in.</p>
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
                     * <p>Makers site ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Project name. The temporary path is concatenated based on it.</p>
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>Project ID. Used to reverse-check the project name when ProjectName is not passed in.</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBECOSTEMPTOKENREQUEST_H_
