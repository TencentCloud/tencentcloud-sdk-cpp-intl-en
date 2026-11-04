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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATEPLUGINREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATEPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/PluginProfile.h>
#include <tencentcloud/adp/v20260520/model/PluginConfig.h>
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
                * CreatePlugin request structure.
                */
                class CreatePluginRequest : public AbstractModel
                {
                public:
                    CreatePluginRequest();
                    ~CreatePluginRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>Current workspace id</p>
                     * @return SpaceId <p>Current workspace id</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Current workspace id</p>
                     * @param _spaceId <p>Current workspace id</p>
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
                     * 获取<p>Tool list of the plug-in</p>
                     * @return ToolList <p>Tool list of the plug-in</p>
                     * 
                     */
                    std::vector<Tool> GetToolList() const;

                    /**
                     * 设置<p>Tool list of the plug-in</p>
                     * @param _toolList <p>Tool list of the plug-in</p>
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
                     * 获取<p>User sub-account for login (required in integrator mode)</p>
                     * @return LoginSubAccountUin <p>User sub-account for login (required in integrator mode)</p>
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置<p>User sub-account for login (required in integrator mode)</p>
                     * @param _loginSubAccountUin <p>User sub-account for login (required in integrator mode)</p>
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
                     * <p>Basic information of the plug-in.</p>
                     */
                    PluginProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * <p>Plug-in type configuration</p>
                     */
                    PluginConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>Current workspace id</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Tool list of the plug-in</p>
                     */
                    std::vector<Tool> m_toolList;
                    bool m_toolListHasBeenSet;

                    /**
                     * <p>User Main Account logged in (required in integrator mode)</p>
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * <p>User sub-account for login (required in integrator mode)</p>
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATEPLUGINREQUEST_H_
