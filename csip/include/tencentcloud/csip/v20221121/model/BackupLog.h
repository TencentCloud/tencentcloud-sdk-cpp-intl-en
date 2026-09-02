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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BACKUPLOG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BACKUPLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Log backup
                */
                class BackupLog : public AbstractModel
                {
                public:
                    BackupLog();
                    ~BackupLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Index.
                     * @return Id Index.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Index.
                     * @param _id Index.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Index start time.
                     * @return IndexStartTime Index start time.
                     * 
                     */
                    int64_t GetIndexStartTime() const;

                    /**
                     * 设置Index start time.
                     * @param _indexStartTime Index start time.
                     * 
                     */
                    void SetIndexStartTime(const int64_t& _indexStartTime);

                    /**
                     * 判断参数 IndexStartTime 是否已赋值
                     * @return IndexStartTime 是否已赋值
                     * 
                     */
                    bool IndexStartTimeHasBeenSet() const;

                    /**
                     * 获取Index end time.
                     * @return IndexEndTime Index end time.
                     * 
                     */
                    int64_t GetIndexEndTime() const;

                    /**
                     * 设置Index end time.
                     * @param _indexEndTime Index end time.
                     * 
                     */
                    void SetIndexEndTime(const int64_t& _indexEndTime);

                    /**
                     * 判断参数 IndexEndTime 是否已赋值
                     * @return IndexEndTime 是否已赋值
                     * 
                     */
                    bool IndexEndTimeHasBeenSet() const;

                    /**
                     * 获取Compressed size after backup, in MB.
                     * @return BackupSize Compressed size after backup, in MB.
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置Compressed size after backup, in MB.
                     * @param _backupSize Compressed size after backup, in MB.
                     * 
                     */
                    void SetBackupSize(const int64_t& _backupSize);

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取Log status. 0: backup incomplete; 1: backup file; 2: restoration in progress; 3: restored; 4: deleted.
                     * @return Status Log status. 0: backup incomplete; 1: backup file; 2: restoration in progress; 3: restored; 4: deleted.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Log status. 0: backup incomplete; 1: backup file; 2: restoration in progress; 3: restored; 4: deleted.
                     * @param _status Log status. 0: backup incomplete; 1: backup file; 2: restoration in progress; 3: restored; 4: deleted.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Remaining restore time in minutes. Minutes must be converted by the frontend.
                     * @return RestoreProcessRemindTime Remaining restore time in minutes. Minutes must be converted by the frontend.
                     * 
                     */
                    int64_t GetRestoreProcessRemindTime() const;

                    /**
                     * 设置Remaining restore time in minutes. Minutes must be converted by the frontend.
                     * @param _restoreProcessRemindTime Remaining restore time in minutes. Minutes must be converted by the frontend.
                     * 
                     */
                    void SetRestoreProcessRemindTime(const int64_t& _restoreProcessRemindTime);

                    /**
                     * 判断参数 RestoreProcessRemindTime 是否已赋值
                     * @return RestoreProcessRemindTime 是否已赋值
                     * 
                     */
                    bool RestoreProcessRemindTimeHasBeenSet() const;

                    /**
                     * 获取Time until which restored logs are retained.
                     * @return RestoreRemindTime Time until which restored logs are retained.
                     * 
                     */
                    int64_t GetRestoreRemindTime() const;

                    /**
                     * 设置Time until which restored logs are retained.
                     * @param _restoreRemindTime Time until which restored logs are retained.
                     * 
                     */
                    void SetRestoreRemindTime(const int64_t& _restoreRemindTime);

                    /**
                     * 判断参数 RestoreRemindTime 是否已赋值
                     * @return RestoreRemindTime 是否已赋值
                     * 
                     */
                    bool RestoreRemindTimeHasBeenSet() const;

                    /**
                     * 获取Restoration index size.
                     * @return RestoreIndexSize Restoration index size.
                     * 
                     */
                    int64_t GetRestoreIndexSize() const;

                    /**
                     * 设置Restoration index size.
                     * @param _restoreIndexSize Restoration index size.
                     * 
                     */
                    void SetRestoreIndexSize(const int64_t& _restoreIndexSize);

                    /**
                     * 判断参数 RestoreIndexSize 是否已赋值
                     * @return RestoreIndexSize 是否已赋值
                     * 
                     */
                    bool RestoreIndexSizeHasBeenSet() const;

                    /**
                     * 获取End time of the recovery log execution.
                     * @return RestoreEndTime End time of the recovery log execution.
                     * 
                     */
                    int64_t GetRestoreEndTime() const;

                    /**
                     * 设置End time of the recovery log execution.
                     * @param _restoreEndTime End time of the recovery log execution.
                     * 
                     */
                    void SetRestoreEndTime(const int64_t& _restoreEndTime);

                    /**
                     * 判断参数 RestoreEndTime 是否已赋值
                     * @return RestoreEndTime 是否已赋值
                     * 
                     */
                    bool RestoreEndTimeHasBeenSet() const;

                    /**
                     * 获取appId to which the backup belongs
                     * @return AppId appId to which the backup belongs
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置appId to which the backup belongs
                     * @param _appId appId to which the backup belongs
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Asset ID to which the backup belongs
                     * @return AssetId Asset ID to which the backup belongs
                     * 
                     */
                    uint64_t GetAssetId() const;

                    /**
                     * 设置Asset ID to which the backup belongs
                     * @param _assetId Asset ID to which the backup belongs
                     * 
                     */
                    void SetAssetId(const uint64_t& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Account nickname
                     * @return NickName Account nickname
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Account nickname
                     * @param _nickName Account nickname
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取uin of the account to which the asset belongs
                     * @return Uin uin of the account to which the asset belongs
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置uin of the account to which the asset belongs
                     * @param _uin uin of the account to which the asset belongs
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * Index.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Index start time.
                     */
                    int64_t m_indexStartTime;
                    bool m_indexStartTimeHasBeenSet;

                    /**
                     * Index end time.
                     */
                    int64_t m_indexEndTime;
                    bool m_indexEndTimeHasBeenSet;

                    /**
                     * Compressed size after backup, in MB.
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * Log status. 0: backup incomplete; 1: backup file; 2: restoration in progress; 3: restored; 4: deleted.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Remaining restore time in minutes. Minutes must be converted by the frontend.
                     */
                    int64_t m_restoreProcessRemindTime;
                    bool m_restoreProcessRemindTimeHasBeenSet;

                    /**
                     * Time until which restored logs are retained.
                     */
                    int64_t m_restoreRemindTime;
                    bool m_restoreRemindTimeHasBeenSet;

                    /**
                     * Restoration index size.
                     */
                    int64_t m_restoreIndexSize;
                    bool m_restoreIndexSizeHasBeenSet;

                    /**
                     * End time of the recovery log execution.
                     */
                    int64_t m_restoreEndTime;
                    bool m_restoreEndTimeHasBeenSet;

                    /**
                     * appId to which the backup belongs
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Asset ID to which the backup belongs
                     */
                    uint64_t m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Account nickname
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * uin of the account to which the asset belongs
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BACKUPLOG_H_
