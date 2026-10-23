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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEVAULTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEVAULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateVault request structure.
                */
                class CreateVaultRequest : public AbstractModel
                {
                public:
                    CreateVaultRequest();
                    ~CreateVaultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Safe name. The length must be greater than 0.
                     * @return VaultName Safe name. The length must be greater than 0.
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置Safe name. The length must be greater than 0.
                     * @param _vaultName Safe name. The length must be greater than 0.
                     * 
                     */
                    void SetVaultName(const std::string& _vaultName);

                    /**
                     * 判断参数 VaultName 是否已赋值
                     * @return VaultName 是否已赋值
                     * 
                     */
                    bool VaultNameHasBeenSet() const;

                    /**
                     * 获取Backup retention period in seconds. It must be greater than 0.
                     * @return BackupSaveSeconds Backup retention period in seconds. It must be greater than 0.
                     * 
                     */
                    int64_t GetBackupSaveSeconds() const;

                    /**
                     * 设置Backup retention period in seconds. It must be greater than 0.
                     * @param _backupSaveSeconds Backup retention period in seconds. It must be greater than 0.
                     * 
                     */
                    void SetBackupSaveSeconds(const int64_t& _backupSaveSeconds);

                    /**
                     * 判断参数 BackupSaveSeconds 是否已赋值
                     * @return BackupSaveSeconds 是否已赋值
                     * 
                     */
                    bool BackupSaveSecondsHasBeenSet() const;

                    /**
                     * 获取Description of the safe
                     * @return VaultDescribe Description of the safe
                     * 
                     */
                    std::string GetVaultDescribe() const;

                    /**
                     * 设置Description of the safe
                     * @param _vaultDescribe Description of the safe
                     * 
                     */
                    void SetVaultDescribe(const std::string& _vaultDescribe);

                    /**
                     * 判断参数 VaultDescribe 是否已赋值
                     * @return VaultDescribe 是否已赋值
                     * 
                     */
                    bool VaultDescribeHasBeenSet() const;

                    /**
                     * 获取KMS key ID, 0-36 characters in length
                     * @return KeyId KMS key ID, 0-36 characters in length
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置KMS key ID, 0-36 characters in length
                     * @param _keyId KMS key ID, 0-36 characters in length
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
                     * 获取Key type. Available values: cloud (cloud-managed key), custom (custom key)
                     * @return KeyType Key type. Available values: cloud (cloud-managed key), custom (custom key)
                     * 
                     */
                    std::string GetKeyType() const;

                    /**
                     * 设置Key type. Available values: cloud (cloud-managed key), custom (custom key)
                     * @param _keyType Key type. Available values: cloud (cloud-managed key), custom (custom key)
                     * 
                     */
                    void SetKeyType(const std::string& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取Region of the key, 0–32 characters in length
                     * @return KeyRegion Region of the key, 0–32 characters in length
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置Region of the key, 0–32 characters in length
                     * @param _keyRegion Region of the key, 0–32 characters in length
                     * 
                     */
                    void SetKeyRegion(const std::string& _keyRegion);

                    /**
                     * 判断参数 KeyRegion 是否已赋值
                     * @return KeyRegion 是否已赋值
                     * 
                     */
                    bool KeyRegionHasBeenSet() const;

                    /**
                     * 获取Lock time. Format: YYYY-MM-DD HH:mm:ss
                     * @return LockedTime Lock time. Format: YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetLockedTime() const;

                    /**
                     * 设置Lock time. Format: YYYY-MM-DD HH:mm:ss
                     * @param _lockedTime Lock time. Format: YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetLockedTime(const std::string& _lockedTime);

                    /**
                     * 判断参数 LockedTime 是否已赋值
                     * @return LockedTime 是否已赋值
                     * 
                     */
                    bool LockedTimeHasBeenSet() const;

                private:

                    /**
                     * Safe name. The length must be greater than 0.
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * Backup retention period in seconds. It must be greater than 0.
                     */
                    int64_t m_backupSaveSeconds;
                    bool m_backupSaveSecondsHasBeenSet;

                    /**
                     * Description of the safe
                     */
                    std::string m_vaultDescribe;
                    bool m_vaultDescribeHasBeenSet;

                    /**
                     * KMS key ID, 0-36 characters in length
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Key type. Available values: cloud (cloud-managed key), custom (custom key)
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * Region of the key, 0–32 characters in length
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                    /**
                     * Lock time. Format: YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_lockedTime;
                    bool m_lockedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEVAULTREQUEST_H_
