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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DORISSOURCEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DORISSOURCEINFO_H_

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
                * Connection information of external Doris clusters
                */
                class DorisSourceInfo : public AbstractModel
                {
                public:
                    DorisSourceInfo();
                    ~DorisSourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The IP address of fe in the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Host The IP address of fe in the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置The IP address of fe in the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _host The IP address of fe in the Doris cluster
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
                     * 获取The fe port number of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port The fe port number of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置The fe port number of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port The fe port number of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Account of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return User Account of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Account of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _user Account of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Password of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Password Password of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _password Password of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * The IP address of fe in the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * The fe port number of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Account of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Password of the Doris cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DORISSOURCEINFO_H_
