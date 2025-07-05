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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLPHONEEMAILLISTREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLPHONEEMAILLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeIntlPhoneEmailList request structure.
                */
                class DescribeIntlPhoneEmailListRequest : public AbstractModel
                {
                public:
                    DescribeIntlPhoneEmailListRequest();
                    ~DescribeIntlPhoneEmailListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The type. Valid values: `1` (mobile number), `2` (email address).
                     * @return Type The type. Valid values: `1` (mobile number), `2` (email address).
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置The type. Valid values: `1` (mobile number), `2` (email address).
                     * @param _type The type. Valid values: `1` (mobile number), `2` (email address).
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The number of records on each page in pagination cases.
                     * @return Limit The number of records on each page in pagination cases.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of records on each page in pagination cases.
                     * @param _limit The number of records on each page in pagination cases.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The page number in pagination cases.
                     * @return Offset The page number in pagination cases.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The page number in pagination cases.
                     * @param _offset The page number in pagination cases.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * The type. Valid values: `1` (mobile number), `2` (email address).
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The number of records on each page in pagination cases.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The page number in pagination cases.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLPHONEEMAILLISTREQUEST_H_
