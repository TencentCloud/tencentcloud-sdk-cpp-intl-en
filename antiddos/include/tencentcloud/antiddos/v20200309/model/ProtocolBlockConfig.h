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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTOCOLBLOCKCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTOCOLBLOCKCONFIG_H_

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
                * Protocol blocking configuration
                */
                class ProtocolBlockConfig : public AbstractModel
                {
                public:
                    ProtocolBlockConfig();
                    ~ProtocolBlockConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TCP blocking. Valid values: `0` (disabled), `1`(enabled).
                     * @return DropTcp TCP blocking. Valid values: `0` (disabled), `1`(enabled).
                     */
                    int64_t GetDropTcp() const;

                    /**
                     * 设置TCP blocking. Valid values: `0` (disabled), `1`(enabled).
                     * @param DropTcp TCP blocking. Valid values: `0` (disabled), `1`(enabled).
                     */
                    void SetDropTcp(const int64_t& _dropTcp);

                    /**
                     * 判断参数 DropTcp 是否已赋值
                     * @return DropTcp 是否已赋值
                     */
                    bool DropTcpHasBeenSet() const;

                    /**
                     * 获取UDP blocking. Valid values: `0` (disabled), `1`(enabled).
                     * @return DropUdp UDP blocking. Valid values: `0` (disabled), `1`(enabled).
                     */
                    int64_t GetDropUdp() const;

                    /**
                     * 设置UDP blocking. Valid values: `0` (disabled), `1`(enabled).
                     * @param DropUdp UDP blocking. Valid values: `0` (disabled), `1`(enabled).
                     */
                    void SetDropUdp(const int64_t& _dropUdp);

                    /**
                     * 判断参数 DropUdp 是否已赋值
                     * @return DropUdp 是否已赋值
                     */
                    bool DropUdpHasBeenSet() const;

                    /**
                     * 获取ICMP blocking. Valid values: `0` (disabled), `1`(enabled).
                     * @return DropIcmp ICMP blocking. Valid values: `0` (disabled), `1`(enabled).
                     */
                    int64_t GetDropIcmp() const;

                    /**
                     * 设置ICMP blocking. Valid values: `0` (disabled), `1`(enabled).
                     * @param DropIcmp ICMP blocking. Valid values: `0` (disabled), `1`(enabled).
                     */
                    void SetDropIcmp(const int64_t& _dropIcmp);

                    /**
                     * 判断参数 DropIcmp 是否已赋值
                     * @return DropIcmp 是否已赋值
                     */
                    bool DropIcmpHasBeenSet() const;

                    /**
                     * 获取Other protocol blocking. Valid values: `0` (disabled), `1`(enabled).
                     * @return DropOther Other protocol blocking. Valid values: `0` (disabled), `1`(enabled).
                     */
                    int64_t GetDropOther() const;

                    /**
                     * 设置Other protocol blocking. Valid values: `0` (disabled), `1`(enabled).
                     * @param DropOther Other protocol blocking. Valid values: `0` (disabled), `1`(enabled).
                     */
                    void SetDropOther(const int64_t& _dropOther);

                    /**
                     * 判断参数 DropOther 是否已赋值
                     * @return DropOther 是否已赋值
                     */
                    bool DropOtherHasBeenSet() const;

                    /**
                     * 获取Null connection protection. Valid values: `0` (disabled), `1` (enabled).
                     * @return CheckExceptNullConnect Null connection protection. Valid values: `0` (disabled), `1` (enabled).
                     */
                    int64_t GetCheckExceptNullConnect() const;

                    /**
                     * 设置Null connection protection. Valid values: `0` (disabled), `1` (enabled).
                     * @param CheckExceptNullConnect Null connection protection. Valid values: `0` (disabled), `1` (enabled).
                     */
                    void SetCheckExceptNullConnect(const int64_t& _checkExceptNullConnect);

                    /**
                     * 判断参数 CheckExceptNullConnect 是否已赋值
                     * @return CheckExceptNullConnect 是否已赋值
                     */
                    bool CheckExceptNullConnectHasBeenSet() const;

                private:

                    /**
                     * TCP blocking. Valid values: `0` (disabled), `1`(enabled).
                     */
                    int64_t m_dropTcp;
                    bool m_dropTcpHasBeenSet;

                    /**
                     * UDP blocking. Valid values: `0` (disabled), `1`(enabled).
                     */
                    int64_t m_dropUdp;
                    bool m_dropUdpHasBeenSet;

                    /**
                     * ICMP blocking. Valid values: `0` (disabled), `1`(enabled).
                     */
                    int64_t m_dropIcmp;
                    bool m_dropIcmpHasBeenSet;

                    /**
                     * Other protocol blocking. Valid values: `0` (disabled), `1`(enabled).
                     */
                    int64_t m_dropOther;
                    bool m_dropOtherHasBeenSet;

                    /**
                     * Null connection protection. Valid values: `0` (disabled), `1` (enabled).
                     */
                    int64_t m_checkExceptNullConnect;
                    bool m_checkExceptNullConnectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTOCOLBLOCKCONFIG_H_
