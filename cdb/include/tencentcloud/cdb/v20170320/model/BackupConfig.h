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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPCONFIG_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPCONFIG_H_

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
                * Configuration information of ECDB secondary database 2. This field is only applicable to ECDB instances
                */
                class BackupConfig : public AbstractModel
                {
                public:
                    BackupConfig();
                    ~BackupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Replication mode of secondary database 2. Value range: async, semi-sync
                     * @return ReplicationMode Replication mode of secondary database 2. Value range: async, semi-sync
                     * 
                     */
                    std::string GetReplicationMode() const;

                    /**
                     * 设置Replication mode of secondary database 2. Value range: async, semi-sync
                     * @param _replicationMode Replication mode of secondary database 2. Value range: async, semi-sync
                     * 
                     */
                    void SetReplicationMode(const std::string& _replicationMode);

                    /**
                     * 判断参数 ReplicationMode 是否已赋值
                     * @return ReplicationMode 是否已赋值
                     * 
                     */
                    bool ReplicationModeHasBeenSet() const;

                    /**
                     * 获取Name of the AZ of secondary database 2, such as ap-shanghai-2
                     * @return Zone Name of the AZ of secondary database 2, such as ap-shanghai-2
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Name of the AZ of secondary database 2, such as ap-shanghai-2
                     * @param _zone Name of the AZ of secondary database 2, such as ap-shanghai-2
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Private IP address of secondary database 2
                     * @return Vip Private IP address of secondary database 2
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Private IP address of secondary database 2
                     * @param _vip Private IP address of secondary database 2
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Access port of secondary database 2
                     * @return Vport Access port of secondary database 2
                     * 
                     */
                    uint64_t GetVport() const;

                    /**
                     * 设置Access port of secondary database 2
                     * @param _vport Access port of secondary database 2
                     * 
                     */
                    void SetVport(const uint64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                private:

                    /**
                     * Replication mode of secondary database 2. Value range: async, semi-sync
                     */
                    std::string m_replicationMode;
                    bool m_replicationModeHasBeenSet;

                    /**
                     * Name of the AZ of secondary database 2, such as ap-shanghai-2
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Private IP address of secondary database 2
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Access port of secondary database 2
                     */
                    uint64_t m_vport;
                    bool m_vportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPCONFIG_H_
