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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEREGIONREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEREGIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeRegion request structure.
                */
                class DescribeRegionRequest : public AbstractModel
                {
                public:
                    DescribeRegionRequest();
                    ~DescribeRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The offset value
                     * @return Offset The offset value
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset value
                     * @param Offset The offset value
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The maximum number of results returned
                     * @return Limit The maximum number of results returned
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The maximum number of results returned
                     * @param Limit The maximum number of results returned
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Business field, which can be ignored.
                     * @return Business Business field, which can be ignored.
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Business field, which can be ignored.
                     * @param Business Business field, which can be ignored.
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                private:

                    /**
                     * The offset value
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The maximum number of results returned
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Business field, which can be ignored.
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEREGIONREQUEST_H_
