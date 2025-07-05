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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOBJECTSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/FiltersItemNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeObjects request structure.
                */
                class DescribeObjectsRequest : public AbstractModel
                {
                public:
                    DescribeObjectsRequest();
                    ~DescribeObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Supported filters:
	ObjectId: CLB instance ID
	VIP: public IP address of the CLB instance
	InstanceId: WAF instance ID
	Domain: precise domain name
	Status: WAF protection switch status. 0: disabled; 1: enabled
	ClsStatus: WAF log switch. 0: disabled; 1: enabled
                     * @return Filters Supported filters:
	ObjectId: CLB instance ID
	VIP: public IP address of the CLB instance
	InstanceId: WAF instance ID
	Domain: precise domain name
	Status: WAF protection switch status. 0: disabled; 1: enabled
	ClsStatus: WAF log switch. 0: disabled; 1: enabled
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置Supported filters:
	ObjectId: CLB instance ID
	VIP: public IP address of the CLB instance
	InstanceId: WAF instance ID
	Domain: precise domain name
	Status: WAF protection switch status. 0: disabled; 1: enabled
	ClsStatus: WAF log switch. 0: disabled; 1: enabled
                     * @param _filters Supported filters:
	ObjectId: CLB instance ID
	VIP: public IP address of the CLB instance
	InstanceId: WAF instance ID
	Domain: precise domain name
	Status: WAF protection switch status. 0: disabled; 1: enabled
	ClsStatus: WAF log switch. 0: disabled; 1: enabled
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Supported filters:
	ObjectId: CLB instance ID
	VIP: public IP address of the CLB instance
	InstanceId: WAF instance ID
	Domain: precise domain name
	Status: WAF protection switch status. 0: disabled; 1: enabled
	ClsStatus: WAF log switch. 0: disabled; 1: enabled
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEOBJECTSREQUEST_H_
