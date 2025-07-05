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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEPROTOCOLBLOCKCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEPROTOCOLBLOCKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/ProtocolBlockConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateProtocolBlockConfig request structure.
                */
                class CreateProtocolBlockConfigRequest : public AbstractModel
                {
                public:
                    CreateProtocolBlockConfigRequest();
                    ~CreateProtocolBlockConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS instance ID
                     * @return InstanceId Anti-DDoS instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param _instanceId Anti-DDoS instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Protocol blocking configuration
                     * @return ProtocolBlockConfig Protocol blocking configuration
                     * 
                     */
                    ProtocolBlockConfig GetProtocolBlockConfig() const;

                    /**
                     * 设置Protocol blocking configuration
                     * @param _protocolBlockConfig Protocol blocking configuration
                     * 
                     */
                    void SetProtocolBlockConfig(const ProtocolBlockConfig& _protocolBlockConfig);

                    /**
                     * 判断参数 ProtocolBlockConfig 是否已赋值
                     * @return ProtocolBlockConfig 是否已赋值
                     * 
                     */
                    bool ProtocolBlockConfigHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Protocol blocking configuration
                     */
                    ProtocolBlockConfig m_protocolBlockConfig;
                    bool m_protocolBlockConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEPROTOCOLBLOCKCONFIGREQUEST_H_
