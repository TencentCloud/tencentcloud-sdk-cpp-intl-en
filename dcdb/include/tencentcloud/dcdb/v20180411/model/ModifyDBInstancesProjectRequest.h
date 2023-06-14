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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBINSTANCESPROJECTREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBINSTANCESPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * ModifyDBInstancesProject request structure.
                */
                class ModifyDBInstancesProjectRequest : public AbstractModel
                {
                public:
                    ModifyDBInstancesProjectRequest();
                    ~ModifyDBInstancesProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of instances to be modified. Instance ID is in the format of dcdbt-ow728lmc.
                     * @return InstanceIds List of IDs of instances to be modified. Instance ID is in the format of dcdbt-ow728lmc.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of IDs of instances to be modified. Instance ID is in the format of dcdbt-ow728lmc.
                     * @param _instanceIds List of IDs of instances to be modified. Instance ID is in the format of dcdbt-ow728lmc.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取ID of the project to be assigned, which can be obtained through the `DescribeProjects` API.
                     * @return ProjectId ID of the project to be assigned, which can be obtained through the `DescribeProjects` API.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to be assigned, which can be obtained through the `DescribeProjects` API.
                     * @param _projectId ID of the project to be assigned, which can be obtained through the `DescribeProjects` API.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * List of IDs of instances to be modified. Instance ID is in the format of dcdbt-ow728lmc.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * ID of the project to be assigned, which can be obtained through the `DescribeProjects` API.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBINSTANCESPROJECTREQUEST_H_
