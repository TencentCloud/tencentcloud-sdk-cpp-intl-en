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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERINFOREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * DescribeCustomerInfo request structure.
                */
                class DescribeCustomerInfoRequest : public AbstractModel
                {
                public:
                    DescribeCustomerInfoRequest();
                    ~DescribeCustomerInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of customer UIN. Array length value: 1-20.
                     * @return CustomerUin List of customer UIN. Array length value: 1-20.
                     * 
                     */
                    std::vector<int64_t> GetCustomerUin() const;

                    /**
                     * 设置List of customer UIN. Array length value: 1-20.
                     * @param _customerUin List of customer UIN. Array length value: 1-20.
                     * 
                     */
                    void SetCustomerUin(const std::vector<int64_t>& _customerUin);

                    /**
                     * 判断参数 CustomerUin 是否已赋值
                     * @return CustomerUin 是否已赋值
                     * 
                     */
                    bool CustomerUinHasBeenSet() const;

                private:

                    /**
                     * List of customer UIN. Array length value: 1-20.
                     */
                    std::vector<int64_t> m_customerUin;
                    bool m_customerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERINFOREQUEST_H_
