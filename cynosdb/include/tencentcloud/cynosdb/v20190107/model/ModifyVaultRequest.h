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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYVAULTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYVAULTREQUEST_H_

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
                * ModifyVault request structure.
                */
                class ModifyVaultRequest : public AbstractModel
                {
                public:
                    ModifyVaultRequest();
                    ~ModifyVaultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Safe ID
                     * @return VaultId Safe ID
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置Safe ID
                     * @param _vaultId Safe ID
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取Safe name, maximum 255 characters
                     * @return VaultName Safe name, maximum 255 characters
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置Safe name, maximum 255 characters
                     * @param _vaultName Safe name, maximum 255 characters
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
                     * 获取Safe description, maximum 1024 characters
                     * @return VaultDescribe Safe description, maximum 1024 characters
                     * 
                     */
                    std::string GetVaultDescribe() const;

                    /**
                     * 设置Safe description, maximum 1024 characters
                     * @param _vaultDescribe Safe description, maximum 1024 characters
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
                     * 获取Backup retention period (seconds). Range: (0, 632448000].
                     * @return BackupSaveSeconds Backup retention period (seconds). Range: (0, 632448000].
                     * 
                     */
                    int64_t GetBackupSaveSeconds() const;

                    /**
                     * 设置Backup retention period (seconds). Range: (0, 632448000].
                     * @param _backupSaveSeconds Backup retention period (seconds). Range: (0, 632448000].
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
                     * 获取Encryption key ID, maximum 36 characters
                     * @return KeyId Encryption key ID, maximum 36 characters
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Encryption key ID, maximum 36 characters
                     * @param _keyId Encryption key ID, maximum 36 characters
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
                     * 获取Key type, available values: cloud, custom
                     * @return KeyType Key type, available values: cloud, custom
                     * 
                     */
                    std::string GetKeyType() const;

                    /**
                     * 设置Key type, available values: cloud, custom
                     * @param _keyType Key type, available values: cloud, custom
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
                     * 获取Key region, maximum 32 characters
                     * @return KeyRegion Key region, maximum 32 characters
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置Key region, maximum 32 characters
                     * @param _keyRegion Key region, maximum 32 characters
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
                     * 获取Is the safe locked
                     * @return IsLock Is the safe locked
                     * 
                     */
                    bool GetIsLock() const;

                    /**
                     * 设置Is the safe locked
                     * @param _isLock Is the safe locked
                     * 
                     */
                    void SetIsLock(const bool& _isLock);

                    /**
                     * 判断参数 IsLock 是否已赋值
                     * @return IsLock 是否已赋值
                     * 
                     */
                    bool IsLockHasBeenSet() const;

                    /**
                     * 获取Lock expiry time, format: 2006-01-02 15:04:05, lock time current maximum 15 days
                     * @return LockedTime Lock expiry time, format: 2006-01-02 15:04:05, lock time current maximum 15 days
                     * 
                     */
                    std::string GetLockedTime() const;

                    /**
                     * 设置Lock expiry time, format: 2006-01-02 15:04:05, lock time current maximum 15 days
                     * @param _lockedTime Lock expiry time, format: 2006-01-02 15:04:05, lock time current maximum 15 days
                     * 
                     */
                    void SetLockedTime(const std::string& _lockedTime);

                    /**
                     * 判断参数 LockedTime 是否已赋值
                     * @return LockedTime 是否已赋值
                     * 
                     */
                    bool LockedTimeHasBeenSet() const;

                    /**
                     * 获取Whether it is encrypted
                     * @return IsEncryption Whether it is encrypted
                     * 
                     */
                    bool GetIsEncryption() const;

                    /**
                     * 设置Whether it is encrypted
                     * @param _isEncryption Whether it is encrypted
                     * 
                     */
                    void SetIsEncryption(const bool& _isEncryption);

                    /**
                     * 判断参数 IsEncryption 是否已赋值
                     * @return IsEncryption 是否已赋值
                     * 
                     */
                    bool IsEncryptionHasBeenSet() const;

                private:

                    /**
                     * Safe ID
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * Safe name, maximum 255 characters
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * Safe description, maximum 1024 characters
                     */
                    std::string m_vaultDescribe;
                    bool m_vaultDescribeHasBeenSet;

                    /**
                     * Backup retention period (seconds). Range: (0, 632448000].
                     */
                    int64_t m_backupSaveSeconds;
                    bool m_backupSaveSecondsHasBeenSet;

                    /**
                     * Encryption key ID, maximum 36 characters
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Key type, available values: cloud, custom
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * Key region, maximum 32 characters
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                    /**
                     * Is the safe locked
                     */
                    bool m_isLock;
                    bool m_isLockHasBeenSet;

                    /**
                     * Lock expiry time, format: 2006-01-02 15:04:05, lock time current maximum 15 days
                     */
                    std::string m_lockedTime;
                    bool m_lockedTimeHasBeenSet;

                    /**
                     * Whether it is encrypted
                     */
                    bool m_isEncryption;
                    bool m_isEncryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYVAULTREQUEST_H_
