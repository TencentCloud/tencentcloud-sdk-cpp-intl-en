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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPSTATUSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeIpStatus request structure.
                */
                class DescribeIpStatusRequest : public AbstractModel
                {
                public:
                    DescribeIpStatusRequest();
                    ~DescribeIpStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Acceleration domain name
                     * @return Domain Acceleration domain name
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Acceleration domain name
                     * @param Domain Acceleration domain name
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Node type.
`edge`: Edge server
`last`: Intermediate server
If this parameter is left empty, edge server information will be returned by default
                     * @return Layer Node type.
`edge`: Edge server
`last`: Intermediate server
If this parameter is left empty, edge server information will be returned by default
                     */
                    std::string GetLayer() const;

                    /**
                     * 设置Node type.
`edge`: Edge server
`last`: Intermediate server
If this parameter is left empty, edge server information will be returned by default
                     * @param Layer Node type.
`edge`: Edge server
`last`: Intermediate server
If this parameter is left empty, edge server information will be returned by default
                     */
                    void SetLayer(const std::string& _layer);

                    /**
                     * 判断参数 Layer 是否已赋值
                     * @return Layer 是否已赋值
                     */
                    bool LayerHasBeenSet() const;

                    /**
                     * 获取Specifies a region to query.
`mainland`: Nodes in the Chinese mainland
`overseas`: Nodes outside the Chinese mainland
`global`: Global nodes
                     * @return Area Specifies a region to query.
`mainland`: Nodes in the Chinese mainland
`overseas`: Nodes outside the Chinese mainland
`global`: Global nodes
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Specifies a region to query.
`mainland`: Nodes in the Chinese mainland
`overseas`: Nodes outside the Chinese mainland
`global`: Global nodes
                     * @param Area Specifies a region to query.
`mainland`: Nodes in the Chinese mainland
`overseas`: Nodes outside the Chinese mainland
`global`: Global nodes
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Whether to return a value as an IP range
                     * @return Segment Whether to return a value as an IP range
                     */
                    bool GetSegment() const;

                    /**
                     * 设置Whether to return a value as an IP range
                     * @param Segment Whether to return a value as an IP range
                     */
                    void SetSegment(const bool& _segment);

                    /**
                     * 判断参数 Segment 是否已赋值
                     * @return Segment 是否已赋值
                     */
                    bool SegmentHasBeenSet() const;

                    /**
                     * 获取
                     * @return ShowIpv6 
                     */
                    bool GetShowIpv6() const;

                    /**
                     * 设置
                     * @param ShowIpv6 
                     */
                    void SetShowIpv6(const bool& _showIpv6);

                    /**
                     * 判断参数 ShowIpv6 是否已赋值
                     * @return ShowIpv6 是否已赋值
                     */
                    bool ShowIpv6HasBeenSet() const;

                    /**
                     * 获取Whether to abbreviate the IPv6 address.
                     * @return AbbreviationIpv6 Whether to abbreviate the IPv6 address.
                     */
                    bool GetAbbreviationIpv6() const;

                    /**
                     * 设置Whether to abbreviate the IPv6 address.
                     * @param AbbreviationIpv6 Whether to abbreviate the IPv6 address.
                     */
                    void SetAbbreviationIpv6(const bool& _abbreviationIpv6);

                    /**
                     * 判断参数 AbbreviationIpv6 是否已赋值
                     * @return AbbreviationIpv6 是否已赋值
                     */
                    bool AbbreviationIpv6HasBeenSet() const;

                private:

                    /**
                     * Acceleration domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Node type.
`edge`: Edge server
`last`: Intermediate server
If this parameter is left empty, edge server information will be returned by default
                     */
                    std::string m_layer;
                    bool m_layerHasBeenSet;

                    /**
                     * Specifies a region to query.
`mainland`: Nodes in the Chinese mainland
`overseas`: Nodes outside the Chinese mainland
`global`: Global nodes
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Whether to return a value as an IP range
                     */
                    bool m_segment;
                    bool m_segmentHasBeenSet;

                    /**
                     * 
                     */
                    bool m_showIpv6;
                    bool m_showIpv6HasBeenSet;

                    /**
                     * Whether to abbreviate the IPv6 address.
                     */
                    bool m_abbreviationIpv6;
                    bool m_abbreviationIpv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPSTATUSREQUEST_H_
