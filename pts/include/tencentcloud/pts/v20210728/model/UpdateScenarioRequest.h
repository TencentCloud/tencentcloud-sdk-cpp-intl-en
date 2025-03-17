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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_UPDATESCENARIOREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_UPDATESCENARIOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Load.h>
#include <tencentcloud/pts/v20210728/model/TestData.h>
#include <tencentcloud/pts/v20210728/model/ScriptInfo.h>
#include <tencentcloud/pts/v20210728/model/ProtocolInfo.h>
#include <tencentcloud/pts/v20210728/model/FileInfo.h>
#include <tencentcloud/pts/v20210728/model/SLAPolicy.h>
#include <tencentcloud/pts/v20210728/model/DomainNameConfig.h>
#include <tencentcloud/pts/v20210728/model/Notification.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * UpdateScenario request structure.
                */
                class UpdateScenarioRequest : public AbstractModel
                {
                public:
                    UpdateScenarioRequest();
                    ~UpdateScenarioRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scenario ID.
                     * @return ScenarioId Scenario ID.
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置Scenario ID.
                     * @param _scenarioId Scenario ID.
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取Scenario name. When calling this API, please include the fields in the Scenario that do not need to be modified as part of the API parameters, otherwise the scenario may become unusable.
                     * @return Name Scenario name. When calling this API, please include the fields in the Scenario that do not need to be modified as part of the API parameters, otherwise the scenario may become unusable.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Scenario name. When calling this API, please include the fields in the Scenario that do not need to be modified as part of the API parameters, otherwise the scenario may become unusable.
                     * @param _name Scenario name. When calling this API, please include the fields in the Scenario that do not need to be modified as part of the API parameters, otherwise the scenario may become unusable.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Scenario description.
                     * @return Description Scenario description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Scenario description.
                     * @param _description Scenario description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Mode type of scenario. Valid values: 'pts-http' represents the simple mode, 'pts-js' represents the script mode, 'pts-jmeter' represents the JMeter mode.
                     * @return Type Mode type of scenario. Valid values: 'pts-http' represents the simple mode, 'pts-js' represents the script mode, 'pts-jmeter' represents the JMeter mode.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Mode type of scenario. Valid values: 'pts-http' represents the simple mode, 'pts-js' represents the script mode, 'pts-jmeter' represents the JMeter mode.
                     * @param _type Mode type of scenario. Valid values: 'pts-http' represents the simple mode, 'pts-js' represents the script mode, 'pts-jmeter' represents the JMeter mode.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Load configuration.
                     * @return Load Load configuration.
                     * 
                     */
                    Load GetLoad() const;

                    /**
                     * 设置Load configuration.
                     * @param _load Load configuration.
                     * 
                     */
                    void SetLoad(const Load& _load);

                    /**
                     * 判断参数 Load 是否已赋值
                     * @return Load 是否已赋值
                     * 
                     */
                    bool LoadHasBeenSet() const;

                    /**
                     * 获取Deprecated.
                     * @return EncodedScripts Deprecated.
                     * 
                     */
                    std::string GetEncodedScripts() const;

                    /**
                     * 设置Deprecated.
                     * @param _encodedScripts Deprecated.
                     * 
                     */
                    void SetEncodedScripts(const std::string& _encodedScripts);

                    /**
                     * 判断参数 EncodedScripts 是否已赋值
                     * @return EncodedScripts 是否已赋值
                     * 
                     */
                    bool EncodedScriptsHasBeenSet() const;

                    /**
                     * 获取Deprecated.
                     * @return Configs Deprecated.
                     * 
                     */
                    std::vector<std::string> GetConfigs() const;

                    /**
                     * 设置Deprecated.
                     * @param _configs Deprecated.
                     * 
                     */
                    void SetConfigs(const std::vector<std::string>& _configs);

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     * 
                     */
                    bool ConfigsHasBeenSet() const;

                    /**
                     * 获取Test datasets.
                     * @return Datasets Test datasets.
                     * 
                     */
                    std::vector<TestData> GetDatasets() const;

                    /**
                     * 设置Test datasets.
                     * @param _datasets Test datasets.
                     * 
                     */
                    void SetDatasets(const std::vector<TestData>& _datasets);

                    /**
                     * 判断参数 Datasets 是否已赋值
                     * @return Datasets 是否已赋值
                     * 
                     */
                    bool DatasetsHasBeenSet() const;

                    /**
                     * 获取Deprecated.
                     * @return Extensions Deprecated.
                     * 
                     */
                    std::vector<std::string> GetExtensions() const;

                    /**
                     * 设置Deprecated.
                     * @param _extensions Deprecated.
                     * 
                     */
                    void SetExtensions(const std::vector<std::string>& _extensions);

                    /**
                     * 判断参数 Extensions 是否已赋值
                     * @return Extensions 是否已赋值
                     * 
                     */
                    bool ExtensionsHasBeenSet() const;

                    /**
                     * 获取SLA rule ID.
                     * @return SLAId SLA rule ID.
                     * 
                     */
                    std::string GetSLAId() const;

                    /**
                     * 设置SLA rule ID.
                     * @param _sLAId SLA rule ID.
                     * 
                     */
                    void SetSLAId(const std::string& _sLAId);

                    /**
                     * 判断参数 SLAId 是否已赋值
                     * @return SLAId 是否已赋值
                     * 
                     */
                    bool SLAIdHasBeenSet() const;

                    /**
                     * 获取Cron job ID.
                     * @return CronId Cron job ID.
                     * 
                     */
                    std::string GetCronId() const;

                    /**
                     * 设置Cron job ID.
                     * @param _cronId Cron job ID.
                     * 
                     */
                    void SetCronId(const std::string& _cronId);

                    /**
                     * 判断参数 CronId 是否已赋值
                     * @return CronId 是否已赋值
                     * 
                     */
                    bool CronIdHasBeenSet() const;

                    /**
                     * 获取Scenario status (Note: This parameter is no longer required).
                     * @return Status Scenario status (Note: This parameter is no longer required).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Scenario status (Note: This parameter is no longer required).
                     * @param _status Scenario status (Note: This parameter is no longer required).
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
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Test scripts.
                     * @return TestScripts Test scripts.
                     * 
                     */
                    std::vector<ScriptInfo> GetTestScripts() const;

                    /**
                     * 设置Test scripts.
                     * @param _testScripts Test scripts.
                     * 
                     */
                    void SetTestScripts(const std::vector<ScriptInfo>& _testScripts);

                    /**
                     * 判断参数 TestScripts 是否已赋值
                     * @return TestScripts 是否已赋值
                     * 
                     */
                    bool TestScriptsHasBeenSet() const;

                    /**
                     * 获取Protocol.
                     * @return Protocols Protocol.
                     * 
                     */
                    std::vector<ProtocolInfo> GetProtocols() const;

                    /**
                     * 设置Protocol.
                     * @param _protocols Protocol.
                     * 
                     */
                    void SetProtocols(const std::vector<ProtocolInfo>& _protocols);

                    /**
                     * 判断参数 Protocols 是否已赋值
                     * @return Protocols 是否已赋值
                     * 
                     */
                    bool ProtocolsHasBeenSet() const;

                    /**
                     * 获取Request files.
                     * @return RequestFiles Request files.
                     * 
                     */
                    std::vector<FileInfo> GetRequestFiles() const;

                    /**
                     * 设置Request files.
                     * @param _requestFiles Request files.
                     * 
                     */
                    void SetRequestFiles(const std::vector<FileInfo>& _requestFiles);

                    /**
                     * 判断参数 RequestFiles 是否已赋值
                     * @return RequestFiles 是否已赋值
                     * 
                     */
                    bool RequestFilesHasBeenSet() const;

                    /**
                     * 获取SLA policy.
                     * @return SLAPolicy SLA policy.
                     * 
                     */
                    SLAPolicy GetSLAPolicy() const;

                    /**
                     * 设置SLA policy.
                     * @param _sLAPolicy SLA policy.
                     * 
                     */
                    void SetSLAPolicy(const SLAPolicy& _sLAPolicy);

                    /**
                     * 判断参数 SLAPolicy 是否已赋值
                     * @return SLAPolicy 是否已赋值
                     * 
                     */
                    bool SLAPolicyHasBeenSet() const;

                    /**
                     * 获取Extension plugins.
                     * @return Plugins Extension plugins.
                     * 
                     */
                    std::vector<FileInfo> GetPlugins() const;

                    /**
                     * 设置Extension plugins.
                     * @param _plugins Extension plugins.
                     * 
                     */
                    void SetPlugins(const std::vector<FileInfo>& _plugins);

                    /**
                     * 判断参数 Plugins 是否已赋值
                     * @return Plugins 是否已赋值
                     * 
                     */
                    bool PluginsHasBeenSet() const;

                    /**
                     * 获取Domain name resolution configuration.
                     * @return DomainNameConfig Domain name resolution configuration.
                     * 
                     */
                    DomainNameConfig GetDomainNameConfig() const;

                    /**
                     * 设置Domain name resolution configuration.
                     * @param _domainNameConfig Domain name resolution configuration.
                     * 
                     */
                    void SetDomainNameConfig(const DomainNameConfig& _domainNameConfig);

                    /**
                     * 判断参数 DomainNameConfig 是否已赋值
                     * @return DomainNameConfig 是否已赋值
                     * 
                     */
                    bool DomainNameConfigHasBeenSet() const;

                    /**
                     * 获取Notification web hook configuration.
                     * @return NotificationHooks Notification web hook configuration.
                     * 
                     */
                    std::vector<Notification> GetNotificationHooks() const;

                    /**
                     * 设置Notification web hook configuration.
                     * @param _notificationHooks Notification web hook configuration.
                     * 
                     */
                    void SetNotificationHooks(const std::vector<Notification>& _notificationHooks);

                    /**
                     * 判断参数 NotificationHooks 是否已赋值
                     * @return NotificationHooks 是否已赋值
                     * 
                     */
                    bool NotificationHooksHasBeenSet() const;

                    /**
                     * 获取Creator name.
                     * @return Owner Creator name.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Creator name.
                     * @param _owner Creator name.
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取Environment ID.
                     * @return EnvId Environment ID.
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置Environment ID.
                     * @param _envId Environment ID.
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                private:

                    /**
                     * Scenario ID.
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * Scenario name. When calling this API, please include the fields in the Scenario that do not need to be modified as part of the API parameters, otherwise the scenario may become unusable.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Scenario description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Mode type of scenario. Valid values: 'pts-http' represents the simple mode, 'pts-js' represents the script mode, 'pts-jmeter' represents the JMeter mode.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Load configuration.
                     */
                    Load m_load;
                    bool m_loadHasBeenSet;

                    /**
                     * Deprecated.
                     */
                    std::string m_encodedScripts;
                    bool m_encodedScriptsHasBeenSet;

                    /**
                     * Deprecated.
                     */
                    std::vector<std::string> m_configs;
                    bool m_configsHasBeenSet;

                    /**
                     * Test datasets.
                     */
                    std::vector<TestData> m_datasets;
                    bool m_datasetsHasBeenSet;

                    /**
                     * Deprecated.
                     */
                    std::vector<std::string> m_extensions;
                    bool m_extensionsHasBeenSet;

                    /**
                     * SLA rule ID.
                     */
                    std::string m_sLAId;
                    bool m_sLAIdHasBeenSet;

                    /**
                     * Cron job ID.
                     */
                    std::string m_cronId;
                    bool m_cronIdHasBeenSet;

                    /**
                     * Scenario status (Note: This parameter is no longer required).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Test scripts.
                     */
                    std::vector<ScriptInfo> m_testScripts;
                    bool m_testScriptsHasBeenSet;

                    /**
                     * Protocol.
                     */
                    std::vector<ProtocolInfo> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * Request files.
                     */
                    std::vector<FileInfo> m_requestFiles;
                    bool m_requestFilesHasBeenSet;

                    /**
                     * SLA policy.
                     */
                    SLAPolicy m_sLAPolicy;
                    bool m_sLAPolicyHasBeenSet;

                    /**
                     * Extension plugins.
                     */
                    std::vector<FileInfo> m_plugins;
                    bool m_pluginsHasBeenSet;

                    /**
                     * Domain name resolution configuration.
                     */
                    DomainNameConfig m_domainNameConfig;
                    bool m_domainNameConfigHasBeenSet;

                    /**
                     * Notification web hook configuration.
                     */
                    std::vector<Notification> m_notificationHooks;
                    bool m_notificationHooksHasBeenSet;

                    /**
                     * Creator name.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Environment ID.
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_UPDATESCENARIOREQUEST_H_
