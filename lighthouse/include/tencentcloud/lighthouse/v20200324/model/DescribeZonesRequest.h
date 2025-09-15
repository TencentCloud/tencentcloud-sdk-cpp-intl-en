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
                     * 获取Field on which the AZ list is sorted. value range:.
<Li>ZONE: sorted based on availability zone.</li>.
INSTANCE_DISPLAY_LABEL: specifies the Tag DISPLAY sorting order based on availability zone. valid values: HIDDEN (hide), NORMAL (ordinary), SELECTED (chosen by default). defaults to ascending order: ['HIDDEN', 'NORMAL', 'SELECTED'].
Specifies the default sorting order by availability zone.
                     * @return OrderField Field on which the AZ list is sorted. value range:.
<Li>ZONE: sorted based on availability zone.</li>.
INSTANCE_DISPLAY_LABEL: specifies the Tag DISPLAY sorting order based on availability zone. valid values: HIDDEN (hide), NORMAL (ordinary), SELECTED (chosen by default). defaults to ascending order: ['HIDDEN', 'NORMAL', 'SELECTED'].
Specifies the default sorting order by availability zone.
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Field on which the AZ list is sorted. value range:.
<Li>ZONE: sorted based on availability zone.</li>.
INSTANCE_DISPLAY_LABEL: specifies the Tag DISPLAY sorting order based on availability zone. valid values: HIDDEN (hide), NORMAL (ordinary), SELECTED (chosen by default). defaults to ascending order: ['HIDDEN', 'NORMAL', 'SELECTED'].
Specifies the default sorting order by availability zone.
                     * @param _orderField Field on which the AZ list is sorted. value range:.
<Li>ZONE: sorted based on availability zone.</li>.
INSTANCE_DISPLAY_LABEL: specifies the Tag DISPLAY sorting order based on availability zone. valid values: HIDDEN (hide), NORMAL (ordinary), SELECTED (chosen by default). defaults to ascending order: ['HIDDEN', 'NORMAL', 'SELECTED'].
Specifies the default sorting order by availability zone.
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
                     * 获取Outputs the sorting order of the availability zone list. value range:.
<Li>ASC: ascending order.</li>.
<Li>DESC: sort in descending order.</li>.
Specifies the default ascending order.
                     * @return Order Outputs the sorting order of the availability zone list. value range:.
<Li>ASC: ascending order.</li>.
<Li>DESC: sort in descending order.</li>.
Specifies the default ascending order.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Outputs the sorting order of the availability zone list. value range:.
<Li>ASC: ascending order.</li>.
<Li>DESC: sort in descending order.</li>.
Specifies the default ascending order.
                     * @param _order Outputs the sorting order of the availability zone list. value range:.
<Li>ASC: ascending order.</li>.
<Li>DESC: sort in descending order.</li>.
Specifies the default ascending order.
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
                     * Field on which the AZ list is sorted. value range:.
<Li>ZONE: sorted based on availability zone.</li>.
INSTANCE_DISPLAY_LABEL: specifies the Tag DISPLAY sorting order based on availability zone. valid values: HIDDEN (hide), NORMAL (ordinary), SELECTED (chosen by default). defaults to ascending order: ['HIDDEN', 'NORMAL', 'SELECTED'].
Specifies the default sorting order by availability zone.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Outputs the sorting order of the availability zone list. value range:.
<Li>ASC: ascending order.</li>.
<Li>DESC: sort in descending order.</li>.
Specifies the default ascending order.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEZONESREQUEST_H_
