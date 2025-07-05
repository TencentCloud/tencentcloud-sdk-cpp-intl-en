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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_NODEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_NODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * NodeInfo
                */
                class NodeInfo : public AbstractModel
                {
                public:
                    NodeInfo();
                    ~NodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ip User IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置User IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ip User IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Node status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Node status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Node status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Node status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Node role name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeName Node role name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node role name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeName Node role name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComponentName Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _componentName Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取Node role
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeRole Node role
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置Node role
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeRole Node role
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodeRole(const std::string& _nodeRole);

                    /**
                     * 判断参数 NodeRole 是否已赋值
                     * @return NodeRole 是否已赋值
                     * 
                     */
                    bool NodeRoleHasBeenSet() const;

                    /**
                     * 获取The time when the node was last restarted
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastRestartTime The time when the node was last restarted
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastRestartTime() const;

                    /**
                     * 设置The time when the node was last restarted
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastRestartTime The time when the node was last restarted
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastRestartTime(const std::string& _lastRestartTime);

                    /**
                     * 判断参数 LastRestartTime 是否已赋值
                     * @return LastRestartTime 是否已赋值
                     * 
                     */
                    bool LastRestartTimeHasBeenSet() const;

                    /**
                     * 获取The availability zone where the node is located
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zone The availability zone where the node is located
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The availability zone where the node is located
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zone The availability zone where the node is located
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * User IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Node status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Node role name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Component name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * Node role
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * The time when the node was last restarted
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastRestartTime;
                    bool m_lastRestartTimeHasBeenSet;

                    /**
                     * The availability zone where the node is located
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_NODEINFO_H_
