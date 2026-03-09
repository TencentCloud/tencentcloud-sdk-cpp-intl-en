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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERCODESREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERCODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeRegisterCodes request structure.
                */
                class DescribeRegisterCodesRequest : public AbstractModel
                {
                public:
                    DescribeRegisterCodesRequest();
                    ~DescribeRegisterCodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Registration code ID.

The maximum per request is 100.

Parameters must not be specified simultaneously `RegisterCodeIds` and `Filters`.
                     * @return RegisterCodeIds Registration code ID.

The maximum per request is 100.

Parameters must not be specified simultaneously `RegisterCodeIds` and `Filters`.
                     * 
                     */
                    std::vector<std::string> GetRegisterCodeIds() const;

                    /**
                     * 设置Registration code ID.

The maximum per request is 100.

Parameters must not be specified simultaneously `RegisterCodeIds` and `Filters`.
                     * @param _registerCodeIds Registration code ID.

The maximum per request is 100.

Parameters must not be specified simultaneously `RegisterCodeIds` and `Filters`.
                     * 
                     */
                    void SetRegisterCodeIds(const std::vector<std::string>& _registerCodeIds);

                    /**
                     * 判断参数 RegisterCodeIds 是否已赋值
                     * @return RegisterCodeIds 是否已赋值
                     * 
                     */
                    bool RegisterCodeIdsHasBeenSet() const;

                    /**
                     * 获取Offset. default value: 0.
                     * @return Offset Offset. default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. default value: 0.
                     * @param _offset Offset. default value: 0.
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
                     * 获取Number of returned results, defaults to 20, maximum value is 100.
                     * @return Limit Number of returned results, defaults to 20, maximum value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results, defaults to 20, maximum value is 100.
                     * @param _limit Number of returned results, defaults to 20, maximum value is 100.
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
                     * Registration code ID.

The maximum per request is 100.

Parameters must not be specified simultaneously `RegisterCodeIds` and `Filters`.
                     */
                    std::vector<std::string> m_registerCodeIds;
                    bool m_registerCodeIdsHasBeenSet;

                    /**
                     * Offset. default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results, defaults to 20, maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERCODESREQUEST_H_
