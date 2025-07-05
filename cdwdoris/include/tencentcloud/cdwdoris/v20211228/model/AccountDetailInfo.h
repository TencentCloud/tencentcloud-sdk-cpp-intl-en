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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ACCOUNTDETAILINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ACCOUNTDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Account details
                */
                class AccountDetailInfo : public AbstractModel
                {
                public:
                    AccountDetailInfo();
                    ~AccountDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Username

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userName Username

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Host name or IP address, which indicates the host to which the user belongs.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Host Host name or IP address, which indicates the host to which the user belongs.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host name or IP address, which indicates the host to which the user belongs.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _host Host name or IP address, which indicates the host to which the user belongs.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取User description information

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserDescription User description information

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserDescription() const;

                    /**
                     * 设置User description information

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userDescription User description information

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

                private:

                    /**
                     * Username

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Host name or IP address, which indicates the host to which the user belongs.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * User description information

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userDescription;
                    bool m_userDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ACCOUNTDETAILINFO_H_
