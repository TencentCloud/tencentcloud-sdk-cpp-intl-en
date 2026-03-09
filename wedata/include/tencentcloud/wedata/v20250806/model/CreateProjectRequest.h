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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEPROJECTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ProjectRequest.h>
#include <tencentcloud/wedata/v20250806/model/DLCClusterInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateProject request structure.
                */
                class CreateProjectRequest : public AbstractModel
                {
                public:
                    CreateProjectRequest();
                    ~CreateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Basic project information.
                     * @return Project Basic project information.
                     * 
                     */
                    ProjectRequest GetProject() const;

                    /**
                     * 设置Basic project information.
                     * @param _project Basic project information.
                     * 
                     */
                    void SetProject(const ProjectRequest& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取DLC bind cluster information.
                     * @return DLCInfo DLC bind cluster information.
                     * 
                     */
                    DLCClusterInfo GetDLCInfo() const;

                    /**
                     * 设置DLC bind cluster information.
                     * @param _dLCInfo DLC bind cluster information.
                     * 
                     */
                    void SetDLCInfo(const DLCClusterInfo& _dLCInfo);

                    /**
                     * 判断参数 DLCInfo 是否已赋值
                     * @return DLCInfo 是否已赋值
                     * 
                     */
                    bool DLCInfoHasBeenSet() const;

                    /**
                     * 获取id list to bind resource group.
                     * @return ResourceIds id list to bind resource group.
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置id list to bind resource group.
                     * @param _resourceIds id list to bind resource group.
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                private:

                    /**
                     * Basic project information.
                     */
                    ProjectRequest m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * DLC bind cluster information.
                     */
                    DLCClusterInfo m_dLCInfo;
                    bool m_dLCInfoHasBeenSet;

                    /**
                     * id list to bind resource group.
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEPROJECTREQUEST_H_
