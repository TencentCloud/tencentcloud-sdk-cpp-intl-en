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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEROCKETMQROLESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEROCKETMQROLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DeleteRocketMQRoles request structure.
                */
                class DeleteRocketMQRolesRequest : public AbstractModel
                {
                public:
                    DeleteRocketMQRolesRequest();
                    ~DeleteRocketMQRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Role name array.
                     * @return RoleNames Role name array.
                     * 
                     */
                    std::vector<std::string> GetRoleNames() const;

                    /**
                     * 设置Role name array.
                     * @param _roleNames Role name array.
                     * 
                     */
                    void SetRoleNames(const std::vector<std::string>& _roleNames);

                    /**
                     * 判断参数 RoleNames 是否已赋值
                     * @return RoleNames 是否已赋值
                     * 
                     */
                    bool RoleNamesHasBeenSet() const;

                    /**
                     * 获取Required field, cluster ID
                     * @return ClusterId Required field, cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Required field, cluster ID
                     * @param _clusterId Required field, cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * Role name array.
                     */
                    std::vector<std::string> m_roleNames;
                    bool m_roleNamesHasBeenSet;

                    /**
                     * Required field, cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEROCKETMQROLESREQUEST_H_
