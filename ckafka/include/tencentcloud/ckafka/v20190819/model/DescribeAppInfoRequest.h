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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEAPPINFOREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEAPPINFOREQUEST_H_

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
                * DescribeAppInfo request structure.
                */
                class DescribeAppInfoRequest : public AbstractModel
                {
                public:
                    DescribeAppInfoRequest();
                    ~DescribeAppInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset position
                     * @return Offset Offset position
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset position
                     * @param Offset Offset position
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of users to be queried in this request. Maximum value: 50. Default value: 50
                     * @return Limit Maximum number of users to be queried in this request. Maximum value: 50. Default value: 50
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of users to be queried in this request. Maximum value: 50. Default value: 50
                     * @param Limit Maximum number of users to be queried in this request. Maximum value: 50. Default value: 50
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Offset position
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of users to be queried in this request. Maximum value: 50. Default value: 50
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEAPPINFOREQUEST_H_
