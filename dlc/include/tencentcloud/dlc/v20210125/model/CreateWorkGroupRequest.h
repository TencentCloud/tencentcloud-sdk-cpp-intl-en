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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEWORKGROUPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEWORKGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateWorkGroup request structure.
                */
                class CreateWorkGroupRequest : public AbstractModel
                {
                public:
                    CreateWorkGroupRequest();
                    ~CreateWorkGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Working group name
                     * @return WorkGroupName Working group name
                     * 
                     */
                    std::string GetWorkGroupName() const;

                    /**
                     * 设置Working group name
                     * @param _workGroupName Working group name
                     * 
                     */
                    void SetWorkGroupName(const std::string& _workGroupName);

                    /**
                     * 判断参数 WorkGroupName 是否已赋值
                     * @return WorkGroupName 是否已赋值
                     * 
                     */
                    bool WorkGroupNameHasBeenSet() const;

                    /**
                     * 获取Working group description
                     * @return WorkGroupDescription Working group description
                     * 
                     */
                    std::string GetWorkGroupDescription() const;

                    /**
                     * 设置Working group description
                     * @param _workGroupDescription Working group description
                     * 
                     */
                    void SetWorkGroupDescription(const std::string& _workGroupDescription);

                    /**
                     * 判断参数 WorkGroupDescription 是否已赋值
                     * @return WorkGroupDescription 是否已赋值
                     * 
                     */
                    bool WorkGroupDescriptionHasBeenSet() const;

                    /**
                     * 获取Collections of authentication policies bound to working groups
                     * @return PolicySet Collections of authentication policies bound to working groups
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置Collections of authentication policies bound to working groups
                     * @param _policySet Collections of authentication policies bound to working groups
                     * 
                     */
                    void SetPolicySet(const std::vector<Policy>& _policySet);

                    /**
                     * 判断参数 PolicySet 是否已赋值
                     * @return PolicySet 是否已赋值
                     * 
                     */
                    bool PolicySetHasBeenSet() const;

                    /**
                     * 获取Collection of IDs of users to be bound to working groups
                     * @return UserIds Collection of IDs of users to be bound to working groups
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置Collection of IDs of users to be bound to working groups
                     * @param _userIds Collection of IDs of users to be bound to working groups
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                private:

                    /**
                     * Working group name
                     */
                    std::string m_workGroupName;
                    bool m_workGroupNameHasBeenSet;

                    /**
                     * Working group description
                     */
                    std::string m_workGroupDescription;
                    bool m_workGroupDescriptionHasBeenSet;

                    /**
                     * Collections of authentication policies bound to working groups
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * Collection of IDs of users to be bound to working groups
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEWORKGROUPREQUEST_H_
