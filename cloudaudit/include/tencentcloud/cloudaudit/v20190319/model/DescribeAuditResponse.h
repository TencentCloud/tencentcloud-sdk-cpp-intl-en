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
                * DescribeAudit response structure.
                */
                class DescribeAuditResponse : public AbstractModel
                {
                public:
                    DescribeAuditResponse();
                    ~DescribeAuditResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to enable CMQ message notification. 1: Yes; 0: No.
                     * @return IsEnableCmqNotify Whether to enable CMQ message notification. 1: Yes; 0: No.
                     * 
                     */
                    int64_t GetIsEnableCmqNotify() const;

                    /**
                     * 判断参数 IsEnableCmqNotify 是否已赋值
                     * @return IsEnableCmqNotify 是否已赋值
                     * 
                     */
                    bool IsEnableCmqNotifyHasBeenSet() const;

                    /**
                     * 获取Manages the read/write attribute of event. Valid values: 1 (read-only), 2 (write-only), 3 (read/write)
                     * @return ReadWriteAttribute Manages the read/write attribute of event. Valid values: 1 (read-only), 2 (write-only), 3 (read/write)
                     * 
                     */
                    int64_t GetReadWriteAttribute() const;

                    /**
                     * 判断参数 ReadWriteAttribute 是否已赋值
                     * @return ReadWriteAttribute 是否已赋值
                     * 
                     */
                    bool ReadWriteAttributeHasBeenSet() const;

                    /**
                     * 获取Globally unique CMK ID.
                     * @return KeyId Globally unique CMK ID.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Tracking set status. 1: enabled, 0: disabled.
                     * @return AuditStatus Tracking set status. 1: enabled, 0: disabled.
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取Tracking set name.
                     * @return AuditName Tracking set name.
                     * 
                     */
                    std::string GetAuditName() const;

                    /**
                     * 判断参数 AuditName 是否已赋值
                     * @return AuditName 是否已赋值
                     * 
                     */
                    bool AuditNameHasBeenSet() const;

                    /**
                     * 获取COS bucket region.
                     * @return CosRegion COS bucket region.
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取Queue name.
                     * @return CmqQueueName Queue name.
                     * 
                     */
                    std::string GetCmqQueueName() const;

                    /**
                     * 判断参数 CmqQueueName 是否已赋值
                     * @return CmqQueueName 是否已赋值
                     * 
                     */
                    bool CmqQueueNameHasBeenSet() const;

                    /**
                     * 获取CMK alias.
                     * @return KmsAlias CMK alias.
                     * 
                     */
                    std::string GetKmsAlias() const;

                    /**
                     * 判断参数 KmsAlias 是否已赋值
                     * @return KmsAlias 是否已赋值
                     * 
                     */
                    bool KmsAliasHasBeenSet() const;

                    /**
                     * 获取KMS region.
                     * @return KmsRegion KMS region.
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     * 
                     */
                    bool KmsRegionHasBeenSet() const;

                    /**
                     * 获取Whether to enable KMS encryption. 1: Yes, 0: No. If KMS encryption is enabled, the data will be encrypted when it is delivered to COS.
                     * @return IsEnableKmsEncry Whether to enable KMS encryption. 1: Yes, 0: No. If KMS encryption is enabled, the data will be encrypted when it is delivered to COS.
                     * 
                     */
                    int64_t GetIsEnableKmsEncry() const;

                    /**
                     * 判断参数 IsEnableKmsEncry 是否已赋值
                     * @return IsEnableKmsEncry 是否已赋值
                     * 
                     */
                    bool IsEnableKmsEncryHasBeenSet() const;

                    /**
                     * 获取COS bucket name.
                     * @return CosBucketName COS bucket name.
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取Queue region.
                     * @return CmqRegion Queue region.
                     * 
                     */
                    std::string GetCmqRegion() const;

                    /**
                     * 判断参数 CmqRegion 是否已赋值
                     * @return CmqRegion 是否已赋值
                     * 
                     */
                    bool CmqRegionHasBeenSet() const;

                    /**
                     * 获取Log prefix.
                     * @return LogFilePrefix Log prefix.
                     * 
                     */
                    std::string GetLogFilePrefix() const;

                    /**
                     * 判断参数 LogFilePrefix 是否已赋值
                     * @return LogFilePrefix 是否已赋值
                     * 
                     */
                    bool LogFilePrefixHasBeenSet() const;

                private:

                    /**
                     * Whether to enable CMQ message notification. 1: Yes; 0: No.
                     */
                    int64_t m_isEnableCmqNotify;
                    bool m_isEnableCmqNotifyHasBeenSet;

                    /**
                     * Manages the read/write attribute of event. Valid values: 1 (read-only), 2 (write-only), 3 (read/write)
                     */
                    int64_t m_readWriteAttribute;
                    bool m_readWriteAttributeHasBeenSet;

                    /**
                     * Globally unique CMK ID.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Tracking set status. 1: enabled, 0: disabled.
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * Tracking set name.
                     */
                    std::string m_auditName;
                    bool m_auditNameHasBeenSet;

                    /**
                     * COS bucket region.
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * Queue name.
                     */
                    std::string m_cmqQueueName;
                    bool m_cmqQueueNameHasBeenSet;

                    /**
                     * CMK alias.
                     */
                    std::string m_kmsAlias;
                    bool m_kmsAliasHasBeenSet;

                    /**
                     * KMS region.
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                    /**
                     * Whether to enable KMS encryption. 1: Yes, 0: No. If KMS encryption is enabled, the data will be encrypted when it is delivered to COS.
                     */
                    int64_t m_isEnableKmsEncry;
                    bool m_isEnableKmsEncryHasBeenSet;

                    /**
                     * COS bucket name.
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * Queue region.
                     */
                    std::string m_cmqRegion;
                    bool m_cmqRegionHasBeenSet;

                    /**
                     * Log prefix.
                     */
                    std::string m_logFilePrefix;
                    bool m_logFilePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITRESPONSE_H_
