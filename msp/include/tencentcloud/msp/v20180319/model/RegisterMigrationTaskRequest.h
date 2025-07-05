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

#ifndef TENCENTCLOUD_MSP_V20180319_MODEL_REGISTERMIGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_MSP_V20180319_MODEL_REGISTERMIGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/msp/v20180319/model/SrcInfo.h>
#include <tencentcloud/msp/v20180319/model/DstInfo.h>


namespace TencentCloud
{
    namespace Msp
    {
        namespace V20180319
        {
            namespace Model
            {
                /**
                * RegisterMigrationTask request structure.
                */
                class RegisterMigrationTaskRequest : public AbstractModel
                {
                public:
                    RegisterMigrationTaskRequest();
                    ~RegisterMigrationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task type, valid values include `database` (database migration), `file` (file migration) or `host` (host migration).
                     * @return TaskType Task type, valid values include `database` (database migration), `file` (file migration) or `host` (host migration).
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type, valid values include `database` (database migration), `file` (file migration) or `host` (host migration).
                     * @param _taskType Task type, valid values include `database` (database migration), `file` (file migration) or `host` (host migration).
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task name
                     * @return TaskName Task name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name
                     * @param _taskName Task name
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Service supplier name
                     * @return ServiceSupplier Service supplier name
                     * 
                     */
                    std::string GetServiceSupplier() const;

                    /**
                     * 设置Service supplier name
                     * @param _serviceSupplier Service supplier name
                     * 
                     */
                    void SetServiceSupplier(const std::string& _serviceSupplier);

                    /**
                     * 判断参数 ServiceSupplier 是否已赋值
                     * @return ServiceSupplier 是否已赋值
                     * 
                     */
                    bool ServiceSupplierHasBeenSet() const;

                    /**
                     * 获取Migration task creation time
                     * @return CreateTime Migration task creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Migration task creation time
                     * @param _createTime Migration task creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Migration task update time
                     * @return UpdateTime Migration task update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Migration task update time
                     * @param _updateTime Migration task update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Migration type, for example `mysql:mysql` in database migration means migration from mysql to mysql and `oss:cos` in file migration means migration from Alibaba Cloud OSS to Tencent COS.
                     * @return MigrateClass Migration type, for example `mysql:mysql` in database migration means migration from mysql to mysql and `oss:cos` in file migration means migration from Alibaba Cloud OSS to Tencent COS.
                     * 
                     */
                    std::string GetMigrateClass() const;

                    /**
                     * 设置Migration type, for example `mysql:mysql` in database migration means migration from mysql to mysql and `oss:cos` in file migration means migration from Alibaba Cloud OSS to Tencent COS.
                     * @param _migrateClass Migration type, for example `mysql:mysql` in database migration means migration from mysql to mysql and `oss:cos` in file migration means migration from Alibaba Cloud OSS to Tencent COS.
                     * 
                     */
                    void SetMigrateClass(const std::string& _migrateClass);

                    /**
                     * 判断参数 MigrateClass 是否已赋值
                     * @return MigrateClass 是否已赋值
                     * 
                     */
                    bool MigrateClassHasBeenSet() const;

                    /**
                     * 获取Migration task source information
                     * @return SrcInfo Migration task source information
                     * 
                     */
                    SrcInfo GetSrcInfo() const;

                    /**
                     * 设置Migration task source information
                     * @param _srcInfo Migration task source information
                     * 
                     */
                    void SetSrcInfo(const SrcInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取Migration task destination information
                     * @return DstInfo Migration task destination information
                     * 
                     */
                    DstInfo GetDstInfo() const;

                    /**
                     * 设置Migration task destination information
                     * @param _dstInfo Migration task destination information
                     * 
                     */
                    void SetDstInfo(const DstInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取Source instance access type. Valid values for database migration include `extranet` (public network), `cvm` (CVM-created instance), `dcg` (Direct Connect-enabled instance), `vpncloud` (Tencent Cloud VPN-enabled instance), `vpnselfbuild` (self-built VPN-enabled instance), `cdb` (TencentDB instance)
                     * @return SrcAccessType Source instance access type. Valid values for database migration include `extranet` (public network), `cvm` (CVM-created instance), `dcg` (Direct Connect-enabled instance), `vpncloud` (Tencent Cloud VPN-enabled instance), `vpnselfbuild` (self-built VPN-enabled instance), `cdb` (TencentDB instance)
                     * 
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置Source instance access type. Valid values for database migration include `extranet` (public network), `cvm` (CVM-created instance), `dcg` (Direct Connect-enabled instance), `vpncloud` (Tencent Cloud VPN-enabled instance), `vpnselfbuild` (self-built VPN-enabled instance), `cdb` (TencentDB instance)
                     * @param _srcAccessType Source instance access type. Valid values for database migration include `extranet` (public network), `cvm` (CVM-created instance), `dcg` (Direct Connect-enabled instance), `vpncloud` (Tencent Cloud VPN-enabled instance), `vpnselfbuild` (self-built VPN-enabled instance), `cdb` (TencentDB instance)
                     * 
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     * 
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取Database type of the source instance. Valid values for database migration: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`
                     * @return SrcDatabaseType Database type of the source instance. Valid values for database migration: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`
                     * 
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置Database type of the source instance. Valid values for database migration: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`
                     * @param _srcDatabaseType Database type of the source instance. Valid values for database migration: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`
                     * 
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     * 
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Target instance access type. Valid values for database migration include `extranet` (public network), `cvm` (CVM-created instance), `dcg` (Direct Connect-enabled instance), `vpncloud` (Tencent Cloud VPN-enabled instance), `vpnselfbuild` (self-built VPN-enabled instance), `cdb` (TencentDB instance)
                     * @return DstAccessType Target instance access type. Valid values for database migration include `extranet` (public network), `cvm` (CVM-created instance), `dcg` (Direct Connect-enabled instance), `vpncloud` (Tencent Cloud VPN-enabled instance), `vpnselfbuild` (self-built VPN-enabled instance), `cdb` (TencentDB instance)
                     * 
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置Target instance access type. Valid values for database migration include `extranet` (public network), `cvm` (CVM-created instance), `dcg` (Direct Connect-enabled instance), `vpncloud` (Tencent Cloud VPN-enabled instance), `vpnselfbuild` (self-built VPN-enabled instance), `cdb` (TencentDB instance)
                     * @param _dstAccessType Target instance access type. Valid values for database migration include `extranet` (public network), `cvm` (CVM-created instance), `dcg` (Direct Connect-enabled instance), `vpncloud` (Tencent Cloud VPN-enabled instance), `vpnselfbuild` (self-built VPN-enabled instance), `cdb` (TencentDB instance)
                     * 
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     * 
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取Database type of the target instance. Valid values for database migration: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`
                     * @return DstDatabaseType Database type of the target instance. Valid values for database migration: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`
                     * 
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置Database type of the target instance. Valid values for database migration: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`
                     * @param _dstDatabaseType Database type of the target instance. Valid values for database migration: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`
                     * 
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     * 
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                private:

                    /**
                     * Task type, valid values include `database` (database migration), `file` (file migration) or `host` (host migration).
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Service supplier name
                     */
                    std::string m_serviceSupplier;
                    bool m_serviceSupplierHasBeenSet;

                    /**
                     * Migration task creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Migration task update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Migration type, for example `mysql:mysql` in database migration means migration from mysql to mysql and `oss:cos` in file migration means migration from Alibaba Cloud OSS to Tencent COS.
                     */
                    std::string m_migrateClass;
                    bool m_migrateClassHasBeenSet;

                    /**
                     * Migration task source information
                     */
                    SrcInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * Migration task destination information
                     */
                    DstInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * Source instance access type. Valid values for database migration include `extranet` (public network), `cvm` (CVM-created instance), `dcg` (Direct Connect-enabled instance), `vpncloud` (Tencent Cloud VPN-enabled instance), `vpnselfbuild` (self-built VPN-enabled instance), `cdb` (TencentDB instance)
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * Database type of the source instance. Valid values for database migration: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * Target instance access type. Valid values for database migration include `extranet` (public network), `cvm` (CVM-created instance), `dcg` (Direct Connect-enabled instance), `vpncloud` (Tencent Cloud VPN-enabled instance), `vpnselfbuild` (self-built VPN-enabled instance), `cdb` (TencentDB instance)
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * Database type of the target instance. Valid values for database migration: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MSP_V20180319_MODEL_REGISTERMIGRATIONTASKREQUEST_H_
