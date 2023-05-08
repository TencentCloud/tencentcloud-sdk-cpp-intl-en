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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEBACKUPRECORDSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEBACKUPRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/BackupRecords.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DeleteBackupRecords request structure.
                */
                class DeleteBackupRecordsRequest : public AbstractModel
                {
                public:
                    DeleteBackupRecordsRequest();
                    ~DeleteBackupRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID of the backup records to be deleted
                     * @return ClusterId Cluster ID of the backup records to be deleted
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID of the backup records to be deleted
                     * @param ClusterId Cluster ID of the backup records to be deleted
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Details of the backup records to be deleted
                     * @return BackupRecords Details of the backup records to be deleted
                     */
                    std::vector<BackupRecords> GetBackupRecords() const;

                    /**
                     * 设置Details of the backup records to be deleted
                     * @param BackupRecords Details of the backup records to be deleted
                     */
                    void SetBackupRecords(const std::vector<BackupRecords>& _backupRecords);

                    /**
                     * 判断参数 BackupRecords 是否已赋值
                     * @return BackupRecords 是否已赋值
                     */
                    bool BackupRecordsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID of the backup records to be deleted
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Details of the backup records to be deleted
                     */
                    std::vector<BackupRecords> m_backupRecords;
                    bool m_backupRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEBACKUPRECORDSREQUEST_H_
