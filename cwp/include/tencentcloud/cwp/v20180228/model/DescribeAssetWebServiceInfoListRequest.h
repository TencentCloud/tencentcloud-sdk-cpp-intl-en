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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBSERVICEINFOLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBSERVICEINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetWebServiceInfoList request structure.
                */
                class DescribeAssetWebServiceInfoListRequest : public AbstractModel
                {
                public:
                    DescribeAssetWebServiceInfoListRequest();
                    ~DescribeAssetWebServiceInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query the information on the host with the specified QUUID
                     * @return Quuid Query the information on the host with the specified QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Query the information on the host with the specified QUUID
                     * @param _quuid Query the information on the host with the specified QUUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Filter criteria
<li>User - string - required: no - running user</li>
<li>Name - string - required: no - Web service name:</li>
1:Tomcat
2:Apache
3:Nginx
4:WebLogic
5:Websphere
6:JBoss
7:WildFly
8:Jetty
9:IHS
10:Tengine</li>
<li>OsType - string - required: no - Windows/Linux</li>
<li>Os -String required: no - operating system (the value of DescribeMachineOsList API)</li>
                     * @return Filters Filter criteria
<li>User - string - required: no - running user</li>
<li>Name - string - required: no - Web service name:</li>
1:Tomcat
2:Apache
3:Nginx
4:WebLogic
5:Websphere
6:JBoss
7:WildFly
8:Jetty
9:IHS
10:Tengine</li>
<li>OsType - string - required: no - Windows/Linux</li>
<li>Os -String required: no - operating system (the value of DescribeMachineOsList API)</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>User - string - required: no - running user</li>
<li>Name - string - required: no - Web service name:</li>
1:Tomcat
2:Apache
3:Nginx
4:WebLogic
5:Websphere
6:JBoss
7:WildFly
8:Jetty
9:IHS
10:Tengine</li>
<li>OsType - string - required: no - Windows/Linux</li>
<li>Os -String required: no - operating system (the value of DescribeMachineOsList API)</li>
                     * @param _filters Filter criteria
<li>User - string - required: no - running user</li>
<li>Name - string - required: no - Web service name:</li>
1:Tomcat
2:Apache
3:Nginx
4:WebLogic
5:Websphere
6:JBoss
7:WildFly
8:Jetty
9:IHS
10:Tengine</li>
<li>OsType - string - required: no - Windows/Linux</li>
<li>Os -String required: no - operating system (the value of DescribeMachineOsList API)</li>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset, which is 0 by default.
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
                     * @return Offset Offset, which is 0 by default.
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which is 0 by default.
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
                     * @param _offset Offset, which is 0 by default.
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
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
                     * 获取Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * @return Limit Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * @param _limit Number of items to be returned. It is 10 by default, and the maximum value is 100.
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
                     * 获取Sorting method: asc for ascending order or desc for descending order
                     * @return Order Sorting method: asc for ascending order or desc for descending order
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: asc for ascending order or desc for descending order
                     * @param _order Sorting method: asc for ascending order or desc for descending order
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Optional sorting method: [FirstTime|ProcessCount]
                     * @return By Optional sorting method: [FirstTime|ProcessCount]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Optional sorting method: [FirstTime|ProcessCount]
                     * @param _by Optional sorting method: [FirstTime|ProcessCount]
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Query the information on the host with the specified QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Filter criteria
<li>User - string - required: no - running user</li>
<li>Name - string - required: no - Web service name:</li>
1:Tomcat
2:Apache
3:Nginx
4:WebLogic
5:Websphere
6:JBoss
7:WildFly
8:Jetty
9:IHS
10:Tengine</li>
<li>OsType - string - required: no - Windows/Linux</li>
<li>Os -String required: no - operating system (the value of DescribeMachineOsList API)</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset, which is 0 by default.
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting method: asc for ascending order or desc for descending order
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Optional sorting method: [FirstTime|ProcessCount]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBSERVICEINFOLISTREQUEST_H_
