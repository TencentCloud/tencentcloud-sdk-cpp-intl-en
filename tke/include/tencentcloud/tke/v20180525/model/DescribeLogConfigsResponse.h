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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGCONFIGSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeLogConfigs response structure.
                */
                class DescribeLogConfigsResponse : public AbstractModel
                {
                public:
                    DescribeLogConfigsResponse();
                    ~DescribeLogConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of collection rules when performing paged search
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Total Total number of collection rules when performing paged search
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Search by specified collection rule name. If partially failed, the failed collection rule name and the last failure reason will be returned.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Message Search by specified collection rule name. If partially failed, the failed collection rule name and the last failure reason will be returned.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Collection rule query results
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return LogConfigs Collection rule query results
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLogConfigs() const;

                    /**
                     * 判断参数 LogConfigs 是否已赋值
                     * @return LogConfigs 是否已赋值
                     * 
                     */
                    bool LogConfigsHasBeenSet() const;

                private:

                    /**
                     * Total number of collection rules when performing paged search
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Search by specified collection rule name. If partially failed, the failed collection rule name and the last failure reason will be returned.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Collection rule query results
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_logConfigs;
                    bool m_logConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGCONFIGSRESPONSE_H_
