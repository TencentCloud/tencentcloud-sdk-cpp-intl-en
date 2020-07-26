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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_CREATESYNCJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_CREATESYNCJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SyncOption.h>
#include <tencentcloud/dts/v20180330/model/SyncInstanceInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * CreateSyncJob request structure.
                */
                class CreateSyncJobRequest : public AbstractModel
                {
                public:
                    CreateSyncJobRequest();
                    ~CreateSyncJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Disaster recovery sync task name
                     * @return JobName Disaster recovery sync task name
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Disaster recovery sync task name
                     * @param JobName Disaster recovery sync task name
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
                     * 获取Source instance database type, which currently only supports mysql
                     * @return SrcDatabaseType Source instance database type, which currently only supports mysql
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置Source instance database type, which currently only supports mysql
                     * @param SrcDatabaseType Source instance database type, which currently only supports mysql
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Source instance access type, which currently only supports cdb (TencentDB instances)
                     * @return SrcAccessType Source instance access type, which currently only supports cdb (TencentDB instances)
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置Source instance access type, which currently only supports cdb (TencentDB instances)
                     * @param SrcAccessType Source instance access type, which currently only supports cdb (TencentDB instances)
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取Source instance information
                     * @return SrcInfo Source instance information
                     */
                    SyncInstanceInfo GetSrcInfo() const;

                    /**
                     * 设置Source instance information
                     * @param SrcInfo Source instance information
                     */
                    void SetSrcInfo(const SyncInstanceInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取Target instance access type, which currently only supports mysql
                     * @return DstDatabaseType Target instance access type, which currently only supports mysql
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置Target instance access type, which currently only supports mysql
                     * @param DstDatabaseType Target instance access type, which currently only supports mysql
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Target instance access type, which currently only supports cdb (TencentDB instances)
                     * @return DstAccessType Target instance access type, which currently only supports cdb (TencentDB instances)
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置Target instance access type, which currently only supports cdb (TencentDB instances)
                     * @param DstAccessType Target instance access type, which currently only supports cdb (TencentDB instances)
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取Target instance information
                     * @return DstInfo Target instance information
                     */
                    SyncInstanceInfo GetDstInfo() const;

                    /**
                     * 设置Target instance information
                     * @param DstInfo Target instance information
                     */
                    void SetDstInfo(const SyncInstanceInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取Information of the source table to be synced, which is described in JSON string format.
For databases with a database-table structure:
[{Database:db1,Table:[table1,table2]},{Database:db2}]
                     * @return DatabaseInfo Information of the source table to be synced, which is described in JSON string format.
For databases with a database-table structure:
[{Database:db1,Table:[table1,table2]},{Database:db2}]
                     */
                    std::string GetDatabaseInfo() const;

                    /**
                     * 设置Information of the source table to be synced, which is described in JSON string format.
For databases with a database-table structure:
[{Database:db1,Table:[table1,table2]},{Database:db2}]
                     * @param DatabaseInfo Information of the source table to be synced, which is described in JSON string format.
For databases with a database-table structure:
[{Database:db1,Table:[table1,table2]},{Database:db2}]
                     */
                    void SetDatabaseInfo(const std::string& _databaseInfo);

                    /**
                     * 判断参数 DatabaseInfo 是否已赋值
                     * @return DatabaseInfo 是否已赋值
                     */
                    bool DatabaseInfoHasBeenSet() const;

                private:

                    /**
                     * Disaster recovery sync task name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Configuration options of a disaster recovery sync task
                     */
                    SyncOption m_syncOption;
                    bool m_syncOptionHasBeenSet;

                    /**
                     * Source instance database type, which currently only supports mysql
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * Source instance access type, which currently only supports cdb (TencentDB instances)
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * Source instance information
                     */
                    SyncInstanceInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * Target instance access type, which currently only supports mysql
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * Target instance access type, which currently only supports cdb (TencentDB instances)
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * Target instance information
                     */
                    SyncInstanceInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * Information of the source table to be synced, which is described in JSON string format.
For databases with a database-table structure:
[{Database:db1,Table:[table1,table2]},{Database:db2}]
                     */
                    std::string m_databaseInfo;
                    bool m_databaseInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_CREATESYNCJOBREQUEST_H_
