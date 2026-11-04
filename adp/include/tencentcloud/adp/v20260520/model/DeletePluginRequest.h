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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DELETEPLUGINREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DELETEPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DeletePlugin request structure.
                */
                class DeletePluginRequest : public AbstractModel
                {
                public:
                    DeletePluginRequest();
                    ~DeletePluginRequest() = default;
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

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DELETEPLUGINREQUEST_H_
