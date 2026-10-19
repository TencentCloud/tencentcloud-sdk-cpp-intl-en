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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPENCRYPTCONFIGRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPENCRYPTCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeBackupEncryptConfig response structure.
                */
                class DescribeBackupEncryptConfigResponse : public AbstractModel
                {
                public:
                    DescribeBackupEncryptConfigResponse();
                    ~DescribeBackupEncryptConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Whether the backup is encrypted or not</p><p>Enumeration value:</p><ul><li>true: Encrypted</li><li>false: Unencrypted</li></ul>
                     * @return BackupEncrypt <p>Whether the backup is encrypted or not</p><p>Enumeration value:</p><ul><li>true: Encrypted</li><li>false: Unencrypted</li></ul>
                     * 
                     */
                    bool GetBackupEncrypt() const;

                    /**
                     * 判断参数 BackupEncrypt 是否已赋值
                     * @return BackupEncrypt 是否已赋值
                     * 
                     */
                    bool BackupEncryptHasBeenSet() const;

                    /**
                     * 获取<p>Encryption key type.</p><p>Enumeration value:</p><ul><li>0: Tencent Cloud hosted (default)</li><li>1: User-customized KMS key</li></ul>
                     * @return EncryptKeyType <p>Encryption key type.</p><p>Enumeration value:</p><ul><li>0: Tencent Cloud hosted (default)</li><li>1: User-customized KMS key</li></ul>
                     * 
                     */
                    int64_t GetEncryptKeyType() const;

                    /**
                     * 判断参数 EncryptKeyType 是否已赋值
                     * @return EncryptKeyType 是否已赋值
                     * 
                     */
                    bool EncryptKeyTypeHasBeenSet() const;

                    /**
                     * 获取<p>Key ID of KMS.</p><p>Parameter format: xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     * @return KmsKeyId <p>Key ID of KMS.</p><p>Parameter format: xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>KMS regional information.</p><p>Parameter format: ap-xxxx</p>
                     * @return KmsRegion <p>KMS regional information.</p><p>Parameter format: ap-xxxx</p>
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     * 
                     */
                    bool KmsRegionHasBeenSet() const;

                private:

                    /**
                     * <p>Whether the backup is encrypted or not</p><p>Enumeration value:</p><ul><li>true: Encrypted</li><li>false: Unencrypted</li></ul>
                     */
                    bool m_backupEncrypt;
                    bool m_backupEncryptHasBeenSet;

                    /**
                     * <p>Encryption key type.</p><p>Enumeration value:</p><ul><li>0: Tencent Cloud hosted (default)</li><li>1: User-customized KMS key</li></ul>
                     */
                    int64_t m_encryptKeyType;
                    bool m_encryptKeyTypeHasBeenSet;

                    /**
                     * <p>Key ID of KMS.</p><p>Parameter format: xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>KMS regional information.</p><p>Parameter format: ap-xxxx</p>
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPENCRYPTCONFIGRESPONSE_H_
