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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_LISTEKYCWEBHOOKSREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_LISTEKYCWEBHOOKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ListEKYCWebhooks request structure.
                */
                class ListEKYCWebhooksRequest : public AbstractModel
                {
                public:
                    ListEKYCWebhooksRequest();
                    ~ListEKYCWebhooksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Paging offset. Default value: 0</p><p>Value range: [0, 100]</p>
                     * @return Offset <p>Paging offset. Default value: 0</p><p>Value range: [0, 100]</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset. Default value: 0</p><p>Value range: [0, 100]</p>
                     * @param _offset <p>Paging offset. Default value: 0</p><p>Value range: [0, 100]</p>
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
                     * 获取<p>Number of results per page. Default value: 20. Maximum value: 100 (automatically truncated to 100 if exceeded)</p><p>Value range: [20, 100]</p>
                     * @return Limit <p>Number of results per page. Default value: 20. Maximum value: 100 (automatically truncated to 100 if exceeded)</p><p>Value range: [20, 100]</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of results per page. Default value: 20. Maximum value: 100 (automatically truncated to 100 if exceeded)</p><p>Value range: [20, 100]</p>
                     * @param _limit <p>Number of results per page. Default value: 20. Maximum value: 100 (automatically truncated to 100 if exceeded)</p><p>Value range: [20, 100]</p>
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
                     * <p>Paging offset. Default value: 0</p><p>Value range: [0, 100]</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of results per page. Default value: 20. Maximum value: 100 (automatically truncated to 100 if exceeded)</p><p>Value range: [20, 100]</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_LISTEKYCWEBHOOKSREQUEST_H_
