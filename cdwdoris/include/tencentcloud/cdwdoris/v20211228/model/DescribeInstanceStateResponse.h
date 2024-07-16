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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCESTATERESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCESTATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeInstanceState response structure.
                */
                class DescribeInstanceStateResponse : public AbstractModel
                {
                public:
                    DescribeInstanceStateResponse();
                    ~DescribeInstanceStateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster status. Example: Serving
                     * @return InstanceState Cluster status. Example: Serving
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取Creation time of cluster operation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowCreateTime Creation time of cluster operation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFlowCreateTime() const;

                    /**
                     * 判断参数 FlowCreateTime 是否已赋值
                     * @return FlowCreateTime 是否已赋值
                     * 
                     */
                    bool FlowCreateTimeHasBeenSet() const;

                    /**
                     * 获取Cluster operation name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowName Cluster operation name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cluster operation progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowProgress Cluster operation progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetFlowProgress() const;

                    /**
                     * 判断参数 FlowProgress 是否已赋值
                     * @return FlowProgress 是否已赋值
                     * 
                     */
                    bool FlowProgressHasBeenSet() const;

                    /**
                     * 获取Cluster status description. Example: running
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceStateDesc Cluster status description. Example: running
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceStateDesc() const;

                    /**
                     * 判断参数 InstanceStateDesc 是否已赋值
                     * @return InstanceStateDesc 是否已赋值
                     * 
                     */
                    bool InstanceStateDescHasBeenSet() const;

                    /**
                     * 获取Cluster process error messages, such as "Creation failed, insufficient resources"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowMsg Cluster process error messages, such as "Creation failed, insufficient resources"
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFlowMsg() const;

                    /**
                     * 判断参数 FlowMsg 是否已赋值
                     * @return FlowMsg 是否已赋值
                     * 
                     */
                    bool FlowMsgHasBeenSet() const;

                private:

                    /**
                     * Cluster status. Example: Serving
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Creation time of cluster operation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_flowCreateTime;
                    bool m_flowCreateTimeHasBeenSet;

                    /**
                     * Cluster operation name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * Cluster operation progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_flowProgress;
                    bool m_flowProgressHasBeenSet;

                    /**
                     * Cluster status description. Example: running
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceStateDesc;
                    bool m_instanceStateDescHasBeenSet;

                    /**
                     * Cluster process error messages, such as "Creation failed, insufficient resources"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_flowMsg;
                    bool m_flowMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCESTATERESPONSE_H_
