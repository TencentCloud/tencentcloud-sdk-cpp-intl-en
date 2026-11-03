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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTFILTERING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTFILTERING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Intelligent client filtering
                */
                class ClientFiltering : public AbstractModel
                {
                public:
                    ClientFiltering();
                    ~ClientFiltering() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether intelligent client filtering is enabled. Valid values: <li>on: Enable;</li><li>off: Disable.</li>
                     * @return Enabled Whether intelligent client filtering is enabled. Valid values: <li>on: Enable;</li><li>off: Disable.</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether intelligent client filtering is enabled. Valid values: <li>on: Enable;</li><li>off: Disable.</li>
                     * @param _enabled Whether intelligent client filtering is enabled. Valid values: <li>on: Enable;</li><li>off: Disable.</li>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Rule ID of intelligent client filtering. Output only.
                     * @return Id Rule ID of intelligent client filtering. Output only.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Rule ID of intelligent client filtering. Output only.
                     * @param _id Rule ID of intelligent client filtering. Output only.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Handling method for intelligent client filtering. This field is required when Enabled is on. Supported values for SecurityAction Name: <li>Monitor: observe;</li><li>Deny: block;</li><li>Challenge: challenge, where ChallengeActionParameters.Name only supports JSChallenge.</li>
                     * @return Action Handling method for intelligent client filtering. This field is required when Enabled is on. Supported values for SecurityAction Name: <li>Monitor: observe;</li><li>Deny: block;</li><li>Challenge: challenge, where ChallengeActionParameters.Name only supports JSChallenge.</li>
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置Handling method for intelligent client filtering. This field is required when Enabled is on. Supported values for SecurityAction Name: <li>Monitor: observe;</li><li>Deny: block;</li><li>Challenge: challenge, where ChallengeActionParameters.Name only supports JSChallenge.</li>
                     * @param _action Handling method for intelligent client filtering. This field is required when Enabled is on. Supported values for SecurityAction Name: <li>Monitor: observe;</li><li>Deny: block;</li><li>Challenge: challenge, where ChallengeActionParameters.Name only supports JSChallenge.</li>
                     * 
                     */
                    void SetAction(const SecurityAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * Whether intelligent client filtering is enabled. Valid values: <li>on: Enable;</li><li>off: Disable.</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Rule ID of intelligent client filtering. Output only.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Handling method for intelligent client filtering. This field is required when Enabled is on. Supported values for SecurityAction Name: <li>Monitor: observe;</li><li>Deny: block;</li><li>Challenge: challenge, where ChallengeActionParameters.Name only supports JSChallenge.</li>
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTFILTERING_H_
