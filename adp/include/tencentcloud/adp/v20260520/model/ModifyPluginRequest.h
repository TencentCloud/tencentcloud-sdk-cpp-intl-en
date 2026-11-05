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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYPLUGINREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/PluginProfile.h>
#include <tencentcloud/adp/v20260520/model/PluginConfig.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>
#include <tencentcloud/adp/v20260520/model/Tool.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyPlugin request structure.
                */
                class ModifyPluginRequest : public AbstractModel
                {
                public:
                    ModifyPluginRequest();
                    ~ModifyPluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Plugin_id</p>
                     * @return PluginId <p>Plugin_id</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>Plugin_id</p>
                     * @param _pluginId <p>Plugin_id</p>
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
                     * 获取<p>Plugin version number</p>
                     * @return PluginVersion <p>Plugin version number</p>
                     * 
                     */
                    int64_t GetPluginVersion() const;

                    /**
                     * 设置<p>Plugin version number</p>
                     * @param _pluginVersion <p>Plugin version number</p>
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
                     * 获取<p>Plug-in basic information</p>
                     * @return Profile <p>Plug-in basic information</p>
                     * 
                     */
                    PluginProfile GetProfile() const;

                    /**
                     * 设置<p>Plug-in basic information</p>
                     * @param _profile <p>Plug-in basic information</p>
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
                     * 获取<p>Plug-in type configuration</p>
                     * @return Config <p>Plug-in type configuration</p>
                     * 
                     */
                    PluginConfig GetConfig() const;

                    /**
                     * 设置<p>Plug-in type configuration</p>
                     * @param _config <p>Plug-in type configuration</p>
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
                     * 获取<p>Specify the fields to update to avoid full coverage</p>
                     * @return UpdateMask <p>Specify the fields to update to avoid full coverage</p>
                     * 
                     */
                    FieldMask GetUpdateMask() const;

                    /**
                     * 设置<p>Specify the fields to update to avoid full coverage</p>
                     * @param _updateMask <p>Specify the fields to update to avoid full coverage</p>
                     * 
                     */
                    void SetUpdateMask(const FieldMask& _updateMask);

                    /**
                     * 判断参数 UpdateMask 是否已赋值
                     * @return UpdateMask 是否已赋值
                     * 
                     */
                    bool UpdateMaskHasBeenSet() const;

                    /**
                     * 获取<p>Tool list of the plug-in. This parameter is not required for mcp plug-ins.</p>
                     * @return ToolList <p>Tool list of the plug-in. This parameter is not required for mcp plug-ins.</p>
                     * 
                     */
                    std::vector<Tool> GetToolList() const;

                    /**
                     * 设置<p>Tool list of the plug-in. This parameter is not required for mcp plug-ins.</p>
                     * @param _toolList <p>Tool list of the plug-in. This parameter is not required for mcp plug-ins.</p>
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
                     * 获取<p>User Main Account logged in (required in integrator mode)</p>
                     * @return LoginUin <p>User Main Account logged in (required in integrator mode)</p>
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置<p>User Main Account logged in (required in integrator mode)</p>
                     * @param _loginUin <p>User Main Account logged in (required in integrator mode)</p>
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取<p>User Sub-account logged in (required in integrator mode)</p>
                     * @return LoginSubAccountUin <p>User Sub-account logged in (required in integrator mode)</p>
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置<p>User Sub-account logged in (required in integrator mode)</p>
                     * @param _loginSubAccountUin <p>User Sub-account logged in (required in integrator mode)</p>
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * <p>Plugin_id</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>Plugin version number</p>
                     */
                    int64_t m_pluginVersion;
                    bool m_pluginVersionHasBeenSet;

                    /**
                     * <p>Plug-in basic information</p>
                     */
                    PluginProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * <p>Plug-in type configuration</p>
                     */
                    PluginConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>Specify the fields to update to avoid full coverage</p>
                     */
                    FieldMask m_updateMask;
                    bool m_updateMaskHasBeenSet;

                    /**
                     * <p>Tool list of the plug-in. This parameter is not required for mcp plug-ins.</p>
                     */
                    std::vector<Tool> m_toolList;
                    bool m_toolListHasBeenSet;

                    /**
                     * <p>User Main Account logged in (required in integrator mode)</p>
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * <p>User Sub-account logged in (required in integrator mode)</p>
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYPLUGINREQUEST_H_
