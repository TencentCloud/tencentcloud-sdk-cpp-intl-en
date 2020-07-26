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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITRESPONSE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * Return parameter structure of DescribeAudit
                */
                class DescribeAuditResponse : public AbstractModel
                {
                public:
                    DescribeAuditResponse();
                    ~DescribeAuditResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Tracking set name.
                     * @return AuditName Tracking set name.
                     */
                    std::string GetAuditName() const;

                    /**
                     * 判断参数 AuditName 是否已赋值
                     * @return AuditName 是否已赋值
                     */
                    bool AuditNameHasBeenSet() const;

                    /**
                     * 获取Tracking set status. Value range: 1 (enabled), 0 (disabled).
                     * @return AuditStatus Tracking set status. Value range: 1 (enabled), 0 (disabled).
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取Queue name.
                     * @return CmqQueueName Queue name.
                     */
                    std::string GetCmqQueueName() const;

                    /**
                     * 判断参数 CmqQueueName 是否已赋值
                     * @return CmqQueueName 是否已赋值
                     */
                    bool CmqQueueNameHasBeenSet() const;

                    /**
                     * 获取Region where the queue is located.
                     * @return CmqRegion Region where the queue is located.
                     */
                    std::string GetCmqRegion() const;

                    /**
                     * 判断参数 CmqRegion 是否已赋值
                     * @return CmqRegion 是否已赋值
                     */
                    bool CmqRegionHasBeenSet() const;

                    /**
                     * 获取COS bucket name.
                     * @return CosBucketName COS bucket name.
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取Region where the COS bucket is located.
                     * @return CosRegion Region where the COS bucket is located.
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取Whether to enable CMQ message notification. 1: yes; 0: no.
                     * @return IsEnableCmqNotify Whether to enable CMQ message notification. 1: yes; 0: no.
                     */
                    int64_t GetIsEnableCmqNotify() const;

                    /**
                     * 判断参数 IsEnableCmqNotify 是否已赋值
                     * @return IsEnableCmqNotify 是否已赋值
                     */
                    bool IsEnableCmqNotifyHasBeenSet() const;

                    /**
                     * 获取Log prefix.
                     * @return LogFilePrefix Log prefix.
                     */
                    std::string GetLogFilePrefix() const;

                    /**
                     * 判断参数 LogFilePrefix 是否已赋值
                     * @return LogFilePrefix 是否已赋值
                     */
                    bool LogFilePrefixHasBeenSet() const;

                    /**
                     * 获取Manages the read/write attribute of an event. Value range: 1 (read-only), 2 (write-only), 3 (read/write)
                     * @return ReadWriteAttribute Manages the read/write attribute of an event. Value range: 1 (read-only), 2 (write-only), 3 (read/write)
                     */
                    int64_t GetReadWriteAttribute() const;

                    /**
                     * 判断参数 ReadWriteAttribute 是否已赋值
                     * @return ReadWriteAttribute 是否已赋值
                     */
                    bool ReadWriteAttributeHasBeenSet() const;

                private:

                    /**
                     * Tracking set name.
                     */
                    std::string m_auditName;
                    bool m_auditNameHasBeenSet;

                    /**
                     * Tracking set status. Value range: 1 (enabled), 0 (disabled).
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * Queue name.
                     */
                    std::string m_cmqQueueName;
                    bool m_cmqQueueNameHasBeenSet;

                    /**
                     * Region where the queue is located.
                     */
                    std::string m_cmqRegion;
                    bool m_cmqRegionHasBeenSet;

                    /**
                     * COS bucket name.
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * Region where the COS bucket is located.
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * Whether to enable CMQ message notification. 1: yes; 0: no.
                     */
                    int64_t m_isEnableCmqNotify;
                    bool m_isEnableCmqNotifyHasBeenSet;

                    /**
                     * Log prefix.
                     */
                    std::string m_logFilePrefix;
                    bool m_logFilePrefixHasBeenSet;

                    /**
                     * Manages the read/write attribute of an event. Value range: 1 (read-only), 2 (write-only), 3 (read/write)
                     */
                    int64_t m_readWriteAttribute;
                    bool m_readWriteAttributeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITRESPONSE_H_
