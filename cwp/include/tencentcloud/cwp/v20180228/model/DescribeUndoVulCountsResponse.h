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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUNDOVULCOUNTSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUNDOVULCOUNTSRESPONSE_H_

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
                * DescribeUndoVulCounts response structure.
                */
                class DescribeUndoVulCountsResponse : public AbstractModel
                {
                public:
                    DescribeUndoVulCountsResponse();
                    ~DescribeUndoVulCountsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of unfixed vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UndoVulCount Number of unfixed vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUndoVulCount() const;

                    /**
                     * 判断参数 UndoVulCount 是否已赋值
                     * @return UndoVulCount 是否已赋值
                     * 
                     */
                    bool UndoVulCountHasBeenSet() const;

                    /**
                     * 获取Number of unfixed hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UndoHostCount Number of unfixed hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUndoHostCount() const;

                    /**
                     * 判断参数 UndoHostCount 是否已赋值
                     * @return UndoHostCount 是否已赋值
                     * 
                     */
                    bool UndoHostCountHasBeenSet() const;

                    /**
                     * 获取Number of Standard Edition hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NotProfessionCount Number of Standard Edition hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetNotProfessionCount() const;

                    /**
                     * 判断参数 NotProfessionCount 是否已赋值
                     * @return NotProfessionCount 是否已赋值
                     * 
                     */
                    bool NotProfessionCountHasBeenSet() const;

                private:

                    /**
                     * Number of unfixed vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_undoVulCount;
                    bool m_undoVulCountHasBeenSet;

                    /**
                     * Number of unfixed hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_undoHostCount;
                    bool m_undoHostCountHasBeenSet;

                    /**
                     * Number of Standard Edition hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_notProfessionCount;
                    bool m_notProfessionCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUNDOVULCOUNTSRESPONSE_H_
