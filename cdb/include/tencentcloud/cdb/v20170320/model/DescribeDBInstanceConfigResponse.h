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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCECONFIGRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/SlaveConfig.h>
#include <tencentcloud/cdb/v20170320/model/BackupConfig.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceConfig response structure.
                */
                class DescribeDBInstanceConfigResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceConfigResponse();
                    ~DescribeDBInstanceConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Data protection mode of the primary instance. Value range: 0 (async replication), 1 (semi-sync replication), 2 (strong sync replication).
                     * @return ProtectMode Data protection mode of the primary instance. Value range: 0 (async replication), 1 (semi-sync replication), 2 (strong sync replication).
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     * 
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取Master instance deployment mode. Value range: 0 (single-AZ), 1 (multi-AZ)
                     * @return DeployMode Master instance deployment mode. Value range: 0 (single-AZ), 1 (multi-AZ)
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取Instance AZ information in the format of "ap-shanghai-1".
                     * @return Zone Instance AZ information in the format of "ap-shanghai-1".
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Configurations of the replica node
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return SlaveConfig Configurations of the replica node
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    SlaveConfig GetSlaveConfig() const;

                    /**
                     * 判断参数 SlaveConfig 是否已赋值
                     * @return SlaveConfig 是否已赋值
                     * 
                     */
                    bool SlaveConfigHasBeenSet() const;

                    /**
                     * 获取Configurations of the second replica node of a strong-sync instance
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return BackupConfig Configurations of the second replica node of a strong-sync instance
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    BackupConfig GetBackupConfig() const;

                    /**
                     * 判断参数 BackupConfig 是否已赋值
                     * @return BackupConfig 是否已赋值
                     * 
                     */
                    bool BackupConfigHasBeenSet() const;

                    /**
                     * 获取This parameter is only available for multi-AZ instances. It indicates whether the source AZ is the same as the one specified upon purchase. `true`: not the same, `false`: the same.
                     * @return Switched This parameter is only available for multi-AZ instances. It indicates whether the source AZ is the same as the one specified upon purchase. `true`: not the same, `false`: the same.
                     * 
                     */
                    bool GetSwitched() const;

                    /**
                     * 判断参数 Switched 是否已赋值
                     * @return Switched 是否已赋值
                     * 
                     */
                    bool SwitchedHasBeenSet() const;

                private:

                    /**
                     * Data protection mode of the primary instance. Value range: 0 (async replication), 1 (semi-sync replication), 2 (strong sync replication).
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * Master instance deployment mode. Value range: 0 (single-AZ), 1 (multi-AZ)
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * Instance AZ information in the format of "ap-shanghai-1".
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Configurations of the replica node
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    SlaveConfig m_slaveConfig;
                    bool m_slaveConfigHasBeenSet;

                    /**
                     * Configurations of the second replica node of a strong-sync instance
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    BackupConfig m_backupConfig;
                    bool m_backupConfigHasBeenSet;

                    /**
                     * This parameter is only available for multi-AZ instances. It indicates whether the source AZ is the same as the one specified upon purchase. `true`: not the same, `false`: the same.
                     */
                    bool m_switched;
                    bool m_switchedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCECONFIGRESPONSE_H_
