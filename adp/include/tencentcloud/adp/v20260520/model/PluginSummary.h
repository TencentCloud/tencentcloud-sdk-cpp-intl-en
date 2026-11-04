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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINSUMMARY_H_

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
#include <tencentcloud/adp/v20260520/model/ToolSummary.h>
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
                * Plug-in summary information (for the plug-in list)
                */
                class PluginSummary : public AbstractModel
                {
                public:
                    PluginSummary();
                    ~PluginSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Plug-in configuration message.</p>
                     * @return Config <p>Plug-in configuration message.</p>
                     * 
                     */
                    PluginConfig GetConfig() const;

                    /**
                     * 设置<p>Plug-in configuration message.</p>
                     * @param _config <p>Plug-in configuration message.</p>
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
                     * 获取<p>Whether shared is configured</p>
                     * @return IsShared <p>Whether shared is configured</p>
                     * 
                     */
                    bool GetIsShared() const;

                    /**
                     * 设置<p>Whether shared is configured</p>
                     * @param _isShared <p>Whether shared is configured</p>
                     * 
                     */
                    void SetIsShared(const bool& _isShared);

                    /**
                     * 判断参数 IsShared 是否已赋值
                     * @return IsShared 是否已赋值
                     * 
                     */
                    bool IsSharedHasBeenSet() const;

                    /**
                     * 获取<p>Plugin operation management information.</p>
                     * @return Operation <p>Plugin operation management information.</p>
                     * 
                     */
                    PluginOperation GetOperation() const;

                    /**
                     * 设置<p>Plugin operation management information.</p>
                     * @param _operation <p>Plugin operation management information.</p>
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
                     * 获取<p>plugin_id</p>
                     * @return PluginId <p>plugin_id</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>plugin_id</p>
                     * @param _pluginId <p>plugin_id</p>
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
                     * 获取<p>Basic information of the plug-in.</p>
                     * @return Profile <p>Basic information of the plug-in.</p>
                     * 
                     */
                    PluginProfile GetProfile() const;

                    /**
                     * 设置<p>Basic information of the plug-in.</p>
                     * @param _profile <p>Basic information of the plug-in.</p>
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
                     * 获取<p>Space ID that the plug-in belongs to; empty for built-in plugins</p>
                     * @return SpaceId <p>Space ID that the plug-in belongs to; empty for built-in plugins</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Space ID that the plug-in belongs to; empty for built-in plugins</p>
                     * @param _spaceId <p>Space ID that the plug-in belongs to; empty for built-in plugins</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Plugin statistical information.</p>
                     * @return Statistics <p>Plugin statistical information.</p>
                     * 
                     */
                    PluginStatistics GetStatistics() const;

                    /**
                     * 设置<p>Plugin statistical information.</p>
                     * @param _statistics <p>Plugin statistical information.</p>
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
                     * 获取<p>Tool information</p>
                     * @return ToolList <p>Tool information</p>
                     * 
                     */
                    std::vector<ToolSummary> GetToolList() const;

                    /**
                     * 设置<p>Tool information</p>
                     * @param _toolList <p>Tool information</p>
                     * 
                     */
                    void SetToolList(const std::vector<ToolSummary>& _toolList);

                    /**
                     * 判断参数 ToolList 是否已赋值
                     * @return ToolList 是否已赋值
                     * 
                     */
                    bool ToolListHasBeenSet() const;

                    /**
                     * 获取<p>Plugin status information by user dimension</p>
                     * @return UserState <p>Plugin status information by user dimension</p>
                     * 
                     */
                    PluginUserState GetUserState() const;

                    /**
                     * 设置<p>Plugin status information by user dimension</p>
                     * @param _userState <p>Plugin status information by user dimension</p>
                     * 
                     */
                    void SetUserState(const PluginUserState& _userState);

                    /**
                     * 判断参数 UserState 是否已赋值
                     * @return UserState 是否已赋值
                     * 
                     */
                    bool UserStateHasBeenSet() const;

                    /**
                     * 获取<p>Update time, Unix timestamp</p><p>Unit: seconds</p>
                     * @return UpdateTime <p>Update time, Unix timestamp</p><p>Unit: seconds</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time, Unix timestamp</p><p>Unit: seconds</p>
                     * @param _updateTime <p>Update time, Unix timestamp</p><p>Unit: seconds</p>
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
                     * <p>Plug-in configuration message.</p>
                     */
                    PluginConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>Whether shared is configured</p>
                     */
                    bool m_isShared;
                    bool m_isSharedHasBeenSet;

                    /**
                     * <p>Plugin operation management information.</p>
                     */
                    PluginOperation m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <p>plugin_id</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>Basic information of the plug-in.</p>
                     */
                    PluginProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * <p>Space ID that the plug-in belongs to; empty for built-in plugins</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Plugin statistical information.</p>
                     */
                    PluginStatistics m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * <p>Plug-in status. 1: available, 2: unavailable </p><p>Enumeration values:</p><ul><li>1: available</li><li>2: unavailable</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Tool information</p>
                     */
                    std::vector<ToolSummary> m_toolList;
                    bool m_toolListHasBeenSet;

                    /**
                     * <p>Plugin status information by user dimension</p>
                     */
                    PluginUserState m_userState;
                    bool m_userStateHasBeenSet;

                    /**
                     * <p>Update time, Unix timestamp</p><p>Unit: seconds</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINSUMMARY_H_
