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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSACL_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSACL_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS port filtering configuration
                */
                class DDoSAcl : public AbstractModel
                {
                public:
                    DDoSAcl();
                    ~DDoSAcl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Destination port used as the end port
                     * @return DportEnd Destination port used as the end port
                     * 
                     */
                    int64_t GetDportEnd() const;

                    /**
                     * 设置Destination port used as the end port
                     * @param _dportEnd Destination port used as the end port
                     * 
                     */
                    void SetDportEnd(const int64_t& _dportEnd);

                    /**
                     * 判断参数 DportEnd 是否已赋值
                     * @return DportEnd 是否已赋值
                     * 
                     */
                    bool DportEndHasBeenSet() const;

                    /**
                     * 获取Destination port used as the start port
                     * @return DportStart Destination port used as the start port
                     * 
                     */
                    int64_t GetDportStart() const;

                    /**
                     * 设置Destination port used as the start port
                     * @param _dportStart Destination port used as the start port
                     * 
                     */
                    void SetDportStart(const int64_t& _dportStart);

                    /**
                     * 判断参数 DportStart 是否已赋值
                     * @return DportStart 是否已赋值
                     * 
                     */
                    bool DportStartHasBeenSet() const;

                    /**
                     * 获取Source port used as the end port
                     * @return SportEnd Source port used as the end port
                     * 
                     */
                    int64_t GetSportEnd() const;

                    /**
                     * 设置Source port used as the end port
                     * @param _sportEnd Source port used as the end port
                     * 
                     */
                    void SetSportEnd(const int64_t& _sportEnd);

                    /**
                     * 判断参数 SportEnd 是否已赋值
                     * @return SportEnd 是否已赋值
                     * 
                     */
                    bool SportEndHasBeenSet() const;

                    /**
                     * 获取Source port used as the start port
                     * @return SportStart Source port used as the start port
                     * 
                     */
                    int64_t GetSportStart() const;

                    /**
                     * 设置Source port used as the start port
                     * @param _sportStart Source port used as the start port
                     * 
                     */
                    void SetSportStart(const int64_t& _sportStart);

                    /**
                     * 判断参数 SportStart 是否已赋值
                     * @return SportStart 是否已赋值
                     * 
                     */
                    bool SportStartHasBeenSet() const;

                    /**
                     * 获取Protocol. Values: `tcp`, `udp`, and `all`.
                     * @return Protocol Protocol. Values: `tcp`, `udp`, and `all`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Values: `tcp`, `udp`, and `all`.
                     * @param _protocol Protocol. Values: `tcp`, `udp`, and `all`.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Action. Values: `drop` (Drop the request); `transmit` (Allow the request); `forward` (Continue to offer protection).
                     * @return Action Action. Values: `drop` (Drop the request); `transmit` (Allow the request); `forward` (Continue to offer protection).
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. Values: `drop` (Drop the request); `transmit` (Allow the request); `forward` (Continue to offer protection).
                     * @param _action Action. Values: `drop` (Drop the request); `transmit` (Allow the request); `forward` (Continue to offer protection).
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
                     * 获取Whether it is a system configuration. Values: `0` (manual configuration); `1` (system configuration).
                     * @return Default Whether it is a system configuration. Values: `0` (manual configuration); `1` (system configuration).
                     * 
                     */
                    int64_t GetDefault() const;

                    /**
                     * 设置Whether it is a system configuration. Values: `0` (manual configuration); `1` (system configuration).
                     * @param _default Whether it is a system configuration. Values: `0` (manual configuration); `1` (system configuration).
                     * 
                     */
                    void SetDefault(const int64_t& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                private:

                    /**
                     * Destination port used as the end port
                     */
                    int64_t m_dportEnd;
                    bool m_dportEndHasBeenSet;

                    /**
                     * Destination port used as the start port
                     */
                    int64_t m_dportStart;
                    bool m_dportStartHasBeenSet;

                    /**
                     * Source port used as the end port
                     */
                    int64_t m_sportEnd;
                    bool m_sportEndHasBeenSet;

                    /**
                     * Source port used as the start port
                     */
                    int64_t m_sportStart;
                    bool m_sportStartHasBeenSet;

                    /**
                     * Protocol. Values: `tcp`, `udp`, and `all`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Action. Values: `drop` (Drop the request); `transmit` (Allow the request); `forward` (Continue to offer protection).
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Whether it is a system configuration. Values: `0` (manual configuration); `1` (system configuration).
                     */
                    int64_t m_default;
                    bool m_defaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSACL_H_
