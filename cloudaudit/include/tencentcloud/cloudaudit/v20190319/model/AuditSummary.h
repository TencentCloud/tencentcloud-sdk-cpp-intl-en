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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_AUDITSUMMARY_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_AUDITSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * Tracking set overview
                */
                class AuditSummary : public AbstractModel
                {
                public:
                    AuditSummary();
                    ~AuditSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tracking set status. 1: enabled, 0: disabled
                     * @return AuditStatus Tracking set status. 1: enabled, 0: disabled
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置Tracking set status. 1: enabled, 0: disabled
                     * @param AuditStatus Tracking set status. 1: enabled, 0: disabled
                     */
                    void SetAuditStatus(const int64_t& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取COS bucket name
                     * @return CosBucketName COS bucket name
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置COS bucket name
                     * @param CosBucketName COS bucket name
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取Tracking set name
                     * @return AuditName Tracking set name
                     */
                    std::string GetAuditName() const;

                    /**
                     * 设置Tracking set name
                     * @param AuditName Tracking set name
                     */
                    void SetAuditName(const std::string& _auditName);

                    /**
                     * 判断参数 AuditName 是否已赋值
                     * @return AuditName 是否已赋值
                     */
                    bool AuditNameHasBeenSet() const;

                    /**
                     * 获取Log prefix
                     * @return LogFilePrefix Log prefix
                     */
                    std::string GetLogFilePrefix() const;

                    /**
                     * 设置Log prefix
                     * @param LogFilePrefix Log prefix
                     */
                    void SetLogFilePrefix(const std::string& _logFilePrefix);

                    /**
                     * 判断参数 LogFilePrefix 是否已赋值
                     * @return LogFilePrefix 是否已赋值
                     */
                    bool LogFilePrefixHasBeenSet() const;

                private:

                    /**
                     * Tracking set status. 1: enabled, 0: disabled
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * COS bucket name
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * Tracking set name
                     */
                    std::string m_auditName;
                    bool m_auditNameHasBeenSet;

                    /**
                     * Log prefix
                     */
                    std::string m_logFilePrefix;
                    bool m_logFilePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_AUDITSUMMARY_H_
