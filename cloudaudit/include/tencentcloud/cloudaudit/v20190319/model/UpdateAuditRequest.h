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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_UPDATEAUDITREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_UPDATEAUDITREQUEST_H_

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
                * Request parameter structure of UpdateAudit
                */
                class UpdateAuditRequest : public AbstractModel
                {
                public:
                    UpdateAuditRequest();
                    ~UpdateAuditRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Queue name, which must begin with a letter and can contain up to 64 letters, digits, and dashes (-). This field is required if the value of IsEnableCmqNotify is 1. If a queue is not newly created, CloudAudit will not verify whether it actually exists. Please enter the name with caution so as to avoid log delivery failure and consequent data loss.
                     * @return CmqQueueName Queue name, which must begin with a letter and can contain up to 64 letters, digits, and dashes (-). This field is required if the value of IsEnableCmqNotify is 1. If a queue is not newly created, CloudAudit will not verify whether it actually exists. Please enter the name with caution so as to avoid log delivery failure and consequent data loss.
                     */
                    std::string GetCmqQueueName() const;

                    /**
                     * 设置Queue name, which must begin with a letter and can contain up to 64 letters, digits, and dashes (-). This field is required if the value of IsEnableCmqNotify is 1. If a queue is not newly created, CloudAudit will not verify whether it actually exists. Please enter the name with caution so as to avoid log delivery failure and consequent data loss.
                     * @param CmqQueueName Queue name, which must begin with a letter and can contain up to 64 letters, digits, and dashes (-). This field is required if the value of IsEnableCmqNotify is 1. If a queue is not newly created, CloudAudit will not verify whether it actually exists. Please enter the name with caution so as to avoid log delivery failure and consequent data loss.
                     */
                    void SetCmqQueueName(const std::string& _cmqQueueName);

                    /**
                     * 判断参数 CmqQueueName 是否已赋值
                     * @return CmqQueueName 是否已赋值
                     */
                    bool CmqQueueNameHasBeenSet() const;

                    /**
                     * 获取Region where the queue is located. Supported CMQ regions can be queried using the ListCmqEnableRegion API. This field is required if the value of IsEnableCmqNotify is 1.
                     * @return CmqRegion Region where the queue is located. Supported CMQ regions can be queried using the ListCmqEnableRegion API. This field is required if the value of IsEnableCmqNotify is 1.
                     */
                    std::string GetCmqRegion() const;

                    /**
                     * 设置Region where the queue is located. Supported CMQ regions can be queried using the ListCmqEnableRegion API. This field is required if the value of IsEnableCmqNotify is 1.
                     * @param CmqRegion Region where the queue is located. Supported CMQ regions can be queried using the ListCmqEnableRegion API. This field is required if the value of IsEnableCmqNotify is 1.
                     */
                    void SetCmqRegion(const std::string& _cmqRegion);

                    /**
                     * 判断参数 CmqRegion 是否已赋值
                     * @return CmqRegion 是否已赋值
                     */
                    bool CmqRegionHasBeenSet() const;

                    /**
                     * 获取User-defined COS bucket name, which can only contain 1-40 lowercase letters (a-z), digits (0-9), and dashes (-) and cannot begin or end with "-". If a bucket is not newly created, CloudAudit will not verify whether it actually exists. Please enter the name with caution so as to avoid log delivery failure and consequent data loss.
                     * @return CosBucketName User-defined COS bucket name, which can only contain 1-40 lowercase letters (a-z), digits (0-9), and dashes (-) and cannot begin or end with "-". If a bucket is not newly created, CloudAudit will not verify whether it actually exists. Please enter the name with caution so as to avoid log delivery failure and consequent data loss.
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置User-defined COS bucket name, which can only contain 1-40 lowercase letters (a-z), digits (0-9), and dashes (-) and cannot begin or end with "-". If a bucket is not newly created, CloudAudit will not verify whether it actually exists. Please enter the name with caution so as to avoid log delivery failure and consequent data loss.
                     * @param CosBucketName User-defined COS bucket name, which can only contain 1-40 lowercase letters (a-z), digits (0-9), and dashes (-) and cannot begin or end with "-". If a bucket is not newly created, CloudAudit will not verify whether it actually exists. Please enter the name with caution so as to avoid log delivery failure and consequent data loss.
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取COS region. Supported regions can be queried using the ListCosEnableRegion API.
                     * @return CosRegion COS region. Supported regions can be queried using the ListCosEnableRegion API.
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置COS region. Supported regions can be queried using the ListCosEnableRegion API.
                     * @param CosRegion COS region. Supported regions can be queried using the ListCosEnableRegion API.
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取Whether to create a COS bucket. 1: yes; 0: no.
                     * @return IsCreateNewBucket Whether to create a COS bucket. 1: yes; 0: no.
                     */
                    int64_t GetIsCreateNewBucket() const;

                    /**
                     * 设置Whether to create a COS bucket. 1: yes; 0: no.
                     * @param IsCreateNewBucket Whether to create a COS bucket. 1: yes; 0: no.
                     */
                    void SetIsCreateNewBucket(const int64_t& _isCreateNewBucket);

                    /**
                     * 判断参数 IsCreateNewBucket 是否已赋值
                     * @return IsCreateNewBucket 是否已赋值
                     */
                    bool IsCreateNewBucketHasBeenSet() const;

                    /**
                     * 获取Whether to create a queue. 1: yes; 0: no. This field is required if the value of IsEnableCmqNotify is 1.
                     * @return IsCreateNewQueue Whether to create a queue. 1: yes; 0: no. This field is required if the value of IsEnableCmqNotify is 1.
                     */
                    int64_t GetIsCreateNewQueue() const;

                    /**
                     * 设置Whether to create a queue. 1: yes; 0: no. This field is required if the value of IsEnableCmqNotify is 1.
                     * @param IsCreateNewQueue Whether to create a queue. 1: yes; 0: no. This field is required if the value of IsEnableCmqNotify is 1.
                     */
                    void SetIsCreateNewQueue(const int64_t& _isCreateNewQueue);

                    /**
                     * 判断参数 IsCreateNewQueue 是否已赋值
                     * @return IsCreateNewQueue 是否已赋值
                     */
                    bool IsCreateNewQueueHasBeenSet() const;

                    /**
                     * 获取Whether to enable CMQ message notification. 1: yes; 0: no. Only CMQ queue service is currently supported. If CMQ message notification is enabled, CloudAudit will deliver your log contents to the designated queue in the specified region in real time.
                     * @return IsEnableCmqNotify Whether to enable CMQ message notification. 1: yes; 0: no. Only CMQ queue service is currently supported. If CMQ message notification is enabled, CloudAudit will deliver your log contents to the designated queue in the specified region in real time.
                     */
                    int64_t GetIsEnableCmqNotify() const;

                    /**
                     * 设置Whether to enable CMQ message notification. 1: yes; 0: no. Only CMQ queue service is currently supported. If CMQ message notification is enabled, CloudAudit will deliver your log contents to the designated queue in the specified region in real time.
                     * @param IsEnableCmqNotify Whether to enable CMQ message notification. 1: yes; 0: no. Only CMQ queue service is currently supported. If CMQ message notification is enabled, CloudAudit will deliver your log contents to the designated queue in the specified region in real time.
                     */
                    void SetIsEnableCmqNotify(const int64_t& _isEnableCmqNotify);

                    /**
                     * 判断参数 IsEnableCmqNotify 是否已赋值
                     * @return IsEnableCmqNotify 是否已赋值
                     */
                    bool IsEnableCmqNotifyHasBeenSet() const;

                    /**
                     * 获取Prefix of a log file, which can only contain 3-40 ASCII letters (a-z; A-Z) and digits (0-9).
                     * @return LogFilePrefix Prefix of a log file, which can only contain 3-40 ASCII letters (a-z; A-Z) and digits (0-9).
                     */
                    std::string GetLogFilePrefix() const;

                    /**
                     * 设置Prefix of a log file, which can only contain 3-40 ASCII letters (a-z; A-Z) and digits (0-9).
                     * @param LogFilePrefix Prefix of a log file, which can only contain 3-40 ASCII letters (a-z; A-Z) and digits (0-9).
                     */
                    void SetLogFilePrefix(const std::string& _logFilePrefix);

                    /**
                     * 判断参数 LogFilePrefix 是否已赋值
                     * @return LogFilePrefix 是否已赋值
                     */
                    bool LogFilePrefixHasBeenSet() const;

                    /**
                     * 获取Manages the read/write attribute of an event. Value range: 1 (read-only), 2 (write-only), 3 (read/write).
                     * @return ReadWriteAttribute Manages the read/write attribute of an event. Value range: 1 (read-only), 2 (write-only), 3 (read/write).
                     */
                    int64_t GetReadWriteAttribute() const;

                    /**
                     * 设置Manages the read/write attribute of an event. Value range: 1 (read-only), 2 (write-only), 3 (read/write).
                     * @param ReadWriteAttribute Manages the read/write attribute of an event. Value range: 1 (read-only), 2 (write-only), 3 (read/write).
                     */
                    void SetReadWriteAttribute(const int64_t& _readWriteAttribute);

                    /**
                     * 判断参数 ReadWriteAttribute 是否已赋值
                     * @return ReadWriteAttribute 是否已赋值
                     */
                    bool ReadWriteAttributeHasBeenSet() const;

                private:

                    /**
                     * Tracking set name
                     */
                    std::string m_auditName;
                    bool m_auditNameHasBeenSet;

                    /**
                     * Queue name, which must begin with a letter and can contain up to 64 letters, digits, and dashes (-). This field is required if the value of IsEnableCmqNotify is 1. If a queue is not newly created, CloudAudit will not verify whether it actually exists. Please enter the name with caution so as to avoid log delivery failure and consequent data loss.
                     */
                    std::string m_cmqQueueName;
                    bool m_cmqQueueNameHasBeenSet;

                    /**
                     * Region where the queue is located. Supported CMQ regions can be queried using the ListCmqEnableRegion API. This field is required if the value of IsEnableCmqNotify is 1.
                     */
                    std::string m_cmqRegion;
                    bool m_cmqRegionHasBeenSet;

                    /**
                     * User-defined COS bucket name, which can only contain 1-40 lowercase letters (a-z), digits (0-9), and dashes (-) and cannot begin or end with "-". If a bucket is not newly created, CloudAudit will not verify whether it actually exists. Please enter the name with caution so as to avoid log delivery failure and consequent data loss.
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * COS region. Supported regions can be queried using the ListCosEnableRegion API.
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * Whether to create a COS bucket. 1: yes; 0: no.
                     */
                    int64_t m_isCreateNewBucket;
                    bool m_isCreateNewBucketHasBeenSet;

                    /**
                     * Whether to create a queue. 1: yes; 0: no. This field is required if the value of IsEnableCmqNotify is 1.
                     */
                    int64_t m_isCreateNewQueue;
                    bool m_isCreateNewQueueHasBeenSet;

                    /**
                     * Whether to enable CMQ message notification. 1: yes; 0: no. Only CMQ queue service is currently supported. If CMQ message notification is enabled, CloudAudit will deliver your log contents to the designated queue in the specified region in real time.
                     */
                    int64_t m_isEnableCmqNotify;
                    bool m_isEnableCmqNotifyHasBeenSet;

                    /**
                     * Prefix of a log file, which can only contain 3-40 ASCII letters (a-z; A-Z) and digits (0-9).
                     */
                    std::string m_logFilePrefix;
                    bool m_logFilePrefixHasBeenSet;

                    /**
                     * Manages the read/write attribute of an event. Value range: 1 (read-only), 2 (write-only), 3 (read/write).
                     */
                    int64_t m_readWriteAttribute;
                    bool m_readWriteAttributeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_UPDATEAUDITREQUEST_H_
