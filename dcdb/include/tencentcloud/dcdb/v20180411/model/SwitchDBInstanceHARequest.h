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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_SWITCHDBINSTANCEHAREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_SWITCHDBINSTANCEHAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * SwitchDBInstanceHA request structure.
                */
                class SwitchDBInstanceHARequest : public AbstractModel
                {
                public:
                    SwitchDBInstanceHARequest();
                    ~SwitchDBInstanceHARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of tdsql-ow728lmc
                     * @return InstanceId Instance ID in the format of tdsql-ow728lmc
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of tdsql-ow728lmc
                     * @param _instanceId Instance ID in the format of tdsql-ow728lmc
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Target AZ. The node with the lowest delay in the target AZ will be automatically promoted to source node.
                     * @return Zone Target AZ. The node with the lowest delay in the target AZ will be automatically promoted to source node.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Target AZ. The node with the lowest delay in the target AZ will be automatically promoted to source node.
                     * @param _zone Target AZ. The node with the lowest delay in the target AZ will be automatically promoted to source node.
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
                     * Instance ID in the format of tdsql-ow728lmc
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Target AZ. The node with the lowest delay in the target AZ will be automatically promoted to source node.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_SWITCHDBINSTANCEHAREQUEST_H_
