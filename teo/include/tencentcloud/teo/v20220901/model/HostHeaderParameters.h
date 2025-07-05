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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HOSTHEADERPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HOSTHEADERPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Host Header Rewrite configuration parameters.
                */
                class HostHeaderParameters : public AbstractModel
                {
                public:
                    HostHeaderParameters();
                    ~HostHeaderParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action to be executed. values:.
<Li>FollowOrigin: follow origin server domain name;</li>.
<Li>`Custom`: custom</li>.
                     * @return Action Action to be executed. values:.
<Li>FollowOrigin: follow origin server domain name;</li>.
<Li>`Custom`: custom</li>.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action to be executed. values:.
<Li>FollowOrigin: follow origin server domain name;</li>.
<Li>`Custom`: custom</li>.
                     * @param _action Action to be executed. values:.
<Li>FollowOrigin: follow origin server domain name;</li>.
<Li>`Custom`: custom</li>.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Host header rewrite requires a complete domain name.<br>note: this field is required when switch is on; when switch is off, this field is not required and any value will be ignored.
                     * @return ServerName Host header rewrite requires a complete domain name.<br>note: this field is required when switch is on; when switch is off, this field is not required and any value will be ignored.
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置Host header rewrite requires a complete domain name.<br>note: this field is required when switch is on; when switch is off, this field is not required and any value will be ignored.
                     * @param _serverName Host header rewrite requires a complete domain name.<br>note: this field is required when switch is on; when switch is off, this field is not required and any value will be ignored.
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                private:

                    /**
                     * Action to be executed. values:.
<Li>FollowOrigin: follow origin server domain name;</li>.
<Li>`Custom`: custom</li>.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Host header rewrite requires a complete domain name.<br>note: this field is required when switch is on; when switch is off, this field is not required and any value will be ignored.
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HOSTHEADERPARAMETERS_H_
