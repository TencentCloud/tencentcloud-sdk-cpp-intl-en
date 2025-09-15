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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERFLOWSTATUSDETAILREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERFLOWSTATUSDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/FlowParam.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeClusterFlowStatusDetail request structure.
                */
                class DescribeClusterFlowStatusDetailRequest : public AbstractModel
                {
                public:
                    DescribeClusterFlowStatusDetailRequest();
                    ~DescribeClusterFlowStatusDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EMR instance ID
                     * @return InstanceId EMR instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EMR instance ID
                     * @param _instanceId EMR instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Process-related parameters.
                     * @return FlowParam Process-related parameters.
                     * 
                     */
                    FlowParam GetFlowParam() const;

                    /**
                     * 设置Process-related parameters.
                     * @param _flowParam Process-related parameters.
                     * 
                     */
                    void SetFlowParam(const FlowParam& _flowParam);

                    /**
                     * 判断参数 FlowParam 是否已赋值
                     * @return FlowParam 是否已赋值
                     * 
                     */
                    bool FlowParamHasBeenSet() const;

                    /**
                     * 获取Whether to return additional task information.
The default value is false.
                     * @return NeedExtraDetail Whether to return additional task information.
The default value is false.
                     * 
                     */
                    bool GetNeedExtraDetail() const;

                    /**
                     * 设置Whether to return additional task information.
The default value is false.
                     * @param _needExtraDetail Whether to return additional task information.
The default value is false.
                     * 
                     */
                    void SetNeedExtraDetail(const bool& _needExtraDetail);

                    /**
                     * 判断参数 NeedExtraDetail 是否已赋值
                     * @return NeedExtraDetail 是否已赋值
                     * 
                     */
                    bool NeedExtraDetailHasBeenSet() const;

                private:

                    /**
                     * EMR instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Process-related parameters.
                     */
                    FlowParam m_flowParam;
                    bool m_flowParamHasBeenSet;

                    /**
                     * Whether to return additional task information.
The default value is false.
                     */
                    bool m_needExtraDetail;
                    bool m_needExtraDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERFLOWSTATUSDETAILREQUEST_H_
