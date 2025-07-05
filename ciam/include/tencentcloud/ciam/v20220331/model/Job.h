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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_JOB_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/ErrorDetails.h>
#include <tencentcloud/ciam/v20220331/model/FailedUsers.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * Task details
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return Id Task ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Task ID
                     * @param _id Task ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Task status

<li> **PENDING** </li>  Pending
<li> **PROCESSING** </li>  Executing
<li> **COMPLETED** </li>  Completed
<li> **FAILED** </li>  Failed
                     * @return Status Task status

<li> **PENDING** </li>  Pending
<li> **PROCESSING** </li>  Executing
<li> **COMPLETED** </li>  Completed
<li> **FAILED** </li>  Failed
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status

<li> **PENDING** </li>  Pending
<li> **PROCESSING** </li>  Executing
<li> **COMPLETED** </li>  Completed
<li> **FAILED** </li>  Failed
                     * @param _status Task status

<li> **PENDING** </li>  Pending
<li> **PROCESSING** </li>  Executing
<li> **COMPLETED** </li>  Completed
<li> **FAILED** </li>  Failed
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task type

<li> **IMPORT_USER** </li>  User import
<li> **EXPORT_USER** </li>  User export
                     * @return Type Task type

<li> **IMPORT_USER** </li>  User import
<li> **EXPORT_USER** </li>  User export
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type

<li> **IMPORT_USER** </li>  User import
<li> **EXPORT_USER** </li>  User export
                     * @param _type Task type

<li> **IMPORT_USER** </li>  User import
<li> **EXPORT_USER** </li>  User export
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
                     * 获取Task creation time
                     * @return CreatedDate Task creation time
                     * 
                     */
                    int64_t GetCreatedDate() const;

                    /**
                     * 设置Task creation time
                     * @param _createdDate Task creation time
                     * 
                     */
                    void SetCreatedDate(const int64_t& _createdDate);

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     * 
                     */
                    bool CreatedDateHasBeenSet() const;

                    /**
                     * 获取Data type of the task

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Format Data type of the task

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Data type of the task

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _format Data type of the task

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Task result download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Location Task result download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Task result download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _location Task result download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Failure details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorDetails Failure details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ErrorDetails> GetErrorDetails() const;

                    /**
                     * 设置Failure details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errorDetails Failure details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorDetails(const std::vector<ErrorDetails>& _errorDetails);

                    /**
                     * 判断参数 ErrorDetails 是否已赋值
                     * @return ErrorDetails 是否已赋值
                     * 
                     */
                    bool ErrorDetailsHasBeenSet() const;

                    /**
                     * 获取Failed user
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailedUsers Failed user
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FailedUsers> GetFailedUsers() const;

                    /**
                     * 设置Failed user
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _failedUsers Failed user
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFailedUsers(const std::vector<FailedUsers>& _failedUsers);

                    /**
                     * 判断参数 FailedUsers 是否已赋值
                     * @return FailedUsers 是否已赋值
                     * 
                     */
                    bool FailedUsersHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Task status

<li> **PENDING** </li>  Pending
<li> **PROCESSING** </li>  Executing
<li> **COMPLETED** </li>  Completed
<li> **FAILED** </li>  Failed
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task type

<li> **IMPORT_USER** </li>  User import
<li> **EXPORT_USER** </li>  User export
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Task creation time
                     */
                    int64_t m_createdDate;
                    bool m_createdDateHasBeenSet;

                    /**
                     * Data type of the task

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Task result download address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Failure details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ErrorDetails> m_errorDetails;
                    bool m_errorDetailsHasBeenSet;

                    /**
                     * Failed user
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<FailedUsers> m_failedUsers;
                    bool m_failedUsersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_JOB_H_
