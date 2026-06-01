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
                     * 获取<p>Data protection method of the primary instance, possible returned values: 0 - asynchronous replication mode, 1 - semi-sync replication mode, 2 - strong sync replication mode.</p>
                     * @return ProtectMode <p>Data protection method of the primary instance, possible returned values: 0 - asynchronous replication mode, 1 - semi-sync replication mode, 2 - strong sync replication mode.</p>
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
                     * 获取<p>Primary instance deployment mode. Possible returned values: 0 - single AZ deployment, 1 - multi-AZ deployment.</p>
                     * @return DeployMode <p>Primary instance deployment mode. Possible returned values: 0 - single AZ deployment, 1 - multi-AZ deployment.</p>
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
                     * 获取<p>Primary AZ information of the instance, in the format of "ap-shanghai-2".</p>
                     * @return Zone <p>Primary AZ information of the instance, in the format of "ap-shanghai-2".</p>
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
                     * 获取<p>Configuration message of the first standby for two-node, three-node, and four-node instances.</p><p>When querying a two-node instance, this parameter returns the standby information of the two-node instance. When querying a three-node or four-node instance, this parameter returns the first standby information of the instance.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SlaveConfig <p>Configuration message of the first standby for two-node, three-node, and four-node instances.</p><p>When querying a two-node instance, this parameter returns the standby information of the two-node instance. When querying a three-node or four-node instance, this parameter returns the first standby information of the instance.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Configuration message of the second standby database for three-node and 4-node instances.</p><p>When querying three-node and 4-node instances, this parameter returns the information of the second standby database.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupConfig <p>Configuration message of the second standby database for three-node and 4-node instances.</p><p>When querying three-node and 4-node instances, this parameter returns the information of the second standby database.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Whether to switch over to the standby database.</p>
                     * @return Switched <p>Whether to switch over to the standby database.</p>
                     * 
                     */
                    bool GetSwitched() const;

                    /**
                     * 判断参数 Switched 是否已赋值
                     * @return Switched 是否已赋值
                     * 
                     */
                    bool SwitchedHasBeenSet() const;

                    /**
                     * 获取<p>Configuration message of the third standby database in a 4-node instance.</p><p>When querying a 4-node instance, this parameter returns the info of the third standby database.</p>
                     * @return FourthConfig <p>Configuration message of the third standby database in a 4-node instance.</p><p>When querying a 4-node instance, this parameter returns the info of the third standby database.</p>
                     * 
                     */
                    BackupConfig GetFourthConfig() const;

                    /**
                     * 判断参数 FourthConfig 是否已赋值
                     * @return FourthConfig 是否已赋值
                     * 
                     */
                    bool FourthConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Data protection method of the primary instance, possible returned values: 0 - asynchronous replication mode, 1 - semi-sync replication mode, 2 - strong sync replication mode.</p>
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * <p>Primary instance deployment mode. Possible returned values: 0 - single AZ deployment, 1 - multi-AZ deployment.</p>
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * <p>Primary AZ information of the instance, in the format of "ap-shanghai-2".</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Configuration message of the first standby for two-node, three-node, and four-node instances.</p><p>When querying a two-node instance, this parameter returns the standby information of the two-node instance. When querying a three-node or four-node instance, this parameter returns the first standby information of the instance.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SlaveConfig m_slaveConfig;
                    bool m_slaveConfigHasBeenSet;

                    /**
                     * <p>Configuration message of the second standby database for three-node and 4-node instances.</p><p>When querying three-node and 4-node instances, this parameter returns the information of the second standby database.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BackupConfig m_backupConfig;
                    bool m_backupConfigHasBeenSet;

                    /**
                     * <p>Whether to switch over to the standby database.</p>
                     */
                    bool m_switched;
                    bool m_switchedHasBeenSet;

                    /**
                     * <p>Configuration message of the third standby database in a 4-node instance.</p><p>When querying a 4-node instance, this parameter returns the info of the third standby database.</p>
                     */
                    BackupConfig m_fourthConfig;
                    bool m_fourthConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCECONFIGRESPONSE_H_
