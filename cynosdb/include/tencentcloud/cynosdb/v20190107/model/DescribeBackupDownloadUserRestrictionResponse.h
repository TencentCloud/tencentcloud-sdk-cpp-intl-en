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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADUSERRESTRICTIONRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADUSERRESTRICTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupLimitClusterRestriction.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeBackupDownloadUserRestriction response structure.
                */
                class DescribeBackupDownloadUserRestrictionResponse : public AbstractModel
                {
                public:
                    DescribeBackupDownloadUserRestrictionResponse();
                    ~DescribeBackupDownloadUserRestrictionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster backup download limit information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupLimitClusterRestrictions Cluster backup download limit information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BackupLimitClusterRestriction> GetBackupLimitClusterRestrictions() const;

                    /**
                     * 判断参数 BackupLimitClusterRestrictions 是否已赋值
                     * @return BackupLimitClusterRestrictions 是否已赋值
                     * 
                     */
                    bool BackupLimitClusterRestrictionsHasBeenSet() const;

                    /**
                     * 获取Total number of entries
                     * @return TotalCount Total number of entries
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Cluster backup download limit information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BackupLimitClusterRestriction> m_backupLimitClusterRestrictions;
                    bool m_backupLimitClusterRestrictionsHasBeenSet;

                    /**
                     * Total number of entries
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADUSERRESTRICTIONRESPONSE_H_
