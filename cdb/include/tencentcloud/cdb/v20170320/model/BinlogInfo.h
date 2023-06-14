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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BINLOGINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BINLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RemoteBackupInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Binlog information
                */
                class BinlogInfo : public AbstractModel
                {
                public:
                    BinlogInfo();
                    ~BinlogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Binlog backup filename
                     * @return Name Binlog backup filename
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Binlog backup filename
                     * @param _name Binlog backup filename
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Backup file size in bytes
                     * @return Size Backup file size in bytes
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Backup file size in bytes
                     * @param _size Backup file size in bytes
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取File stored time in the format of 2016-03-17 02:10:37
                     * @return Date File stored time in the format of 2016-03-17 02:10:37
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置File stored time in the format of 2016-03-17 02:10:37
                     * @param _date File stored time in the format of 2016-03-17 02:10:37
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Download address
                     * @return IntranetUrl Download address
                     * 
                     */
                    std::string GetIntranetUrl() const;

                    /**
                     * 设置Download address
                     * @param _intranetUrl Download address
                     * 
                     */
                    void SetIntranetUrl(const std::string& _intranetUrl);

                    /**
                     * 判断参数 IntranetUrl 是否已赋值
                     * @return IntranetUrl 是否已赋值
                     * 
                     */
                    bool IntranetUrlHasBeenSet() const;

                    /**
                     * 获取Download address
                     * @return InternetUrl Download address
                     * 
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置Download address
                     * @param _internetUrl Download address
                     * 
                     */
                    void SetInternetUrl(const std::string& _internetUrl);

                    /**
                     * 判断参数 InternetUrl 是否已赋值
                     * @return InternetUrl 是否已赋值
                     * 
                     */
                    bool InternetUrlHasBeenSet() const;

                    /**
                     * 获取Log type. Value range: binlog
                     * @return Type Log type. Value range: binlog
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Log type. Value range: binlog
                     * @param _type Log type. Value range: binlog
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Binlog file start file
                     * @return BinlogStartTime Binlog file start file
                     * 
                     */
                    std::string GetBinlogStartTime() const;

                    /**
                     * 设置Binlog file start file
                     * @param _binlogStartTime Binlog file start file
                     * 
                     */
                    void SetBinlogStartTime(const std::string& _binlogStartTime);

                    /**
                     * 判断参数 BinlogStartTime 是否已赋值
                     * @return BinlogStartTime 是否已赋值
                     * 
                     */
                    bool BinlogStartTimeHasBeenSet() const;

                    /**
                     * 获取Binlog file end time
                     * @return BinlogFinishTime Binlog file end time
                     * 
                     */
                    std::string GetBinlogFinishTime() const;

                    /**
                     * 设置Binlog file end time
                     * @param _binlogFinishTime Binlog file end time
                     * 
                     */
                    void SetBinlogFinishTime(const std::string& _binlogFinishTime);

                    /**
                     * 判断参数 BinlogFinishTime 是否已赋值
                     * @return BinlogFinishTime 是否已赋值
                     * 
                     */
                    bool BinlogFinishTimeHasBeenSet() const;

                    /**
                     * 获取The region where the binlog file resides
                     * @return Region The region where the binlog file resides
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region where the binlog file resides
                     * @param _region The region where the binlog file resides
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
                     * 获取The detailed information of remote binlog backups
                     * @return RemoteInfo The detailed information of remote binlog backups
                     * 
                     */
                    std::vector<RemoteBackupInfo> GetRemoteInfo() const;

                    /**
                     * 设置The detailed information of remote binlog backups
                     * @param _remoteInfo The detailed information of remote binlog backups
                     * 
                     */
                    void SetRemoteInfo(const std::vector<RemoteBackupInfo>& _remoteInfo);

                    /**
                     * 判断参数 RemoteInfo 是否已赋值
                     * @return RemoteInfo 是否已赋值
                     * 
                     */
                    bool RemoteInfoHasBeenSet() const;

                    /**
                     * 获取Storage method. Valid values: `0` (regular storage), `1`(archive storage). Default value: `0`.
                     * @return CosStorageType Storage method. Valid values: `0` (regular storage), `1`(archive storage). Default value: `0`.
                     * 
                     */
                    int64_t GetCosStorageType() const;

                    /**
                     * 设置Storage method. Valid values: `0` (regular storage), `1`(archive storage). Default value: `0`.
                     * @param _cosStorageType Storage method. Valid values: `0` (regular storage), `1`(archive storage). Default value: `0`.
                     * 
                     */
                    void SetCosStorageType(const int64_t& _cosStorageType);

                    /**
                     * 判断参数 CosStorageType 是否已赋值
                     * @return CosStorageType 是否已赋值
                     * 
                     */
                    bool CosStorageTypeHasBeenSet() const;

                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @param _instanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Binlog backup filename
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Backup file size in bytes
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * File stored time in the format of 2016-03-17 02:10:37
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Download address
                     */
                    std::string m_intranetUrl;
                    bool m_intranetUrlHasBeenSet;

                    /**
                     * Download address
                     */
                    std::string m_internetUrl;
                    bool m_internetUrlHasBeenSet;

                    /**
                     * Log type. Value range: binlog
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Binlog file start file
                     */
                    std::string m_binlogStartTime;
                    bool m_binlogStartTimeHasBeenSet;

                    /**
                     * Binlog file end time
                     */
                    std::string m_binlogFinishTime;
                    bool m_binlogFinishTimeHasBeenSet;

                    /**
                     * The region where the binlog file resides
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Backup task status. Valid values: `SUCCESS` (backup succeeded), `FAILED` (backup failed), `RUNNING` (backup is in progress).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The detailed information of remote binlog backups
                     */
                    std::vector<RemoteBackupInfo> m_remoteInfo;
                    bool m_remoteInfoHasBeenSet;

                    /**
                     * Storage method. Valid values: `0` (regular storage), `1`(archive storage). Default value: `0`.
                     */
                    int64_t m_cosStorageType;
                    bool m_cosStorageTypeHasBeenSet;

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BINLOGINFO_H_
