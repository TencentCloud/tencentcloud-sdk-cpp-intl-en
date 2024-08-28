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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETWEBLOCATIONLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETWEBLOCATIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportAssetWebLocationList request structure.
                */
                class ExportAssetWebLocationListRequest : public AbstractModel
                {
                public:
                    ExportAssetWebLocationListRequest();
                    ~ExportAssetWebLocationListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query information of a specified QUUID host
                     * @return Quuid Query information of a specified QUUID host
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Query information of a specified QUUID host
                     * @param _quuid Query information of a specified QUUID host
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
<li>Name - String - required: no - domain name</li>
<li>User - String - required: no - running user</li>
<li>Port - uint64 - required: no - site port</li>
<li>Proto - uint64 - required: no - site protocol: 1 - HTTP; 2 - HTTPS</li>
<li>ServiceType - uint64 - required: no - service type:
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
<li>OsType - String - required: no - Windows/Linux</li>
                     * @return Filters Filter criteria
<li>Name - String - required: no - domain name</li>
<li>User - String - required: no - running user</li>
<li>Port - uint64 - required: no - site port</li>
<li>Proto - uint64 - required: no - site protocol: 1 - HTTP; 2 - HTTPS</li>
<li>ServiceType - uint64 - required: no - service type:
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
<li>OsType - String - required: no - Windows/Linux</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Name - String - required: no - domain name</li>
<li>User - String - required: no - running user</li>
<li>Port - uint64 - required: no - site port</li>
<li>Proto - uint64 - required: no - site protocol: 1 - HTTP; 2 - HTTPS</li>
<li>ServiceType - uint64 - required: no - service type:
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
<li>OsType - String - required: no - Windows/Linux</li>
                     * @param _filters Filter criteria
<li>Name - String - required: no - domain name</li>
<li>User - String - required: no - running user</li>
<li>Port - uint64 - required: no - site port</li>
<li>Proto - uint64 - required: no - site protocol: 1 - HTTP; 2 - HTTPS</li>
<li>ServiceType - uint64 - required: no - service type:
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
<li>OsType - String - required: no - Windows/Linux</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

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
                     * 获取Optional sorting method: [FirstTime|PathCount]
                     * @return By Optional sorting method: [FirstTime|PathCount]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Optional sorting method: [FirstTime|PathCount]
                     * @param _by Optional sorting method: [FirstTime|PathCount]
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
                     * Query information of a specified QUUID host
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Filter criteria
<li>Name - String - required: no - domain name</li>
<li>User - String - required: no - running user</li>
<li>Port - uint64 - required: no - site port</li>
<li>Proto - uint64 - required: no - site protocol: 1 - HTTP; 2 - HTTPS</li>
<li>ServiceType - uint64 - required: no - service type:
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
<li>OsType - String - required: no - Windows/Linux</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting method: asc for ascending order or desc for descending order
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Optional sorting method: [FirstTime|PathCount]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETWEBLOCATIONLISTREQUEST_H_
