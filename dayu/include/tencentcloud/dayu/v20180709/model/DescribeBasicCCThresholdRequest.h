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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBASICCCTHRESHOLDREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBASICCCTHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeBasicCCThreshold request structure.
                */
                class DescribeBasicCCThresholdRequest : public AbstractModel
                {
                public:
                    DescribeBasicCCThresholdRequest();
                    ~DescribeBasicCCThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queried IP address, such as 1.1.1.1
                     * @return BasicIp Queried IP address, such as 1.1.1.1
                     * 
                     */
                    std::string GetBasicIp() const;

                    /**
                     * 设置Queried IP address, such as 1.1.1.1
                     * @param _basicIp Queried IP address, such as 1.1.1.1
                     * 
                     */
                    void SetBasicIp(const std::string& _basicIp);

                    /**
                     * 判断参数 BasicIp 是否已赋值
                     * @return BasicIp 是否已赋值
                     * 
                     */
                    bool BasicIpHasBeenSet() const;

                    /**
                     * 获取IP region. Valid values: region abbreviations such as gz, bj, sh, and hk
                     * @return BasicRegion IP region. Valid values: region abbreviations such as gz, bj, sh, and hk
                     * 
                     */
                    std::string GetBasicRegion() const;

                    /**
                     * 设置IP region. Valid values: region abbreviations such as gz, bj, sh, and hk
                     * @param _basicRegion IP region. Valid values: region abbreviations such as gz, bj, sh, and hk
                     * 
                     */
                    void SetBasicRegion(const std::string& _basicRegion);

                    /**
                     * 判断参数 BasicRegion 是否已赋值
                     * @return BasicRegion 是否已赋值
                     * 
                     */
                    bool BasicRegionHasBeenSet() const;

                    /**
                     * 获取Zone type. Valid values: public (public cloud zone), bm (BM zone), nat (NAT server zone), channel (internet channel).
                     * @return BasicBizType Zone type. Valid values: public (public cloud zone), bm (BM zone), nat (NAT server zone), channel (internet channel).
                     * 
                     */
                    std::string GetBasicBizType() const;

                    /**
                     * 设置Zone type. Valid values: public (public cloud zone), bm (BM zone), nat (NAT server zone), channel (internet channel).
                     * @param _basicBizType Zone type. Valid values: public (public cloud zone), bm (BM zone), nat (NAT server zone), channel (internet channel).
                     * 
                     */
                    void SetBasicBizType(const std::string& _basicBizType);

                    /**
                     * 判断参数 BasicBizType 是否已赋值
                     * @return BasicBizType 是否已赋值
                     * 
                     */
                    bool BasicBizTypeHasBeenSet() const;

                    /**
                     * 获取Device type. Valid values: cvm (CVM), clb (public CLB), lb (BM CLB), nat (NAT server), channel (internet channel).
                     * @return BasicDeviceType Device type. Valid values: cvm (CVM), clb (public CLB), lb (BM CLB), nat (NAT server), channel (internet channel).
                     * 
                     */
                    std::string GetBasicDeviceType() const;

                    /**
                     * 设置Device type. Valid values: cvm (CVM), clb (public CLB), lb (BM CLB), nat (NAT server), channel (internet channel).
                     * @param _basicDeviceType Device type. Valid values: cvm (CVM), clb (public CLB), lb (BM CLB), nat (NAT server), channel (internet channel).
                     * 
                     */
                    void SetBasicDeviceType(const std::string& _basicDeviceType);

                    /**
                     * 判断参数 BasicDeviceType 是否已赋值
                     * @return BasicDeviceType 是否已赋值
                     * 
                     */
                    bool BasicDeviceTypeHasBeenSet() const;

                    /**
                     * 获取IPInstance Nat gateway, which is optional. (If the device type to be queried is a NAT server, this parameter is required, which can be obtained through the NAT resource query API)
                     * @return BasicIpInstance IPInstance Nat gateway, which is optional. (If the device type to be queried is a NAT server, this parameter is required, which can be obtained through the NAT resource query API)
                     * 
                     */
                    std::string GetBasicIpInstance() const;

                    /**
                     * 设置IPInstance Nat gateway, which is optional. (If the device type to be queried is a NAT server, this parameter is required, which can be obtained through the NAT resource query API)
                     * @param _basicIpInstance IPInstance Nat gateway, which is optional. (If the device type to be queried is a NAT server, this parameter is required, which can be obtained through the NAT resource query API)
                     * 
                     */
                    void SetBasicIpInstance(const std::string& _basicIpInstance);

                    /**
                     * 判断参数 BasicIpInstance 是否已赋值
                     * @return BasicIpInstance 是否已赋值
                     * 
                     */
                    bool BasicIpInstanceHasBeenSet() const;

                    /**
                     * 获取ISP line, which is optional. (If the device type to be queried is a NAT server, this parameter should be 5)
                     * @return BasicIspCode ISP line, which is optional. (If the device type to be queried is a NAT server, this parameter should be 5)
                     * 
                     */
                    uint64_t GetBasicIspCode() const;

                    /**
                     * 设置ISP line, which is optional. (If the device type to be queried is a NAT server, this parameter should be 5)
                     * @param _basicIspCode ISP line, which is optional. (If the device type to be queried is a NAT server, this parameter should be 5)
                     * 
                     */
                    void SetBasicIspCode(const uint64_t& _basicIspCode);

                    /**
                     * 判断参数 BasicIspCode 是否已赋值
                     * @return BasicIspCode 是否已赋值
                     * 
                     */
                    bool BasicIspCodeHasBeenSet() const;

                private:

                    /**
                     * Queried IP address, such as 1.1.1.1
                     */
                    std::string m_basicIp;
                    bool m_basicIpHasBeenSet;

                    /**
                     * IP region. Valid values: region abbreviations such as gz, bj, sh, and hk
                     */
                    std::string m_basicRegion;
                    bool m_basicRegionHasBeenSet;

                    /**
                     * Zone type. Valid values: public (public cloud zone), bm (BM zone), nat (NAT server zone), channel (internet channel).
                     */
                    std::string m_basicBizType;
                    bool m_basicBizTypeHasBeenSet;

                    /**
                     * Device type. Valid values: cvm (CVM), clb (public CLB), lb (BM CLB), nat (NAT server), channel (internet channel).
                     */
                    std::string m_basicDeviceType;
                    bool m_basicDeviceTypeHasBeenSet;

                    /**
                     * IPInstance Nat gateway, which is optional. (If the device type to be queried is a NAT server, this parameter is required, which can be obtained through the NAT resource query API)
                     */
                    std::string m_basicIpInstance;
                    bool m_basicIpInstanceHasBeenSet;

                    /**
                     * ISP line, which is optional. (If the device type to be queried is a NAT server, this parameter should be 5)
                     */
                    uint64_t m_basicIspCode;
                    bool m_basicIspCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBASICCCTHRESHOLDREQUEST_H_
