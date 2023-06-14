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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYDROPOPTION_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYDROPOPTION_H_

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
                * Disabled protocol in advanced DDoS policy
                */
                class DDoSPolicyDropOption : public AbstractModel
                {
                public:
                    DDoSPolicyDropOption();
                    ~DDoSPolicyDropOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Blocks all TCP traffic. Valid values: [0,1]
                     * @return DropTcp Blocks all TCP traffic. Valid values: [0,1]
                     * 
                     */
                    uint64_t GetDropTcp() const;

                    /**
                     * 设置Blocks all TCP traffic. Valid values: [0,1]
                     * @param _dropTcp Blocks all TCP traffic. Valid values: [0,1]
                     * 
                     */
                    void SetDropTcp(const uint64_t& _dropTcp);

                    /**
                     * 判断参数 DropTcp 是否已赋值
                     * @return DropTcp 是否已赋值
                     * 
                     */
                    bool DropTcpHasBeenSet() const;

                    /**
                     * 获取Blocks all UDP traffic. Valid values: [0,1]
                     * @return DropUdp Blocks all UDP traffic. Valid values: [0,1]
                     * 
                     */
                    uint64_t GetDropUdp() const;

                    /**
                     * 设置Blocks all UDP traffic. Valid values: [0,1]
                     * @param _dropUdp Blocks all UDP traffic. Valid values: [0,1]
                     * 
                     */
                    void SetDropUdp(const uint64_t& _dropUdp);

                    /**
                     * 判断参数 DropUdp 是否已赋值
                     * @return DropUdp 是否已赋值
                     * 
                     */
                    bool DropUdpHasBeenSet() const;

                    /**
                     * 获取Blocks all ICMP traffic. Valid values: [0,1]
                     * @return DropIcmp Blocks all ICMP traffic. Valid values: [0,1]
                     * 
                     */
                    uint64_t GetDropIcmp() const;

                    /**
                     * 设置Blocks all ICMP traffic. Valid values: [0,1]
                     * @param _dropIcmp Blocks all ICMP traffic. Valid values: [0,1]
                     * 
                     */
                    void SetDropIcmp(const uint64_t& _dropIcmp);

                    /**
                     * 判断参数 DropIcmp 是否已赋值
                     * @return DropIcmp 是否已赋值
                     * 
                     */
                    bool DropIcmpHasBeenSet() const;

                    /**
                     * 获取Blocks traffic of other protocols. Valid values: [0,1]
                     * @return DropOther Blocks traffic of other protocols. Valid values: [0,1]
                     * 
                     */
                    uint64_t GetDropOther() const;

                    /**
                     * 设置Blocks traffic of other protocols. Valid values: [0,1]
                     * @param _dropOther Blocks traffic of other protocols. Valid values: [0,1]
                     * 
                     */
                    void SetDropOther(const uint64_t& _dropOther);

                    /**
                     * 判断参数 DropOther 是否已赋值
                     * @return DropOther 是否已赋值
                     * 
                     */
                    bool DropOtherHasBeenSet() const;

                    /**
                     * 获取Rejects traffic from outside Mainland China. Valid values: [0,1]
                     * @return DropAbroad Rejects traffic from outside Mainland China. Valid values: [0,1]
                     * 
                     */
                    uint64_t GetDropAbroad() const;

                    /**
                     * 设置Rejects traffic from outside Mainland China. Valid values: [0,1]
                     * @param _dropAbroad Rejects traffic from outside Mainland China. Valid values: [0,1]
                     * 
                     */
                    void SetDropAbroad(const uint64_t& _dropAbroad);

                    /**
                     * 判断参数 DropAbroad 是否已赋值
                     * @return DropAbroad 是否已赋值
                     * 
                     */
                    bool DropAbroadHasBeenSet() const;

                    /**
                     * 获取Null session protection. Valid values: [0,1]
                     * @return CheckSyncConn Null session protection. Valid values: [0,1]
                     * 
                     */
                    uint64_t GetCheckSyncConn() const;

                    /**
                     * 设置Null session protection. Valid values: [0,1]
                     * @param _checkSyncConn Null session protection. Valid values: [0,1]
                     * 
                     */
                    void SetCheckSyncConn(const uint64_t& _checkSyncConn);

                    /**
                     * 判断参数 CheckSyncConn 是否已赋值
                     * @return CheckSyncConn 是否已赋值
                     * 
                     */
                    bool CheckSyncConnHasBeenSet() const;

                    /**
                     * 获取New connection suppression based on source IP and destination IP. Value range: [0,4294967295]
                     * @return SdNewLimit New connection suppression based on source IP and destination IP. Value range: [0,4294967295]
                     * 
                     */
                    uint64_t GetSdNewLimit() const;

                    /**
                     * 设置New connection suppression based on source IP and destination IP. Value range: [0,4294967295]
                     * @param _sdNewLimit New connection suppression based on source IP and destination IP. Value range: [0,4294967295]
                     * 
                     */
                    void SetSdNewLimit(const uint64_t& _sdNewLimit);

                    /**
                     * 判断参数 SdNewLimit 是否已赋值
                     * @return SdNewLimit 是否已赋值
                     * 
                     */
                    bool SdNewLimitHasBeenSet() const;

                    /**
                     * 获取New connection suppression based on destination IP. Value range: [0,4294967295]
                     * @return DstNewLimit New connection suppression based on destination IP. Value range: [0,4294967295]
                     * 
                     */
                    uint64_t GetDstNewLimit() const;

                    /**
                     * 设置New connection suppression based on destination IP. Value range: [0,4294967295]
                     * @param _dstNewLimit New connection suppression based on destination IP. Value range: [0,4294967295]
                     * 
                     */
                    void SetDstNewLimit(const uint64_t& _dstNewLimit);

                    /**
                     * 判断参数 DstNewLimit 是否已赋值
                     * @return DstNewLimit 是否已赋值
                     * 
                     */
                    bool DstNewLimitHasBeenSet() const;

                    /**
                     * 获取Concurrent connection suppression based on source IP and destination IP. Value range: [0,4294967295]
                     * @return SdConnLimit Concurrent connection suppression based on source IP and destination IP. Value range: [0,4294967295]
                     * 
                     */
                    uint64_t GetSdConnLimit() const;

                    /**
                     * 设置Concurrent connection suppression based on source IP and destination IP. Value range: [0,4294967295]
                     * @param _sdConnLimit Concurrent connection suppression based on source IP and destination IP. Value range: [0,4294967295]
                     * 
                     */
                    void SetSdConnLimit(const uint64_t& _sdConnLimit);

                    /**
                     * 判断参数 SdConnLimit 是否已赋值
                     * @return SdConnLimit 是否已赋值
                     * 
                     */
                    bool SdConnLimitHasBeenSet() const;

                    /**
                     * 获取Concurrent connection suppression based on destination IP. Value range: [0,4294967295]
                     * @return DstConnLimit Concurrent connection suppression based on destination IP. Value range: [0,4294967295]
                     * 
                     */
                    uint64_t GetDstConnLimit() const;

                    /**
                     * 设置Concurrent connection suppression based on destination IP. Value range: [0,4294967295]
                     * @param _dstConnLimit Concurrent connection suppression based on destination IP. Value range: [0,4294967295]
                     * 
                     */
                    void SetDstConnLimit(const uint64_t& _dstConnLimit);

                    /**
                     * 判断参数 DstConnLimit 是否已赋值
                     * @return DstConnLimit 是否已赋值
                     * 
                     */
                    bool DstConnLimitHasBeenSet() const;

                    /**
                     * 获取Threshold for triggering connection suppression. Value range: [0,4294967295]
                     * @return BadConnThreshold Threshold for triggering connection suppression. Value range: [0,4294967295]
                     * 
                     */
                    uint64_t GetBadConnThreshold() const;

                    /**
                     * 设置Threshold for triggering connection suppression. Value range: [0,4294967295]
                     * @param _badConnThreshold Threshold for triggering connection suppression. Value range: [0,4294967295]
                     * 
                     */
                    void SetBadConnThreshold(const uint64_t& _badConnThreshold);

                    /**
                     * 判断参数 BadConnThreshold 是否已赋值
                     * @return BadConnThreshold 是否已赋值
                     * 
                     */
                    bool BadConnThresholdHasBeenSet() const;

                    /**
                     * 获取Exceptional connection detection condition: null session protection status. Valid values: [0,1]
                     * @return NullConnEnable Exceptional connection detection condition: null session protection status. Valid values: [0,1]
                     * 
                     */
                    uint64_t GetNullConnEnable() const;

                    /**
                     * 设置Exceptional connection detection condition: null session protection status. Valid values: [0,1]
                     * @param _nullConnEnable Exceptional connection detection condition: null session protection status. Valid values: [0,1]
                     * 
                     */
                    void SetNullConnEnable(const uint64_t& _nullConnEnable);

                    /**
                     * 判断参数 NullConnEnable 是否已赋值
                     * @return NullConnEnable 是否已赋值
                     * 
                     */
                    bool NullConnEnableHasBeenSet() const;

                    /**
                     * 获取Exceptional connection detection condition: connection timeout. Valid values: [0,65535]
                     * @return ConnTimeout Exceptional connection detection condition: connection timeout. Valid values: [0,65535]
                     * 
                     */
                    uint64_t GetConnTimeout() const;

                    /**
                     * 设置Exceptional connection detection condition: connection timeout. Valid values: [0,65535]
                     * @param _connTimeout Exceptional connection detection condition: connection timeout. Valid values: [0,65535]
                     * 
                     */
                    void SetConnTimeout(const uint64_t& _connTimeout);

                    /**
                     * 判断参数 ConnTimeout 是否已赋值
                     * @return ConnTimeout 是否已赋值
                     * 
                     */
                    bool ConnTimeoutHasBeenSet() const;

                    /**
                     * 获取Exceptional connection detection condition: percentage of SYN out of ACK. Valid values: [0,100]
                     * @return SynRate Exceptional connection detection condition: percentage of SYN out of ACK. Valid values: [0,100]
                     * 
                     */
                    uint64_t GetSynRate() const;

                    /**
                     * 设置Exceptional connection detection condition: percentage of SYN out of ACK. Valid values: [0,100]
                     * @param _synRate Exceptional connection detection condition: percentage of SYN out of ACK. Valid values: [0,100]
                     * 
                     */
                    void SetSynRate(const uint64_t& _synRate);

                    /**
                     * 判断参数 SynRate 是否已赋值
                     * @return SynRate 是否已赋值
                     * 
                     */
                    bool SynRateHasBeenSet() const;

                    /**
                     * 获取Exceptional connection detection condition: SYN threshold. Valid values: [0,100]
                     * @return SynLimit Exceptional connection detection condition: SYN threshold. Valid values: [0,100]
                     * 
                     */
                    uint64_t GetSynLimit() const;

                    /**
                     * 设置Exceptional connection detection condition: SYN threshold. Valid values: [0,100]
                     * @param _synLimit Exceptional connection detection condition: SYN threshold. Valid values: [0,100]
                     * 
                     */
                    void SetSynLimit(const uint64_t& _synLimit);

                    /**
                     * 判断参数 SynLimit 是否已赋值
                     * @return SynLimit 是否已赋值
                     * 
                     */
                    bool SynLimitHasBeenSet() const;

                    /**
                     * 获取TCP speed limit. Value range: [0,4294967295]
                     * @return DTcpMbpsLimit TCP speed limit. Value range: [0,4294967295]
                     * 
                     */
                    uint64_t GetDTcpMbpsLimit() const;

                    /**
                     * 设置TCP speed limit. Value range: [0,4294967295]
                     * @param _dTcpMbpsLimit TCP speed limit. Value range: [0,4294967295]
                     * 
                     */
                    void SetDTcpMbpsLimit(const uint64_t& _dTcpMbpsLimit);

                    /**
                     * 判断参数 DTcpMbpsLimit 是否已赋值
                     * @return DTcpMbpsLimit 是否已赋值
                     * 
                     */
                    bool DTcpMbpsLimitHasBeenSet() const;

                    /**
                     * 获取UDP speed limit. Value range: [0,4294967295]
                     * @return DUdpMbpsLimit UDP speed limit. Value range: [0,4294967295]
                     * 
                     */
                    uint64_t GetDUdpMbpsLimit() const;

                    /**
                     * 设置UDP speed limit. Value range: [0,4294967295]
                     * @param _dUdpMbpsLimit UDP speed limit. Value range: [0,4294967295]
                     * 
                     */
                    void SetDUdpMbpsLimit(const uint64_t& _dUdpMbpsLimit);

                    /**
                     * 判断参数 DUdpMbpsLimit 是否已赋值
                     * @return DUdpMbpsLimit 是否已赋值
                     * 
                     */
                    bool DUdpMbpsLimitHasBeenSet() const;

                    /**
                     * 获取ICMP speed limit. Value range: [0,4294967295]
                     * @return DIcmpMbpsLimit ICMP speed limit. Value range: [0,4294967295]
                     * 
                     */
                    uint64_t GetDIcmpMbpsLimit() const;

                    /**
                     * 设置ICMP speed limit. Value range: [0,4294967295]
                     * @param _dIcmpMbpsLimit ICMP speed limit. Value range: [0,4294967295]
                     * 
                     */
                    void SetDIcmpMbpsLimit(const uint64_t& _dIcmpMbpsLimit);

                    /**
                     * 判断参数 DIcmpMbpsLimit 是否已赋值
                     * @return DIcmpMbpsLimit 是否已赋值
                     * 
                     */
                    bool DIcmpMbpsLimitHasBeenSet() const;

                    /**
                     * 获取Other protocol speed limit. Value range: [0,4294967295]
                     * @return DOtherMbpsLimit Other protocol speed limit. Value range: [0,4294967295]
                     * 
                     */
                    uint64_t GetDOtherMbpsLimit() const;

                    /**
                     * 设置Other protocol speed limit. Value range: [0,4294967295]
                     * @param _dOtherMbpsLimit Other protocol speed limit. Value range: [0,4294967295]
                     * 
                     */
                    void SetDOtherMbpsLimit(const uint64_t& _dOtherMbpsLimit);

                    /**
                     * 判断参数 DOtherMbpsLimit 是否已赋值
                     * @return DOtherMbpsLimit 是否已赋值
                     * 
                     */
                    bool DOtherMbpsLimitHasBeenSet() const;

                private:

                    /**
                     * Blocks all TCP traffic. Valid values: [0,1]
                     */
                    uint64_t m_dropTcp;
                    bool m_dropTcpHasBeenSet;

                    /**
                     * Blocks all UDP traffic. Valid values: [0,1]
                     */
                    uint64_t m_dropUdp;
                    bool m_dropUdpHasBeenSet;

                    /**
                     * Blocks all ICMP traffic. Valid values: [0,1]
                     */
                    uint64_t m_dropIcmp;
                    bool m_dropIcmpHasBeenSet;

                    /**
                     * Blocks traffic of other protocols. Valid values: [0,1]
                     */
                    uint64_t m_dropOther;
                    bool m_dropOtherHasBeenSet;

                    /**
                     * Rejects traffic from outside Mainland China. Valid values: [0,1]
                     */
                    uint64_t m_dropAbroad;
                    bool m_dropAbroadHasBeenSet;

                    /**
                     * Null session protection. Valid values: [0,1]
                     */
                    uint64_t m_checkSyncConn;
                    bool m_checkSyncConnHasBeenSet;

                    /**
                     * New connection suppression based on source IP and destination IP. Value range: [0,4294967295]
                     */
                    uint64_t m_sdNewLimit;
                    bool m_sdNewLimitHasBeenSet;

                    /**
                     * New connection suppression based on destination IP. Value range: [0,4294967295]
                     */
                    uint64_t m_dstNewLimit;
                    bool m_dstNewLimitHasBeenSet;

                    /**
                     * Concurrent connection suppression based on source IP and destination IP. Value range: [0,4294967295]
                     */
                    uint64_t m_sdConnLimit;
                    bool m_sdConnLimitHasBeenSet;

                    /**
                     * Concurrent connection suppression based on destination IP. Value range: [0,4294967295]
                     */
                    uint64_t m_dstConnLimit;
                    bool m_dstConnLimitHasBeenSet;

                    /**
                     * Threshold for triggering connection suppression. Value range: [0,4294967295]
                     */
                    uint64_t m_badConnThreshold;
                    bool m_badConnThresholdHasBeenSet;

                    /**
                     * Exceptional connection detection condition: null session protection status. Valid values: [0,1]
                     */
                    uint64_t m_nullConnEnable;
                    bool m_nullConnEnableHasBeenSet;

                    /**
                     * Exceptional connection detection condition: connection timeout. Valid values: [0,65535]
                     */
                    uint64_t m_connTimeout;
                    bool m_connTimeoutHasBeenSet;

                    /**
                     * Exceptional connection detection condition: percentage of SYN out of ACK. Valid values: [0,100]
                     */
                    uint64_t m_synRate;
                    bool m_synRateHasBeenSet;

                    /**
                     * Exceptional connection detection condition: SYN threshold. Valid values: [0,100]
                     */
                    uint64_t m_synLimit;
                    bool m_synLimitHasBeenSet;

                    /**
                     * TCP speed limit. Value range: [0,4294967295]
                     */
                    uint64_t m_dTcpMbpsLimit;
                    bool m_dTcpMbpsLimitHasBeenSet;

                    /**
                     * UDP speed limit. Value range: [0,4294967295]
                     */
                    uint64_t m_dUdpMbpsLimit;
                    bool m_dUdpMbpsLimitHasBeenSet;

                    /**
                     * ICMP speed limit. Value range: [0,4294967295]
                     */
                    uint64_t m_dIcmpMbpsLimit;
                    bool m_dIcmpMbpsLimitHasBeenSet;

                    /**
                     * Other protocol speed limit. Value range: [0,4294967295]
                     */
                    uint64_t m_dOtherMbpsLimit;
                    bool m_dOtherMbpsLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICYDROPOPTION_H_
