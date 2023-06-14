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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERESOURCELISTREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERESOURCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/OrderBy.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeResourceList request structure.
                */
                class DescribeResourceListRequest : public AbstractModel
                {
                public:
                    DescribeResourceListRequest();
                    ~DescribeResourceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `bgpip`: Anti-DDoS Advanced, `net`: Anti-DDoS Ultimate)
                     * @return Business Anti-DDoS service type. `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `bgpip`: Anti-DDoS Advanced, `net`: Anti-DDoS Ultimate)
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `bgpip`: Anti-DDoS Advanced, `net`: Anti-DDoS Ultimate)
                     * @param _business Anti-DDoS service type. `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `bgpip`: Anti-DDoS Advanced, `net`: Anti-DDoS Ultimate)
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Region code search, which is optional. If no regions are to be specified, enter an empty array. If a region is to be specified, enter a region code, such as ["gz", "sh"]
                     * @return RegionList Region code search, which is optional. If no regions are to be specified, enter an empty array. If a region is to be specified, enter a region code, such as ["gz", "sh"]
                     * 
                     */
                    std::vector<std::string> GetRegionList() const;

                    /**
                     * 设置Region code search, which is optional. If no regions are to be specified, enter an empty array. If a region is to be specified, enter a region code, such as ["gz", "sh"]
                     * @param _regionList Region code search, which is optional. If no regions are to be specified, enter an empty array. If a region is to be specified, enter a region code, such as ["gz", "sh"]
                     * 
                     */
                    void SetRegionList(const std::vector<std::string>& _regionList);

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                    /**
                     * 获取Line search. This field can be optionally entered only when getting the list of Anti-DDoS Advanced resources. Valid values: [1 (BGP line), 2 (Nanjing Telecom), 3 (Nanjing Unicom), 99 (third-party partner line)]. Please enter an empty array when getting other products;
                     * @return Line Line search. This field can be optionally entered only when getting the list of Anti-DDoS Advanced resources. Valid values: [1 (BGP line), 2 (Nanjing Telecom), 3 (Nanjing Unicom), 99 (third-party partner line)]. Please enter an empty array when getting other products;
                     * 
                     */
                    std::vector<uint64_t> GetLine() const;

                    /**
                     * 设置Line search. This field can be optionally entered only when getting the list of Anti-DDoS Advanced resources. Valid values: [1 (BGP line), 2 (Nanjing Telecom), 3 (Nanjing Unicom), 99 (third-party partner line)]. Please enter an empty array when getting other products;
                     * @param _line Line search. This field can be optionally entered only when getting the list of Anti-DDoS Advanced resources. Valid values: [1 (BGP line), 2 (Nanjing Telecom), 3 (Nanjing Unicom), 99 (third-party partner line)]. Please enter an empty array when getting other products;
                     * 
                     */
                    void SetLine(const std::vector<uint64_t>& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取Resource ID search, which is optional. If this field is not an empty array, it means to get the resource list of a specified resource;
                     * @return IdList Resource ID search, which is optional. If this field is not an empty array, it means to get the resource list of a specified resource;
                     * 
                     */
                    std::vector<std::string> GetIdList() const;

                    /**
                     * 设置Resource ID search, which is optional. If this field is not an empty array, it means to get the resource list of a specified resource;
                     * @param _idList Resource ID search, which is optional. If this field is not an empty array, it means to get the resource list of a specified resource;
                     * 
                     */
                    void SetIdList(const std::vector<std::string>& _idList);

                    /**
                     * 判断参数 IdList 是否已赋值
                     * @return IdList 是否已赋值
                     * 
                     */
                    bool IdListHasBeenSet() const;

                    /**
                     * 获取Resource name search, which is optional. If this field is not an empty string, it means to search for resources by name;
                     * @return Name Resource name search, which is optional. If this field is not an empty string, it means to search for resources by name;
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Resource name search, which is optional. If this field is not an empty string, it means to search for resources by name;
                     * @param _name Resource name search, which is optional. If this field is not an empty string, it means to search for resources by name;
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取IP query list, which is optional. Resources will be queried by IP if the list is not empty.
                     * @return IpList IP query list, which is optional. Resources will be queried by IP if the list is not empty.
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置IP query list, which is optional. Resources will be queried by IP if the list is not empty.
                     * @param _ipList IP query list, which is optional. Resources will be queried by IP if the list is not empty.
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取Resource status search list, which is optional. Valid values: [0 (running), 1 (cleansing), 2 (blocking)]. No status search will be performed if an empty array is entered;
                     * @return Status Resource status search list, which is optional. Valid values: [0 (running), 1 (cleansing), 2 (blocking)]. No status search will be performed if an empty array is entered;
                     * 
                     */
                    std::vector<uint64_t> GetStatus() const;

                    /**
                     * 设置Resource status search list, which is optional. Valid values: [0 (running), 1 (cleansing), 2 (blocking)]. No status search will be performed if an empty array is entered;
                     * @param _status Resource status search list, which is optional. Valid values: [0 (running), 1 (cleansing), 2 (blocking)]. No status search will be performed if an empty array is entered;
                     * 
                     */
                    void SetStatus(const std::vector<uint64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Expiring resource search, which is optional. Valid values: [0 (no search), 1 (search for expiring resources)]
                     * @return Expire Expiring resource search, which is optional. Valid values: [0 (no search), 1 (search for expiring resources)]
                     * 
                     */
                    uint64_t GetExpire() const;

                    /**
                     * 设置Expiring resource search, which is optional. Valid values: [0 (no search), 1 (search for expiring resources)]
                     * @param _expire Expiring resource search, which is optional. Valid values: [0 (no search), 1 (search for expiring resources)]
                     * 
                     */
                    void SetExpire(const uint64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                    /**
                     * 获取Sort by field, which is optional
                     * @return OderBy Sort by field, which is optional
                     * 
                     */
                    std::vector<OrderBy> GetOderBy() const;

                    /**
                     * 设置Sort by field, which is optional
                     * @param _oderBy Sort by field, which is optional
                     * 
                     */
                    void SetOderBy(const std::vector<OrderBy>& _oderBy);

                    /**
                     * 判断参数 OderBy 是否已赋值
                     * @return OderBy 是否已赋值
                     * 
                     */
                    bool OderByHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. A value of 0 means no pagination
                     * @return Limit Number of entries per page. A value of 0 means no pagination
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. A value of 0 means no pagination
                     * @param _limit Number of entries per page. A value of 0 means no pagination
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page start offset, whose value is (page number - 1) * number of entries per page
                     * @return Offset Page start offset, whose value is (page number - 1) * number of entries per page
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page start offset, whose value is (page number - 1) * number of entries per page
                     * @param _offset Page start offset, whose value is (page number - 1) * number of entries per page
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
                     * 获取CNAME of Anti-DDoS Ultimate resource, which is optional and only valid for the Anti-DDoS Ultimate resource list;
                     * @return CName CNAME of Anti-DDoS Ultimate resource, which is optional and only valid for the Anti-DDoS Ultimate resource list;
                     * 
                     */
                    std::string GetCName() const;

                    /**
                     * 设置CNAME of Anti-DDoS Ultimate resource, which is optional and only valid for the Anti-DDoS Ultimate resource list;
                     * @param _cName CNAME of Anti-DDoS Ultimate resource, which is optional and only valid for the Anti-DDoS Ultimate resource list;
                     * 
                     */
                    void SetCName(const std::string& _cName);

                    /**
                     * 判断参数 CName 是否已赋值
                     * @return CName 是否已赋值
                     * 
                     */
                    bool CNameHasBeenSet() const;

                    /**
                     * 获取Domain name of Anti-DDoS Ultimate resource, which is optional and only valid for the Anti-DDoS Ultimate resource list;
                     * @return Domain Domain name of Anti-DDoS Ultimate resource, which is optional and only valid for the Anti-DDoS Ultimate resource list;
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name of Anti-DDoS Ultimate resource, which is optional and only valid for the Anti-DDoS Ultimate resource list;
                     * @param _domain Domain name of Anti-DDoS Ultimate resource, which is optional and only valid for the Anti-DDoS Ultimate resource list;
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgp`: Anti-DDoS Pro (single IP), `bgp-multip`: Anti-DDoS Pro (multi-IP), `bgpip`: Anti-DDoS Advanced, `net`: Anti-DDoS Ultimate)
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Region code search, which is optional. If no regions are to be specified, enter an empty array. If a region is to be specified, enter a region code, such as ["gz", "sh"]
                     */
                    std::vector<std::string> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * Line search. This field can be optionally entered only when getting the list of Anti-DDoS Advanced resources. Valid values: [1 (BGP line), 2 (Nanjing Telecom), 3 (Nanjing Unicom), 99 (third-party partner line)]. Please enter an empty array when getting other products;
                     */
                    std::vector<uint64_t> m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * Resource ID search, which is optional. If this field is not an empty array, it means to get the resource list of a specified resource;
                     */
                    std::vector<std::string> m_idList;
                    bool m_idListHasBeenSet;

                    /**
                     * Resource name search, which is optional. If this field is not an empty string, it means to search for resources by name;
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * IP query list, which is optional. Resources will be queried by IP if the list is not empty.
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * Resource status search list, which is optional. Valid values: [0 (running), 1 (cleansing), 2 (blocking)]. No status search will be performed if an empty array is entered;
                     */
                    std::vector<uint64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Expiring resource search, which is optional. Valid values: [0 (no search), 1 (search for expiring resources)]
                     */
                    uint64_t m_expire;
                    bool m_expireHasBeenSet;

                    /**
                     * Sort by field, which is optional
                     */
                    std::vector<OrderBy> m_oderBy;
                    bool m_oderByHasBeenSet;

                    /**
                     * Number of entries per page. A value of 0 means no pagination
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page start offset, whose value is (page number - 1) * number of entries per page
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * CNAME of Anti-DDoS Ultimate resource, which is optional and only valid for the Anti-DDoS Ultimate resource list;
                     */
                    std::string m_cName;
                    bool m_cNameHasBeenSet;

                    /**
                     * Domain name of Anti-DDoS Ultimate resource, which is optional and only valid for the Anti-DDoS Ultimate resource list;
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBERESOURCELISTREQUEST_H_
