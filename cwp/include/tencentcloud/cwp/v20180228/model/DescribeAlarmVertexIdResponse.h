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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEALARMVERTEXIDRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEALARMVERTEXIDRESPONSE_H_

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
                * DescribeAlarmVertexId response structure.
                */
                class DescribeAlarmVertexIdResponse : public AbstractModel
                {
                public:
                    DescribeAlarmVertexIdResponse();
                    ~DescribeAlarmVertexIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of alarm IDs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlarmVertexIds List of alarm IDs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAlarmVertexIds() const;

                    /**
                     * 判断参数 AlarmVertexIds 是否已赋值
                     * @return AlarmVertexIds 是否已赋值
                     * 
                     */
                    bool AlarmVertexIdsHasBeenSet() const;

                private:

                    /**
                     * List of alarm IDs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_alarmVertexIds;
                    bool m_alarmVertexIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEALARMVERTEXIDRESPONSE_H_
