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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEALARMINCIDENTNODESRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEALARMINCIDENTNODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/IncidentVertexInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAlarmIncidentNodes response structure.
                */
                class DescribeAlarmIncidentNodesResponse : public AbstractModel
                {
                public:
                    DescribeAlarmIncidentNodesResponse();
                    ~DescribeAlarmIncidentNodesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取All node information on the event corresponding to an alarm. Multiple events may be involved.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IncidentNodes All node information on the event corresponding to an alarm. Multiple events may be involved.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<IncidentVertexInfo> GetIncidentNodes() const;

                    /**
                     * 判断参数 IncidentNodes 是否已赋值
                     * @return IncidentNodes 是否已赋值
                     * 
                     */
                    bool IncidentNodesHasBeenSet() const;

                private:

                    /**
                     * All node information on the event corresponding to an alarm. Multiple events may be involved.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<IncidentVertexInfo> m_incidentNodes;
                    bool m_incidentNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEALARMINCIDENTNODESRESPONSE_H_
