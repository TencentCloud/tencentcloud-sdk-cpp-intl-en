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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEZONEINSTANCECONFIGINFOSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEZONEINSTANCECONFIGINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeZoneInstanceConfigInfos request structure.
                */
                class DescribeZoneInstanceConfigInfosRequest : public AbstractModel
                {
                public:
                    DescribeZoneInstanceConfigInfosRequest();
                    ~DescribeZoneInstanceConfigInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li> instance-charge-type-String-required: no-(filter) billing mode of instances. (POSTPAID_BY_HOUR: pay-as-you-go billing by hour | SPOTPAID: spot billing, which is suitable for a [spot instance] (https://intl.cloud.Tencent.com/document/product/213/17817) | CDHPAID: CDH billing, that is, billing only for CDH, but not for the instances on CDH. )  </li>
                     * @return Filters <li> instance-charge-type-String-required: no-(filter) billing mode of instances. (POSTPAID_BY_HOUR: pay-as-you-go billing by hour | SPOTPAID: spot billing, which is suitable for a [spot instance] (https://intl.cloud.Tencent.com/document/product/213/17817) | CDHPAID: CDH billing, that is, billing only for CDH, but not for the instances on CDH. )  </li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li> instance-charge-type-String-required: no-(filter) billing mode of instances. (POSTPAID_BY_HOUR: pay-as-you-go billing by hour | SPOTPAID: spot billing, which is suitable for a [spot instance] (https://intl.cloud.Tencent.com/document/product/213/17817) | CDHPAID: CDH billing, that is, billing only for CDH, but not for the instances on CDH. )  </li>
                     * @param _filters <li> instance-charge-type-String-required: no-(filter) billing mode of instances. (POSTPAID_BY_HOUR: pay-as-you-go billing by hour | SPOTPAID: spot billing, which is suitable for a [spot instance] (https://intl.cloud.Tencent.com/document/product/213/17817) | CDHPAID: CDH billing, that is, billing only for CDH, but not for the instances on CDH. )  </li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <li> instance-charge-type-String-required: no-(filter) billing mode of instances. (POSTPAID_BY_HOUR: pay-as-you-go billing by hour | SPOTPAID: spot billing, which is suitable for a [spot instance] (https://intl.cloud.Tencent.com/document/product/213/17817) | CDHPAID: CDH billing, that is, billing only for CDH, but not for the instances on CDH. )  </li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEZONEINSTANCECONFIGINFOSREQUEST_H_
