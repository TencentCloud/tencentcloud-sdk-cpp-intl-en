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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWINSTANCESINFOREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWINSTANCESINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/NatFwFilter.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatFwInstancesInfo request structure.
                */
                class DescribeNatFwInstancesInfoRequest : public AbstractModel
                {
                public:
                    DescribeNatFwInstancesInfoRequest();
                    ~DescribeNatFwInstancesInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gets filtering fields of instance list
                     * @return Filter Gets filtering fields of instance list
                     * 
                     */
                    std::vector<NatFwFilter> GetFilter() const;

                    /**
                     * 设置Gets filtering fields of instance list
                     * @param _filter Gets filtering fields of instance list
                     * 
                     */
                    void SetFilter(const std::vector<NatFwFilter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Page number
                     * @return Offset Page number
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number
                     * @param _offset Page number
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Page length
                     * @return Limit Page length
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Page length
                     * @param _limit Page length
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Gets filtering fields of instance list
                     */
                    std::vector<NatFwFilter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Page number
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page length
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWINSTANCESINFOREQUEST_H_
