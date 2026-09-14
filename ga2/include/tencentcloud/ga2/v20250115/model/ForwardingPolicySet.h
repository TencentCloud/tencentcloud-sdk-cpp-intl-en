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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_FORWARDINGPOLICYSET_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_FORWARDINGPOLICYSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Layer-7 forwarding policy information
                */
                class ForwardingPolicySet : public AbstractModel
                {
                public:
                    ForwardingPolicySet();
                    ~ForwardingPolicySet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Global acceleration instance ID.
                     * @return GlobalAcceleratorId Global acceleration instance ID.
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置Global acceleration instance ID.
                     * @param _globalAcceleratorId Global acceleration instance ID.
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
                     * 获取Listener ID.
                     * @return ListenerId Listener ID.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID.
                     * @param _listenerId Listener ID.
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
                     * 获取Policy ID.
                     * @return ForwardingPolicyId Policy ID.
                     * 
                     */
                    std::string GetForwardingPolicyId() const;

                    /**
                     * 设置Policy ID.
                     * @param _forwardingPolicyId Policy ID.
                     * 
                     */
                    void SetForwardingPolicyId(const std::string& _forwardingPolicyId);

                    /**
                     * 判断参数 ForwardingPolicyId 是否已赋值
                     * @return ForwardingPolicyId 是否已赋值
                     * 
                     */
                    bool ForwardingPolicyIdHasBeenSet() const;

                    /**
                     * 获取Domain name.
                     * @return Host Domain name.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Domain name.
                     * @param _host Domain name.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Whether it is the default domain name.
                     * @return DefaultHostFlag Whether it is the default domain name.
                     * 
                     */
                    bool GetDefaultHostFlag() const;

                    /**
                     * 设置Whether it is the default domain name.
                     * @param _defaultHostFlag Whether it is the default domain name.
                     * 
                     */
                    void SetDefaultHostFlag(const bool& _defaultHostFlag);

                    /**
                     * 判断参数 DefaultHostFlag 是否已赋值
                     * @return DefaultHostFlag 是否已赋值
                     * 
                     */
                    bool DefaultHostFlagHasBeenSet() const;

                private:

                    /**
                     * Global acceleration instance ID.
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * Listener ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Policy ID.
                     */
                    std::string m_forwardingPolicyId;
                    bool m_forwardingPolicyIdHasBeenSet;

                    /**
                     * Domain name.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Whether it is the default domain name.
                     */
                    bool m_defaultHostFlag;
                    bool m_defaultHostFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_FORWARDINGPOLICYSET_H_
