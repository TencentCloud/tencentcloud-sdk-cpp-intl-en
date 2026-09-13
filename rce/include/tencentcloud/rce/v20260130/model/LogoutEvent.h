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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_LOGOUTEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_LOGOUTEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/User.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * Logout event details
                */
                class LogoutEvent : public AbstractModel
                {
                public:
                    LogoutEvent();
                    ~LogoutEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The detail information of the user</p>
                     * @return UserInfo <p>The detail information of the user</p>
                     * 
                     */
                    User GetUserInfo() const;

                    /**
                     * 设置<p>The detail information of the user</p>
                     * @param _userInfo <p>The detail information of the user</p>
                     * 
                     */
                    void SetUserInfo(const User& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取<p>The user name entered when the user logged in</p>
                     * @return UserLoginName <p>The user name entered when the user logged in</p>
                     * 
                     */
                    std::string GetUserLoginName() const;

                    /**
                     * 设置<p>The user name entered when the user logged in</p>
                     * @param _userLoginName <p>The user name entered when the user logged in</p>
                     * 
                     */
                    void SetUserLoginName(const std::string& _userLoginName);

                    /**
                     * 判断参数 UserLoginName 是否已赋值
                     * @return UserLoginName 是否已赋值
                     * 
                     */
                    bool UserLoginNameHasBeenSet() const;

                    /**
                     * 获取<p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * @return Cust <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * @param _cust <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>The detail information of the user</p>
                     */
                    User m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * <p>The user name entered when the user logged in</p>
                     */
                    std::string m_userLoginName;
                    bool m_userLoginNameHasBeenSet;

                    /**
                     * <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_LOGOUTEVENT_H_
