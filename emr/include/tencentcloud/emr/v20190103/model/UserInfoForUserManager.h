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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_USERINFOFORUSERMANAGER_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_USERINFOFORUSERMANAGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Added user information list
                */
                class UserInfoForUserManager : public AbstractModel
                {
                public:
                    UserInfoForUserManager();
                    ~UserInfoForUserManager() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Username
                     * @return UserName Username
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
                     * @param _userName Username
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取The group to which the user belongs
                     * @return UserGroup The group to which the user belongs
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置The group to which the user belongs
                     * @param _userGroup The group to which the user belongs
                     * 
                     */
                    void SetUserGroup(const std::string& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取
                     * @return PassWord 
                     * 
                     */
                    std::string GetPassWord() const;

                    /**
                     * 设置
                     * @param _passWord 
                     * 
                     */
                    void SetPassWord(const std::string& _passWord);

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     * 
                     */
                    bool PassWordHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReMark 
                     * 
                     */
                    std::string GetReMark() const;

                    /**
                     * 设置
                     * @param _reMark 
                     * 
                     */
                    void SetReMark(const std::string& _reMark);

                    /**
                     * 判断参数 ReMark 是否已赋值
                     * @return ReMark 是否已赋值
                     * 
                     */
                    bool ReMarkHasBeenSet() const;

                private:

                    /**
                     * Username
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * The group to which the user belongs
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_reMark;
                    bool m_reMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_USERINFOFORUSERMANAGER_H_
