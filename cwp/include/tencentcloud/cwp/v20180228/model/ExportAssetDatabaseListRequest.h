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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETDATABASELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETDATABASELISTREQUEST_H_

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
                * ExportAssetDatabaseList request structure.
                */
                class ExportAssetDatabaseListRequest : public AbstractModel
                {
                public:
                    ExportAssetDatabaseListRequest();
                    ~ExportAssetDatabaseListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filtering criteria
<li>User- string - required: no - running user</li>
<li>Ip - String - required: no - bound IP address</li>
<li>Port - Int - required: no - port</li>
<li>Name - Int - required: no - database name
0: all
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - required: no - protocol: 1: TCP; 2: UDP; 3: unknown</li>
<li>OsType - String - required: no - operating system: Linux/Windows</li>
                     * @return Filters Filtering criteria
<li>User- string - required: no - running user</li>
<li>Ip - String - required: no - bound IP address</li>
<li>Port - Int - required: no - port</li>
<li>Name - Int - required: no - database name
0: all
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - required: no - protocol: 1: TCP; 2: UDP; 3: unknown</li>
<li>OsType - String - required: no - operating system: Linux/Windows</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filtering criteria
<li>User- string - required: no - running user</li>
<li>Ip - String - required: no - bound IP address</li>
<li>Port - Int - required: no - port</li>
<li>Name - Int - required: no - database name
0: all
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - required: no - protocol: 1: TCP; 2: UDP; 3: unknown</li>
<li>OsType - String - required: no - operating system: Linux/Windows</li>
                     * @param _filters Filtering criteria
<li>User- string - required: no - running user</li>
<li>Ip - String - required: no - bound IP address</li>
<li>Port - Int - required: no - port</li>
<li>Name - Int - required: no - database name
0: all
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - required: no - protocol: 1: TCP; 2: UDP; 3: unknown</li>
<li>OsType - String - required: no - operating system: Linux/Windows</li>
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
                     * 获取Sorting order: asc for ascending or desc for descending
                     * @return Order Sorting order: asc for ascending or desc for descending
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order: asc for ascending or desc for descending
                     * @param _order Sorting order: asc for ascending or desc for descending
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
                     * 获取Sorting method: [FirstTime]
                     * @return By Sorting method: [FirstTime]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting method: [FirstTime]
                     * @param _by Sorting method: [FirstTime]
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
                     * Filtering criteria
<li>User- string - required: no - running user</li>
<li>Ip - String - required: no - bound IP address</li>
<li>Port - Int - required: no - port</li>
<li>Name - Int - required: no - database name
0: all
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - required: no - protocol: 1: TCP; 2: UDP; 3: unknown</li>
<li>OsType - String - required: no - operating system: Linux/Windows</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Query the information on the host with the specified QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Sorting order: asc for ascending or desc for descending
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting method: [FirstTime]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETDATABASELISTREQUEST_H_
