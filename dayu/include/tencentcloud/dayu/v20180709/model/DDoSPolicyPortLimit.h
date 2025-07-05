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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYPORTLIMIT_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYPORTLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Disabled port in advanced DDoS policy
                */
                class DDoSPolicyPortLimit : public AbstractModel
                {
                public:
                    DDoSPolicyPortLimit();
                    ~DDoSPolicyPortLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protocol. Valid values: [tcp, udp, all]
                     * @return Protocol Protocol. Valid values: [tcp, udp, all]
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Valid values: [tcp, udp, all]
                     * @param _protocol Protocol. Valid values: [tcp, udp, all]
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
                     * 获取Start destination port. Value range: [0,65535]
                     * @return DPortStart Start destination port. Value range: [0,65535]
                     * 
                     */
                    uint64_t GetDPortStart() const;

                    /**
                     * 设置Start destination port. Value range: [0,65535]
                     * @param _dPortStart Start destination port. Value range: [0,65535]
                     * 
                     */
                    void SetDPortStart(const uint64_t& _dPortStart);

                    /**
                     * 判断参数 DPortStart 是否已赋值
                     * @return DPortStart 是否已赋值
                     * 
                     */
                    bool DPortStartHasBeenSet() const;

                    /**
                     * 获取End destination port, which must be greater than or equal to the start destination port. Value range: [0,65535]
                     * @return DPortEnd End destination port, which must be greater than or equal to the start destination port. Value range: [0,65535]
                     * 
                     */
                    uint64_t GetDPortEnd() const;

                    /**
                     * 设置End destination port, which must be greater than or equal to the start destination port. Value range: [0,65535]
                     * @param _dPortEnd End destination port, which must be greater than or equal to the start destination port. Value range: [0,65535]
                     * 
                     */
                    void SetDPortEnd(const uint64_t& _dPortEnd);

                    /**
                     * 判断参数 DPortEnd 是否已赋值
                     * @return DPortEnd 是否已赋值
                     * 
                     */
                    bool DPortEndHasBeenSet() const;

                    /**
                     * 获取Start source port. Value range: [0,65535]
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SPortStart Start source port. Value range: [0,65535]
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSPortStart() const;

                    /**
                     * 设置Start source port. Value range: [0,65535]
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sPortStart Start source port. Value range: [0,65535]
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSPortStart(const uint64_t& _sPortStart);

                    /**
                     * 判断参数 SPortStart 是否已赋值
                     * @return SPortStart 是否已赋值
                     * 
                     */
                    bool SPortStartHasBeenSet() const;

                    /**
                     * 获取End source port, which must be greater than or equal to the start source port. Value range: [0,65535]
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SPortEnd End source port, which must be greater than or equal to the start source port. Value range: [0,65535]
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSPortEnd() const;

                    /**
                     * 设置End source port, which must be greater than or equal to the start source port. Value range: [0,65535]
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sPortEnd End source port, which must be greater than or equal to the start source port. Value range: [0,65535]
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSPortEnd(const uint64_t& _sPortEnd);

                    /**
                     * 判断参数 SPortEnd 是否已赋值
                     * @return SPortEnd 是否已赋值
                     * 
                     */
                    bool SPortEndHasBeenSet() const;

                    /**
                     * 获取Action to be executed. Valid values: [drop (discard) , transmit (forward)]
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Action Action to be executed. Valid values: [drop (discard) , transmit (forward)]
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action to be executed. Valid values: [drop (discard) , transmit (forward)]
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _action Action to be executed. Valid values: [drop (discard) , transmit (forward)]
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Type of port to be disabled. Valid values: [0 (destination port range), 1 (source port range), 2 (destination port range and source port range)]
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Kind Type of port to be disabled. Valid values: [0 (destination port range), 1 (source port range), 2 (destination port range and source port range)]
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetKind() const;

                    /**
                     * 设置Type of port to be disabled. Valid values: [0 (destination port range), 1 (source port range), 2 (destination port range and source port range)]
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _kind Type of port to be disabled. Valid values: [0 (destination port range), 1 (source port range), 2 (destination port range and source port range)]
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKind(const uint64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                private:

                    /**
                     * Protocol. Valid values: [tcp, udp, all]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Start destination port. Value range: [0,65535]
                     */
                    uint64_t m_dPortStart;
                    bool m_dPortStartHasBeenSet;

                    /**
                     * End destination port, which must be greater than or equal to the start destination port. Value range: [0,65535]
                     */
                    uint64_t m_dPortEnd;
                    bool m_dPortEndHasBeenSet;

                    /**
                     * Start source port. Value range: [0,65535]
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_sPortStart;
                    bool m_sPortStartHasBeenSet;

                    /**
                     * End source port, which must be greater than or equal to the start source port. Value range: [0,65535]
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_sPortEnd;
                    bool m_sPortEndHasBeenSet;

                    /**
                     * Action to be executed. Valid values: [drop (discard) , transmit (forward)]
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Type of port to be disabled. Valid values: [0 (destination port range), 1 (source port range), 2 (destination port range and source port range)]
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYPORTLIMIT_H_
