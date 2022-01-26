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
                     * 获取Task creation time
                     * @return CreateTime Task creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time
                     * @param CreateTime Task creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Backup name
                     * @return BackupName Backup name
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置Backup name
                     * @param BackupName Backup name
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取Shard name
                     * @return ReplicaSetId Shard name
                     */
                    std::string GetReplicaSetId() const;

                    /**
                     * 设置Shard name
                     * @param ReplicaSetId Shard name
                     */
                    void SetReplicaSetId(const std::string& _replicaSetId);

                    /**
                     * 判断参数 ReplicaSetId 是否已赋值
                     * @return ReplicaSetId 是否已赋值
                     */
                    bool ReplicaSetIdHasBeenSet() const;

                    /**
                     * 获取Backup size in bytes
                     * @return BackupSize Backup size in bytes
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置Backup size in bytes
                     * @param BackupSize Backup size in bytes
                     */
                    void SetBackupSize(const int64_t& _backupSize);

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: `0` (waiting for execution), `1` (downloading), `2` (downloaded), `3` (download failed), `4` (waiting for retry)
                     * @return Status Task status. Valid values: `0` (waiting for execution), `1` (downloading), `2` (downloaded), `3` (download failed), `4` (waiting for retry)
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status. Valid values: `0` (waiting for execution), `1` (downloading), `2` (downloaded), `3` (download failed), `4` (waiting for retry)
                     * @param Status Task status. Valid values: `0` (waiting for execution), `1` (downloading), `2` (downloaded), `3` (download failed), `4` (waiting for retry)
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task progress in percentage
                     * @return Percent Task progress in percentage
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置Task progress in percentage
                     * @param Percent Task progress in percentage
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取Task duration in seconds
                     * @return TimeSpend Task duration in seconds
                     */
                    int64_t GetTimeSpend() const;

                    /**
                     * 设置Task duration in seconds
                     * @param TimeSpend Task duration in seconds
                     */
                    void SetTimeSpend(const int64_t& _timeSpend);

                    /**
                     * 判断参数 TimeSpend 是否已赋值
                     * @return TimeSpend 是否已赋值
                     */
                    bool TimeSpendHasBeenSet() const;

                    /**
                     * 获取Backup download address
                     * @return Url Backup download address
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Backup download address
                     * @param Url Backup download address
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Task creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Backup name
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * Shard name
                     */
                    std::string m_replicaSetId;
                    bool m_replicaSetIdHasBeenSet;

                    /**
                     * Backup size in bytes
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * Task status. Valid values: `0` (waiting for execution), `1` (downloading), `2` (downloaded), `3` (download failed), `4` (waiting for retry)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task progress in percentage
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * Task duration in seconds
                     */
                    int64_t m_timeSpend;
                    bool m_timeSpendHasBeenSet;

                    /**
                     * Backup download address
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPDOWNLOADTASK_H_
