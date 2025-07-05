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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_AUTOMATIONAGENTINFO_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_AUTOMATIONAGENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * TAT agent information
                */
                class AutomationAgentInfo : public AbstractModel
                {
                public:
                    AutomationAgentInfo();
                    ~AutomationAgentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Agent version.
                     * @return Version Agent version.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Agent version.
                     * @param _version Agent version.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Last heartbeat time
                     * @return LastHeartbeatTime Last heartbeat time
                     * 
                     */
                    std::string GetLastHeartbeatTime() const;

                    /**
                     * 设置Last heartbeat time
                     * @param _lastHeartbeatTime Last heartbeat time
                     * 
                     */
                    void SetLastHeartbeatTime(const std::string& _lastHeartbeatTime);

                    /**
                     * 判断参数 LastHeartbeatTime 是否已赋值
                     * @return LastHeartbeatTime 是否已赋值
                     * 
                     */
                    bool LastHeartbeatTimeHasBeenSet() const;

                    /**
                     * 获取Agent status. Valid values:
<li> `Online`
<li> `Offline`
                     * @return AgentStatus Agent status. Valid values:
<li> `Online`
<li> `Offline`
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置Agent status. Valid values:
<li> `Online`
<li> `Offline`
                     * @param _agentStatus Agent status. Valid values:
<li> `Online`
<li> `Offline`
                     * 
                     */
                    void SetAgentStatus(const std::string& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取Agent runtime environment. Valid values:
<li> `Linux`: Linux instance
<li> `Windows`: Windows instance
                     * @return Environment Agent runtime environment. Valid values:
<li> `Linux`: Linux instance
<li> `Windows`: Windows instance
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置Agent runtime environment. Valid values:
<li> `Linux`: Linux instance
<li> `Windows`: Windows instance
                     * @param _environment Agent runtime environment. Valid values:
<li> `Linux`: Linux instance
<li> `Windows`: Windows instance
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取Features supported by the TAT agent.
                     * @return SupportFeatures Features supported by the TAT agent.
                     * 
                     */
                    std::vector<std::string> GetSupportFeatures() const;

                    /**
                     * 设置Features supported by the TAT agent.
                     * @param _supportFeatures Features supported by the TAT agent.
                     * 
                     */
                    void SetSupportFeatures(const std::vector<std::string>& _supportFeatures);

                    /**
                     * 判断参数 SupportFeatures 是否已赋值
                     * @return SupportFeatures 是否已赋值
                     * 
                     */
                    bool SupportFeaturesHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Agent version.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Last heartbeat time
                     */
                    std::string m_lastHeartbeatTime;
                    bool m_lastHeartbeatTimeHasBeenSet;

                    /**
                     * Agent status. Valid values:
<li> `Online`
<li> `Offline`
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * Agent runtime environment. Valid values:
<li> `Linux`: Linux instance
<li> `Windows`: Windows instance
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Features supported by the TAT agent.
                     */
                    std::vector<std::string> m_supportFeatures;
                    bool m_supportFeaturesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_AUTOMATIONAGENTINFO_H_
