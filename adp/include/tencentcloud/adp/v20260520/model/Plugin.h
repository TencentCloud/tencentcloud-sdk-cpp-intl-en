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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGIN_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/PluginConfig.h>
#include <tencentcloud/adp/v20260520/model/PluginOperation.h>
#include <tencentcloud/adp/v20260520/model/PluginProfile.h>
#include <tencentcloud/adp/v20260520/model/PluginStatistics.h>
#include <tencentcloud/adp/v20260520/model/Tool.h>
#include <tencentcloud/adp/v20260520/model/PluginUserState.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Plugin details
                */
                class Plugin : public AbstractModel
                {
                public:
                    Plugin();
                    ~Plugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Plug-in configuration
                     * @return Config Plug-in configuration
                     * 
                     */
                    PluginConfig GetConfig() const;

                    /**
                     * 设置Plug-in configuration
                     * @param _config Plug-in configuration
                     * 
                     */
                    void SetConfig(const PluginConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Creation time, Unix Timestamp
                     * @return CreateTime Creation time, Unix Timestamp
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time, Unix Timestamp
                     * @param _createTime Creation time, Unix Timestamp
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
                     * 获取Plug-in operation management information
                     * @return Operation Plug-in operation management information
                     * 
                     */
                    PluginOperation GetOperation() const;

                    /**
                     * 设置Plug-in operation management information
                     * @param _operation Plug-in operation management information
                     * 
                     */
                    void SetOperation(const PluginOperation& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Plugin ID
                     * @return PluginId Plugin ID
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置Plugin ID
                     * @param _pluginId Plugin ID
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取Plugin version number
                     * @return PluginVersion Plugin version number
                     * 
                     */
                    int64_t GetPluginVersion() const;

                    /**
                     * 设置Plugin version number
                     * @param _pluginVersion Plugin version number
                     * 
                     */
                    void SetPluginVersion(const int64_t& _pluginVersion);

                    /**
                     * 判断参数 PluginVersion 是否已赋值
                     * @return PluginVersion 是否已赋值
                     * 
                     */
                    bool PluginVersionHasBeenSet() const;

                    /**
                     * 获取Basic plug-in information.
                     * @return Profile Basic plug-in information.
                     * 
                     */
                    PluginProfile GetProfile() const;

                    /**
                     * 设置Basic plug-in information.
                     * @param _profile Basic plug-in information.
                     * 
                     */
                    void SetProfile(const PluginProfile& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取Plug-in statistical information
                     * @return Statistics Plug-in statistical information
                     * 
                     */
                    PluginStatistics GetStatistics() const;

                    /**
                     * 设置Plug-in statistical information
                     * @param _statistics Plug-in statistical information
                     * 
                     */
                    void SetStatistics(const PluginStatistics& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取<p>Plug-in status. 1: available, 2: unavailable </p><p>Enumeration values:</p><ul><li>1: available</li><li>2: unavailable</li></ul>
                     * @return Status <p>Plug-in status. 1: available, 2: unavailable </p><p>Enumeration values:</p><ul><li>1: available</li><li>2: unavailable</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Plug-in status. 1: available, 2: unavailable </p><p>Enumeration values:</p><ul><li>1: available</li><li>2: unavailable</li></ul>
                     * @param _status <p>Plug-in status. 1: available, 2: unavailable </p><p>Enumeration values:</p><ul><li>1: available</li><li>2: unavailable</li></ul>
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
                     * 获取Tool list
                     * @return ToolList Tool list
                     * 
                     */
                    std::vector<Tool> GetToolList() const;

                    /**
                     * 设置Tool list
                     * @param _toolList Tool list
                     * 
                     */
                    void SetToolList(const std::vector<Tool>& _toolList);

                    /**
                     * 判断参数 ToolList 是否已赋值
                     * @return ToolList 是否已赋值
                     * 
                     */
                    bool ToolListHasBeenSet() const;

                    /**
                     * 获取Update time, Unix timestamp
                     * @return UpdateTime Update time, Unix timestamp
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time, Unix timestamp
                     * @param _updateTime Update time, Unix timestamp
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Plugin status information by user dimension
                     * @return UserState Plugin status information by user dimension
                     * 
                     */
                    PluginUserState GetUserState() const;

                    /**
                     * 设置Plugin status information by user dimension
                     * @param _userState Plugin status information by user dimension
                     * 
                     */
                    void SetUserState(const PluginUserState& _userState);

                    /**
                     * 判断参数 UserState 是否已赋值
                     * @return UserState 是否已赋值
                     * 
                     */
                    bool UserStateHasBeenSet() const;

                private:

                    /**
                     * Plug-in configuration
                     */
                    PluginConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Creation time, Unix Timestamp
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Plug-in operation management information
                     */
                    PluginOperation m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Plugin ID
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * Plugin version number
                     */
                    int64_t m_pluginVersion;
                    bool m_pluginVersionHasBeenSet;

                    /**
                     * Basic plug-in information.
                     */
                    PluginProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * Plug-in statistical information
                     */
                    PluginStatistics m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * <p>Plug-in status. 1: available, 2: unavailable </p><p>Enumeration values:</p><ul><li>1: available</li><li>2: unavailable</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Tool list
                     */
                    std::vector<Tool> m_toolList;
                    bool m_toolListHasBeenSet;

                    /**
                     * Update time, Unix timestamp
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Plugin status information by user dimension
                     */
                    PluginUserState m_userState;
                    bool m_userStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGIN_H_
