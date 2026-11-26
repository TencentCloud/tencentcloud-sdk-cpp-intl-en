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
<li>production: production environment;</li><li>staging: testing environment.</li>
                     * @return EnvType Environment type. Valid values:
<li>production: production environment;</li><li>staging: testing environment.</li>
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置Environment type. Valid values:
<li>production: production environment;</li><li>staging: testing environment.</li>
                     * @param _envType Environment type. Valid values:
<li>production: production environment;</li><li>staging: testing environment.</li>
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
<li>creating: under creation;</li>
<li>running: running steadily. Version change can be performed;</li>
<li>version_deploying: Version deployment in progress, cannot proceed with new changes.</li>
                     * @return Status Environment status. Valid values:
<li>creating: under creation;</li>
<li>running: running steadily. Version change can be performed;</li>
<li>version_deploying: Version deployment in progress, cannot proceed with new changes.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Environment status. Valid values:
<li>creating: under creation;</li>
<li>running: running steadily. Version change can be performed;</li>
<li>version_deploying: Version deployment in progress, cannot proceed with new changes.</li>
                     * @param _status Environment status. Valid values:
<li>creating: under creation;</li>
<li>running: running steadily. Version change can be performed;</li>
<li>version_deploying: Version deployment in progress, cannot proceed with new changes.</li>
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
                     * 获取Configuration effective range in the current environment:
<li>When the value of EnvType is production, the value of this parameter is ["ALL"], which means it takes effect globally;</li>
<li>When the value of EnvType is staging, the test node IP will be returned, which can be used to bind a host for testing.</li>
                     * @return Scope Configuration effective range in the current environment:
<li>When the value of EnvType is production, the value of this parameter is ["ALL"], which means it takes effect globally;</li>
<li>When the value of EnvType is staging, the test node IP will be returned, which can be used to bind a host for testing.</li>
                     * 
                     */
                    std::vector<std::string> GetScope() const;

                    /**
                     * 设置Configuration effective range in the current environment:
<li>When the value of EnvType is production, the value of this parameter is ["ALL"], which means it takes effect globally;</li>
<li>When the value of EnvType is staging, the test node IP will be returned, which can be used to bind a host for testing.</li>
                     * @param _scope Configuration effective range in the current environment:
<li>When the value of EnvType is production, the value of this parameter is ["ALL"], which means it takes effect globally;</li>
<li>When the value of EnvType is staging, the test node IP will be returned, which can be used to bind a host for testing.</li>
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
                     * 获取Versions that actually take effect for each configuration group in the current environment. According to the value of Status, there are the following two scenarios:
<li>When the value of Status is version_deploying, the value returned by this field is the version effective before the change action is executed. That is, during the new version deployment, the version actually effective is the version prior to the execution of the change action;</li>
<li>When the value of Status is running, the returned value of this field is the currently effective version.</li>
                     * @return CurrentConfigGroupVersionInfos Versions that actually take effect for each configuration group in the current environment. According to the value of Status, there are the following two scenarios:
<li>When the value of Status is version_deploying, the value returned by this field is the version effective before the change action is executed. That is, during the new version deployment, the version actually effective is the version prior to the execution of the change action;</li>
<li>When the value of Status is running, the returned value of this field is the currently effective version.</li>
                     * 
                     */
                    std::vector<ConfigGroupVersionInfo> GetCurrentConfigGroupVersionInfos() const;

                    /**
                     * 设置Versions that actually take effect for each configuration group in the current environment. According to the value of Status, there are the following two scenarios:
<li>When the value of Status is version_deploying, the value returned by this field is the version effective before the change action is executed. That is, during the new version deployment, the version actually effective is the version prior to the execution of the change action;</li>
<li>When the value of Status is running, the returned value of this field is the currently effective version.</li>
                     * @param _currentConfigGroupVersionInfos Versions that actually take effect for each configuration group in the current environment. According to the value of Status, there are the following two scenarios:
<li>When the value of Status is version_deploying, the value returned by this field is the version effective before the change action is executed. That is, during the new version deployment, the version actually effective is the version prior to the execution of the change action;</li>
<li>When the value of Status is running, the returned value of this field is the currently effective version.</li>
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
                     * 获取Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @return CreateTime Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @param _createTime Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
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
                     * 获取Update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @return UpdateTime Update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @param _updateTime Update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
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
<li>production: production environment;</li><li>staging: testing environment.</li>
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * Environment status. Valid values:
<li>creating: under creation;</li>
<li>running: running steadily. Version change can be performed;</li>
<li>version_deploying: Version deployment in progress, cannot proceed with new changes.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Configuration effective range in the current environment:
<li>When the value of EnvType is production, the value of this parameter is ["ALL"], which means it takes effect globally;</li>
<li>When the value of EnvType is staging, the test node IP will be returned, which can be used to bind a host for testing.</li>
                     */
                    std::vector<std::string> m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Versions that actually take effect for each configuration group in the current environment. According to the value of Status, there are the following two scenarios:
<li>When the value of Status is version_deploying, the value returned by this field is the version effective before the change action is executed. That is, during the new version deployment, the version actually effective is the version prior to the execution of the change action;</li>
<li>When the value of Status is running, the returned value of this field is the currently effective version.</li>
                     */
                    std::vector<ConfigGroupVersionInfo> m_currentConfigGroupVersionInfos;
                    bool m_currentConfigGroupVersionInfosHasBeenSet;

                    /**
                     * Creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ENVINFO_H_
