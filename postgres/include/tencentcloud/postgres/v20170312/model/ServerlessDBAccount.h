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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBACCOUNT_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * PostgreSQL for Serverless instance account description
                */
                class ServerlessDBAccount : public AbstractModel
                {
                public:
                    ServerlessDBAccount();
                    ~ServerlessDBAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Username
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBUser Username
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBUser() const;

                    /**
                     * 设置Username
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dBUser Username
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBUser(const std::string& _dBUser);

                    /**
                     * 判断参数 DBUser 是否已赋值
                     * @return DBUser 是否已赋值
                     * 
                     */
                    bool DBUserHasBeenSet() const;

                    /**
                     * 获取Password
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBPassword Password
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBPassword() const;

                    /**
                     * 设置Password
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dBPassword Password
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBPassword(const std::string& _dBPassword);

                    /**
                     * 判断参数 DBPassword 是否已赋值
                     * @return DBPassword 是否已赋值
                     * 
                     */
                    bool DBPasswordHasBeenSet() const;

                    /**
                     * 获取The maximum number of connections
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DBConnLimit The maximum number of connections
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDBConnLimit() const;

                    /**
                     * 设置The maximum number of connections
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dBConnLimit The maximum number of connections
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBConnLimit(const int64_t& _dBConnLimit);

                    /**
                     * 判断参数 DBConnLimit 是否已赋值
                     * @return DBConnLimit 是否已赋值
                     * 
                     */
                    bool DBConnLimitHasBeenSet() const;

                private:

                    /**
                     * Username
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dBUser;
                    bool m_dBUserHasBeenSet;

                    /**
                     * Password
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dBPassword;
                    bool m_dBPasswordHasBeenSet;

                    /**
                     * The maximum number of connections
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_dBConnLimit;
                    bool m_dBConnLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBACCOUNT_H_
