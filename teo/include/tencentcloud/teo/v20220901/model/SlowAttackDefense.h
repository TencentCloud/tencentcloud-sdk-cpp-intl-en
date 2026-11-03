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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SLOWATTACKDEFENSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SLOWATTACKDEFENSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>
#include <tencentcloud/teo/v20220901/model/MinimalRequestBodyTransferRate.h>
#include <tencentcloud/teo/v20220901/model/RequestBodyTransferTimeout.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Specific configuration for slow attack protection.
                */
                class SlowAttackDefense : public AbstractModel
                {
                public:
                    SlowAttackDefense();
                    ~SlowAttackDefense() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether slow attack protection is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li>
                     * @return Enabled Whether slow attack protection is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether slow attack protection is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li>
                     * @param _enabled Whether slow attack protection is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li>
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
                     * 获取Rule ID of slow attack protection, returned only as an output parameter.
                     * @return Id Rule ID of slow attack protection, returned only as an output parameter.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Rule ID of slow attack protection, returned only as an output parameter.
                     * @param _id Rule ID of slow attack protection, returned only as an output parameter.
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
                     * 获取Handling method for slow attack protection. This field is required when Enabled is on. Supported values for SecurityAction Name: <li>Monitor: observe;</li><li>Deny: block;</li>
                     * @return Action Handling method for slow attack protection. This field is required when Enabled is on. Supported values for SecurityAction Name: <li>Monitor: observe;</li><li>Deny: block;</li>
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置Handling method for slow attack protection. This field is required when Enabled is on. Supported values for SecurityAction Name: <li>Monitor: observe;</li><li>Deny: block;</li>
                     * @param _action Handling method for slow attack protection. This field is required when Enabled is on. Supported values for SecurityAction Name: <li>Monitor: observe;</li><li>Deny: block;</li>
                     * 
                     */
                    void SetAction(const SecurityAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Specific configuration of the minimum body transfer rate threshold. Required when Enabled is on.
                     * @return MinimalRequestBodyTransferRate Specific configuration of the minimum body transfer rate threshold. Required when Enabled is on.
                     * 
                     */
                    MinimalRequestBodyTransferRate GetMinimalRequestBodyTransferRate() const;

                    /**
                     * 设置Specific configuration of the minimum body transfer rate threshold. Required when Enabled is on.
                     * @param _minimalRequestBodyTransferRate Specific configuration of the minimum body transfer rate threshold. Required when Enabled is on.
                     * 
                     */
                    void SetMinimalRequestBodyTransferRate(const MinimalRequestBodyTransferRate& _minimalRequestBodyTransferRate);

                    /**
                     * 判断参数 MinimalRequestBodyTransferRate 是否已赋值
                     * @return MinimalRequestBodyTransferRate 是否已赋值
                     * 
                     */
                    bool MinimalRequestBodyTransferRateHasBeenSet() const;

                    /**
                     * 获取Specific configuration of the body transfer timeout duration. Required if Enabled is on.
                     * @return RequestBodyTransferTimeout Specific configuration of the body transfer timeout duration. Required if Enabled is on.
                     * 
                     */
                    RequestBodyTransferTimeout GetRequestBodyTransferTimeout() const;

                    /**
                     * 设置Specific configuration of the body transfer timeout duration. Required if Enabled is on.
                     * @param _requestBodyTransferTimeout Specific configuration of the body transfer timeout duration. Required if Enabled is on.
                     * 
                     */
                    void SetRequestBodyTransferTimeout(const RequestBodyTransferTimeout& _requestBodyTransferTimeout);

                    /**
                     * 判断参数 RequestBodyTransferTimeout 是否已赋值
                     * @return RequestBodyTransferTimeout 是否已赋值
                     * 
                     */
                    bool RequestBodyTransferTimeoutHasBeenSet() const;

                private:

                    /**
                     * Whether slow attack protection is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Rule ID of slow attack protection, returned only as an output parameter.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Handling method for slow attack protection. This field is required when Enabled is on. Supported values for SecurityAction Name: <li>Monitor: observe;</li><li>Deny: block;</li>
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Specific configuration of the minimum body transfer rate threshold. Required when Enabled is on.
                     */
                    MinimalRequestBodyTransferRate m_minimalRequestBodyTransferRate;
                    bool m_minimalRequestBodyTransferRateHasBeenSet;

                    /**
                     * Specific configuration of the body transfer timeout duration. Required if Enabled is on.
                     */
                    RequestBodyTransferTimeout m_requestBodyTransferTimeout;
                    bool m_requestBodyTransferTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SLOWATTACKDEFENSE_H_
