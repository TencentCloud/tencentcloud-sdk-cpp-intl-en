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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBESUBACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBESUBACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DescribeSubAccounts request structure.
                */
                class DescribeSubAccountsRequest : public AbstractModel
                {
                public:
                    DescribeSubAccountsRequest();
                    ~DescribeSubAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of sub-user UINs. Up to 50 UINs are supported.
                     * @return FilterSubAccountUin List of sub-user UINs. Up to 50 UINs are supported.
                     */
                    std::vector<uint64_t> GetFilterSubAccountUin() const;

                    /**
                     * 设置List of sub-user UINs. Up to 50 UINs are supported.
                     * @param FilterSubAccountUin List of sub-user UINs. Up to 50 UINs are supported.
                     */
                    void SetFilterSubAccountUin(const std::vector<uint64_t>& _filterSubAccountUin);

                    /**
                     * 判断参数 FilterSubAccountUin 是否已赋值
                     * @return FilterSubAccountUin 是否已赋值
                     */
                    bool FilterSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * List of sub-user UINs. Up to 50 UINs are supported.
                     */
                    std::vector<uint64_t> m_filterSubAccountUin;
                    bool m_filterSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBESUBACCOUNTSREQUEST_H_
