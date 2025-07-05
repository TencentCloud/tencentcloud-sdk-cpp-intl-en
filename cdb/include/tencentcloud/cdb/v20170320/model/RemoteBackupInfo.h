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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_REMOTEBACKUPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_REMOTEBACKUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Information of the remote backup
                */
                class RemoteBackupInfo : public AbstractModel
                {
                public:
                    RemoteBackupInfo();
                    ~RemoteBackupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the remote backup subtask
                     * @return SubBackupId ID of the remote backup subtask
                     * 
                     */
                    int64_t GetSubBackupId() const;

                    /**
                     * 设置ID of the remote backup subtask
                     * @param _subBackupId ID of the remote backup subtask
                     * 
                     */
                    void SetSubBackupId(const int64_t& _subBackupId);

                    /**
                     * 判断参数 SubBackupId 是否已赋值
                     * @return SubBackupId 是否已赋值
                     * 
                     */
                    bool SubBackupIdHasBeenSet() const;

                    /**
                     * 获取The region where the remote backup resides
                     * @return Region The region where the remote backup resides
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region where the remote backup resides
                     * @param _region The region where the remote backup resides
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
                     * 获取Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     * @return Status Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     * @param _status Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
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
                     * 获取The start time of remote backup
                     * @return StartTime The start time of remote backup
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time of remote backup
                     * @param _startTime The start time of remote backup
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
                     * 获取The end time of remote backup
                     * @return FinishTime The end time of remote backup
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置The end time of remote backup
                     * @param _finishTime The end time of remote backup
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
                     * 获取The download address
                     * @return Url The download address
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置The download address
                     * @param _url The download address
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * ID of the remote backup subtask
                     */
                    int64_t m_subBackupId;
                    bool m_subBackupIdHasBeenSet;

                    /**
                     * The region where the remote backup resides
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The start time of remote backup
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time of remote backup
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * The download address
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_REMOTEBACKUPINFO_H_
