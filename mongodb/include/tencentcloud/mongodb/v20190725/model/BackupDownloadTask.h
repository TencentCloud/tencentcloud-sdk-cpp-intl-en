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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPDOWNLOADTASK_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPDOWNLOADTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Backup download task information
                */
                class BackupDownloadTask : public AbstractModel
                {
                public:
                    BackupDownloadTask();
                    ~BackupDownloadTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task creation time.
                     * @return CreateTime Task creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time.
                     * @param _createTime Task creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Backup file name.
                     * @return BackupName Backup file name.
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置Backup file name.
                     * @param _backupName Backup file name.
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取Shard name.
                     * @return ReplicaSetId Shard name.
                     * 
                     */
                    std::string GetReplicaSetId() const;

                    /**
                     * 设置Shard name.
                     * @param _replicaSetId Shard name.
                     * 
                     */
                    void SetReplicaSetId(const std::string& _replicaSetId);

                    /**
                     * 判断参数 ReplicaSetId 是否已赋值
                     * @return ReplicaSetId 是否已赋值
                     * 
                     */
                    bool ReplicaSetIdHasBeenSet() const;

                    /**
                     * 获取Backup data size, in bytes.
                     * @return BackupSize Backup data size, in bytes.
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置Backup data size, in bytes.
                     * @param _backupSize Backup data size, in bytes.
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
                     * 获取Task status.
- 0: wait for execution.
- 1: downloading.
- 2: download completed.
- 3: download failed.
- 4: wait for retry.
                     * @return Status Task status.
- 0: wait for execution.
- 1: downloading.
- 2: download completed.
- 3: download failed.
- 4: wait for retry.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status.
- 0: wait for execution.
- 1: downloading.
- 2: download completed.
- 3: download failed.
- 4: wait for retry.
                     * @param _status Task status.
- 0: wait for execution.
- 1: downloading.
- 2: download completed.
- 3: download failed.
- 4: wait for retry.
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
                     * 获取Task progress percentage.
                     * @return Percent Task progress percentage.
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置Task progress percentage.
                     * @param _percent Task progress percentage.
                     * 
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取Duration, in seconds.
                     * @return TimeSpend Duration, in seconds.
                     * 
                     */
                    int64_t GetTimeSpend() const;

                    /**
                     * 设置Duration, in seconds.
                     * @param _timeSpend Duration, in seconds.
                     * 
                     */
                    void SetTimeSpend(const int64_t& _timeSpend);

                    /**
                     * 判断参数 TimeSpend 是否已赋值
                     * @return TimeSpend 是否已赋值
                     * 
                     */
                    bool TimeSpendHasBeenSet() const;

                    /**
                     * 获取Download link for backup data.
                     * @return Url Download link for backup data.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Download link for backup data.
                     * @param _url Download link for backup data.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Backup method.
- 0: logical backup.
- 1: physical backup.
- 3: snapshot backup.
**Note**:
1. The General Edition instance supports logical and physical backup. The Cloud Disk Edition instance supports physical and snapshot backup, but does not support logical backup currently.
2. Physical backup is not supported when storage encryption is enabled for the instance.
                     * @return BackupMethod Backup method.
- 0: logical backup.
- 1: physical backup.
- 3: snapshot backup.
**Note**:
1. The General Edition instance supports logical and physical backup. The Cloud Disk Edition instance supports physical and snapshot backup, but does not support logical backup currently.
2. Physical backup is not supported when storage encryption is enabled for the instance.
                     * 
                     */
                    int64_t GetBackupMethod() const;

                    /**
                     * 设置Backup method.
- 0: logical backup.
- 1: physical backup.
- 3: snapshot backup.
**Note**:
1. The General Edition instance supports logical and physical backup. The Cloud Disk Edition instance supports physical and snapshot backup, but does not support logical backup currently.
2. Physical backup is not supported when storage encryption is enabled for the instance.
                     * @param _backupMethod Backup method.
- 0: logical backup.
- 1: physical backup.
- 3: snapshot backup.
**Note**:
1. The General Edition instance supports logical and physical backup. The Cloud Disk Edition instance supports physical and snapshot backup, but does not support logical backup currently.
2. Physical backup is not supported when storage encryption is enabled for the instance.
                     * 
                     */
                    void SetBackupMethod(const int64_t& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Specified remarks for initiating backup tasks.
                     * @return BackupDesc Specified remarks for initiating backup tasks.
                     * 
                     */
                    std::string GetBackupDesc() const;

                    /**
                     * 设置Specified remarks for initiating backup tasks.
                     * @param _backupDesc Specified remarks for initiating backup tasks.
                     * 
                     */
                    void SetBackupDesc(const std::string& _backupDesc);

                    /**
                     * 判断参数 BackupDesc 是否已赋值
                     * @return BackupDesc 是否已赋值
                     * 
                     */
                    bool BackupDescHasBeenSet() const;

                    /**
                     * 获取Region information.
                     * @return Region Region information.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region information.
                     * @param _region Region information.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Bucket information.
                     * @return Bucket Bucket information.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Bucket information.
                     * @param _bucket Bucket information.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                private:

                    /**
                     * Task creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Backup file name.
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * Shard name.
                     */
                    std::string m_replicaSetId;
                    bool m_replicaSetIdHasBeenSet;

                    /**
                     * Backup data size, in bytes.
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * Task status.
- 0: wait for execution.
- 1: downloading.
- 2: download completed.
- 3: download failed.
- 4: wait for retry.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task progress percentage.
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * Duration, in seconds.
                     */
                    int64_t m_timeSpend;
                    bool m_timeSpendHasBeenSet;

                    /**
                     * Download link for backup data.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Backup method.
- 0: logical backup.
- 1: physical backup.
- 3: snapshot backup.
**Note**:
1. The General Edition instance supports logical and physical backup. The Cloud Disk Edition instance supports physical and snapshot backup, but does not support logical backup currently.
2. Physical backup is not supported when storage encryption is enabled for the instance.
                     */
                    int64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Specified remarks for initiating backup tasks.
                     */
                    std::string m_backupDesc;
                    bool m_backupDescHasBeenSet;

                    /**
                     * Region information.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Bucket information.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPDOWNLOADTASK_H_
