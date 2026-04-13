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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DEFAULTDENYSECURITYACTIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DEFAULTDENYSECURITYACTIONPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DenyActionParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Default interception action configuration. When security rules are hit and trigger intercept handling actions, if SecurityAction only specifies Name as Deny and DenyActionParameters is not specified, match by feature module dimension and use the default parameter configuration defined here:
<li>Default disposition action configuration for managed rules in ManagedRules.</li>
<li>OtherModules Security protection rules (custom rule, rate limit, and Bot management function) except managed rules have default block disposition action configuration.</li>
                */
                class DefaultDenySecurityActionParameters : public AbstractModel
                {
                public:
                    DefaultDenySecurityActionParameters();
                    ~DefaultDenySecurityActionParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The managed rule uses the default disposition action configuration. DenyActionParameters supported configuration parameters: <li>ReturnCustomPage: Whether to use a custom page.</li><li>ResponseCode: Status code of the custom page.</li><li>ErrorPageId: PageId of the custom page.</li>
                     * @return ManagedRules The managed rule uses the default disposition action configuration. DenyActionParameters supported configuration parameters: <li>ReturnCustomPage: Whether to use a custom page.</li><li>ResponseCode: Status code of the custom page.</li><li>ErrorPageId: PageId of the custom page.</li>
                     * 
                     */
                    DenyActionParameters GetManagedRules() const;

                    /**
                     * 设置The managed rule uses the default disposition action configuration. DenyActionParameters supported configuration parameters: <li>ReturnCustomPage: Whether to use a custom page.</li><li>ResponseCode: Status code of the custom page.</li><li>ErrorPageId: PageId of the custom page.</li>
                     * @param _managedRules The managed rule uses the default disposition action configuration. DenyActionParameters supported configuration parameters: <li>ReturnCustomPage: Whether to use a custom page.</li><li>ResponseCode: Status code of the custom page.</li><li>ErrorPageId: PageId of the custom page.</li>
                     * 
                     */
                    void SetManagedRules(const DenyActionParameters& _managedRules);

                    /**
                     * 判断参数 ManagedRules 是否已赋值
                     * @return ManagedRules 是否已赋值
                     * 
                     */
                    bool ManagedRulesHasBeenSet() const;

                    /**
                     * 获取Security protection rules other than managed rules (custom rule, rate limit, and Bot management function) default to disposition action configuration. DenyActionParameters supported configuration parameters: <li>ReturnCustomPage: Whether to use custom page.</li> <li>ResponseCode: Status code of custom pages.</li> <li>ErrorPageId: PageId of custom pages.</li>
                     * @return OtherModules Security protection rules other than managed rules (custom rule, rate limit, and Bot management function) default to disposition action configuration. DenyActionParameters supported configuration parameters: <li>ReturnCustomPage: Whether to use custom page.</li> <li>ResponseCode: Status code of custom pages.</li> <li>ErrorPageId: PageId of custom pages.</li>
                     * 
                     */
                    DenyActionParameters GetOtherModules() const;

                    /**
                     * 设置Security protection rules other than managed rules (custom rule, rate limit, and Bot management function) default to disposition action configuration. DenyActionParameters supported configuration parameters: <li>ReturnCustomPage: Whether to use custom page.</li> <li>ResponseCode: Status code of custom pages.</li> <li>ErrorPageId: PageId of custom pages.</li>
                     * @param _otherModules Security protection rules other than managed rules (custom rule, rate limit, and Bot management function) default to disposition action configuration. DenyActionParameters supported configuration parameters: <li>ReturnCustomPage: Whether to use custom page.</li> <li>ResponseCode: Status code of custom pages.</li> <li>ErrorPageId: PageId of custom pages.</li>
                     * 
                     */
                    void SetOtherModules(const DenyActionParameters& _otherModules);

                    /**
                     * 判断参数 OtherModules 是否已赋值
                     * @return OtherModules 是否已赋值
                     * 
                     */
                    bool OtherModulesHasBeenSet() const;

                private:

                    /**
                     * The managed rule uses the default disposition action configuration. DenyActionParameters supported configuration parameters: <li>ReturnCustomPage: Whether to use a custom page.</li><li>ResponseCode: Status code of the custom page.</li><li>ErrorPageId: PageId of the custom page.</li>
                     */
                    DenyActionParameters m_managedRules;
                    bool m_managedRulesHasBeenSet;

                    /**
                     * Security protection rules other than managed rules (custom rule, rate limit, and Bot management function) default to disposition action configuration. DenyActionParameters supported configuration parameters: <li>ReturnCustomPage: Whether to use custom page.</li> <li>ResponseCode: Status code of custom pages.</li> <li>ErrorPageId: PageId of custom pages.</li>
                     */
                    DenyActionParameters m_otherModules;
                    bool m_otherModulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DEFAULTDENYSECURITYACTIONPARAMETERS_H_
