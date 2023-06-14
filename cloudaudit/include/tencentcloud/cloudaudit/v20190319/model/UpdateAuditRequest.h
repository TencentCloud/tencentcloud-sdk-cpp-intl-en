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
                * UpdateAudit request structure.
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
                     * 
                     */
                    std::string GetAuditName() const;

                    /**
                     * 设置Tracking set name
                     * @param _auditName Tracking set name
                     * 
                     */
                    void SetAuditName(const std::string& _auditName);

                    /**
                     * 判断参数 AuditName 是否已赋值
                     * @return AuditName 是否已赋值
                     * 
                     */
                    bool AuditNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable CMQ message notification. 1: Yes; 0: No. Only CMQ queue service is currently supported. If CMQ message notification is enabled, CloudAudit will deliver your log contents to the designated queue in the specified region in real time.
                     * @return IsEnableCmqNotify Whether to enable CMQ message notification. 1: Yes; 0: No. Only CMQ queue service is currently supported. If CMQ message notification is enabled, CloudAudit will deliver your log contents to the designated queue in the specified region in real time.
                     * 
                     */
                    int64_t GetIsEnableCmqNotify() const;

                    /**
                     * 设置Whether to enable CMQ message notification. 1: Yes; 0: No. Only CMQ queue service is currently supported. If CMQ message notification is enabled, CloudAudit will deliver your log contents to the designated queue in the specified region in real time.
                     * @param _isEnableCmqNotify Whether to enable CMQ message notification. 1: Yes; 0: No. Only CMQ queue service is currently supported. If CMQ message notification is enabled, CloudAudit will deliver your log contents to the designated queue in the specified region in real time.
                     * 
                     */
                    void SetIsEnableCmqNotify(const int64_t& _isEnableCmqNotify);

                    /**
                     * 判断参数 IsEnableCmqNotify 是否已赋值
                     * @return IsEnableCmqNotify 是否已赋值
                     * 
                     */
                    bool IsEnableCmqNotifyHasBeenSet() const;

                    /**
                     * 获取Manages the read/write attribute of event. Valid values: 1 (read-only), 2 (write-only), 3 (read/write).
                     * @return ReadWriteAttribute Manages the read/write attribute of event. Valid values: 1 (read-only), 2 (write-only), 3 (read/write).
                     * 
                     */
                    int64_t GetReadWriteAttribute() const;

                    /**
                     * 设置Manages the read/write attribute of event. Valid values: 1 (read-only), 2 (write-only), 3 (read/write).
                     * @param _readWriteAttribute Manages the read/write attribute of event. Valid values: 1 (read-only), 2 (write-only), 3 (read/write).
                     * 
                     */
                    void SetReadWriteAttribute(const int64_t& _readWriteAttribute);

                    /**
                     * 判断参数 ReadWriteAttribute 是否已赋值
                     * @return ReadWriteAttribute 是否已赋值
                     * 
                     */
                    bool ReadWriteAttributeHasBeenSet() const;

                    /**
                     * 获取Globally unique ID of the CMK. This value is required if it is not a newly created KMS element. It can be obtained through `ListKeyAliasByRegion`. CloudAudit will not verify the validity of the `KeyId`. Enter it carefully to avoid data loss.
                     * @return KeyId Globally unique ID of the CMK. This value is required if it is not a newly created KMS element. It can be obtained through `ListKeyAliasByRegion`. CloudAudit will not verify the validity of the `KeyId`. Enter it carefully to avoid data loss.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Globally unique ID of the CMK. This value is required if it is not a newly created KMS element. It can be obtained through `ListKeyAliasByRegion`. CloudAudit will not verify the validity of the `KeyId`. Enter it carefully to avoid data loss.
                     * @param _keyId Globally unique ID of the CMK. This value is required if it is not a newly created KMS element. It can be obtained through `ListKeyAliasByRegion`. CloudAudit will not verify the validity of the `KeyId`. Enter it carefully to avoid data loss.
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取COS region. Supported regions can be queried through the `ListCosEnableRegion` API.
                     * @return CosRegion COS region. Supported regions can be queried through the `ListCosEnableRegion` API.
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置COS region. Supported regions can be queried through the `ListCosEnableRegion` API.
                     * @param _cosRegion COS region. Supported regions can be queried through the `ListCosEnableRegion` API.
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取Queue name, which must begin with a letter and can contain up to 64 letters, digits, and dashes (-). This field is required if the value of `IsEnableCmqNotify` is 1. If a queue is not newly created, CloudAudit will not verify whether it actually exists. Enter the name with caution to avoid log delivery failure and consequent data loss.
                     * @return CmqQueueName Queue name, which must begin with a letter and can contain up to 64 letters, digits, and dashes (-). This field is required if the value of `IsEnableCmqNotify` is 1. If a queue is not newly created, CloudAudit will not verify whether it actually exists. Enter the name with caution to avoid log delivery failure and consequent data loss.
                     * 
                     */
                    std::string GetCmqQueueName() const;

                    /**
                     * 设置Queue name, which must begin with a letter and can contain up to 64 letters, digits, and dashes (-). This field is required if the value of `IsEnableCmqNotify` is 1. If a queue is not newly created, CloudAudit will not verify whether it actually exists. Enter the name with caution to avoid log delivery failure and consequent data loss.
                     * @param _cmqQueueName Queue name, which must begin with a letter and can contain up to 64 letters, digits, and dashes (-). This field is required if the value of `IsEnableCmqNotify` is 1. If a queue is not newly created, CloudAudit will not verify whether it actually exists. Enter the name with caution to avoid log delivery failure and consequent data loss.
                     * 
                     */
                    void SetCmqQueueName(const std::string& _cmqQueueName);

                    /**
                     * 判断参数 CmqQueueName 是否已赋值
                     * @return CmqQueueName 是否已赋值
                     * 
                     */
                    bool CmqQueueNameHasBeenSet() const;

                    /**
                     * 获取Whether to create a COS bucket. 1: Yes; 0: No.
                     * @return IsCreateNewBucket Whether to create a COS bucket. 1: Yes; 0: No.
                     * 
                     */
                    int64_t GetIsCreateNewBucket() const;

                    /**
                     * 设置Whether to create a COS bucket. 1: Yes; 0: No.
                     * @param _isCreateNewBucket Whether to create a COS bucket. 1: Yes; 0: No.
                     * 
                     */
                    void SetIsCreateNewBucket(const int64_t& _isCreateNewBucket);

                    /**
                     * 判断参数 IsCreateNewBucket 是否已赋值
                     * @return IsCreateNewBucket 是否已赋值
                     * 
                     */
                    bool IsCreateNewBucketHasBeenSet() const;

                    /**
                     * 获取KMS region. Currently supported regions can be obtained through `ListKmsEnableRegion`. This must be the same as the COS region.
                     * @return KmsRegion KMS region. Currently supported regions can be obtained through `ListKmsEnableRegion`. This must be the same as the COS region.
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 设置KMS region. Currently supported regions can be obtained through `ListKmsEnableRegion`. This must be the same as the COS region.
                     * @param _kmsRegion KMS region. Currently supported regions can be obtained through `ListKmsEnableRegion`. This must be the same as the COS region.
                     * 
                     */
                    void SetKmsRegion(const std::string& _kmsRegion);

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     * 
                     */
                    bool KmsRegionHasBeenSet() const;

                    /**
                     * 获取Whether to enable KMS encryption. 1: Yes, 0: No. If KMS encryption is enabled, the data will be encrypted when delivered to COS.
                     * @return IsEnableKmsEncry Whether to enable KMS encryption. 1: Yes, 0: No. If KMS encryption is enabled, the data will be encrypted when delivered to COS.
                     * 
                     */
                    int64_t GetIsEnableKmsEncry() const;

                    /**
                     * 设置Whether to enable KMS encryption. 1: Yes, 0: No. If KMS encryption is enabled, the data will be encrypted when delivered to COS.
                     * @param _isEnableKmsEncry Whether to enable KMS encryption. 1: Yes, 0: No. If KMS encryption is enabled, the data will be encrypted when delivered to COS.
                     * 
                     */
                    void SetIsEnableKmsEncry(const int64_t& _isEnableKmsEncry);

                    /**
                     * 判断参数 IsEnableKmsEncry 是否已赋值
                     * @return IsEnableKmsEncry 是否已赋值
                     * 
                     */
                    bool IsEnableKmsEncryHasBeenSet() const;

                    /**
                     * 获取User-defined COS bucket name, which can only contain 1–40 lowercase letters (a–z), digits (0–9), and dashes (-) and cannot begin or end with "-". If a bucket is not newly created, CloudAudit will not verify whether it actually exists. Enter the name with caution to avoid log delivery failure and consequent data loss.
                     * @return CosBucketName User-defined COS bucket name, which can only contain 1–40 lowercase letters (a–z), digits (0–9), and dashes (-) and cannot begin or end with "-". If a bucket is not newly created, CloudAudit will not verify whether it actually exists. Enter the name with caution to avoid log delivery failure and consequent data loss.
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置User-defined COS bucket name, which can only contain 1–40 lowercase letters (a–z), digits (0–9), and dashes (-) and cannot begin or end with "-". If a bucket is not newly created, CloudAudit will not verify whether it actually exists. Enter the name with caution to avoid log delivery failure and consequent data loss.
                     * @param _cosBucketName User-defined COS bucket name, which can only contain 1–40 lowercase letters (a–z), digits (0–9), and dashes (-) and cannot begin or end with "-". If a bucket is not newly created, CloudAudit will not verify whether it actually exists. Enter the name with caution to avoid log delivery failure and consequent data loss.
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取Region where the queue is located. Supported CMQ regions can be queried through the `ListCmqEnableRegion` API. This field is required if the value of `IsEnableCmqNotify` is 1.
                     * @return CmqRegion Region where the queue is located. Supported CMQ regions can be queried through the `ListCmqEnableRegion` API. This field is required if the value of `IsEnableCmqNotify` is 1.
                     * 
                     */
                    std::string GetCmqRegion() const;

                    /**
                     * 设置Region where the queue is located. Supported CMQ regions can be queried through the `ListCmqEnableRegion` API. This field is required if the value of `IsEnableCmqNotify` is 1.
                     * @param _cmqRegion Region where the queue is located. Supported CMQ regions can be queried through the `ListCmqEnableRegion` API. This field is required if the value of `IsEnableCmqNotify` is 1.
                     * 
                     */
                    void SetCmqRegion(const std::string& _cmqRegion);

                    /**
                     * 判断参数 CmqRegion 是否已赋值
                     * @return CmqRegion 是否已赋值
                     * 
                     */
                    bool CmqRegionHasBeenSet() const;

                    /**
                     * 获取Log file prefix, which can only contain 3–40 ASCII letters (a–z; A–Z) and digits (0–9).
                     * @return LogFilePrefix Log file prefix, which can only contain 3–40 ASCII letters (a–z; A–Z) and digits (0–9).
                     * 
                     */
                    std::string GetLogFilePrefix() const;

                    /**
                     * 设置Log file prefix, which can only contain 3–40 ASCII letters (a–z; A–Z) and digits (0–9).
                     * @param _logFilePrefix Log file prefix, which can only contain 3–40 ASCII letters (a–z; A–Z) and digits (0–9).
                     * 
                     */
                    void SetLogFilePrefix(const std::string& _logFilePrefix);

                    /**
                     * 判断参数 LogFilePrefix 是否已赋值
                     * @return LogFilePrefix 是否已赋值
                     * 
                     */
                    bool LogFilePrefixHasBeenSet() const;

                    /**
                     * 获取Whether to create a queue. 1: Yes; 0: No. This field is required if the value of `IsEnableCmqNotify` is 1.
                     * @return IsCreateNewQueue Whether to create a queue. 1: Yes; 0: No. This field is required if the value of `IsEnableCmqNotify` is 1.
                     * 
                     */
                    int64_t GetIsCreateNewQueue() const;

                    /**
                     * 设置Whether to create a queue. 1: Yes; 0: No. This field is required if the value of `IsEnableCmqNotify` is 1.
                     * @param _isCreateNewQueue Whether to create a queue. 1: Yes; 0: No. This field is required if the value of `IsEnableCmqNotify` is 1.
                     * 
                     */
                    void SetIsCreateNewQueue(const int64_t& _isCreateNewQueue);

                    /**
                     * 判断参数 IsCreateNewQueue 是否已赋值
                     * @return IsCreateNewQueue 是否已赋值
                     * 
                     */
                    bool IsCreateNewQueueHasBeenSet() const;

                private:

                    /**
                     * Tracking set name
                     */
                    std::string m_auditName;
                    bool m_auditNameHasBeenSet;

                    /**
                     * Whether to enable CMQ message notification. 1: Yes; 0: No. Only CMQ queue service is currently supported. If CMQ message notification is enabled, CloudAudit will deliver your log contents to the designated queue in the specified region in real time.
                     */
                    int64_t m_isEnableCmqNotify;
                    bool m_isEnableCmqNotifyHasBeenSet;

                    /**
                     * Manages the read/write attribute of event. Valid values: 1 (read-only), 2 (write-only), 3 (read/write).
                     */
                    int64_t m_readWriteAttribute;
                    bool m_readWriteAttributeHasBeenSet;

                    /**
                     * Globally unique ID of the CMK. This value is required if it is not a newly created KMS element. It can be obtained through `ListKeyAliasByRegion`. CloudAudit will not verify the validity of the `KeyId`. Enter it carefully to avoid data loss.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * COS region. Supported regions can be queried through the `ListCosEnableRegion` API.
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * Queue name, which must begin with a letter and can contain up to 64 letters, digits, and dashes (-). This field is required if the value of `IsEnableCmqNotify` is 1. If a queue is not newly created, CloudAudit will not verify whether it actually exists. Enter the name with caution to avoid log delivery failure and consequent data loss.
                     */
                    std::string m_cmqQueueName;
                    bool m_cmqQueueNameHasBeenSet;

                    /**
                     * Whether to create a COS bucket. 1: Yes; 0: No.
                     */
                    int64_t m_isCreateNewBucket;
                    bool m_isCreateNewBucketHasBeenSet;

                    /**
                     * KMS region. Currently supported regions can be obtained through `ListKmsEnableRegion`. This must be the same as the COS region.
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                    /**
                     * Whether to enable KMS encryption. 1: Yes, 0: No. If KMS encryption is enabled, the data will be encrypted when delivered to COS.
                     */
                    int64_t m_isEnableKmsEncry;
                    bool m_isEnableKmsEncryHasBeenSet;

                    /**
                     * User-defined COS bucket name, which can only contain 1–40 lowercase letters (a–z), digits (0–9), and dashes (-) and cannot begin or end with "-". If a bucket is not newly created, CloudAudit will not verify whether it actually exists. Enter the name with caution to avoid log delivery failure and consequent data loss.
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * Region where the queue is located. Supported CMQ regions can be queried through the `ListCmqEnableRegion` API. This field is required if the value of `IsEnableCmqNotify` is 1.
                     */
                    std::string m_cmqRegion;
                    bool m_cmqRegionHasBeenSet;

                    /**
                     * Log file prefix, which can only contain 3–40 ASCII letters (a–z; A–Z) and digits (0–9).
                     */
                    std::string m_logFilePrefix;
                    bool m_logFilePrefixHasBeenSet;

                    /**
                     * Whether to create a queue. 1: Yes; 0: No. This field is required if the value of `IsEnableCmqNotify` is 1.
                     */
                    int64_t m_isCreateNewQueue;
                    bool m_isCreateNewQueueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_UPDATEAUDITREQUEST_H_
