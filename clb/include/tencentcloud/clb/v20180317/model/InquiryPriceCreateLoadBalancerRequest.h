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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_INQUIRYPRICECREATELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_INQUIRYPRICECREATELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/LBChargePrepaid.h>
#include <tencentcloud/clb/v20180317/model/InternetAccessible.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateLoadBalancer request structure.
                */
                class InquiryPriceCreateLoadBalancerRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateLoadBalancerRequest();
                    ~InquiryPriceCreateLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Network type of the CLB to query. `OPEN`: Public network; `INTERNAL`: Private network is intranet type
                     * @return LoadBalancerType Network type of the CLB to query. `OPEN`: Public network; `INTERNAL`: Private network is intranet type
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置Network type of the CLB to query. `OPEN`: Public network; `INTERNAL`: Private network is intranet type
                     * @param _loadBalancerType Network type of the CLB to query. `OPEN`: Public network; `INTERNAL`: Private network is intranet type
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取The billing mode to query. `POSTPAID`:Pay as you go
                     * @return LoadBalancerChargeType The billing mode to query. `POSTPAID`:Pay as you go
                     * 
                     */
                    std::string GetLoadBalancerChargeType() const;

                    /**
                     * 设置The billing mode to query. `POSTPAID`:Pay as you go
                     * @param _loadBalancerChargeType The billing mode to query. `POSTPAID`:Pay as you go
                     * 
                     */
                    void SetLoadBalancerChargeType(const std::string& _loadBalancerChargeType);

                    /**
                     * 判断参数 LoadBalancerChargeType 是否已赋值
                     * @return LoadBalancerChargeType 是否已赋值
                     * 
                     */
                    bool LoadBalancerChargeTypeHasBeenSet() const;

                    /**
                     * 获取Reserved field
                     * @return LoadBalancerChargePrepaid Reserved field
                     * 
                     */
                    LBChargePrepaid GetLoadBalancerChargePrepaid() const;

                    /**
                     * 设置Reserved field
                     * @param _loadBalancerChargePrepaid Reserved field
                     * 
                     */
                    void SetLoadBalancerChargePrepaid(const LBChargePrepaid& _loadBalancerChargePrepaid);

                    /**
                     * 判断参数 LoadBalancerChargePrepaid 是否已赋值
                     * @return LoadBalancerChargePrepaid 是否已赋值
                     * 
                     */
                    bool LoadBalancerChargePrepaidHasBeenSet() const;

                    /**
                     * 获取The network billing mode to query 
                     * @return InternetAccessible The network billing mode to query 
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置The network billing mode to query 
                     * @param _internetAccessible The network billing mode to query 
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取Number of CLB instances to query. Default value: 1.
                     * @return GoodsNum Number of CLB instances to query. Default value: 1.
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置Number of CLB instances to query. Default value: 1.
                     * @param _goodsNum Number of CLB instances to query. Default value: 1.
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取Availability zone in the format of "ap-guangzhou-1"
                     * @return ZoneId Availability zone in the format of "ap-guangzhou-1"
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Availability zone in the format of "ap-guangzhou-1"
                     * @param _zoneId Availability zone in the format of "ap-guangzhou-1"
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Specification of the LCU-supported instance, which is input to query the monthly subscription price. Valid values: <li>clb.c2.medium: Standard</li><li>clb.c3.small: Advanced 1</li><li>clb.c3.medium: Advanced 2</li><li>clb.c4.small: Super Large 1</li><li>clb.c4.medium: Super Large 2</li><li>clb.c4.large: Super Large 3</li><li>clb.c4.xlarge: Super Large 4</li>SLA is input to query the pay-as-you-go price.
                     * @return SlaType Specification of the LCU-supported instance, which is input to query the monthly subscription price. Valid values: <li>clb.c2.medium: Standard</li><li>clb.c3.small: Advanced 1</li><li>clb.c3.medium: Advanced 2</li><li>clb.c4.small: Super Large 1</li><li>clb.c4.medium: Super Large 2</li><li>clb.c4.large: Super Large 3</li><li>clb.c4.xlarge: Super Large 4</li>SLA is input to query the pay-as-you-go price.
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置Specification of the LCU-supported instance, which is input to query the monthly subscription price. Valid values: <li>clb.c2.medium: Standard</li><li>clb.c3.small: Advanced 1</li><li>clb.c3.medium: Advanced 2</li><li>clb.c4.small: Super Large 1</li><li>clb.c4.medium: Super Large 2</li><li>clb.c4.large: Super Large 3</li><li>clb.c4.xlarge: Super Large 4</li>SLA is input to query the pay-as-you-go price.
                     * @param _slaType Specification of the LCU-supported instance, which is input to query the monthly subscription price. Valid values: <li>clb.c2.medium: Standard</li><li>clb.c3.small: Advanced 1</li><li>clb.c3.medium: Advanced 2</li><li>clb.c4.small: Super Large 1</li><li>clb.c4.medium: Super Large 2</li><li>clb.c4.large: Super Large 3</li><li>clb.c4.xlarge: Super Large 4</li>SLA is input to query the pay-as-you-go price.
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                    /**
                     * 获取IP version. Valid values: `IPV4` (default), `IPV6` (IPV6 NAT64 version) or `IPv6FullChain` (IPv6 version). 
                     * @return AddressIPVersion IP version. Valid values: `IPV4` (default), `IPV6` (IPV6 NAT64 version) or `IPv6FullChain` (IPv6 version). 
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置IP version. Valid values: `IPV4` (default), `IPV6` (IPV6 NAT64 version) or `IPv6FullChain` (IPv6 version). 
                     * @param _addressIPVersion IP version. Valid values: `IPV4` (default), `IPV6` (IPV6 NAT64 version) or `IPv6FullChain` (IPv6 version). 
                     * 
                     */
                    void SetAddressIPVersion(const std::string& _addressIPVersion);

                    /**
                     * 判断参数 AddressIPVersion 是否已赋值
                     * @return AddressIPVersion 是否已赋值
                     * 
                     */
                    bool AddressIPVersionHasBeenSet() const;

                    /**
                     * 获取It only applies to public CLB. Currently, the static single-line IP type is supported only for the regions of Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing. If you need to experience it, contact your business manager. After approval, you can select the ISP type as China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). The network billing mode should be selected as billing by bandwidth package (BANDWIDTH_PACKAGE). If this parameter is not specified, BGP is used by default. You can use the DescribeResources API to query ISPs supported for a region.
                     * @return VipIsp It only applies to public CLB. Currently, the static single-line IP type is supported only for the regions of Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing. If you need to experience it, contact your business manager. After approval, you can select the ISP type as China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). The network billing mode should be selected as billing by bandwidth package (BANDWIDTH_PACKAGE). If this parameter is not specified, BGP is used by default. You can use the DescribeResources API to query ISPs supported for a region.
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置It only applies to public CLB. Currently, the static single-line IP type is supported only for the regions of Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing. If you need to experience it, contact your business manager. After approval, you can select the ISP type as China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). The network billing mode should be selected as billing by bandwidth package (BANDWIDTH_PACKAGE). If this parameter is not specified, BGP is used by default. You can use the DescribeResources API to query ISPs supported for a region.
                     * @param _vipIsp It only applies to public CLB. Currently, the static single-line IP type is supported only for the regions of Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing. If you need to experience it, contact your business manager. After approval, you can select the ISP type as China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). The network billing mode should be selected as billing by bandwidth package (BANDWIDTH_PACKAGE). If this parameter is not specified, BGP is used by default. You can use the DescribeResources API to query ISPs supported for a region.
                     * 
                     */
                    void SetVipIsp(const std::string& _vipIsp);

                    /**
                     * 判断参数 VipIsp 是否已赋值
                     * @return VipIsp 是否已赋值
                     * 
                     */
                    bool VipIspHasBeenSet() const;

                private:

                    /**
                     * Network type of the CLB to query. `OPEN`: Public network; `INTERNAL`: Private network is intranet type
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * The billing mode to query. `POSTPAID`:Pay as you go
                     */
                    std::string m_loadBalancerChargeType;
                    bool m_loadBalancerChargeTypeHasBeenSet;

                    /**
                     * Reserved field
                     */
                    LBChargePrepaid m_loadBalancerChargePrepaid;
                    bool m_loadBalancerChargePrepaidHasBeenSet;

                    /**
                     * The network billing mode to query 
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Number of CLB instances to query. Default value: 1.
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Availability zone in the format of "ap-guangzhou-1"
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Specification of the LCU-supported instance, which is input to query the monthly subscription price. Valid values: <li>clb.c2.medium: Standard</li><li>clb.c3.small: Advanced 1</li><li>clb.c3.medium: Advanced 2</li><li>clb.c4.small: Super Large 1</li><li>clb.c4.medium: Super Large 2</li><li>clb.c4.large: Super Large 3</li><li>clb.c4.xlarge: Super Large 4</li>SLA is input to query the pay-as-you-go price.
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * IP version. Valid values: `IPV4` (default), `IPV6` (IPV6 NAT64 version) or `IPv6FullChain` (IPv6 version). 
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * It only applies to public CLB. Currently, the static single-line IP type is supported only for the regions of Guangzhou, Shanghai, Nanjing, Jinan, Hangzhou, Fuzhou, Beijing, Shijiazhuang, Wuhan, Changsha, Chengdu, and Chongqing. If you need to experience it, contact your business manager. After approval, you can select the ISP type as China Mobile (CMCC), China Unicom (CUCC), or China Telecom (CTCC). The network billing mode should be selected as billing by bandwidth package (BANDWIDTH_PACKAGE). If this parameter is not specified, BGP is used by default. You can use the DescribeResources API to query ISPs supported for a region.
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_INQUIRYPRICECREATELOADBALANCERREQUEST_H_
