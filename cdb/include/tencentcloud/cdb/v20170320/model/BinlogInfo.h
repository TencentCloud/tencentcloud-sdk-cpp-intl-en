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
                     * 获取<p>binlog backup file name</p>
                     * @return Name <p>binlog backup file name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>binlog backup file name</p>
                     * @param _name <p>binlog backup file name</p>
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
                     * 获取<p>Backup file size, unit: Byte</p>
                     * @return Size <p>Backup file size, unit: Byte</p>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>Backup file size, unit: Byte</p>
                     * @param _size <p>Backup file size, unit: Byte</p>
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
                     * 获取<p>File storage time. Time format: 2016-03-17 02:10:37</p>
                     * @return Date <p>File storage time. Time format: 2016-03-17 02:10:37</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>File storage time. Time format: 2016-03-17 02:10:37</p>
                     * @param _date <p>File storage time. Time format: 2016-03-17 02:10:37</p>
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
                     * 获取<p>Download link<br>Description: This download link is the same as the download address of the parameter InternetUrl.</p>
                     * @return IntranetUrl <p>Download link<br>Description: This download link is the same as the download address of the parameter InternetUrl.</p>
                     * 
                     */
                    std::string GetIntranetUrl() const;

                    /**
                     * 设置<p>Download link<br>Description: This download link is the same as the download address of the parameter InternetUrl.</p>
                     * @param _intranetUrl <p>Download link<br>Description: This download link is the same as the download address of the parameter InternetUrl.</p>
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
                     * 获取<p>Download address<br>Description: This download address is the same as the IntranetUrl download address.</p>
                     * @return InternetUrl <p>Download address<br>Description: This download address is the same as the IntranetUrl download address.</p>
                     * 
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置<p>Download address<br>Description: This download address is the same as the IntranetUrl download address.</p>
                     * @param _internetUrl <p>Download address<br>Description: This download address is the same as the IntranetUrl download address.</p>
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
                     * 获取<p>Log specific type. Possible values: binlog - binary log</p>
                     * @return Type <p>Log specific type. Possible values: binlog - binary log</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Log specific type. Possible values: binlog - binary log</p>
                     * @param _type <p>Log specific type. Possible values: binlog - binary log</p>
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
                     * 获取<p>binlog file start time</p>
                     * @return BinlogStartTime <p>binlog file start time</p>
                     * 
                     */
                    std::string GetBinlogStartTime() const;

                    /**
                     * 设置<p>binlog file start time</p>
                     * @param _binlogStartTime <p>binlog file start time</p>
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
                     * 获取<p>binlog file expiration time</p>
                     * @return BinlogFinishTime <p>binlog file expiration time</p>
                     * 
                     */
                    std::string GetBinlogFinishTime() const;

                    /**
                     * 设置<p>binlog file expiration time</p>
                     * @param _binlogFinishTime <p>binlog file expiration time</p>
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
                     * 获取<p>Region where local binlog files are located</p>
                     * @return Region <p>Region where local binlog files are located</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region where local binlog files are located</p>
                     * @param _region <p>Region where local binlog files are located</p>
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
                     * 获取<p>Backup task status. Possible values: "SUCCESS": backup successful, "FAILED": backup FAILED, "RUNNING": backup in progress.</p>
                     * @return Status <p>Backup task status. Possible values: "SUCCESS": backup successful, "FAILED": backup FAILED, "RUNNING": backup in progress.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Backup task status. Possible values: "SUCCESS": backup successful, "FAILED": backup FAILED, "RUNNING": backup in progress.</p>
                     * @param _status <p>Backup task status. Possible values: "SUCCESS": backup successful, "FAILED": backup FAILED, "RUNNING": backup in progress.</p>
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
                     * 获取<p>Detailed information of binlog offsite backup</p>
                     * @return RemoteInfo <p>Detailed information of binlog offsite backup</p>
                     * 
                     */
                    std::vector<RemoteBackupInfo> GetRemoteInfo() const;

                    /**
                     * 设置<p>Detailed information of binlog offsite backup</p>
                     * @param _remoteInfo <p>Detailed information of binlog offsite backup</p>
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
                     * 获取<p>Storage method: 0 - regular storage, 1 - archive storage, 2 - standard storage, defaults to 0.</p>
                     * @return CosStorageType <p>Storage method: 0 - regular storage, 1 - archive storage, 2 - standard storage, defaults to 0.</p>
                     * 
                     */
                    int64_t GetCosStorageType() const;

                    /**
                     * 设置<p>Storage method: 0 - regular storage, 1 - archive storage, 2 - standard storage, defaults to 0.</p>
                     * @param _cosStorageType <p>Storage method: 0 - regular storage, 1 - archive storage, 2 - standard storage, defaults to 0.</p>
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
                     * 获取<p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
                     * @return InstanceId <p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
                     * @deprecated
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
                     * @param _instanceId <p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
                     * @deprecated
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * @deprecated
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Backup completion progress</p>
                     * @return Progress <p>Backup completion progress</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>Backup completion progress</p>
                     * @param _progress <p>Backup completion progress</p>
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * <p>binlog backup file name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Backup file size, unit: Byte</p>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>File storage time. Time format: 2016-03-17 02:10:37</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>Download link<br>Description: This download link is the same as the download address of the parameter InternetUrl.</p>
                     */
                    std::string m_intranetUrl;
                    bool m_intranetUrlHasBeenSet;

                    /**
                     * <p>Download address<br>Description: This download address is the same as the IntranetUrl download address.</p>
                     */
                    std::string m_internetUrl;
                    bool m_internetUrlHasBeenSet;

                    /**
                     * <p>Log specific type. Possible values: binlog - binary log</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>binlog file start time</p>
                     */
                    std::string m_binlogStartTime;
                    bool m_binlogStartTimeHasBeenSet;

                    /**
                     * <p>binlog file expiration time</p>
                     */
                    std::string m_binlogFinishTime;
                    bool m_binlogFinishTimeHasBeenSet;

                    /**
                     * <p>Region where local binlog files are located</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Backup task status. Possible values: "SUCCESS": backup successful, "FAILED": backup FAILED, "RUNNING": backup in progress.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Detailed information of binlog offsite backup</p>
                     */
                    std::vector<RemoteBackupInfo> m_remoteInfo;
                    bool m_remoteInfoHasBeenSet;

                    /**
                     * <p>Storage method: 0 - regular storage, 1 - archive storage, 2 - standard storage, defaults to 0.</p>
                     */
                    int64_t m_cosStorageType;
                    bool m_cosStorageTypeHasBeenSet;

                    /**
                     * <p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Backup completion progress</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BINLOGINFO_H_
