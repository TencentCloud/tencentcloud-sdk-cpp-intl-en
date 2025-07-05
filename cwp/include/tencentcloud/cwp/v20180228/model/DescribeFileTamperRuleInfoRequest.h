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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPERRULEINFOREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPERRULEINFOREQUEST_H_

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
                * DescribeFileTamperRuleInfo request structure.
                */
                class DescribeFileTamperRuleInfoRequest : public AbstractModel
                {
                public:
                    DescribeFileTamperRuleInfoRequest();
                    ~DescribeFileTamperRuleInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule ID
                     * @return Id Rule ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID
                     * @param _id Rule ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Control the number of UUIDs returned
                     * @return Limit Control the number of UUIDs returned
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Control the number of UUIDs returned
                     * @param _limit Control the number of UUIDs returned
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
                     * 获取Control the number of UUIDs returned, starting position
                     * @return Offset Control the number of UUIDs returned, starting position
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Control the number of UUIDs returned, starting position
                     * @param _offset Control the number of UUIDs returned, starting position
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Control the number of UUIDs returned
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Control the number of UUIDs returned, starting position
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPERRULEINFOREQUEST_H_
