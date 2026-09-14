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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACLPOLICYREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACLPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * CreateGlobalAcceleratorAclPolicy request structure.
                */
                class CreateGlobalAcceleratorAclPolicyRequest : public AbstractModel
                {
                public:
                    CreateGlobalAcceleratorAclPolicyRequest();
                    ~CreateGlobalAcceleratorAclPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Global acceleration instance ID.</p>
                     * @return GlobalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>Global acceleration instance ID.</p>
                     * @param _globalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>Default behavior.</p><p>Enumeration values:</p><ul><li>ACCEPT: Permit all traffic on the access channel by default</li><li>DROP: Deny all traffic on the access channel by default</li></ul>
                     * @return DefaultAction <p>Default behavior.</p><p>Enumeration values:</p><ul><li>ACCEPT: Permit all traffic on the access channel by default</li><li>DROP: Deny all traffic on the access channel by default</li></ul>
                     * 
                     */
                    std::string GetDefaultAction() const;

                    /**
                     * 设置<p>Default behavior.</p><p>Enumeration values:</p><ul><li>ACCEPT: Permit all traffic on the access channel by default</li><li>DROP: Deny all traffic on the access channel by default</li></ul>
                     * @param _defaultAction <p>Default behavior.</p><p>Enumeration values:</p><ul><li>ACCEPT: Permit all traffic on the access channel by default</li><li>DROP: Deny all traffic on the access channel by default</li></ul>
                     * 
                     */
                    void SetDefaultAction(const std::string& _defaultAction);

                    /**
                     * 判断参数 DefaultAction 是否已赋值
                     * @return DefaultAction 是否已赋值
                     * 
                     */
                    bool DefaultActionHasBeenSet() const;

                private:

                    /**
                     * <p>Global acceleration instance ID.</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>Default behavior.</p><p>Enumeration values:</p><ul><li>ACCEPT: Permit all traffic on the access channel by default</li><li>DROP: Deny all traffic on the access channel by default</li></ul>
                     */
                    std::string m_defaultAction;
                    bool m_defaultActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACLPOLICYREQUEST_H_
