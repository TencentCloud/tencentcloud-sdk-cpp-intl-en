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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSUSERALLOWBLOCKIP_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSUSERALLOWBLOCKIP_H_

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
                * IP Allowlist/Blocklist for DDoS protection
                */
                class DDoSUserAllowBlockIP : public AbstractModel
                {
                public:
                    DDoSUserAllowBlockIP();
                    ~DDoSUserAllowBlockIP() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start IP address in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Ip Start IP address in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Start IP address in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Ip Start IP address in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Start mask in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Mask Start mask in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetMask() const;

                    /**
                     * 设置Start mask in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Mask Start mask in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetMask(const int64_t& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     */
                    bool MaskHasBeenSet() const;

                    /**
                     * 获取IP type. `block`: IP blocklist; `allow`: IP allowlist.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Type IP type. `block`: IP blocklist; `allow`: IP allowlist.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetType() const;

                    /**
                     * 设置IP type. `block`: IP blocklist; `allow`: IP allowlist.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Type IP type. `block`: IP blocklist; `allow`: IP allowlist.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Timestamp
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UpdateTime Timestamp
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Timestamp
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param UpdateTime Timestamp
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取End IP address in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Ip2 End IP address in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetIp2() const;

                    /**
                     * 设置End IP address in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Ip2 End IP address in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetIp2(const std::string& _ip2);

                    /**
                     * 判断参数 Ip2 是否已赋值
                     * @return Ip2 是否已赋值
                     */
                    bool Ip2HasBeenSet() const;

                    /**
                     * 获取End mask in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Mask2 End mask in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetMask2() const;

                    /**
                     * 设置End mask in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Mask2 End mask in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetMask2(const int64_t& _mask2);

                    /**
                     * 判断参数 Mask2 是否已赋值
                     * @return Mask2 是否已赋值
                     */
                    bool Mask2HasBeenSet() const;

                private:

                    /**
                     * Start IP address in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Start mask in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_mask;
                    bool m_maskHasBeenSet;

                    /**
                     * IP type. `block`: IP blocklist; `allow`: IP allowlist.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Timestamp
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * End IP address in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ip2;
                    bool m_ip2HasBeenSet;

                    /**
                     * End mask in a specific range
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_mask2;
                    bool m_mask2HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSUSERALLOWBLOCKIP_H_
