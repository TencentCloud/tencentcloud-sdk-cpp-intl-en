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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETDATABASELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETDATABASELISTREQUEST_H_

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
                * DescribeAssetDatabaseList request structure.
                */
                class DescribeAssetDatabaseListRequest : public AbstractModel
                {
                public:
                    DescribeAssetDatabaseListRequest();
                    ~DescribeAssetDatabaseListRequest() = default;
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
<li>MachineName - String - required: no - host alias for filtering</li>
<li>IP - String - required: no - host IP address for filtering</li>
<li>InstanceID - String - required: no - host instance ID for filtering</li>
<li>User- string - required: no - running user</li>
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
<li>OsType - String - required: no - operating system: linux/windows</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
                     * @return Filters Filter criteria
<li>MachineName - String - required: no - host alias for filtering</li>
<li>IP - String - required: no - host IP address for filtering</li>
<li>InstanceID - String - required: no - host instance ID for filtering</li>
<li>User- string - required: no - running user</li>
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
<li>OsType - String - required: no - operating system: linux/windows</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>MachineName - String - required: no - host alias for filtering</li>
<li>IP - String - required: no - host IP address for filtering</li>
<li>InstanceID - String - required: no - host instance ID for filtering</li>
<li>User- string - required: no - running user</li>
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
<li>OsType - String - required: no - operating system: linux/windows</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
                     * @param _filters Filter criteria
<li>MachineName - String - required: no - host alias for filtering</li>
<li>IP - String - required: no - host IP address for filtering</li>
<li>InstanceID - String - required: no - host instance ID for filtering</li>
<li>User- string - required: no - running user</li>
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
<li>OsType - String - required: no - operating system: linux/windows</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Number of results to be returned. Default value: 10. Maximum value: 100.
                     * @return Limit Number of results to be returned. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: 10. Maximum value: 100.
                     * @param _limit Number of results to be returned. Default value: 10. Maximum value: 100.
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
                     * Query information of a specified QUUID host
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Filter criteria
<li>MachineName - String - required: no - host alias for filtering</li>
<li>IP - String - required: no - host IP address for filtering</li>
<li>InstanceID - String - required: no - host instance ID for filtering</li>
<li>User- string - required: no - running user</li>
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
<li>OsType - String - required: no - operating system: linux/windows</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting method: asc for ascending order or desc for descending order
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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETDATABASELISTREQUEST_H_
