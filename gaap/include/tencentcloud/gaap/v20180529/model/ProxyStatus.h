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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYSTATUS_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Connection status information
                */
                class ProxyStatus : public AbstractModel
                {
                public:
                    ProxyStatus();
                    ~ProxyStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Connection instance ID.
                     * @return InstanceId Connection instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Connection instance ID.
                     * @param _instanceId Connection instance ID.
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
                     * 获取Connection status.
Where:
`RUNNING`: Running
`CREATING`: Creating
`DESTROYING`: Terminating
`OPENING`: Enabling
`CLOSING`: Disabling
`CLOSED`: Disabled
`ADJUSTING`: Adjusting configuration
`ISOLATING`: Isolating
`ISOLATED`: Isolated
`MOVING`: Migrating
                     * @return Status Connection status.
Where:
`RUNNING`: Running
`CREATING`: Creating
`DESTROYING`: Terminating
`OPENING`: Enabling
`CLOSING`: Disabling
`CLOSED`: Disabled
`ADJUSTING`: Adjusting configuration
`ISOLATING`: Isolating
`ISOLATED`: Isolated
`MOVING`: Migrating
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Connection status.
Where:
`RUNNING`: Running
`CREATING`: Creating
`DESTROYING`: Terminating
`OPENING`: Enabling
`CLOSING`: Disabling
`CLOSED`: Disabled
`ADJUSTING`: Adjusting configuration
`ISOLATING`: Isolating
`ISOLATED`: Isolated
`MOVING`: Migrating
                     * @param _status Connection status.
Where:
`RUNNING`: Running
`CREATING`: Creating
`DESTROYING`: Terminating
`OPENING`: Enabling
`CLOSING`: Disabling
`CLOSED`: Disabled
`ADJUSTING`: Adjusting configuration
`ISOLATING`: Isolating
`ISOLATED`: Isolated
`MOVING`: Migrating
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Connection instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Connection status.
Where:
`RUNNING`: Running
`CREATING`: Creating
`DESTROYING`: Terminating
`OPENING`: Enabling
`CLOSING`: Disabling
`CLOSED`: Disabled
`ADJUSTING`: Adjusting configuration
`ISOLATING`: Isolating
`ISOLATED`: Isolated
`MOVING`: Migrating
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYSTATUS_H_
