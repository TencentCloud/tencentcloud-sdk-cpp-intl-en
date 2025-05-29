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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupLimitRestriction.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeBackupDownloadUrl request structure.
                */
                class DescribeBackupDownloadUrlRequest : public AbstractModel
                {
                public:
                    DescribeBackupDownloadUrlRequest();
                    ~DescribeBackupDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Backup ID
                     * @return BackupId Backup ID
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置Backup ID
                     * @param _backupId Backup ID
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取Backup download source restriction condition.
                     * @return DownloadRestriction Backup download source restriction condition.
                     * 
                     */
                    BackupLimitRestriction GetDownloadRestriction() const;

                    /**
                     * 设置Backup download source restriction condition.
                     * @param _downloadRestriction Backup download source restriction condition.
                     * 
                     */
                    void SetDownloadRestriction(const BackupLimitRestriction& _downloadRestriction);

                    /**
                     * 判断参数 DownloadRestriction 是否已赋值
                     * @return DownloadRestriction 是否已赋值
                     * 
                     */
                    bool DownloadRestrictionHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Backup ID
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Backup download source restriction condition.
                     */
                    BackupLimitRestriction m_downloadRestriction;
                    bool m_downloadRestrictionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADURLREQUEST_H_
