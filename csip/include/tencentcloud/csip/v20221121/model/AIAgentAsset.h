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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SkillState.h>
#include <tencentcloud/csip/v20221121/model/TrafficPluginState.h>
#include <tencentcloud/csip/v20221121/model/TrafficRuleState.h>
#include <tencentcloud/csip/v20221121/model/CommandPluginState.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Ai Agent Asset Information List Item
                */
                class AIAgentAsset : public AbstractModel
                {
                public:
                    AIAgentAsset();
                    ~AIAgentAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID identifier</p>
                     * @return ID <p>ID identifier</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>ID identifier</p>
                     * @param _iD <p>ID identifier</p>
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>agent name</p>
                     * @return AgentName <p>agent name</p>
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置<p>agent name</p>
                     * @param _agentName <p>agent name</p>
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取<p>agent model name usage</p>
                     * @return AgentModel <p>agent model name usage</p>
                     * 
                     */
                    std::vector<std::string> GetAgentModel() const;

                    /**
                     * 设置<p>agent model name usage</p>
                     * @param _agentModel <p>agent model name usage</p>
                     * 
                     */
                    void SetAgentModel(const std::vector<std::string>& _agentModel);

                    /**
                     * 判断参数 AgentModel 是否已赋值
                     * @return AgentModel 是否已赋值
                     * 
                     */
                    bool AgentModelHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID</p>
                     * @return InstanceID <p>Instance ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>Instance ID</p>
                     * @param _instanceID <p>Instance ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>Instance name</p>
                     * @return InstanceName <p>Instance name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name</p>
                     * @param _instanceName <p>Instance name</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>metadata risk list. Has the following enumeration values: 1. AK_TMP 2. USER_DATA</p>
                     * @return MetadataRiskList <p>metadata risk list. Has the following enumeration values: 1. AK_TMP 2. USER_DATA</p>
                     * 
                     */
                    std::vector<std::string> GetMetadataRiskList() const;

                    /**
                     * 设置<p>metadata risk list. Has the following enumeration values: 1. AK_TMP 2. USER_DATA</p>
                     * @param _metadataRiskList <p>metadata risk list. Has the following enumeration values: 1. AK_TMP 2. USER_DATA</p>
                     * 
                     */
                    void SetMetadataRiskList(const std::vector<std::string>& _metadataRiskList);

                    /**
                     * 判断参数 MetadataRiskList 是否已赋值
                     * @return MetadataRiskList 是否已赋值
                     * 
                     */
                    bool MetadataRiskListHasBeenSet() const;

                    /**
                     * 获取<p>First detection time</p>
                     * @return IdentityTimeFirst <p>First detection time</p>
                     * 
                     */
                    std::string GetIdentityTimeFirst() const;

                    /**
                     * 设置<p>First detection time</p>
                     * @param _identityTimeFirst <p>First detection time</p>
                     * 
                     */
                    void SetIdentityTimeFirst(const std::string& _identityTimeFirst);

                    /**
                     * 判断参数 IdentityTimeFirst 是否已赋值
                     * @return IdentityTimeFirst 是否已赋值
                     * 
                     */
                    bool IdentityTimeFirstHasBeenSet() const;

                    /**
                     * 获取<p>Latest detected time</p>
                     * @return IdentityTimeLast <p>Latest detected time</p>
                     * 
                     */
                    std::string GetIdentityTimeLast() const;

                    /**
                     * 设置<p>Latest detected time</p>
                     * @param _identityTimeLast <p>Latest detected time</p>
                     * 
                     */
                    void SetIdentityTimeLast(const std::string& _identityTimeLast);

                    /**
                     * 判断参数 IdentityTimeLast 是否已赋值
                     * @return IdentityTimeLast 是否已赋值
                     * 
                     */
                    bool IdentityTimeLastHasBeenSet() const;

                    /**
                     * 获取<p>Detect method. Has the following enumeration values: 1. FINGER Detect via asset fingerprinting 2. NETWORK Detect via network access mode</p>
                     * @return IdentityMethod <p>Detect method. Has the following enumeration values: 1. FINGER Detect via asset fingerprinting 2. NETWORK Detect via network access mode</p>
                     * 
                     */
                    std::string GetIdentityMethod() const;

                    /**
                     * 设置<p>Detect method. Has the following enumeration values: 1. FINGER Detect via asset fingerprinting 2. NETWORK Detect via network access mode</p>
                     * @param _identityMethod <p>Detect method. Has the following enumeration values: 1. FINGER Detect via asset fingerprinting 2. NETWORK Detect via network access mode</p>
                     * 
                     */
                    void SetIdentityMethod(const std::string& _identityMethod);

                    /**
                     * 判断参数 IdentityMethod 是否已赋值
                     * @return IdentityMethod 是否已赋值
                     * 
                     */
                    bool IdentityMethodHasBeenSet() const;

                    /**
                     * 获取<p>Exposure status. Has the following enumeration values. 1. EXPOSED; 2. UNEXPOSED;</p><ol start="3"><li>UNKNOWN;</li></ol>
                     * @return ExposureStatus <p>Exposure status. Has the following enumeration values. 1. EXPOSED; 2. UNEXPOSED;</p><ol start="3"><li>UNKNOWN;</li></ol>
                     * 
                     */
                    std::string GetExposureStatus() const;

                    /**
                     * 设置<p>Exposure status. Has the following enumeration values. 1. EXPOSED; 2. UNEXPOSED;</p><ol start="3"><li>UNKNOWN;</li></ol>
                     * @param _exposureStatus <p>Exposure status. Has the following enumeration values. 1. EXPOSED; 2. UNEXPOSED;</p><ol start="3"><li>UNKNOWN;</li></ol>
                     * 
                     */
                    void SetExposureStatus(const std::string& _exposureStatus);

                    /**
                     * 判断参数 ExposureStatus 是否已赋值
                     * @return ExposureStatus 是否已赋值
                     * 
                     */
                    bool ExposureStatusHasBeenSet() const;

                    /**
                     * 获取<p>Corresponding path when metadata is at risk</p>
                     * @return MetadataRiskURL <p>Corresponding path when metadata is at risk</p>
                     * 
                     */
                    std::string GetMetadataRiskURL() const;

                    /**
                     * 设置<p>Corresponding path when metadata is at risk</p>
                     * @param _metadataRiskURL <p>Corresponding path when metadata is at risk</p>
                     * 
                     */
                    void SetMetadataRiskURL(const std::string& _metadataRiskURL);

                    /**
                     * 判断参数 MetadataRiskURL 是否已赋值
                     * @return MetadataRiskURL 是否已赋值
                     * 
                     */
                    bool MetadataRiskURLHasBeenSet() const;

                    /**
                     * 获取<p>None</p>
                     * @return SkillState <p>None</p>
                     * 
                     */
                    SkillState GetSkillState() const;

                    /**
                     * 设置<p>None</p>
                     * @param _skillState <p>None</p>
                     * 
                     */
                    void SetSkillState(const SkillState& _skillState);

                    /**
                     * 判断参数 SkillState 是否已赋值
                     * @return SkillState 是否已赋值
                     * 
                     */
                    bool SkillStateHasBeenSet() const;

                    /**
                     * 获取<p>Traffic sandbox plug-in status</p>
                     * @return TrafficPluginState <p>Traffic sandbox plug-in status</p>
                     * 
                     */
                    TrafficPluginState GetTrafficPluginState() const;

                    /**
                     * 设置<p>Traffic sandbox plug-in status</p>
                     * @param _trafficPluginState <p>Traffic sandbox plug-in status</p>
                     * 
                     */
                    void SetTrafficPluginState(const TrafficPluginState& _trafficPluginState);

                    /**
                     * 判断参数 TrafficPluginState 是否已赋值
                     * @return TrafficPluginState 是否已赋值
                     * 
                     */
                    bool TrafficPluginStateHasBeenSet() const;

                    /**
                     * 获取<p>Sandbox rule status for traffic</p>
                     * @return TrafficRuleState <p>Sandbox rule status for traffic</p>
                     * 
                     */
                    std::vector<TrafficRuleState> GetTrafficRuleState() const;

                    /**
                     * 设置<p>Sandbox rule status for traffic</p>
                     * @param _trafficRuleState <p>Sandbox rule status for traffic</p>
                     * 
                     */
                    void SetTrafficRuleState(const std::vector<TrafficRuleState>& _trafficRuleState);

                    /**
                     * 判断参数 TrafficRuleState 是否已赋值
                     * @return TrafficRuleState 是否已赋值
                     * 
                     */
                    bool TrafficRuleStateHasBeenSet() const;

                    /**
                     * 获取<p>Command sandbox plug-in status</p>
                     * @return CommandPluginState <p>Command sandbox plug-in status</p>
                     * 
                     */
                    CommandPluginState GetCommandPluginState() const;

                    /**
                     * 设置<p>Command sandbox plug-in status</p>
                     * @param _commandPluginState <p>Command sandbox plug-in status</p>
                     * 
                     */
                    void SetCommandPluginState(const CommandPluginState& _commandPluginState);

                    /**
                     * 判断参数 CommandPluginState 是否已赋值
                     * @return CommandPluginState 是否已赋值
                     * 
                     */
                    bool CommandPluginStateHasBeenSet() const;

                private:

                    /**
                     * <p>ID identifier</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>agent name</p>
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * <p>agent model name usage</p>
                     */
                    std::vector<std::string> m_agentModel;
                    bool m_agentModelHasBeenSet;

                    /**
                     * <p>Instance ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>Instance name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>metadata risk list. Has the following enumeration values: 1. AK_TMP 2. USER_DATA</p>
                     */
                    std::vector<std::string> m_metadataRiskList;
                    bool m_metadataRiskListHasBeenSet;

                    /**
                     * <p>First detection time</p>
                     */
                    std::string m_identityTimeFirst;
                    bool m_identityTimeFirstHasBeenSet;

                    /**
                     * <p>Latest detected time</p>
                     */
                    std::string m_identityTimeLast;
                    bool m_identityTimeLastHasBeenSet;

                    /**
                     * <p>Detect method. Has the following enumeration values: 1. FINGER Detect via asset fingerprinting 2. NETWORK Detect via network access mode</p>
                     */
                    std::string m_identityMethod;
                    bool m_identityMethodHasBeenSet;

                    /**
                     * <p>Exposure status. Has the following enumeration values. 1. EXPOSED; 2. UNEXPOSED;</p><ol start="3"><li>UNKNOWN;</li></ol>
                     */
                    std::string m_exposureStatus;
                    bool m_exposureStatusHasBeenSet;

                    /**
                     * <p>Corresponding path when metadata is at risk</p>
                     */
                    std::string m_metadataRiskURL;
                    bool m_metadataRiskURLHasBeenSet;

                    /**
                     * <p>None</p>
                     */
                    SkillState m_skillState;
                    bool m_skillStateHasBeenSet;

                    /**
                     * <p>Traffic sandbox plug-in status</p>
                     */
                    TrafficPluginState m_trafficPluginState;
                    bool m_trafficPluginStateHasBeenSet;

                    /**
                     * <p>Sandbox rule status for traffic</p>
                     */
                    std::vector<TrafficRuleState> m_trafficRuleState;
                    bool m_trafficRuleStateHasBeenSet;

                    /**
                     * <p>Command sandbox plug-in status</p>
                     */
                    CommandPluginState m_commandPluginState;
                    bool m_commandPluginStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTASSET_H_
