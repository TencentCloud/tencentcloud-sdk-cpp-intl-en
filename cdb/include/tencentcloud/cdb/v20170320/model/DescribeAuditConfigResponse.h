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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITCONFIGRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeAuditConfig response structure.
                */
                class DescribeAuditConfigResponse : public AbstractModel
                {
                public:
                    DescribeAuditConfigResponse();
                    ~DescribeAuditConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Audit log retention period. Valid values: [0, 7, 30, 180, 365, 1095, 1825].
                     * @return LogExpireDay Audit log retention period. Valid values: [0, 7, 30, 180, 365, 1095, 1825].
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取Audit log storage type. Valid value: "storage" - Storage type.
                     * @return LogType Audit log storage type. Valid value: "storage" - Storage type.
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Whether the audit service is being disabled. Valid values: "false" - No, "true" - Yes.
                     * @return IsClosing Whether the audit service is being disabled. Valid values: "false" - No, "true" - Yes.
                     * 
                     */
                    std::string GetIsClosing() const;

                    /**
                     * 判断参数 IsClosing 是否已赋值
                     * @return IsClosing 是否已赋值
                     * 
                     */
                    bool IsClosingHasBeenSet() const;

                    /**
                     * 获取Whether the audit service is being enabled. Valid values: "false" - No, "true" - Yes.
                     * @return IsOpening Whether the audit service is being enabled. Valid values: "false" - No, "true" - Yes.
                     * 
                     */
                    std::string GetIsOpening() const;

                    /**
                     * 判断参数 IsOpening 是否已赋值
                     * @return IsOpening 是否已赋值
                     * 
                     */
                    bool IsOpeningHasBeenSet() const;

                    /**
                     * 获取Time when the audit service was activated.
                     * @return CreateTime Time when the audit service was activated.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Audit log retention period. Valid values: [0, 7, 30, 180, 365, 1095, 1825].
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * Audit log storage type. Valid value: "storage" - Storage type.
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Whether the audit service is being disabled. Valid values: "false" - No, "true" - Yes.
                     */
                    std::string m_isClosing;
                    bool m_isClosingHasBeenSet;

                    /**
                     * Whether the audit service is being enabled. Valid values: "false" - No, "true" - Yes.
                     */
                    std::string m_isOpening;
                    bool m_isOpeningHasBeenSet;

                    /**
                     * Time when the audit service was activated.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITCONFIGRESPONSE_H_
