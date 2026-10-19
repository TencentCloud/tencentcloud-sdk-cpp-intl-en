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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYBACKUPENCRYPTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYBACKUPENCRYPTREQUEST_H_

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
                * ModifyBackupEncrypt request structure.
                */
                class ModifyBackupEncryptRequest : public AbstractModel
                {
                public:
                    ModifyBackupEncryptRequest();
                    ~ModifyBackupEncryptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID. Log in to the Redis console and copy it from the instance list.</p>
                     * @return InstanceId <p>Instance ID. Log in to the Redis console and copy it from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID. Log in to the Redis console and copy it from the instance list.</p>
                     * @param _instanceId <p>Instance ID. Log in to the Redis console and copy it from the instance list.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Whether backup encryption is enabled.</p><p>Default value: false</p>
                     * @return BackupEncrypt <p>Whether backup encryption is enabled.</p><p>Default value: false</p>
                     * 
                     */
                    bool GetBackupEncrypt() const;

                    /**
                     * 设置<p>Whether backup encryption is enabled.</p><p>Default value: false</p>
                     * @param _backupEncrypt <p>Whether backup encryption is enabled.</p><p>Default value: false</p>
                     * 
                     */
                    void SetBackupEncrypt(const bool& _backupEncrypt);

                    /**
                     * 判断参数 BackupEncrypt 是否已赋值
                     * @return BackupEncrypt 是否已赋值
                     * 
                     */
                    bool BackupEncryptHasBeenSet() const;

                    /**
                     * 获取<p>Encryption key type.</p><p>Enumeration value:</p><ul><li>0: Tencent Cloud hosted (default)</li><li>1: User-customized KMS key</li></ul><p>Default value: 0</p>
                     * @return EncryptKeyType <p>Encryption key type.</p><p>Enumeration value:</p><ul><li>0: Tencent Cloud hosted (default)</li><li>1: User-customized KMS key</li></ul><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetEncryptKeyType() const;

                    /**
                     * 设置<p>Encryption key type.</p><p>Enumeration value:</p><ul><li>0: Tencent Cloud hosted (default)</li><li>1: User-customized KMS key</li></ul><p>Default value: 0</p>
                     * @param _encryptKeyType <p>Encryption key type.</p><p>Enumeration value:</p><ul><li>0: Tencent Cloud hosted (default)</li><li>1: User-customized KMS key</li></ul><p>Default value: 0</p>
                     * 
                     */
                    void SetEncryptKeyType(const int64_t& _encryptKeyType);

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
                     * 设置<p>Key ID of KMS.</p><p>Parameter format: xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     * @param _kmsKeyId <p>Key ID of KMS.</p><p>Parameter format: xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>Regional information.</p><p>Parameter format: ap-xxxx</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/573/34406?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">Supported region list for KMS</a></p>
                     * @return KmsRegion <p>Regional information.</p><p>Parameter format: ap-xxxx</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/573/34406?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">Supported region list for KMS</a></p>
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 设置<p>Regional information.</p><p>Parameter format: ap-xxxx</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/573/34406?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">Supported region list for KMS</a></p>
                     * @param _kmsRegion <p>Regional information.</p><p>Parameter format: ap-xxxx</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/573/34406?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">Supported region list for KMS</a></p>
                     * 
                     */
                    void SetKmsRegion(const std::string& _kmsRegion);

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     * 
                     */
                    bool KmsRegionHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID. Log in to the Redis console and copy it from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Whether backup encryption is enabled.</p><p>Default value: false</p>
                     */
                    bool m_backupEncrypt;
                    bool m_backupEncryptHasBeenSet;

                    /**
                     * <p>Encryption key type.</p><p>Enumeration value:</p><ul><li>0: Tencent Cloud hosted (default)</li><li>1: User-customized KMS key</li></ul><p>Default value: 0</p>
                     */
                    int64_t m_encryptKeyType;
                    bool m_encryptKeyTypeHasBeenSet;

                    /**
                     * <p>Key ID of KMS.</p><p>Parameter format: xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>Regional information.</p><p>Parameter format: ap-xxxx</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/573/34406?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">Supported region list for KMS</a></p>
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYBACKUPENCRYPTREQUEST_H_
