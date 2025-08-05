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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPLANSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPLANSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Filter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribePlans request structure.
                */
                class DescribePlansRequest : public AbstractModel
                {
                public:
                    DescribePlansRequest();
                    ~DescribePlansRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria: the maximum number of Filters.Values is 20. detailed filter criteria are as follows: <li>plan-type<br>  filter by <strong>package type</strong>.<br>  available types:<br>  plan-trial: trial package;<br>  plan-personal: personal plan;<br>  plan-basic: basic plan;<br>  plan-standard: standard edition plan;<br>  plan-enterprise: enterprise plan.</li> <li>plan-id<br>  filter by <strong>package id</strong>. the package id format is: edgeone-268z103ob0sx.</li> <li>area<br>  filter by <strong>acceleration region</strong>.</li> service area. available types:<br>  mainland: chinese mainland;<br>  overseas: worldwide (excluding chinese mainland);<br>  global: global (including chinese mainland). <li>status<br>  filter by <strong>status</strong>.<br>  available states:<br>  normal: normal status;<br>  expiring-soon: expiring soon;<br>  expired: expired;<br>  isolated: isolated.</li>.
                     * @return Filters Filter criteria: the maximum number of Filters.Values is 20. detailed filter criteria are as follows: <li>plan-type<br>  filter by <strong>package type</strong>.<br>  available types:<br>  plan-trial: trial package;<br>  plan-personal: personal plan;<br>  plan-basic: basic plan;<br>  plan-standard: standard edition plan;<br>  plan-enterprise: enterprise plan.</li> <li>plan-id<br>  filter by <strong>package id</strong>. the package id format is: edgeone-268z103ob0sx.</li> <li>area<br>  filter by <strong>acceleration region</strong>.</li> service area. available types:<br>  mainland: chinese mainland;<br>  overseas: worldwide (excluding chinese mainland);<br>  global: global (including chinese mainland). <li>status<br>  filter by <strong>status</strong>.<br>  available states:<br>  normal: normal status;<br>  expiring-soon: expiring soon;<br>  expired: expired;<br>  isolated: isolated.</li>.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria: the maximum number of Filters.Values is 20. detailed filter criteria are as follows: <li>plan-type<br>  filter by <strong>package type</strong>.<br>  available types:<br>  plan-trial: trial package;<br>  plan-personal: personal plan;<br>  plan-basic: basic plan;<br>  plan-standard: standard edition plan;<br>  plan-enterprise: enterprise plan.</li> <li>plan-id<br>  filter by <strong>package id</strong>. the package id format is: edgeone-268z103ob0sx.</li> <li>area<br>  filter by <strong>acceleration region</strong>.</li> service area. available types:<br>  mainland: chinese mainland;<br>  overseas: worldwide (excluding chinese mainland);<br>  global: global (including chinese mainland). <li>status<br>  filter by <strong>status</strong>.<br>  available states:<br>  normal: normal status;<br>  expiring-soon: expiring soon;<br>  expired: expired;<br>  isolated: isolated.</li>.
                     * @param _filters Filter criteria: the maximum number of Filters.Values is 20. detailed filter criteria are as follows: <li>plan-type<br>  filter by <strong>package type</strong>.<br>  available types:<br>  plan-trial: trial package;<br>  plan-personal: personal plan;<br>  plan-basic: basic plan;<br>  plan-standard: standard edition plan;<br>  plan-enterprise: enterprise plan.</li> <li>plan-id<br>  filter by <strong>package id</strong>. the package id format is: edgeone-268z103ob0sx.</li> <li>area<br>  filter by <strong>acceleration region</strong>.</li> service area. available types:<br>  mainland: chinese mainland;<br>  overseas: worldwide (excluding chinese mainland);<br>  global: global (including chinese mainland). <li>status<br>  filter by <strong>status</strong>.<br>  available states:<br>  normal: normal status;<br>  expiring-soon: expiring soon;<br>  expired: expired;<br>  isolated: isolated.</li>.
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
                     * 获取Specifies the sorting field. valid values:.
<li>enable-time: effective time;</li>.
<Li> expire-time: expiration time.</li>use default value enable-time if not specified.
                     * @return Order Specifies the sorting field. valid values:.
<li>enable-time: effective time;</li>.
<Li> expire-time: expiration time.</li>use default value enable-time if not specified.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Specifies the sorting field. valid values:.
<li>enable-time: effective time;</li>.
<Li> expire-time: expiration time.</li>use default value enable-time if not specified.
                     * @param _order Specifies the sorting field. valid values:.
<li>enable-time: effective time;</li>.
<Li> expire-time: expiration time.</li>use default value enable-time if not specified.
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
                     * 获取Sorting order. valid values:.
<Li>`Asc`: sort in ascending order</li>.
<Li>`Desc`: from the largest to smallest.</li>default value: `desc`.
                     * @return Direction Sorting order. valid values:.
<Li>`Asc`: sort in ascending order</li>.
<Li>`Desc`: from the largest to smallest.</li>default value: `desc`.
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置Sorting order. valid values:.
<Li>`Asc`: sort in ascending order</li>.
<Li>`Desc`: from the largest to smallest.</li>default value: `desc`.
                     * @param _direction Sorting order. valid values:.
<Li>`Asc`: sort in ascending order</li>.
<Li>`Desc`: from the largest to smallest.</li>default value: `desc`.
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Number limit of paginated query. Default value: 20. Maximum value: 200.
                     * @return Limit Number limit of paginated query. Default value: 20. Maximum value: 200.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number limit of paginated query. Default value: 20. Maximum value: 200.
                     * @param _limit Number limit of paginated query. Default value: 20. Maximum value: 200.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The offset of paginated query. Default value: 0.
                     * @return Offset The offset of paginated query. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset of paginated query. Default value: 0.
                     * @param _offset The offset of paginated query. Default value: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Filter criteria: the maximum number of Filters.Values is 20. detailed filter criteria are as follows: <li>plan-type<br>  filter by <strong>package type</strong>.<br>  available types:<br>  plan-trial: trial package;<br>  plan-personal: personal plan;<br>  plan-basic: basic plan;<br>  plan-standard: standard edition plan;<br>  plan-enterprise: enterprise plan.</li> <li>plan-id<br>  filter by <strong>package id</strong>. the package id format is: edgeone-268z103ob0sx.</li> <li>area<br>  filter by <strong>acceleration region</strong>.</li> service area. available types:<br>  mainland: chinese mainland;<br>  overseas: worldwide (excluding chinese mainland);<br>  global: global (including chinese mainland). <li>status<br>  filter by <strong>status</strong>.<br>  available states:<br>  normal: normal status;<br>  expiring-soon: expiring soon;<br>  expired: expired;<br>  isolated: isolated.</li>.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Specifies the sorting field. valid values:.
<li>enable-time: effective time;</li>.
<Li> expire-time: expiration time.</li>use default value enable-time if not specified.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting order. valid values:.
<Li>`Asc`: sort in ascending order</li>.
<Li>`Desc`: from the largest to smallest.</li>default value: `desc`.
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Number limit of paginated query. Default value: 20. Maximum value: 200.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The offset of paginated query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPLANSREQUEST_H_
