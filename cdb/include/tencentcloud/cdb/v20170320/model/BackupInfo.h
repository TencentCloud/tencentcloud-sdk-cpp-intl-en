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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_

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
                * Backup details
                */
                class BackupInfo : public AbstractModel
                {
                public:
                    BackupInfo();
                    ~BackupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup filename
                     * @return Name Backup filename
                     */
                    std::string GetName() const;

                    /**
                     * 设置Backup filename
                     * @param Name Backup filename
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Backup file size in bytes
                     * @return Size Backup file size in bytes
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Backup file size in bytes
                     * @param Size Backup file size in bytes
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     * @return Date Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     * @param Date Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Download address on the private network
                     * @return IntranetUrl Download address on the private network
                     */
                    std::string GetIntranetUrl() const;

                    /**
                     * 设置Download address on the private network
                     * @param IntranetUrl Download address on the private network
                     */
                    void SetIntranetUrl(const std::string& _intranetUrl);

                    /**
                     * 判断参数 IntranetUrl 是否已赋值
                     * @return IntranetUrl 是否已赋值
                     */
                    bool IntranetUrlHasBeenSet() const;

                    /**
                     * 获取Download address on the public network
                     * @return InternetUrl Download address on the public network
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置Download address on the public network
                     * @param InternetUrl Download address on the public network
                     */
                    void SetInternetUrl(const std::string& _internetUrl);

                    /**
                     * 判断参数 InternetUrl 是否已赋值
                     * @return InternetUrl 是否已赋值
                     */
                    bool InternetUrlHasBeenSet() const;

                    /**
                     * 获取Log type. Valid values: `logical` (logical cold backup), `physical` (physical cold backup).
                     * @return Type Log type. Valid values: `logical` (logical cold backup), `physical` (physical cold backup).
                     */
                    std::string GetType() const;

                    /**
                     * 设置Log type. Valid values: `logical` (logical cold backup), `physical` (physical cold backup).
                     * @param Type Log type. Valid values: `logical` (logical cold backup), `physical` (physical cold backup).
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Backup subtask ID, which is used when backup files are deleted
                     * @return BackupId Backup subtask ID, which is used when backup files are deleted
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置Backup subtask ID, which is used when backup files are deleted
                     * @param BackupId Backup subtask ID, which is used when backup files are deleted
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     * @return Status Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     * @param Status Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Backup task completion time
                     * @return FinishTime Backup task completion time
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Backup task completion time
                     * @param FinishTime Backup task completion time
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取(This field will be disused and is thus not recommended) backup creator. Valid values: `SYSTEM` (created by system), `Uin` (initiator's `Uin` value).
                     * @return Creator (This field will be disused and is thus not recommended) backup creator. Valid values: `SYSTEM` (created by system), `Uin` (initiator's `Uin` value).
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置(This field will be disused and is thus not recommended) backup creator. Valid values: `SYSTEM` (created by system), `Uin` (initiator's `Uin` value).
                     * @param Creator (This field will be disused and is thus not recommended) backup creator. Valid values: `SYSTEM` (created by system), `Uin` (initiator's `Uin` value).
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Backup task start time
                     * @return StartTime Backup task start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Backup task start time
                     * @param StartTime Backup task start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Backup method. Valid values: `full` (full backup), `partial` (partial backup).
                     * @return Method Backup method. Valid values: `full` (full backup), `partial` (partial backup).
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Backup method. Valid values: `full` (full backup), `partial` (partial backup).
                     * @param Method Backup method. Valid values: `full` (full backup), `partial` (partial backup).
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Backup mode. Valid values: `manual` (manual backup), `automatic` (automatic backup).
                     * @return Way Backup mode. Valid values: `manual` (manual backup), `automatic` (automatic backup).
                     */
                    std::string GetWay() const;

                    /**
                     * 设置Backup mode. Valid values: `manual` (manual backup), `automatic` (automatic backup).
                     * @param Way Backup mode. Valid values: `manual` (manual backup), `automatic` (automatic backup).
                     */
                    void SetWay(const std::string& _way);

                    /**
                     * 判断参数 Way 是否已赋值
                     * @return Way 是否已赋值
                     */
                    bool WayHasBeenSet() const;

                private:

                    /**
                     * Backup filename
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Backup file size in bytes
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Download address on the private network
                     */
                    std::string m_intranetUrl;
                    bool m_intranetUrlHasBeenSet;

                    /**
                     * Download address on the public network
                     */
                    std::string m_internetUrl;
                    bool m_internetUrlHasBeenSet;

                    /**
                     * Log type. Valid values: `logical` (logical cold backup), `physical` (physical cold backup).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Backup subtask ID, which is used when backup files are deleted
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Backup task completion time
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * (This field will be disused and is thus not recommended) backup creator. Valid values: `SYSTEM` (created by system), `Uin` (initiator's `Uin` value).
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Backup task start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Backup method. Valid values: `full` (full backup), `partial` (partial backup).
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Backup mode. Valid values: `manual` (manual backup), `automatic` (automatic backup).
                     */
                    std::string m_way;
                    bool m_wayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_
