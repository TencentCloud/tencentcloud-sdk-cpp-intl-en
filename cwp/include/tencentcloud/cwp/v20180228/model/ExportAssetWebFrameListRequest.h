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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETWEBFRAMELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETWEBFRAMELISTREQUEST_H_

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
                * ExportAssetWebFrameList request structure.
                */
                class ExportAssetWebFrameListRequest : public AbstractModel
                {
                public:
                    ExportAssetWebFrameListRequest();
                    ~ExportAssetWebFrameListRequest() = default;
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
<li>Name - String - Required: No - Framework Name</li>
<li>Lang - String - Required: No - Framework Language: java/python</li>
<li>Type - String - Required: No - Service Type:
0: All
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
<li>Name - String - Required: No - Framework Name</li>
<li>Lang - String - Required: No - Framework Language: java/python</li>
<li>Type - String - Required: No - Service Type:
0: All
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
<li>Name - String - Required: No - Framework Name</li>
<li>Lang - String - Required: No - Framework Language: java/python</li>
<li>Type - String - Required: No - Service Type:
0: All
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
<li>Name - String - Required: No - Framework Name</li>
<li>Lang - String - Required: No - Framework Language: java/python</li>
<li>Type - String - Required: No - Service Type:
0: All
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
                     * 获取Optional Sort: [FirstTime|JarCount]
                     * @return By Optional Sort: [FirstTime|JarCount]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Optional Sort: [FirstTime|JarCount]
                     * @param _by Optional Sort: [FirstTime|JarCount]
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
<li>Name - String - Required: No - Framework Name</li>
<li>Lang - String - Required: No - Framework Language: java/python</li>
<li>Type - String - Required: No - Service Type:
0: All
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
                     * Optional Sort: [FirstTime|JarCount]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETWEBFRAMELISTREQUEST_H_
