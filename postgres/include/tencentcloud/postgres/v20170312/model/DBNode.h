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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBNODE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Instance node information including node type and AZ.
                */
                class DBNode : public AbstractModel
                {
                public:
                    DBNode();
                    ~DBNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node type. Valid values:
`Primary`;
`Standby`.
                     * @return Role Node type. Valid values:
`Primary`;
`Standby`.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Node type. Valid values:
`Primary`;
`Standby`.
                     * @param _role Node type. Valid values:
`Primary`;
`Standby`.
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取AZ where the node resides, such as ap-guangzhou-1.
                     * @return Zone AZ where the node resides, such as ap-guangzhou-1.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ where the node resides, such as ap-guangzhou-1.
                     * @param _zone AZ where the node resides, such as ap-guangzhou-1.
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
                     * Node type. Valid values:
`Primary`;
`Standby`.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * AZ where the node resides, such as ap-guangzhou-1.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBNODE_H_
