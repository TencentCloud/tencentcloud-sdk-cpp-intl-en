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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_WATERPRINTPOLICY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_WATERPRINTPOLICY_H_

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
                * Watermarking policy parameter
                */
                class WaterPrintPolicy : public AbstractModel
                {
                public:
                    WaterPrintPolicy();
                    ~WaterPrintPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TCP port range, such as ["2000-3000","3500-4000"]
                     * @return TcpPortList TCP port range, such as ["2000-3000","3500-4000"]
                     * 
                     */
                    std::vector<std::string> GetTcpPortList() const;

                    /**
                     * 设置TCP port range, such as ["2000-3000","3500-4000"]
                     * @param _tcpPortList TCP port range, such as ["2000-3000","3500-4000"]
                     * 
                     */
                    void SetTcpPortList(const std::vector<std::string>& _tcpPortList);

                    /**
                     * 判断参数 TcpPortList 是否已赋值
                     * @return TcpPortList 是否已赋值
                     * 
                     */
                    bool TcpPortListHasBeenSet() const;

                    /**
                     * 获取UDP port range, such as ["2000-3000","3500-4000"]
                     * @return UdpPortList UDP port range, such as ["2000-3000","3500-4000"]
                     * 
                     */
                    std::vector<std::string> GetUdpPortList() const;

                    /**
                     * 设置UDP port range, such as ["2000-3000","3500-4000"]
                     * @param _udpPortList UDP port range, such as ["2000-3000","3500-4000"]
                     * 
                     */
                    void SetUdpPortList(const std::vector<std::string>& _udpPortList);

                    /**
                     * 判断参数 UdpPortList 是否已赋值
                     * @return UdpPortList 是否已赋值
                     * 
                     */
                    bool UdpPortListHasBeenSet() const;

                    /**
                     * 获取Watermark offset. Value range: [0, 100)
                     * @return Offset Watermark offset. Value range: [0, 100)
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Watermark offset. Value range: [0, 100)
                     * @param _offset Watermark offset. Value range: [0, 100)
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Whether to automatically remove. Valid values: [0 (no), 1 (yes)]
                     * @return RemoveSwitch Whether to automatically remove. Valid values: [0 (no), 1 (yes)]
                     * 
                     */
                    uint64_t GetRemoveSwitch() const;

                    /**
                     * 设置Whether to automatically remove. Valid values: [0 (no), 1 (yes)]
                     * @param _removeSwitch Whether to automatically remove. Valid values: [0 (no), 1 (yes)]
                     * 
                     */
                    void SetRemoveSwitch(const uint64_t& _removeSwitch);

                    /**
                     * 判断参数 RemoveSwitch 是否已赋值
                     * @return RemoveSwitch 是否已赋值
                     * 
                     */
                    bool RemoveSwitchHasBeenSet() const;

                    /**
                     * 获取Whether it is enabled. Valid values: [0 (no), 1 (yes)]
                     * @return OpenStatus Whether it is enabled. Valid values: [0 (no), 1 (yes)]
                     * 
                     */
                    uint64_t GetOpenStatus() const;

                    /**
                     * 设置Whether it is enabled. Valid values: [0 (no), 1 (yes)]
                     * @param _openStatus Whether it is enabled. Valid values: [0 (no), 1 (yes)]
                     * 
                     */
                    void SetOpenStatus(const uint64_t& _openStatus);

                    /**
                     * 判断参数 OpenStatus 是否已赋值
                     * @return OpenStatus 是否已赋值
                     * 
                     */
                    bool OpenStatusHasBeenSet() const;

                private:

                    /**
                     * TCP port range, such as ["2000-3000","3500-4000"]
                     */
                    std::vector<std::string> m_tcpPortList;
                    bool m_tcpPortListHasBeenSet;

                    /**
                     * UDP port range, such as ["2000-3000","3500-4000"]
                     */
                    std::vector<std::string> m_udpPortList;
                    bool m_udpPortListHasBeenSet;

                    /**
                     * Watermark offset. Value range: [0, 100)
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Whether to automatically remove. Valid values: [0 (no), 1 (yes)]
                     */
                    uint64_t m_removeSwitch;
                    bool m_removeSwitchHasBeenSet;

                    /**
                     * Whether it is enabled. Valid values: [0 (no), 1 (yes)]
                     */
                    uint64_t m_openStatus;
                    bool m_openStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_WATERPRINTPOLICY_H_
