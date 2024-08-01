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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_USERDETAILINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_USERDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policys.h>
#include <tencentcloud/dlc/v20210125/model/WorkGroups.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Detailed user information
                */
                class UserDetailInfo : public AbstractModel
                {
                public:
                    UserDetailInfo();
                    ~UserDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserId User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userId User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Types of returned information. Group: returned information about the working group where the current user is; DataAuth: returned information about the current user's data permission; EngineAuth: returned information about the current user's engine permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Types of returned information. Group: returned information about the working group where the current user is; DataAuth: returned information about the current user's data permission; EngineAuth: returned information about the current user's engine permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Types of returned information. Group: returned information about the working group where the current user is; DataAuth: returned information about the current user's data permission; EngineAuth: returned information about the current user's engine permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Types of returned information. Group: returned information about the working group where the current user is; DataAuth: returned information about the current user's data permission; EngineAuth: returned information about the current user's engine permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Types of users. ADMIN: administrators; COMMON: general users
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserType Types of users. ADMIN: administrators; COMMON: general users
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置Types of users. ADMIN: administrators; COMMON: general users
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userType Types of users. ADMIN: administrators; COMMON: general users
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取User description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserDescription User description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserDescription() const;

                    /**
                     * 设置User description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userDescription User description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserDescription(const std::string& _userDescription);

                    /**
                     * 判断参数 UserDescription 是否已赋值
                     * @return UserDescription 是否已赋值
                     * 
                     */
                    bool UserDescriptionHasBeenSet() const;

                    /**
                     * 获取Collection of data permission information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataPolicyInfo Collection of data permission information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Policys GetDataPolicyInfo() const;

                    /**
                     * 设置Collection of data permission information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataPolicyInfo Collection of data permission information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataPolicyInfo(const Policys& _dataPolicyInfo);

                    /**
                     * 判断参数 DataPolicyInfo 是否已赋值
                     * @return DataPolicyInfo 是否已赋值
                     * 
                     */
                    bool DataPolicyInfoHasBeenSet() const;

                    /**
                     * 获取Collection of engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnginePolicyInfo Collection of engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Policys GetEnginePolicyInfo() const;

                    /**
                     * 设置Collection of engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enginePolicyInfo Collection of engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnginePolicyInfo(const Policys& _enginePolicyInfo);

                    /**
                     * 判断参数 EnginePolicyInfo 是否已赋值
                     * @return EnginePolicyInfo 是否已赋值
                     * 
                     */
                    bool EnginePolicyInfoHasBeenSet() const;

                    /**
                     * 获取Information about collections of working groups bound to the user
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkGroupInfo Information about collections of working groups bound to the user
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    WorkGroups GetWorkGroupInfo() const;

                    /**
                     * 设置Information about collections of working groups bound to the user
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workGroupInfo Information about collections of working groups bound to the user
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkGroupInfo(const WorkGroups& _workGroupInfo);

                    /**
                     * 判断参数 WorkGroupInfo 是否已赋值
                     * @return WorkGroupInfo 是否已赋值
                     * 
                     */
                    bool WorkGroupInfoHasBeenSet() const;

                    /**
                     * 获取User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserAlias User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userAlias User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                    /**
                     * 获取Collection of filtered rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RowFilterInfo Collection of filtered rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Policys GetRowFilterInfo() const;

                    /**
                     * 设置Collection of filtered rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rowFilterInfo Collection of filtered rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRowFilterInfo(const Policys& _rowFilterInfo);

                    /**
                     * 判断参数 RowFilterInfo 是否已赋值
                     * @return RowFilterInfo 是否已赋值
                     * 
                     */
                    bool RowFilterInfoHasBeenSet() const;

                private:

                    /**
                     * User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Types of returned information. Group: returned information about the working group where the current user is; DataAuth: returned information about the current user's data permission; EngineAuth: returned information about the current user's engine permission
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Types of users. ADMIN: administrators; COMMON: general users
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * User description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userDescription;
                    bool m_userDescriptionHasBeenSet;

                    /**
                     * Collection of data permission information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Policys m_dataPolicyInfo;
                    bool m_dataPolicyInfoHasBeenSet;

                    /**
                     * Collection of engine permissions
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Policys m_enginePolicyInfo;
                    bool m_enginePolicyInfoHasBeenSet;

                    /**
                     * Information about collections of working groups bound to the user
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WorkGroups m_workGroupInfo;
                    bool m_workGroupInfoHasBeenSet;

                    /**
                     * User alias
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * Collection of filtered rows
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Policys m_rowFilterInfo;
                    bool m_rowFilterInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_USERDETAILINFO_H_
