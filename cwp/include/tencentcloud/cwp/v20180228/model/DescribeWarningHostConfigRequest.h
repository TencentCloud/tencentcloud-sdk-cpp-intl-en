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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWARNINGHOSTCONFIGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWARNINGHOSTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeWarningHostConfig request structure.
                */
                class DescribeWarningHostConfigRequest : public AbstractModel
                {
                public:
                    DescribeWarningHostConfigRequest();
                    ~DescribeWarningHostConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm type
                     * @return Type Alarm type
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Alarm type
                     * @param _type Alarm type
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
                     * 获取Limit per Page, 0 for no paging.
                     * @return Limit Limit per Page, 0 for no paging.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit per Page, 0 for no paging.
                     * @param _limit Limit per Page, 0 for no paging.
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
                     * 获取Pagination offset. The default is 0.
                     * @return Offset Pagination offset. The default is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. The default is 0.
                     * @param _offset Pagination offset. The default is 0.
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
                     * Alarm type
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Limit per Page, 0 for no paging.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset. The default is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWARNINGHOSTCONFIGREQUEST_H_
