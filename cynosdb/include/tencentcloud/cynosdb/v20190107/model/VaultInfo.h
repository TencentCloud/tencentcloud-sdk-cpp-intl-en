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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_VAULTINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_VAULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Safe info
                */
                class VaultInfo : public AbstractModel
                {
                public:
                    VaultInfo();
                    ~VaultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Safe id
                     * @return VaultId Safe id
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置Safe id
                     * @param _vaultId Safe id
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
                     * 获取Safe name
                     * @return VaultName Safe name
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置Safe name
                     * @param _vaultName Safe name
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
                     * 获取Safe region
                     * @return VaultRegion Safe region
                     * 
                     */
                    std::string GetVaultRegion() const;

                    /**
                     * 设置Safe region
                     * @param _vaultRegion Safe region
                     * 
                     */
                    void SetVaultRegion(const std::string& _vaultRegion);

                    /**
                     * 判断参数 VaultRegion 是否已赋值
                     * @return VaultRegion 是否已赋值
                     * 
                     */
                    bool VaultRegionHasBeenSet() const;

                    /**
                     * 获取Safe status
                     * @return VaultStatus Safe status
                     * 
                     */
                    std::string GetVaultStatus() const;

                    /**
                     * 设置Safe status
                     * @param _vaultStatus Safe status
                     * 
                     */
                    void SetVaultStatus(const std::string& _vaultStatus);

                    /**
                     * 判断参数 VaultStatus 是否已赋值
                     * @return VaultStatus 是否已赋值
                     * 
                     */
                    bool VaultStatusHasBeenSet() const;

                    /**
                     * 获取Backup retention period
                     * @return BackupSaveSeconds Backup retention period
                     * 
                     */
                    int64_t GetBackupSaveSeconds() const;

                    /**
                     * 设置Backup retention period
                     * @param _backupSaveSeconds Backup retention period
                     * 
                     */
                    void SetBackupSaveSeconds(const int64_t& _backupSaveSeconds);

                    /**
                     * 判断参数 BackupSaveSeconds 是否已赋值
                     * @return BackupSaveSeconds 是否已赋值
                     * 
                     */
                    bool BackupSaveSecondsHasBeenSet() const;

                private:

                    /**
                     * Safe id
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * Safe name
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * Safe region
                     */
                    std::string m_vaultRegion;
                    bool m_vaultRegionHasBeenSet;

                    /**
                     * Safe status
                     */
                    std::string m_vaultStatus;
                    bool m_vaultStatusHasBeenSet;

                    /**
                     * Backup retention period
                     */
                    int64_t m_backupSaveSeconds;
                    bool m_backupSaveSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_VAULTINFO_H_
