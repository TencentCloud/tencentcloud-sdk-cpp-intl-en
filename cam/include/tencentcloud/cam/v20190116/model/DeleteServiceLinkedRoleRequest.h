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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DELETESERVICELINKEDROLEREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DELETESERVICELINKEDROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DeleteServiceLinkedRole request structure.
                */
                class DeleteServiceLinkedRoleRequest : public AbstractModel
                {
                public:
                    DeleteServiceLinkedRoleRequest();
                    ~DeleteServiceLinkedRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the service-linked role to be deleted.
                     * @return RoleName Name of the service-linked role to be deleted.
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Name of the service-linked role to be deleted.
                     * @param RoleName Name of the service-linked role to be deleted.
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                private:

                    /**
                     * Name of the service-linked role to be deleted.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DELETESERVICELINKEDROLEREQUEST_H_
