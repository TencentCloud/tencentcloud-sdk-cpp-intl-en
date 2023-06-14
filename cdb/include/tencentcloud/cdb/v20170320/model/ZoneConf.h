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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ZONECONF_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ZONECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Multi-AZ information
                */
                class ZoneConf : public AbstractModel
                {
                public:
                    ZoneConf();
                    ~ZoneConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AZ deployment mode. Value range: 0 (single-AZ), 1 (multi-AZ)
                     * @return DeployMode AZ deployment mode. Value range: 0 (single-AZ), 1 (multi-AZ)
                     * 
                     */
                    std::vector<int64_t> GetDeployMode() const;

                    /**
                     * 设置AZ deployment mode. Value range: 0 (single-AZ), 1 (multi-AZ)
                     * @param _deployMode AZ deployment mode. Value range: 0 (single-AZ), 1 (multi-AZ)
                     * 
                     */
                    void SetDeployMode(const std::vector<int64_t>& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取AZ where the primary instance is located
                     * @return MasterZone AZ where the primary instance is located
                     * 
                     */
                    std::vector<std::string> GetMasterZone() const;

                    /**
                     * 设置AZ where the primary instance is located
                     * @param _masterZone AZ where the primary instance is located
                     * 
                     */
                    void SetMasterZone(const std::vector<std::string>& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取AZ where salve database 1 is located when the instance is deployed in multi-AZ mode
                     * @return SlaveZone AZ where salve database 1 is located when the instance is deployed in multi-AZ mode
                     * 
                     */
                    std::vector<std::string> GetSlaveZone() const;

                    /**
                     * 设置AZ where salve database 1 is located when the instance is deployed in multi-AZ mode
                     * @param _slaveZone AZ where salve database 1 is located when the instance is deployed in multi-AZ mode
                     * 
                     */
                    void SetSlaveZone(const std::vector<std::string>& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取AZ where salve database 2 is located when the instance is deployed in multi-AZ mode
                     * @return BackupZone AZ where salve database 2 is located when the instance is deployed in multi-AZ mode
                     * 
                     */
                    std::vector<std::string> GetBackupZone() const;

                    /**
                     * 设置AZ where salve database 2 is located when the instance is deployed in multi-AZ mode
                     * @param _backupZone AZ where salve database 2 is located when the instance is deployed in multi-AZ mode
                     * 
                     */
                    void SetBackupZone(const std::vector<std::string>& _backupZone);

                    /**
                     * 判断参数 BackupZone 是否已赋值
                     * @return BackupZone 是否已赋值
                     * 
                     */
                    bool BackupZoneHasBeenSet() const;

                private:

                    /**
                     * AZ deployment mode. Value range: 0 (single-AZ), 1 (multi-AZ)
                     */
                    std::vector<int64_t> m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * AZ where the primary instance is located
                     */
                    std::vector<std::string> m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * AZ where salve database 1 is located when the instance is deployed in multi-AZ mode
                     */
                    std::vector<std::string> m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * AZ where salve database 2 is located when the instance is deployed in multi-AZ mode
                     */
                    std::vector<std::string> m_backupZone;
                    bool m_backupZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ZONECONF_H_
