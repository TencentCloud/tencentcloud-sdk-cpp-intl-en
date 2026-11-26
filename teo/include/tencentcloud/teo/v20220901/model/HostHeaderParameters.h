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
                * Host Header rewrite configuration parameters.
                */
                class HostHeaderParameters : public AbstractModel
                {
                public:
                    HostHeaderParameters();
                    ~HostHeaderParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execution action. Valid values:
<li>`followOrigin`: Follow source site domain;</li>
<li>custom: Custom.</li>
                     * @return Action Execution action. Valid values:
<li>`followOrigin`: Follow source site domain;</li>
<li>custom: Custom.</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Execution action. Valid values:
<li>`followOrigin`: Follow source site domain;</li>
<li>custom: Custom.</li>
                     * @param _action Execution action. Valid values:
<li>`followOrigin`: Follow source site domain;</li>
<li>custom: Custom.</li>
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
                     * 获取Host Header rewrite requires a complete domain name.<br>Note: When Switch is on, this field is required. When Switch is off, no need to specify this field, and if specified, it does not take effect.
                     * @return ServerName Host Header rewrite requires a complete domain name.<br>Note: When Switch is on, this field is required. When Switch is off, no need to specify this field, and if specified, it does not take effect.
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置Host Header rewrite requires a complete domain name.<br>Note: When Switch is on, this field is required. When Switch is off, no need to specify this field, and if specified, it does not take effect.
                     * @param _serverName Host Header rewrite requires a complete domain name.<br>Note: When Switch is on, this field is required. When Switch is off, no need to specify this field, and if specified, it does not take effect.
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
                     * Execution action. Valid values:
<li>`followOrigin`: Follow source site domain;</li>
<li>custom: Custom.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Host Header rewrite requires a complete domain name.<br>Note: When Switch is on, this field is required. When Switch is off, no need to specify this field, and if specified, it does not take effect.
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HOSTHEADERPARAMETERS_H_
