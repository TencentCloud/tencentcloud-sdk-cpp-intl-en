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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ROLLBACKINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ROLLBACKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/RenameRestoreDatabase.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * RollbackInstance request structure.
                */
                class RollbackInstanceRequest : public AbstractModel
                {
                public:
                    RollbackInstanceRequest();
                    ~RollbackInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Rollback type. 0: the database rolled back overwrites the original database; 1: the database rolled back is renamed and does not overwrite the original database
                     * @return Type Rollback type. 0: the database rolled back overwrites the original database; 1: the database rolled back is renamed and does not overwrite the original database
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Rollback type. 0: the database rolled back overwrites the original database; 1: the database rolled back is renamed and does not overwrite the original database
                     * @param Type Rollback type. 0: the database rolled back overwrites the original database; 1: the database rolled back is renamed and does not overwrite the original database
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Database to be rolled back
                     * @return DBs Database to be rolled back
                     */
                    std::vector<std::string> GetDBs() const;

                    /**
                     * 设置Database to be rolled back
                     * @param DBs Database to be rolled back
                     */
                    void SetDBs(const std::vector<std::string>& _dBs);

                    /**
                     * 判断参数 DBs 是否已赋值
                     * @return DBs 是否已赋值
                     */
                    bool DBsHasBeenSet() const;

                    /**
                     * 获取Target time point for rollback
                     * @return Time Target time point for rollback
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Target time point for rollback
                     * @param Time Target time point for rollback
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取ID of the target instance to which the backup is restored. The target instance should be under the same `APPID`. If this parameter is left empty, ID of the source instance will be used.
                     * @return TargetInstanceId ID of the target instance to which the backup is restored. The target instance should be under the same `APPID`. If this parameter is left empty, ID of the source instance will be used.
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置ID of the target instance to which the backup is restored. The target instance should be under the same `APPID`. If this parameter is left empty, ID of the source instance will be used.
                     * @param TargetInstanceId ID of the target instance to which the backup is restored. The target instance should be under the same `APPID`. If this parameter is left empty, ID of the source instance will be used.
                     */
                    void SetTargetInstanceId(const std::string& _targetInstanceId);

                    /**
                     * 判断参数 TargetInstanceId 是否已赋值
                     * @return TargetInstanceId 是否已赋值
                     */
                    bool TargetInstanceIdHasBeenSet() const;

                    /**
                     * 获取Rename the databases listed in `ReNameRestoreDatabase`. This parameter takes effect only when `Type = 1` which indicates that backup rollback supports renaming databases. If it is left empty, databases will be renamed in the default format and the `DBs` parameter specifies the databases to be restored.
                     * @return RenameRestore Rename the databases listed in `ReNameRestoreDatabase`. This parameter takes effect only when `Type = 1` which indicates that backup rollback supports renaming databases. If it is left empty, databases will be renamed in the default format and the `DBs` parameter specifies the databases to be restored.
                     */
                    std::vector<RenameRestoreDatabase> GetRenameRestore() const;

                    /**
                     * 设置Rename the databases listed in `ReNameRestoreDatabase`. This parameter takes effect only when `Type = 1` which indicates that backup rollback supports renaming databases. If it is left empty, databases will be renamed in the default format and the `DBs` parameter specifies the databases to be restored.
                     * @param RenameRestore Rename the databases listed in `ReNameRestoreDatabase`. This parameter takes effect only when `Type = 1` which indicates that backup rollback supports renaming databases. If it is left empty, databases will be renamed in the default format and the `DBs` parameter specifies the databases to be restored.
                     */
                    void SetRenameRestore(const std::vector<RenameRestoreDatabase>& _renameRestore);

                    /**
                     * 判断参数 RenameRestore 是否已赋值
                     * @return RenameRestore 是否已赋值
                     */
                    bool RenameRestoreHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Rollback type. 0: the database rolled back overwrites the original database; 1: the database rolled back is renamed and does not overwrite the original database
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Database to be rolled back
                     */
                    std::vector<std::string> m_dBs;
                    bool m_dBsHasBeenSet;

                    /**
                     * Target time point for rollback
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * ID of the target instance to which the backup is restored. The target instance should be under the same `APPID`. If this parameter is left empty, ID of the source instance will be used.
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * Rename the databases listed in `ReNameRestoreDatabase`. This parameter takes effect only when `Type = 1` which indicates that backup rollback supports renaming databases. If it is left empty, databases will be renamed in the default format and the `DBs` parameter specifies the databases to be restored.
                     */
                    std::vector<RenameRestoreDatabase> m_renameRestore;
                    bool m_renameRestoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ROLLBACKINSTANCEREQUEST_H_
