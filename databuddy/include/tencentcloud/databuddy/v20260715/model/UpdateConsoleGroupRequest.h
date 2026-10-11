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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATECONSOLEGROUPREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATECONSOLEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * UpdateConsoleGroup request structure.
                */
                class UpdateConsoleGroupRequest : public AbstractModel
                {
                public:
                    UpdateConsoleGroupRequest();
                    ~UpdateConsoleGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>User group ID, which can be obtained through the ListConsoleGroups API</p>
                     * @return GroupId <p>User group ID, which can be obtained through the ListConsoleGroups API</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>User group ID, which can be obtained through the ListConsoleGroups API</p>
                     * @param _groupId <p>User group ID, which can be obtained through the ListConsoleGroups API</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Modification Flag: USER_GROUP_OPER_TYPE_ADD_USER(1)=add member, USER_GROUP_OPER_TYPE_DELETE_USER(2)=delete member, USER_GROUP_OPER_TYPE_BASIC_INFO(3)=basic information (alias and description)</p>
                     * @return OperType <p>Modification Flag: USER_GROUP_OPER_TYPE_ADD_USER(1)=add member, USER_GROUP_OPER_TYPE_DELETE_USER(2)=delete member, USER_GROUP_OPER_TYPE_BASIC_INFO(3)=basic information (alias and description)</p>
                     * 
                     */
                    int64_t GetOperType() const;

                    /**
                     * 设置<p>Modification Flag: USER_GROUP_OPER_TYPE_ADD_USER(1)=add member, USER_GROUP_OPER_TYPE_DELETE_USER(2)=delete member, USER_GROUP_OPER_TYPE_BASIC_INFO(3)=basic information (alias and description)</p>
                     * @param _operType <p>Modification Flag: USER_GROUP_OPER_TYPE_ADD_USER(1)=add member, USER_GROUP_OPER_TYPE_DELETE_USER(2)=delete member, USER_GROUP_OPER_TYPE_BASIC_INFO(3)=basic information (alias and description)</p>
                     * 
                     */
                    void SetOperType(const int64_t& _operType);

                    /**
                     * 判断参数 OperType 是否已赋值
                     * @return OperType 是否已赋值
                     * 
                     */
                    bool OperTypeHasBeenSet() const;

                    /**
                     * 获取<p>User group name</p>
                     * @return GroupName <p>User group name</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>User group name</p>
                     * @param _groupName <p>User group name</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>User group alias.</p>
                     * @return GroupNickname <p>User group alias.</p>
                     * 
                     */
                    std::string GetGroupNickname() const;

                    /**
                     * 设置<p>User group alias.</p>
                     * @param _groupNickname <p>User group alias.</p>
                     * 
                     */
                    void SetGroupNickname(const std::string& _groupNickname);

                    /**
                     * 判断参数 GroupNickname 是否已赋值
                     * @return GroupNickname 是否已赋值
                     * 
                     */
                    bool GroupNicknameHasBeenSet() const;

                    /**
                     * 获取<p>User group description.</p>
                     * @return Description <p>User group description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>User group description.</p>
                     * @param _description <p>User group description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Member UIN list (used when OperType is add/delete member), up to 100 at a time</p>
                     * @return UserUins <p>Member UIN list (used when OperType is add/delete member), up to 100 at a time</p>
                     * 
                     */
                    std::vector<std::string> GetUserUins() const;

                    /**
                     * 设置<p>Member UIN list (used when OperType is add/delete member), up to 100 at a time</p>
                     * @param _userUins <p>Member UIN list (used when OperType is add/delete member), up to 100 at a time</p>
                     * 
                     */
                    void SetUserUins(const std::vector<std::string>& _userUins);

                    /**
                     * 判断参数 UserUins 是否已赋值
                     * @return UserUins 是否已赋值
                     * 
                     */
                    bool UserUinsHasBeenSet() const;

                private:

                    /**
                     * <p>User group ID, which can be obtained through the ListConsoleGroups API</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>Modification Flag: USER_GROUP_OPER_TYPE_ADD_USER(1)=add member, USER_GROUP_OPER_TYPE_DELETE_USER(2)=delete member, USER_GROUP_OPER_TYPE_BASIC_INFO(3)=basic information (alias and description)</p>
                     */
                    int64_t m_operType;
                    bool m_operTypeHasBeenSet;

                    /**
                     * <p>User group name</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>User group alias.</p>
                     */
                    std::string m_groupNickname;
                    bool m_groupNicknameHasBeenSet;

                    /**
                     * <p>User group description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Member UIN list (used when OperType is add/delete member), up to 100 at a time</p>
                     */
                    std::vector<std::string> m_userUins;
                    bool m_userUinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATECONSOLEGROUPREQUEST_H_
