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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBUSINESSINTELLIGENCEFILERESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBUSINESSINTELLIGENCEFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/BusinessIntelligenceFile.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeBusinessIntelligenceFile response structure.
                */
                class DescribeBusinessIntelligenceFileResponse : public AbstractModel
                {
                public:
                    DescribeBusinessIntelligenceFileResponse();
                    ~DescribeBusinessIntelligenceFileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of file deployment tasks
                     * @return TotalCount Total number of file deployment tasks
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取File deployment task set
                     * @return BackupMigrationSet File deployment task set
                     * 
                     */
                    std::vector<BusinessIntelligenceFile> GetBackupMigrationSet() const;

                    /**
                     * 判断参数 BackupMigrationSet 是否已赋值
                     * @return BackupMigrationSet 是否已赋值
                     * 
                     */
                    bool BackupMigrationSetHasBeenSet() const;

                private:

                    /**
                     * Total number of file deployment tasks
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * File deployment task set
                     */
                    std::vector<BusinessIntelligenceFile> m_backupMigrationSet;
                    bool m_backupMigrationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBUSINESSINTELLIGENCEFILERESPONSE_H_
