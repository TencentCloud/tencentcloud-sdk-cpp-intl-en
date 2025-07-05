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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ENVINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ENVINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupVersionInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Environment information.
                */
                class EnvInfo : public AbstractModel
                {
                public:
                    EnvInfo();
                    ~EnvInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取Environment type. Valid values: 
<li>production: Production environment.</li><li> staging: Test environment. </li>
                     * @return EnvType Environment type. Valid values: 
<li>production: Production environment.</li><li> staging: Test environment. </li>
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置Environment type. Valid values: 
<li>production: Production environment.</li><li> staging: Test environment. </li>
                     * @param _envType Environment type. Valid values: 
<li>production: Production environment.</li><li> staging: Test environment. </li>
                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取Environment status. Valid values: 
<li>creating: Being created.</li>
<li>running: The environment is stable, with version changes allowed.</li>
<li>version_deploying: The version is currently being deployed, with no more changes allowed. </li>
                     * @return Status Environment status. Valid values: 
<li>creating: Being created.</li>
<li>running: The environment is stable, with version changes allowed.</li>
<li>version_deploying: The version is currently being deployed, with no more changes allowed. </li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Environment status. Valid values: 
<li>creating: Being created.</li>
<li>running: The environment is stable, with version changes allowed.</li>
<li>version_deploying: The version is currently being deployed, with no more changes allowed. </li>
                     * @param _status Environment status. Valid values: 
<li>creating: Being created.</li>
<li>running: The environment is stable, with version changes allowed.</li>
<li>version_deploying: The version is currently being deployed, with no more changes allowed. </li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Effective scope of the configuration in the current environment. Valid values: 
<li>ALL: It takes effect on the entire network when EnvType is set to production.</li>
<li>It returns the IP address of the test node for host binding during testing when EnvType is set to staging. </li>
                     * @return Scope Effective scope of the configuration in the current environment. Valid values: 
<li>ALL: It takes effect on the entire network when EnvType is set to production.</li>
<li>It returns the IP address of the test node for host binding during testing when EnvType is set to staging. </li>
                     * 
                     */
                    std::vector<std::string> GetScope() const;

                    /**
                     * 设置Effective scope of the configuration in the current environment. Valid values: 
<li>ALL: It takes effect on the entire network when EnvType is set to production.</li>
<li>It returns the IP address of the test node for host binding during testing when EnvType is set to staging. </li>
                     * @param _scope Effective scope of the configuration in the current environment. Valid values: 
<li>ALL: It takes effect on the entire network when EnvType is set to production.</li>
<li>It returns the IP address of the test node for host binding during testing when EnvType is set to staging. </li>
                     * 
                     */
                    void SetScope(const std::vector<std::string>& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取For the effective versions of each configuration group in the current environment, there are two possible scenarios based on the value of Status: 
<li>When Status is set to version_deploying, the returned value of this field represents the previously effective version. In other words, during the deployment of the new version, the effective version is the one that was in effect before any changes were made.</li>
<li>When Status is set to running, the value returned by this field is the currently effective version. </li>
                     * @return CurrentConfigGroupVersionInfos For the effective versions of each configuration group in the current environment, there are two possible scenarios based on the value of Status: 
<li>When Status is set to version_deploying, the returned value of this field represents the previously effective version. In other words, during the deployment of the new version, the effective version is the one that was in effect before any changes were made.</li>
<li>When Status is set to running, the value returned by this field is the currently effective version. </li>
                     * 
                     */
                    std::vector<ConfigGroupVersionInfo> GetCurrentConfigGroupVersionInfos() const;

                    /**
                     * 设置For the effective versions of each configuration group in the current environment, there are two possible scenarios based on the value of Status: 
<li>When Status is set to version_deploying, the returned value of this field represents the previously effective version. In other words, during the deployment of the new version, the effective version is the one that was in effect before any changes were made.</li>
<li>When Status is set to running, the value returned by this field is the currently effective version. </li>
                     * @param _currentConfigGroupVersionInfos For the effective versions of each configuration group in the current environment, there are two possible scenarios based on the value of Status: 
<li>When Status is set to version_deploying, the returned value of this field represents the previously effective version. In other words, during the deployment of the new version, the effective version is the one that was in effect before any changes were made.</li>
<li>When Status is set to running, the value returned by this field is the currently effective version. </li>
                     * 
                     */
                    void SetCurrentConfigGroupVersionInfos(const std::vector<ConfigGroupVersionInfo>& _currentConfigGroupVersionInfos);

                    /**
                     * 判断参数 CurrentConfigGroupVersionInfos 是否已赋值
                     * @return CurrentConfigGroupVersionInfos 是否已赋值
                     * 
                     */
                    bool CurrentConfigGroupVersionInfosHasBeenSet() const;

                    /**
                     * 获取Creation time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     * @return CreateTime Creation time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     * @param _createTime Creation time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     * @return UpdateTime Update time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     * @param _updateTime Update time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Environment ID.
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * Environment type. Valid values: 
<li>production: Production environment.</li><li> staging: Test environment. </li>
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * Environment status. Valid values: 
<li>creating: Being created.</li>
<li>running: The environment is stable, with version changes allowed.</li>
<li>version_deploying: The version is currently being deployed, with no more changes allowed. </li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Effective scope of the configuration in the current environment. Valid values: 
<li>ALL: It takes effect on the entire network when EnvType is set to production.</li>
<li>It returns the IP address of the test node for host binding during testing when EnvType is set to staging. </li>
                     */
                    std::vector<std::string> m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * For the effective versions of each configuration group in the current environment, there are two possible scenarios based on the value of Status: 
<li>When Status is set to version_deploying, the returned value of this field represents the previously effective version. In other words, during the deployment of the new version, the effective version is the one that was in effect before any changes were made.</li>
<li>When Status is set to running, the value returned by this field is the currently effective version. </li>
                     */
                    std::vector<ConfigGroupVersionInfo> m_currentConfigGroupVersionInfos;
                    bool m_currentConfigGroupVersionInfosHasBeenSet;

                    /**
                     * Creation time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ENVINFO_H_
