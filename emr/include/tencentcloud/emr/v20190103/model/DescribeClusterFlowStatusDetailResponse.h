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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERFLOWSTATUSDETAILRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERFLOWSTATUSDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/StageInfoDetail.h>
#include <tencentcloud/emr/v20190103/model/FlowParamsDesc.h>
#include <tencentcloud/emr/v20190103/model/FlowExtraDetail.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeClusterFlowStatusDetail response structure.
                */
                class DescribeClusterFlowStatusDetailResponse : public AbstractModel
                {
                public:
                    DescribeClusterFlowStatusDetailResponse();
                    ~DescribeClusterFlowStatusDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task step details

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StageDetails Task step details

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<StageInfoDetail> GetStageDetails() const;

                    /**
                     * 判断参数 StageDetails 是否已赋值
                     * @return StageDetails 是否已赋值
                     * 
                     */
                    bool StageDetailsHasBeenSet() const;

                    /**
                     * 获取Task parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowDesc Task parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FlowParamsDesc> GetFlowDesc() const;

                    /**
                     * 判断参数 FlowDesc 是否已赋值
                     * @return FlowDesc 是否已赋值
                     * 
                     */
                    bool FlowDescHasBeenSet() const;

                    /**
                     * 获取Task name.
                     * @return FlowName Task name.
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取Overall task flow progress.
Example: 0.8.
                     * @return FlowTotalProgress Overall task flow progress.
Example: 0.8.
                     * 
                     */
                    double GetFlowTotalProgress() const;

                    /**
                     * 判断参数 FlowTotalProgress 是否已赋值
                     * @return FlowTotalProgress 是否已赋值
                     * 
                     */
                    bool FlowTotalProgressHasBeenSet() const;

                    /**
                     * 获取Overall process status definition.
0: initializing.
1: running.
2: completed.
3: completed (with skipped steps).
-1: failed.
-3: blocked.
                     * @return FlowTotalStatus Overall process status definition.
0: initializing.
1: running.
2: completed.
3: completed (with skipped steps).
-1: failed.
-3: blocked.
                     * 
                     */
                    int64_t GetFlowTotalStatus() const;

                    /**
                     * 判断参数 FlowTotalStatus 是否已赋值
                     * @return FlowTotalStatus 是否已赋值
                     * 
                     */
                    bool FlowTotalStatusHasBeenSet() const;

                    /**
                     * 获取Additional process information.
This parameter is returned when NeedExtraDetail is true.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowExtraDetail Additional process information.
This parameter is returned when NeedExtraDetail is true.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FlowExtraDetail> GetFlowExtraDetail() const;

                    /**
                     * 判断参数 FlowExtraDetail 是否已赋值
                     * @return FlowExtraDetail 是否已赋值
                     * 
                     */
                    bool FlowExtraDetailHasBeenSet() const;

                    /**
                     * 获取Flow description.
                     * @return FlowInfo Flow description.
                     * 
                     */
                    std::string GetFlowInfo() const;

                    /**
                     * 判断参数 FlowInfo 是否已赋值
                     * @return FlowInfo 是否已赋值
                     * 
                     */
                    bool FlowInfoHasBeenSet() const;

                private:

                    /**
                     * Task step details

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<StageInfoDetail> m_stageDetails;
                    bool m_stageDetailsHasBeenSet;

                    /**
                     * Task parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<FlowParamsDesc> m_flowDesc;
                    bool m_flowDescHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * Overall task flow progress.
Example: 0.8.
                     */
                    double m_flowTotalProgress;
                    bool m_flowTotalProgressHasBeenSet;

                    /**
                     * Overall process status definition.
0: initializing.
1: running.
2: completed.
3: completed (with skipped steps).
-1: failed.
-3: blocked.
                     */
                    int64_t m_flowTotalStatus;
                    bool m_flowTotalStatusHasBeenSet;

                    /**
                     * Additional process information.
This parameter is returned when NeedExtraDetail is true.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<FlowExtraDetail> m_flowExtraDetail;
                    bool m_flowExtraDetailHasBeenSet;

                    /**
                     * Flow description.
                     */
                    std::string m_flowInfo;
                    bool m_flowInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERFLOWSTATUSDETAILRESPONSE_H_
