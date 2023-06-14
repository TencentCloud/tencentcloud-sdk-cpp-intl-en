/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_FORWARDLISTENER_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_FORWARDLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Forwarding listener
                */
                class ForwardListener : public AbstractModel
                {
                public:
                    ForwardListener();
                    ~ForwardListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The starting port for listener forwarding. Value range: 1 to 65535.
                     * @return FrontendPort The starting port for listener forwarding. Value range: 1 to 65535.
                     * 
                     */
                    int64_t GetFrontendPort() const;

                    /**
                     * 设置The starting port for listener forwarding. Value range: 1 to 65535.
                     * @param _frontendPort The starting port for listener forwarding. Value range: 1 to 65535.
                     * 
                     */
                    void SetFrontendPort(const int64_t& _frontendPort);

                    /**
                     * 判断参数 FrontendPort 是否已赋值
                     * @return FrontendPort 是否已赋值
                     * 
                     */
                    bool FrontendPortHasBeenSet() const;

                    /**
                     * 获取Forwarding protocol. Valid values:
`TCP`
`UDP`
]
                     * @return ForwardProtocol Forwarding protocol. Valid values:
`TCP`
`UDP`
]
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置Forwarding protocol. Valid values:
`TCP`
`UDP`
]
                     * @param _forwardProtocol Forwarding protocol. Valid values:
`TCP`
`UDP`
]
                     * 
                     */
                    void SetForwardProtocol(const std::string& _forwardProtocol);

                    /**
                     * 判断参数 ForwardProtocol 是否已赋值
                     * @return ForwardProtocol 是否已赋值
                     * 
                     */
                    bool ForwardProtocolHasBeenSet() const;

                    /**
                     * 获取The ending port for listener forwarding. Value range: 1 to 65535.
                     * @return FrontendPortEnd The ending port for listener forwarding. Value range: 1 to 65535.
                     * 
                     */
                    int64_t GetFrontendPortEnd() const;

                    /**
                     * 设置The ending port for listener forwarding. Value range: 1 to 65535.
                     * @param _frontendPortEnd The ending port for listener forwarding. Value range: 1 to 65535.
                     * 
                     */
                    void SetFrontendPortEnd(const int64_t& _frontendPortEnd);

                    /**
                     * 判断参数 FrontendPortEnd 是否已赋值
                     * @return FrontendPortEnd 是否已赋值
                     * 
                     */
                    bool FrontendPortEndHasBeenSet() const;

                private:

                    /**
                     * The starting port for listener forwarding. Value range: 1 to 65535.
                     */
                    int64_t m_frontendPort;
                    bool m_frontendPortHasBeenSet;

                    /**
                     * Forwarding protocol. Valid values:
`TCP`
`UDP`
]
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * The ending port for listener forwarding. Value range: 1 to 65535.
                     */
                    int64_t m_frontendPortEnd;
                    bool m_frontendPortEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_FORWARDLISTENER_H_
