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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATEENDPOINTGROUPREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATEENDPOINTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/EndpointGroupConfiguration.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * CreateEndpointGroup request structure.
                */
                class CreateEndpointGroupRequest : public AbstractModel
                {
                public:
                    CreateEndpointGroupRequest();
                    ~CreateEndpointGroupRequest() = default;
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
                     * 获取<p>Listener ID.</p>
                     * @return ListenerId <p>Listener ID.</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>Listener ID.</p>
                     * @param _listenerId <p>Listener ID.</p>
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取<p>Node group type.</p><p>Enumeration values:</p><ul><li>VIRTUAL: custom endpoint node group</li><li>DEFAULT: default terminal node group</li></ul>
                     * @return EndpointGroupType <p>Node group type.</p><p>Enumeration values:</p><ul><li>VIRTUAL: custom endpoint node group</li><li>DEFAULT: default terminal node group</li></ul>
                     * 
                     */
                    std::string GetEndpointGroupType() const;

                    /**
                     * 设置<p>Node group type.</p><p>Enumeration values:</p><ul><li>VIRTUAL: custom endpoint node group</li><li>DEFAULT: default terminal node group</li></ul>
                     * @param _endpointGroupType <p>Node group type.</p><p>Enumeration values:</p><ul><li>VIRTUAL: custom endpoint node group</li><li>DEFAULT: default terminal node group</li></ul>
                     * 
                     */
                    void SetEndpointGroupType(const std::string& _endpointGroupType);

                    /**
                     * 判断参数 EndpointGroupType 是否已赋值
                     * @return EndpointGroupType 是否已赋值
                     * 
                     */
                    bool EndpointGroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>Terminal node group configuration.</p>
                     * @return EndpointGroupConfiguration <p>Terminal node group configuration.</p>
                     * 
                     */
                    EndpointGroupConfiguration GetEndpointGroupConfiguration() const;

                    /**
                     * 设置<p>Terminal node group configuration.</p>
                     * @param _endpointGroupConfiguration <p>Terminal node group configuration.</p>
                     * 
                     */
                    void SetEndpointGroupConfiguration(const EndpointGroupConfiguration& _endpointGroupConfiguration);

                    /**
                     * 判断参数 EndpointGroupConfiguration 是否已赋值
                     * @return EndpointGroupConfiguration 是否已赋值
                     * 
                     */
                    bool EndpointGroupConfigurationHasBeenSet() const;

                private:

                    /**
                     * <p>Global acceleration instance ID.</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>Listener ID.</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>Node group type.</p><p>Enumeration values:</p><ul><li>VIRTUAL: custom endpoint node group</li><li>DEFAULT: default terminal node group</li></ul>
                     */
                    std::string m_endpointGroupType;
                    bool m_endpointGroupTypeHasBeenSet;

                    /**
                     * <p>Terminal node group configuration.</p>
                     */
                    EndpointGroupConfiguration m_endpointGroupConfiguration;
                    bool m_endpointGroupConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATEENDPOINTGROUPREQUEST_H_
