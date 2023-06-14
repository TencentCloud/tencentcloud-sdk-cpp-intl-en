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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHAVIPSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHAVIPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/HaVip.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeHaVips response structure.
                */
                class DescribeHaVipsResponse : public AbstractModel
                {
                public:
                    DescribeHaVipsResponse();
                    ~DescribeHaVipsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of objects meeting the condition.
                     * @return TotalCount The number of objects meeting the condition.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取`HAVIP` object array.
                     * @return HaVipSet `HAVIP` object array.
                     * 
                     */
                    std::vector<HaVip> GetHaVipSet() const;

                    /**
                     * 判断参数 HaVipSet 是否已赋值
                     * @return HaVipSet 是否已赋值
                     * 
                     */
                    bool HaVipSetHasBeenSet() const;

                private:

                    /**
                     * The number of objects meeting the condition.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * `HAVIP` object array.
                     */
                    std::vector<HaVip> m_haVipSet;
                    bool m_haVipSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHAVIPSRESPONSE_H_
