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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSACLRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSACLRULE_H_

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
                * DDoS port filtering configuration
                */
                class DDoSAclRule : public AbstractModel
                {
                public:
                    DDoSAclRule();
                    ~DDoSAclRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取End of the destination port. Value range: 0–65535.
                     * @return DportEnd End of the destination port. Value range: 0–65535.
                     */
                    int64_t GetDportEnd() const;

                    /**
                     * 设置End of the destination port. Value range: 0–65535.
                     * @param DportEnd End of the destination port. Value range: 0–65535.
                     */
                    void SetDportEnd(const int64_t& _dportEnd);

                    /**
                     * 判断参数 DportEnd 是否已赋值
                     * @return DportEnd 是否已赋值
                     */
                    bool DportEndHasBeenSet() const;

                    /**
                     * 获取Start of the destination port. Value range: 0–65535.
                     * @return DportStart Start of the destination port. Value range: 0–65535.
                     */
                    int64_t GetDportStart() const;

                    /**
                     * 设置Start of the destination port. Value range: 0–65535.
                     * @param DportStart Start of the destination port. Value range: 0–65535.
                     */
                    void SetDportStart(const int64_t& _dportStart);

                    /**
                     * 判断参数 DportStart 是否已赋值
                     * @return DportStart 是否已赋值
                     */
                    bool DportStartHasBeenSet() const;

                    /**
                     * 获取End of the source port. Value range: 0–65535.
                     * @return SportEnd End of the source port. Value range: 0–65535.
                     */
                    int64_t GetSportEnd() const;

                    /**
                     * 设置End of the source port. Value range: 0–65535.
                     * @param SportEnd End of the source port. Value range: 0–65535.
                     */
                    void SetSportEnd(const int64_t& _sportEnd);

                    /**
                     * 判断参数 SportEnd 是否已赋值
                     * @return SportEnd 是否已赋值
                     */
                    bool SportEndHasBeenSet() const;

                    /**
                     * 获取Start of the source port. Value range: 0–65535.
                     * @return SportStart Start of the source port. Value range: 0–65535.
                     */
                    int64_t GetSportStart() const;

                    /**
                     * 设置Start of the source port. Value range: 0–65535.
                     * @param SportStart Start of the source port. Value range: 0–65535.
                     */
                    void SetSportStart(const int64_t& _sportStart);

                    /**
                     * 判断参数 SportStart 是否已赋值
                     * @return SportStart 是否已赋值
                     */
                    bool SportStartHasBeenSet() const;

                    /**
                     * 获取The protocol. Values:
<li>`tcp`: TCP protocol</li>
<li>`udp`: UDP protocol</li>
<li>`all`: All protocols</li>
                     * @return Protocol The protocol. Values:
<li>`tcp`: TCP protocol</li>
<li>`udp`: UDP protocol</li>
<li>`all`: All protocols</li>
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The protocol. Values:
<li>`tcp`: TCP protocol</li>
<li>`udp`: UDP protocol</li>
<li>`all`: All protocols</li>
                     * @param Protocol The protocol. Values:
<li>`tcp`: TCP protocol</li>
<li>`udp`: UDP protocol</li>
<li>`all`: All protocols</li>
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Action to be executed. Values:
<li>`drop`: Discard</li>
<li>`transmit`: Allow</li>
<li>`forward`: Continue protection</li>
                     * @return Action Action to be executed. Values:
<li>`drop`: Discard</li>
<li>`transmit`: Allow</li>
<li>`forward`: Continue protection</li>
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action to be executed. Values:
<li>`drop`: Discard</li>
<li>`transmit`: Allow</li>
<li>`forward`: Continue protection</li>
                     * @param Action Action to be executed. Values:
<li>`drop`: Discard</li>
<li>`transmit`: Allow</li>
<li>`forward`: Continue protection</li>
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * End of the destination port. Value range: 0–65535.
                     */
                    int64_t m_dportEnd;
                    bool m_dportEndHasBeenSet;

                    /**
                     * Start of the destination port. Value range: 0–65535.
                     */
                    int64_t m_dportStart;
                    bool m_dportStartHasBeenSet;

                    /**
                     * End of the source port. Value range: 0–65535.
                     */
                    int64_t m_sportEnd;
                    bool m_sportEndHasBeenSet;

                    /**
                     * Start of the source port. Value range: 0–65535.
                     */
                    int64_t m_sportStart;
                    bool m_sportStartHasBeenSet;

                    /**
                     * The protocol. Values:
<li>`tcp`: TCP protocol</li>
<li>`udp`: UDP protocol</li>
<li>`all`: All protocols</li>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Action to be executed. Values:
<li>`drop`: Discard</li>
<li>`transmit`: Allow</li>
<li>`forward`: Continue protection</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSACLRULE_H_
