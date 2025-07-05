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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKALARMREGULATIONSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKALARMREGULATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskAlarmInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTaskAlarmRegulations response structure.
                */
                class DescribeTaskAlarmRegulationsResponse : public AbstractModel
                {
                public:
                    DescribeTaskAlarmRegulationsResponse();
                    ~DescribeTaskAlarmRegulationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Alert Rule Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskAlarmInfos Alert Rule Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<TaskAlarmInfo> GetTaskAlarmInfos() const;

                    /**
                     * 判断参数 TaskAlarmInfos 是否已赋值
                     * @return TaskAlarmInfos 是否已赋值
                     * 
                     */
                    bool TaskAlarmInfosHasBeenSet() const;

                    /**
                     * 获取Number of recordsNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalCount Number of recordsNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Alert Rule Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<TaskAlarmInfo> m_taskAlarmInfos;
                    bool m_taskAlarmInfosHasBeenSet;

                    /**
                     * Number of recordsNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKALARMREGULATIONSRESPONSE_H_
