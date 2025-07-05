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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEZONESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEZONESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeZones request structure.
                */
                class DescribeZonesRequest : public AbstractModel
                {
                public:
                    DescribeZonesRequest();
                    ~DescribeZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sorting field. Valid values:
<li>`ZONE`: Sort by the availability zone.
<li>`INSTANCE_DISPLAY_LABEL`: Sort by visibility labels (`HIDDEN`, `NORMAL` and `SELECTED`). Default: ['HIDDEN', 'NORMAL', 'SELECTED'].
The default value is `ZONE`.
                     * @return OrderField Sorting field. Valid values:
<li>`ZONE`: Sort by the availability zone.
<li>`INSTANCE_DISPLAY_LABEL`: Sort by visibility labels (`HIDDEN`, `NORMAL` and `SELECTED`). Default: ['HIDDEN', 'NORMAL', 'SELECTED'].
The default value is `ZONE`.
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Sorting field. Valid values:
<li>`ZONE`: Sort by the availability zone.
<li>`INSTANCE_DISPLAY_LABEL`: Sort by visibility labels (`HIDDEN`, `NORMAL` and `SELECTED`). Default: ['HIDDEN', 'NORMAL', 'SELECTED'].
The default value is `ZONE`.
                     * @param _orderField Sorting field. Valid values:
<li>`ZONE`: Sort by the availability zone.
<li>`INSTANCE_DISPLAY_LABEL`: Sort by visibility labels (`HIDDEN`, `NORMAL` and `SELECTED`). Default: ['HIDDEN', 'NORMAL', 'SELECTED'].
The default value is `ZONE`.
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取Specifies how availability zones are listed. Valid values:
<li>ASC: Ascending sort. 
<li>DESC: Descending sort.
The default value is `ASC`.
                     * @return Order Specifies how availability zones are listed. Valid values:
<li>ASC: Ascending sort. 
<li>DESC: Descending sort.
The default value is `ASC`.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Specifies how availability zones are listed. Valid values:
<li>ASC: Ascending sort. 
<li>DESC: Descending sort.
The default value is `ASC`.
                     * @param _order Specifies how availability zones are listed. Valid values:
<li>ASC: Ascending sort. 
<li>DESC: Descending sort.
The default value is `ASC`.
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Sorting field. Valid values:
<li>`ZONE`: Sort by the availability zone.
<li>`INSTANCE_DISPLAY_LABEL`: Sort by visibility labels (`HIDDEN`, `NORMAL` and `SELECTED`). Default: ['HIDDEN', 'NORMAL', 'SELECTED'].
The default value is `ZONE`.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Specifies how availability zones are listed. Valid values:
<li>ASC: Ascending sort. 
<li>DESC: Descending sort.
The default value is `ASC`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEZONESREQUEST_H_
