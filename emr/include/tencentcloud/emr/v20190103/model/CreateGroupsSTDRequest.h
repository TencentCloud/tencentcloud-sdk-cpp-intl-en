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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CREATEGROUPSSTDREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CREATEGROUPSSTDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/GroupInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CreateGroupsSTD request structure.
                */
                class CreateGroupsSTDRequest : public AbstractModel
                {
                public:
                    CreateGroupsSTDRequest();
                    ~CreateGroupsSTDRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster name.
                     * @return InstanceId Cluster name.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster name.
                     * @param _instanceId Cluster name.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Batch user group information.
                     * @return Groups Batch user group information.
                     * 
                     */
                    std::vector<GroupInfo> GetGroups() const;

                    /**
                     * 设置Batch user group information.
                     * @param _groups Batch user group information.
                     * 
                     */
                    void SetGroups(const std::vector<GroupInfo>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                private:

                    /**
                     * Cluster name.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Batch user group information.
                     */
                    std::vector<GroupInfo> m_groups;
                    bool m_groupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATEGROUPSSTDREQUEST_H_
