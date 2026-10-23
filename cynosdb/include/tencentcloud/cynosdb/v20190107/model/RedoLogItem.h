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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REDOLOGITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REDOLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupRegionAndIds.h>
#include <tencentcloud/cynosdb/v20190107/model/VaultInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * redo log details
                */
                class RedoLogItem : public AbstractModel
                {
                public:
                    RedoLogItem();
                    ~RedoLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>File name.</p>
                     * @return FileName <p>File name.</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>File name.</p>
                     * @param _fileName <p>File name.</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>File size</p>
                     * @return FileSize <p>File size</p>
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置<p>File size</p>
                     * @param _fileSize <p>File size</p>
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取<p>Backup time</p>
                     * @return BackupTime <p>Backup time</p>
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置<p>Backup time</p>
                     * @param _backupTime <p>Backup time</p>
                     * 
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取<p>redoLogId</p>
                     * @return RedoLogId <p>redoLogId</p>
                     * 
                     */
                    int64_t GetRedoLogId() const;

                    /**
                     * 设置<p>redoLogId</p>
                     * @param _redoLogId <p>redoLogId</p>
                     * 
                     */
                    void SetRedoLogId(const int64_t& _redoLogId);

                    /**
                     * 判断参数 RedoLogId 是否已赋值
                     * @return RedoLogId 是否已赋值
                     * 
                     */
                    bool RedoLogIdHasBeenSet() const;

                    /**
                     * 获取<p>Cross-regional information</p>
                     * @return RedoCrossRegions <p>Cross-regional information</p>
                     * 
                     */
                    std::vector<BackupRegionAndIds> GetRedoCrossRegions() const;

                    /**
                     * 设置<p>Cross-regional information</p>
                     * @param _redoCrossRegions <p>Cross-regional information</p>
                     * 
                     */
                    void SetRedoCrossRegions(const std::vector<BackupRegionAndIds>& _redoCrossRegions);

                    /**
                     * 判断参数 RedoCrossRegions 是否已赋值
                     * @return RedoCrossRegions 是否已赋值
                     * 
                     */
                    bool RedoCrossRegionsHasBeenSet() const;

                    /**
                     * 获取<p>Status.</p>
                     * @return Status <p>Status.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status.</p>
                     * @param _status <p>Status.</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Start time.</p>
                     * @return StartTime <p>Start time.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time.</p>
                     * @param _startTime <p>Start time.</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Completion time</p>
                     * @return FinishTime <p>Completion time</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>Completion time</p>
                     * @param _finishTime <p>Completion time</p>
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>Safe information.</p>
                     * @return VaultInfos <p>Safe information.</p>
                     * 
                     */
                    std::vector<VaultInfo> GetVaultInfos() const;

                    /**
                     * 设置<p>Safe information.</p>
                     * @param _vaultInfos <p>Safe information.</p>
                     * 
                     */
                    void SetVaultInfos(const std::vector<VaultInfo>& _vaultInfos);

                    /**
                     * 判断参数 VaultInfos 是否已赋值
                     * @return VaultInfos 是否已赋值
                     * 
                     */
                    bool VaultInfosHasBeenSet() const;

                    /**
                     * 获取<p>Backup delivery status</p>
                     * @return CopyStatus <p>Backup delivery status</p>
                     * 
                     */
                    std::string GetCopyStatus() const;

                    /**
                     * 设置<p>Backup delivery status</p>
                     * @param _copyStatus <p>Backup delivery status</p>
                     * 
                     */
                    void SetCopyStatus(const std::string& _copyStatus);

                    /**
                     * 判断参数 CopyStatus 是否已赋值
                     * @return CopyStatus 是否已赋值
                     * 
                     */
                    bool CopyStatusHasBeenSet() const;

                    /**
                     * 获取<p>Encryption key.</p>
                     * @return EncryptKeyId <p>Encryption key.</p>
                     * 
                     */
                    std::string GetEncryptKeyId() const;

                    /**
                     * 设置<p>Encryption key.</p>
                     * @param _encryptKeyId <p>Encryption key.</p>
                     * 
                     */
                    void SetEncryptKeyId(const std::string& _encryptKeyId);

                    /**
                     * 判断参数 EncryptKeyId 是否已赋值
                     * @return EncryptKeyId 是否已赋值
                     * 
                     */
                    bool EncryptKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>Encryption key region</p>
                     * @return EncryptRegion <p>Encryption key region</p>
                     * 
                     */
                    std::string GetEncryptRegion() const;

                    /**
                     * 设置<p>Encryption key region</p>
                     * @param _encryptRegion <p>Encryption key region</p>
                     * 
                     */
                    void SetEncryptRegion(const std::string& _encryptRegion);

                    /**
                     * 判断参数 EncryptRegion 是否已赋值
                     * @return EncryptRegion 是否已赋值
                     * 
                     */
                    bool EncryptRegionHasBeenSet() const;

                private:

                    /**
                     * <p>File name.</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>File size</p>
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>Backup time</p>
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * <p>redoLogId</p>
                     */
                    int64_t m_redoLogId;
                    bool m_redoLogIdHasBeenSet;

                    /**
                     * <p>Cross-regional information</p>
                     */
                    std::vector<BackupRegionAndIds> m_redoCrossRegions;
                    bool m_redoCrossRegionsHasBeenSet;

                    /**
                     * <p>Status.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Start time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Completion time</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>Safe information.</p>
                     */
                    std::vector<VaultInfo> m_vaultInfos;
                    bool m_vaultInfosHasBeenSet;

                    /**
                     * <p>Backup delivery status</p>
                     */
                    std::string m_copyStatus;
                    bool m_copyStatusHasBeenSet;

                    /**
                     * <p>Encryption key.</p>
                     */
                    std::string m_encryptKeyId;
                    bool m_encryptKeyIdHasBeenSet;

                    /**
                     * <p>Encryption key region</p>
                     */
                    std::string m_encryptRegion;
                    bool m_encryptRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REDOLOGITEM_H_
