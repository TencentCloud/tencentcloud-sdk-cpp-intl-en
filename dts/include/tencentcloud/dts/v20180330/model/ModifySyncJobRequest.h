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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSYNCJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSYNCJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SyncOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * ModifySyncJob request structure.
                */
                class ModifySyncJobRequest : public AbstractModel
                {
                public:
                    ModifySyncJobRequest();
                    ~ModifySyncJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the disaster recovery sync task to be modified
                     * @return JobId ID of the disaster recovery sync task to be modified
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置ID of the disaster recovery sync task to be modified
                     * @param JobId ID of the disaster recovery sync task to be modified
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Name of the disaster recovery sync task
                     * @return JobName Name of the disaster recovery sync task
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Name of the disaster recovery sync task
                     * @param JobName Name of the disaster recovery sync task
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Configuration options of a disaster recovery sync task
                     * @return SyncOption Configuration options of a disaster recovery sync task
                     */
                    SyncOption GetSyncOption() const;

                    /**
                     * 设置Configuration options of a disaster recovery sync task
                     * @param SyncOption Configuration options of a disaster recovery sync task
                     */
                    void SetSyncOption(const SyncOption& _syncOption);

                    /**
                     * 判断参数 SyncOption 是否已赋值
                     * @return SyncOption 是否已赋值
                     */
                    bool SyncOptionHasBeenSet() const;

                    /**
                     * 获取When syncing the specified table, you need to set the information of the source table to be synced, which should be described in JSON string format. Below are examples.
For databases with a database-table structure:
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
                     * @return DatabaseInfo When syncing the specified table, you need to set the information of the source table to be synced, which should be described in JSON string format. Below are examples.
For databases with a database-table structure:
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
                     */
                    std::string GetDatabaseInfo() const;

                    /**
                     * 设置When syncing the specified table, you need to set the information of the source table to be synced, which should be described in JSON string format. Below are examples.
For databases with a database-table structure:
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
                     * @param DatabaseInfo When syncing the specified table, you need to set the information of the source table to be synced, which should be described in JSON string format. Below are examples.
For databases with a database-table structure:
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
                     */
                    void SetDatabaseInfo(const std::string& _databaseInfo);

                    /**
                     * 判断参数 DatabaseInfo 是否已赋值
                     * @return DatabaseInfo 是否已赋值
                     */
                    bool DatabaseInfoHasBeenSet() const;

                private:

                    /**
                     * ID of the disaster recovery sync task to be modified
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Name of the disaster recovery sync task
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Configuration options of a disaster recovery sync task
                     */
                    SyncOption m_syncOption;
                    bool m_syncOptionHasBeenSet;

                    /**
                     * When syncing the specified table, you need to set the information of the source table to be synced, which should be described in JSON string format. Below are examples.
For databases with a database-table structure:
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
                     */
                    std::string m_databaseInfo;
                    bool m_databaseInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSYNCJOBREQUEST_H_
