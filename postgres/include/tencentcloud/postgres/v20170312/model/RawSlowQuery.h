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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_RAWSLOWQUERY_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_RAWSLOWQUERY_H_

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
                * The list of slow query details returned by the `DescribeSlowQueryList` API
                */
                class RawSlowQuery : public AbstractModel
                {
                public:
                    RawSlowQuery();
                    ~RawSlowQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Slow query statement
                     * @return RawQuery Slow query statement
                     * 
                     */
                    std::string GetRawQuery() const;

                    /**
                     * 设置Slow query statement
                     * @param _rawQuery Slow query statement
                     * 
                     */
                    void SetRawQuery(const std::string& _rawQuery);

                    /**
                     * 判断参数 RawQuery 是否已赋值
                     * @return RawQuery 是否已赋值
                     * 
                     */
                    bool RawQueryHasBeenSet() const;

                    /**
                     * 获取The database queried by the slow query statement
                     * @return DatabaseName The database queried by the slow query statement
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置The database queried by the slow query statement
                     * @param _databaseName The database queried by the slow query statement
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取The execution time of the slow query statement
                     * @return Duration The execution time of the slow query statement
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置The execution time of the slow query statement
                     * @param _duration The execution time of the slow query statement
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取The client that executes the slow query statement
                     * @return ClientAddr The client that executes the slow query statement
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置The client that executes the slow query statement
                     * @param _clientAddr The client that executes the slow query statement
                     * 
                     */
                    void SetClientAddr(const std::string& _clientAddr);

                    /**
                     * 判断参数 ClientAddr 是否已赋值
                     * @return ClientAddr 是否已赋值
                     * 
                     */
                    bool ClientAddrHasBeenSet() const;

                    /**
                     * 获取The name of the user who executes the slow query statement
                     * @return UserName The name of the user who executes the slow query statement
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置The name of the user who executes the slow query statement
                     * @param _userName The name of the user who executes the slow query statement
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
                     * 获取The time when the slow query statement starts to execute
                     * @return SessionStartTime The time when the slow query statement starts to execute
                     * 
                     */
                    std::string GetSessionStartTime() const;

                    /**
                     * 设置The time when the slow query statement starts to execute
                     * @param _sessionStartTime The time when the slow query statement starts to execute
                     * 
                     */
                    void SetSessionStartTime(const std::string& _sessionStartTime);

                    /**
                     * 判断参数 SessionStartTime 是否已赋值
                     * @return SessionStartTime 是否已赋值
                     * 
                     */
                    bool SessionStartTimeHasBeenSet() const;

                private:

                    /**
                     * Slow query statement
                     */
                    std::string m_rawQuery;
                    bool m_rawQueryHasBeenSet;

                    /**
                     * The database queried by the slow query statement
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * The execution time of the slow query statement
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The client that executes the slow query statement
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * The name of the user who executes the slow query statement
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * The time when the slow query statement starts to execute
                     */
                    std::string m_sessionStartTime;
                    bool m_sessionStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_RAWSLOWQUERY_H_
