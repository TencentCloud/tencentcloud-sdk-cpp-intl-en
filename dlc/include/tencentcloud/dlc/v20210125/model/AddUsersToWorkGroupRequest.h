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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ADDUSERSTOWORKGROUPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ADDUSERSTOWORKGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/UserIdSetOfWorkGroupId.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * AddUsersToWorkGroup request structure.
                */
                class AddUsersToWorkGroupRequest : public AbstractModel
                {
                public:
                    AddUsersToWorkGroupRequest();
                    ~AddUsersToWorkGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Information about working groups and users to be operated
                     * @return AddInfo Information about working groups and users to be operated
                     * 
                     */
                    UserIdSetOfWorkGroupId GetAddInfo() const;

                    /**
                     * 设置Information about working groups and users to be operated
                     * @param _addInfo Information about working groups and users to be operated
                     * 
                     */
                    void SetAddInfo(const UserIdSetOfWorkGroupId& _addInfo);

                    /**
                     * 判断参数 AddInfo 是否已赋值
                     * @return AddInfo 是否已赋值
                     * 
                     */
                    bool AddInfoHasBeenSet() const;

                private:

                    /**
                     * Information about working groups and users to be operated
                     */
                    UserIdSetOfWorkGroupId m_addInfo;
                    bool m_addInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ADDUSERSTOWORKGROUPREQUEST_H_
