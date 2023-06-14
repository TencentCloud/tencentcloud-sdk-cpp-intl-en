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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SLAVECONFIG_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SLAVECONFIG_H_

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
                * Configuration information of the salve database
                */
                class SlaveConfig : public AbstractModel
                {
                public:
                    SlaveConfig();
                    ~SlaveConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Replication mode of the secondary database. Value range: async, semi-sync
                     * @return ReplicationMode Replication mode of the secondary database. Value range: async, semi-sync
                     * 
                     */
                    std::string GetReplicationMode() const;

                    /**
                     * 设置Replication mode of the secondary database. Value range: async, semi-sync
                     * @param _replicationMode Replication mode of the secondary database. Value range: async, semi-sync
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
                     * 获取AZ name of the secondary database, such as ap-shanghai-1
                     * @return Zone AZ name of the secondary database, such as ap-shanghai-1
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ name of the secondary database, such as ap-shanghai-1
                     * @param _zone AZ name of the secondary database, such as ap-shanghai-1
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * Replication mode of the secondary database. Value range: async, semi-sync
                     */
                    std::string m_replicationMode;
                    bool m_replicationModeHasBeenSet;

                    /**
                     * AZ name of the secondary database, such as ap-shanghai-1
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SLAVECONFIG_H_
