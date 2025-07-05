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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIO_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Load.h>
#include <tencentcloud/pts/v20210728/model/TestData.h>
#include <tencentcloud/pts/v20210728/model/ScriptInfo.h>
#include <tencentcloud/pts/v20210728/model/ProtocolInfo.h>
#include <tencentcloud/pts/v20210728/model/FileInfo.h>
#include <tencentcloud/pts/v20210728/model/SLAPolicy.h>
#include <tencentcloud/pts/v20210728/model/DomainNameConfig.h>
#include <tencentcloud/pts/v20210728/model/NotificationHook.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Performance test scenario.
                */
                class Scenario : public AbstractModel
                {
                public:
                    Scenario();
                    ~Scenario() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Scenario name.
                     * @return Name Scenario name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Scenario name.
                     * @param _name Scenario name.
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

Note: This field may return null, indicating that no valid value is found.
                     * @return Description Scenario description.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Scenario description.

Note: This field may return null, indicating that no valid value is found.
                     * @param _description Scenario description.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Type of scenario. Valid values: 'pts-http' represents the simple mode, 'pts-js' represents the script mode, 'pts-jmeter' represents the JMeter mode.

Note: This field may return null, indicating that no valid value is found.
                     * @return Type Type of scenario. Valid values: 'pts-http' represents the simple mode, 'pts-js' represents the script mode, 'pts-jmeter' represents the JMeter mode.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of scenario. Valid values: 'pts-http' represents the simple mode, 'pts-js' represents the script mode, 'pts-jmeter' represents the JMeter mode.

Note: This field may return null, indicating that no valid value is found.
                     * @param _type Type of scenario. Valid values: 'pts-http' represents the simple mode, 'pts-js' represents the script mode, 'pts-jmeter' represents the JMeter mode.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Scenario status.

Note: This field may return null, indicating that no valid value is found.
                     * @return Status Scenario status.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Scenario status.

Note: This field may return null, indicating that no valid value is found.
                     * @param _status Scenario status.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @return Load Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    Load GetLoad() const;

                    /**
                     * 设置Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @param _load Load configuration.

Note: This field may return null, indicating that no valid value is found.
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

Note: This field may return null, indicating that no valid value is found.
                     * @return EncodedScripts Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetEncodedScripts() const;

                    /**
                     * 设置Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @param _encodedScripts Deprecated.

Note: This field may return null, indicating that no valid value is found.
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

Note: This field may return null, indicating that no valid value is found.
                     * @return Configs Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetConfigs() const;

                    /**
                     * 设置Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @param _configs Deprecated.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @return Extensions Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetExtensions() const;

                    /**
                     * 设置Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @param _extensions Deprecated.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Test datasets.

Note: This field may return null, indicating that no valid value is found.
                     * @return Datasets Test datasets.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<TestData> GetDatasets() const;

                    /**
                     * 设置Test datasets.

Note: This field may return null, indicating that no valid value is found.
                     * @param _datasets Test datasets.

Note: This field may return null, indicating that no valid value is found.
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

Note: This field may return null, indicating that no valid value is found.
                     * @return SLAId Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetSLAId() const;

                    /**
                     * 设置Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @param _sLAId Deprecated.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取CronJob ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return CronId CronJob ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCronId() const;

                    /**
                     * 设置CronJob ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _cronId CronJob ID.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Create time.
                     * @return CreatedAt Create time.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Create time.
                     * @param _createdAt Create time.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdatedAt Update time.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time.
                     * @param _updatedAt Update time.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return ProjectId Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _projectId Project ID.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取App ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return AppId App ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置App ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _appId App ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Uin.

Note: This field may return null, indicating that no valid value is found.
                     * @return Uin Uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Uin.

Note: This field may return null, indicating that no valid value is found.
                     * @param _uin Uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * @return SubAccountUin Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * @param _subAccountUin Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取Test scripts.

Note: This field may return null, indicating that no valid value is found.
                     * @return TestScripts Test scripts.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<ScriptInfo> GetTestScripts() const;

                    /**
                     * 设置Test scripts.

Note: This field may return null, indicating that no valid value is found.
                     * @param _testScripts Test scripts.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Protocol files.

Note: This field may return null, indicating that no valid value is found.
                     * @return Protocols Protocol files.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<ProtocolInfo> GetProtocols() const;

                    /**
                     * 设置Protocol files.

Note: This field may return null, indicating that no valid value is found.
                     * @param _protocols Protocol files.

Note: This field may return null, indicating that no valid value is found.
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

Note: This field may return null, indicating that no valid value is found.
                     * @return RequestFiles Request files.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<FileInfo> GetRequestFiles() const;

                    /**
                     * 设置Request files.

Note: This field may return null, indicating that no valid value is found.
                     * @param _requestFiles Request files.

Note: This field may return null, indicating that no valid value is found.
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

Note: This field may return null, indicating that no valid value is found.
                     * @return SLAPolicy SLA policy.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    SLAPolicy GetSLAPolicy() const;

                    /**
                     * 设置SLA policy.

Note: This field may return null, indicating that no valid value is found.
                     * @param _sLAPolicy SLA policy.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Extension plugin files.

Note: This field may return null, indicating that no valid value is found.
                     * @return Plugins Extension plugin files.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<FileInfo> GetPlugins() const;

                    /**
                     * 设置Extension plugin files.

Note: This field may return null, indicating that no valid value is found.
                     * @param _plugins Extension plugin files.

Note: This field may return null, indicating that no valid value is found.
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

Note: This field may return null, indicating that no valid value is found.
                     * @return DomainNameConfig Domain name resolution configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    DomainNameConfig GetDomainNameConfig() const;

                    /**
                     * 设置Domain name resolution configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @param _domainNameConfig Domain name resolution configuration.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Notification event hooks.

Note: This field may return null, indicating that no valid value is found.
                     * @return NotificationHooks Notification event hooks.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<NotificationHook> GetNotificationHooks() const;

                    /**
                     * 设置Notification event hooks.

Note: This field may return null, indicating that no valid value is found.
                     * @param _notificationHooks Notification event hooks.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetNotificationHooks(const std::vector<NotificationHook>& _notificationHooks);

                    /**
                     * 判断参数 NotificationHooks 是否已赋值
                     * @return NotificationHooks 是否已赋值
                     * 
                     */
                    bool NotificationHooksHasBeenSet() const;

                    /**
                     * 获取Creator name.

Note: This field may return null, indicating that no valid value is found.
                     * @return Owner Creator name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Creator name.

Note: This field may return null, indicating that no valid value is found.
                     * @param _owner Creator name.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Project name.

Note: This field may return null, indicating that no valid value is found.
                     * @return ProjectName Project name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name.

Note: This field may return null, indicating that no valid value is found.
                     * @param _projectName Project name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                private:

                    /**
                     * Scenario ID.
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * Scenario name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Scenario description.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Type of scenario. Valid values: 'pts-http' represents the simple mode, 'pts-js' represents the script mode, 'pts-jmeter' represents the JMeter mode.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Scenario status.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     */
                    Load m_load;
                    bool m_loadHasBeenSet;

                    /**
                     * Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_encodedScripts;
                    bool m_encodedScriptsHasBeenSet;

                    /**
                     * Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_configs;
                    bool m_configsHasBeenSet;

                    /**
                     * Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_extensions;
                    bool m_extensionsHasBeenSet;

                    /**
                     * Test datasets.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<TestData> m_datasets;
                    bool m_datasetsHasBeenSet;

                    /**
                     * Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_sLAId;
                    bool m_sLAIdHasBeenSet;

                    /**
                     * CronJob ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_cronId;
                    bool m_cronIdHasBeenSet;

                    /**
                     * Create time.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Project ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * App ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Uin.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * Test scripts.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<ScriptInfo> m_testScripts;
                    bool m_testScriptsHasBeenSet;

                    /**
                     * Protocol files.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<ProtocolInfo> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * Request files.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<FileInfo> m_requestFiles;
                    bool m_requestFilesHasBeenSet;

                    /**
                     * SLA policy.

Note: This field may return null, indicating that no valid value is found.
                     */
                    SLAPolicy m_sLAPolicy;
                    bool m_sLAPolicyHasBeenSet;

                    /**
                     * Extension plugin files.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<FileInfo> m_plugins;
                    bool m_pluginsHasBeenSet;

                    /**
                     * Domain name resolution configuration.

Note: This field may return null, indicating that no valid value is found.
                     */
                    DomainNameConfig m_domainNameConfig;
                    bool m_domainNameConfigHasBeenSet;

                    /**
                     * Notification event hooks.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<NotificationHook> m_notificationHooks;
                    bool m_notificationHooksHasBeenSet;

                    /**
                     * Creator name.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Project name.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIO_H_
