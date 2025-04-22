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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_ERRORLOGDETAIL_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_ERRORLOGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Error log details
                */
                class ErrorLogDetail : public AbstractModel
                {
                public:
                    ErrorLogDetail();
                    ~ErrorLogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Username.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userName Username.

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
                     * 获取Database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Database Database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _database Database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取The time an error was reported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorTime The time an error was reported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorTime() const;

                    /**
                     * 设置The time an error was reported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorTime The time an error was reported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorTime(const std::string& _errorTime);

                    /**
                     * 判断参数 ErrorTime 是否已赋值
                     * @return ErrorTime 是否已赋值
                     * 
                     */
                    bool ErrorTimeHasBeenSet() const;

                    /**
                     * 获取Error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMessage Error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorMessage Error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * Username.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Database.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * The time an error was reported.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorTime;
                    bool m_errorTimeHasBeenSet;

                    /**
                     * Error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_ERRORLOGDETAIL_H_
