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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSANTIPLY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSANTIPLY_H_

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
                * DDoS protection against protocol and connection attacks
                */
                class DDoSAntiPly : public AbstractModel
                {
                public:
                    DDoSAntiPly();
                    ~DDoSAntiPly() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable TCP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @return DropTcp Whether to enable TCP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    std::string GetDropTcp() const;

                    /**
                     * 设置Whether to enable TCP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @param DropTcp Whether to enable TCP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    void SetDropTcp(const std::string& _dropTcp);

                    /**
                     * 判断参数 DropTcp 是否已赋值
                     * @return DropTcp 是否已赋值
                     */
                    bool DropTcpHasBeenSet() const;

                    /**
                     * 获取Whether to enable UDP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @return DropUdp Whether to enable UDP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    std::string GetDropUdp() const;

                    /**
                     * 设置Whether to enable UDP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @param DropUdp Whether to enable UDP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    void SetDropUdp(const std::string& _dropUdp);

                    /**
                     * 判断参数 DropUdp 是否已赋值
                     * @return DropUdp 是否已赋值
                     */
                    bool DropUdpHasBeenSet() const;

                    /**
                     * 获取Whether to enable ICMP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @return DropIcmp Whether to enable ICMP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    std::string GetDropIcmp() const;

                    /**
                     * 设置Whether to enable ICMP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @param DropIcmp Whether to enable ICMP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    void SetDropIcmp(const std::string& _dropIcmp);

                    /**
                     * 判断参数 DropIcmp 是否已赋值
                     * @return DropIcmp 是否已赋值
                     */
                    bool DropIcmpHasBeenSet() const;

                    /**
                     * 获取Whether to enable blocking of other protocols. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @return DropOther Whether to enable blocking of other protocols. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    std::string GetDropOther() const;

                    /**
                     * 设置Whether to enable blocking of other protocols. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @param DropOther Whether to enable blocking of other protocols. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    void SetDropOther(const std::string& _dropOther);

                    /**
                     * 判断参数 DropOther 是否已赋值
                     * @return DropOther 是否已赋值
                     */
                    bool DropOtherHasBeenSet() const;

                    /**
                     * 获取Maximum number of new connections to the origin per second. Value range: 0–4294967295.
                     * @return SourceCreateLimit Maximum number of new connections to the origin per second. Value range: 0–4294967295.
                     */
                    int64_t GetSourceCreateLimit() const;

                    /**
                     * 设置Maximum number of new connections to the origin per second. Value range: 0–4294967295.
                     * @param SourceCreateLimit Maximum number of new connections to the origin per second. Value range: 0–4294967295.
                     */
                    void SetSourceCreateLimit(const int64_t& _sourceCreateLimit);

                    /**
                     * 判断参数 SourceCreateLimit 是否已赋值
                     * @return SourceCreateLimit 是否已赋值
                     */
                    bool SourceCreateLimitHasBeenSet() const;

                    /**
                     * 获取Maximum number of concurrent connections to the origin. Value range: 0–4294967295.
                     * @return SourceConnectLimit Maximum number of concurrent connections to the origin. Value range: 0–4294967295.
                     */
                    int64_t GetSourceConnectLimit() const;

                    /**
                     * 设置Maximum number of concurrent connections to the origin. Value range: 0–4294967295.
                     * @param SourceConnectLimit Maximum number of concurrent connections to the origin. Value range: 0–4294967295.
                     */
                    void SetSourceConnectLimit(const int64_t& _sourceConnectLimit);

                    /**
                     * 判断参数 SourceConnectLimit 是否已赋值
                     * @return SourceConnectLimit 是否已赋值
                     */
                    bool SourceConnectLimitHasBeenSet() const;

                    /**
                     * 获取Maximum number of new connections to the destination port per second. Value range: 0–4294967295.
                     * @return DestinationCreateLimit Maximum number of new connections to the destination port per second. Value range: 0–4294967295.
                     */
                    int64_t GetDestinationCreateLimit() const;

                    /**
                     * 设置Maximum number of new connections to the destination port per second. Value range: 0–4294967295.
                     * @param DestinationCreateLimit Maximum number of new connections to the destination port per second. Value range: 0–4294967295.
                     */
                    void SetDestinationCreateLimit(const int64_t& _destinationCreateLimit);

                    /**
                     * 判断参数 DestinationCreateLimit 是否已赋值
                     * @return DestinationCreateLimit 是否已赋值
                     */
                    bool DestinationCreateLimitHasBeenSet() const;

                    /**
                     * 获取Maximum number of concurrent connections to the destination port. Value range: 0–4294967295.
                     * @return DestinationConnectLimit Maximum number of concurrent connections to the destination port. Value range: 0–4294967295.
                     */
                    int64_t GetDestinationConnectLimit() const;

                    /**
                     * 设置Maximum number of concurrent connections to the destination port. Value range: 0–4294967295.
                     * @param DestinationConnectLimit Maximum number of concurrent connections to the destination port. Value range: 0–4294967295.
                     */
                    void SetDestinationConnectLimit(const int64_t& _destinationConnectLimit);

                    /**
                     * 判断参数 DestinationConnectLimit 是否已赋值
                     * @return DestinationConnectLimit 是否已赋值
                     */
                    bool DestinationConnectLimitHasBeenSet() const;

                    /**
                     * 获取Maximum number of abnormal connections per second. Value range: 0–4294967295.
                     * @return AbnormalConnectNum Maximum number of abnormal connections per second. Value range: 0–4294967295.
                     */
                    int64_t GetAbnormalConnectNum() const;

                    /**
                     * 设置Maximum number of abnormal connections per second. Value range: 0–4294967295.
                     * @param AbnormalConnectNum Maximum number of abnormal connections per second. Value range: 0–4294967295.
                     */
                    void SetAbnormalConnectNum(const int64_t& _abnormalConnectNum);

                    /**
                     * 判断参数 AbnormalConnectNum 是否已赋值
                     * @return AbnormalConnectNum 是否已赋值
                     */
                    bool AbnormalConnectNumHasBeenSet() const;

                    /**
                     * 获取Maximum percentage of abnormal SYN packets. Value range: 0–100.
                     * @return AbnormalSynRatio Maximum percentage of abnormal SYN packets. Value range: 0–100.
                     */
                    int64_t GetAbnormalSynRatio() const;

                    /**
                     * 设置Maximum percentage of abnormal SYN packets. Value range: 0–100.
                     * @param AbnormalSynRatio Maximum percentage of abnormal SYN packets. Value range: 0–100.
                     */
                    void SetAbnormalSynRatio(const int64_t& _abnormalSynRatio);

                    /**
                     * 判断参数 AbnormalSynRatio 是否已赋值
                     * @return AbnormalSynRatio 是否已赋值
                     */
                    bool AbnormalSynRatioHasBeenSet() const;

                    /**
                     * 获取Maximum number of abnormal SYN packets. Value range: 0–65535.
                     * @return AbnormalSynNum Maximum number of abnormal SYN packets. Value range: 0–65535.
                     */
                    int64_t GetAbnormalSynNum() const;

                    /**
                     * 设置Maximum number of abnormal SYN packets. Value range: 0–65535.
                     * @param AbnormalSynNum Maximum number of abnormal SYN packets. Value range: 0–65535.
                     */
                    void SetAbnormalSynNum(const int64_t& _abnormalSynNum);

                    /**
                     * 判断参数 AbnormalSynNum 是否已赋值
                     * @return AbnormalSynNum 是否已赋值
                     */
                    bool AbnormalSynNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of detected connections timed out per second. Value range: 0–65535.
                     * @return ConnectTimeout Maximum number of detected connections timed out per second. Value range: 0–65535.
                     */
                    int64_t GetConnectTimeout() const;

                    /**
                     * 设置Maximum number of detected connections timed out per second. Value range: 0–65535.
                     * @param ConnectTimeout Maximum number of detected connections timed out per second. Value range: 0–65535.
                     */
                    void SetConnectTimeout(const int64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取Whether to enable null session protection. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @return EmptyConnectProtect Whether to enable null session protection. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    std::string GetEmptyConnectProtect() const;

                    /**
                     * 设置Whether to enable null session protection. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @param EmptyConnectProtect Whether to enable null session protection. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    void SetEmptyConnectProtect(const std::string& _emptyConnectProtect);

                    /**
                     * 判断参数 EmptyConnectProtect 是否已赋值
                     * @return EmptyConnectProtect 是否已赋值
                     */
                    bool EmptyConnectProtectHasBeenSet() const;

                    /**
                     * 获取Whether to enable UDP fragmentation. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @return UdpShard Whether to enable UDP fragmentation. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    std::string GetUdpShard() const;

                    /**
                     * 设置Whether to enable UDP fragmentation. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     * @param UdpShard Whether to enable UDP fragmentation. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    void SetUdpShard(const std::string& _udpShard);

                    /**
                     * 判断参数 UdpShard 是否已赋值
                     * @return UdpShard 是否已赋值
                     */
                    bool UdpShardHasBeenSet() const;

                private:

                    /**
                     * Whether to enable TCP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    std::string m_dropTcp;
                    bool m_dropTcpHasBeenSet;

                    /**
                     * Whether to enable UDP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    std::string m_dropUdp;
                    bool m_dropUdpHasBeenSet;

                    /**
                     * Whether to enable ICMP protocol blocking. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    std::string m_dropIcmp;
                    bool m_dropIcmpHasBeenSet;

                    /**
                     * Whether to enable blocking of other protocols. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    std::string m_dropOther;
                    bool m_dropOtherHasBeenSet;

                    /**
                     * Maximum number of new connections to the origin per second. Value range: 0–4294967295.
                     */
                    int64_t m_sourceCreateLimit;
                    bool m_sourceCreateLimitHasBeenSet;

                    /**
                     * Maximum number of concurrent connections to the origin. Value range: 0–4294967295.
                     */
                    int64_t m_sourceConnectLimit;
                    bool m_sourceConnectLimitHasBeenSet;

                    /**
                     * Maximum number of new connections to the destination port per second. Value range: 0–4294967295.
                     */
                    int64_t m_destinationCreateLimit;
                    bool m_destinationCreateLimitHasBeenSet;

                    /**
                     * Maximum number of concurrent connections to the destination port. Value range: 0–4294967295.
                     */
                    int64_t m_destinationConnectLimit;
                    bool m_destinationConnectLimitHasBeenSet;

                    /**
                     * Maximum number of abnormal connections per second. Value range: 0–4294967295.
                     */
                    int64_t m_abnormalConnectNum;
                    bool m_abnormalConnectNumHasBeenSet;

                    /**
                     * Maximum percentage of abnormal SYN packets. Value range: 0–100.
                     */
                    int64_t m_abnormalSynRatio;
                    bool m_abnormalSynRatioHasBeenSet;

                    /**
                     * Maximum number of abnormal SYN packets. Value range: 0–65535.
                     */
                    int64_t m_abnormalSynNum;
                    bool m_abnormalSynNumHasBeenSet;

                    /**
                     * Maximum number of detected connections timed out per second. Value range: 0–65535.
                     */
                    int64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * Whether to enable null session protection. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    std::string m_emptyConnectProtect;
                    bool m_emptyConnectProtectHasBeenSet;

                    /**
                     * Whether to enable UDP fragmentation. Values:
<li>`off`: Disable</li>
<li>`on`: Enable</li>
                     */
                    std::string m_udpShard;
                    bool m_udpShardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSANTIPLY_H_
