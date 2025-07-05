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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ACTIONALTERUSERREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ACTIONALTERUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/UserInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ActionAlterUser request structure.
                */
                class ActionAlterUserRequest : public AbstractModel
                {
                public:
                    ActionAlterUserRequest();
                    ~ActionAlterUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User information
                     * @return UserInfo User information
                     * 
                     */
                    UserInfo GetUserInfo() const;

                    /**
                     * 设置User information
                     * @param _userInfo User information
                     * 
                     */
                    void SetUserInfo(const UserInfo& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取API type
                     * @return ApiType API type
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置API type
                     * @param _apiType API type
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取User permission type. 0: ordinary user; 1: administrator.
                     * @return UserPrivilege User permission type. 0: ordinary user; 1: administrator.
                     * 
                     */
                    int64_t GetUserPrivilege() const;

                    /**
                     * 设置User permission type. 0: ordinary user; 1: administrator.
                     * @param _userPrivilege User permission type. 0: ordinary user; 1: administrator.
                     * 
                     */
                    void SetUserPrivilege(const int64_t& _userPrivilege);

                    /**
                     * 判断参数 UserPrivilege 是否已赋值
                     * @return UserPrivilege 是否已赋值
                     * 
                     */
                    bool UserPrivilegeHasBeenSet() const;

                private:

                    /**
                     * User information
                     */
                    UserInfo m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * API type
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * User permission type. 0: ordinary user; 1: administrator.
                     */
                    int64_t m_userPrivilege;
                    bool m_userPrivilegeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ACTIONALTERUSERREQUEST_H_
