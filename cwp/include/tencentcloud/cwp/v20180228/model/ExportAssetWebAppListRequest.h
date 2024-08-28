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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETWEBAPPLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETWEBAPPLISTREQUEST_H_

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
                * ExportAssetWebAppList request structure.
                */
                class ExportAssetWebAppListRequest : public AbstractModel
                {
                public:
                    ExportAssetWebAppListRequest();
                    ~ExportAssetWebAppListRequest() = default;
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
                     * 获取Filtering criteria
<li>Name - String - required: no - application name</li>
<li>Domain - String - required: no - site domain name</li>
<li>Type - int - required: no - service type:
0: all
1:Tomcat
2:Apache
3:Nginx
4:WebLogic
5:Websphere
6:JBoss
7:Jetty
8:IHS
9:Tengine</li>
<li>OsType - String - required: no - Windows/Linux</li>
                     * @return Filters Filtering criteria
<li>Name - String - required: no - application name</li>
<li>Domain - String - required: no - site domain name</li>
<li>Type - int - required: no - service type:
0: all
1:Tomcat
2:Apache
3:Nginx
4:WebLogic
5:Websphere
6:JBoss
7:Jetty
8:IHS
9:Tengine</li>
<li>OsType - String - required: no - Windows/Linux</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filtering criteria
<li>Name - String - required: no - application name</li>
<li>Domain - String - required: no - site domain name</li>
<li>Type - int - required: no - service type:
0: all
1:Tomcat
2:Apache
3:Nginx
4:WebLogic
5:Websphere
6:JBoss
7:Jetty
8:IHS
9:Tengine</li>
<li>OsType - String - required: no - Windows/Linux</li>
                     * @param _filters Filtering criteria
<li>Name - String - required: no - application name</li>
<li>Domain - String - required: no - site domain name</li>
<li>Type - int - required: no - service type:
0: all
1:Tomcat
2:Apache
3:Nginx
4:WebLogic
5:Websphere
6:JBoss
7:Jetty
8:IHS
9:Tengine</li>
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
                     * 获取Sorting method: [FirstTime|PluginCount]
                     * @return By Sorting method: [FirstTime|PluginCount]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting method: [FirstTime|PluginCount]
                     * @param _by Sorting method: [FirstTime|PluginCount]
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
                     * Filtering criteria
<li>Name - String - required: no - application name</li>
<li>Domain - String - required: no - site domain name</li>
<li>Type - int - required: no - service type:
0: all
1:Tomcat
2:Apache
3:Nginx
4:WebLogic
5:Websphere
6:JBoss
7:Jetty
8:IHS
9:Tengine</li>
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
                     * Sorting method: [FirstTime|PluginCount]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETWEBAPPLISTREQUEST_H_
