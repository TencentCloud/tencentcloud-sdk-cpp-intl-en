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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYLISTREQUEST_H_

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
                * DescribeBaselineStrategyList request structure.
                */
                class DescribeBaselineStrategyListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineStrategyListRequest();
                    ~DescribeBaselineStrategyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination parameters (The maximum number is 100.)
                     * @return Limit Pagination parameters (The maximum number is 100.)
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination parameters (The maximum number is 100.)
                     * @param _limit Pagination parameters (The maximum number is 100.)
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination parameter
                     * @return Offset Pagination parameter
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination parameter
                     * @param _offset Pagination parameter
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Rule switch: 1 - on; 0 - off; 2: all
                     * @return Enabled Rule switch: 1 - on; 0 - off; 2: all
                     * 
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置Rule switch: 1 - on; 0 - off; 2: all
                     * @param _enabled Rule switch: 1 - on; 0 - off; 2: all
                     * 
                     */
                    void SetEnabled(const uint64_t& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * Pagination parameters (The maximum number is 100.)
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination parameter
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Rule switch: 1 - on; 0 - off; 2: all
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYLISTREQUEST_H_
