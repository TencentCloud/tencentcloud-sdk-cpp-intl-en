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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATECLUSTERNODESREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATECLUSTERNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * TerminateClusterNodes request structure.
                */
                class TerminateClusterNodesRequest : public AbstractModel
                {
                public:
                    TerminateClusterNodesRequest();
                    ~TerminateClusterNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The instance ID.
                     * @return InstanceId The instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The instance ID.
                     * @param InstanceId The instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The list of resources to be terminated.
                     * @return CvmInstanceIds The list of resources to be terminated.
                     */
                    std::vector<std::string> GetCvmInstanceIds() const;

                    /**
                     * 设置The list of resources to be terminated.
                     * @param CvmInstanceIds The list of resources to be terminated.
                     */
                    void SetCvmInstanceIds(const std::vector<std::string>& _cvmInstanceIds);

                    /**
                     * 判断参数 CvmInstanceIds 是否已赋值
                     * @return CvmInstanceIds 是否已赋值
                     */
                    bool CvmInstanceIdsHasBeenSet() const;

                    /**
                     * 获取Valid values of node type:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * @return NodeFlag Valid values of node type:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     */
                    std::string GetNodeFlag() const;

                    /**
                     * 设置Valid values of node type:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * @param NodeFlag Valid values of node type:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     */
                    void SetNodeFlag(const std::string& _nodeFlag);

                    /**
                     * 判断参数 NodeFlag 是否已赋值
                     * @return NodeFlag 是否已赋值
                     */
                    bool NodeFlagHasBeenSet() const;

                    /**
                     * 获取The graceful scale-in feature. Valid values:
  <li>`true`: Enabled.</li>
  <li>`false`: Disabled.</li>
                     * @return GraceDownFlag The graceful scale-in feature. Valid values:
  <li>`true`: Enabled.</li>
  <li>`false`: Disabled.</li>
                     */
                    bool GetGraceDownFlag() const;

                    /**
                     * 设置The graceful scale-in feature. Valid values:
  <li>`true`: Enabled.</li>
  <li>`false`: Disabled.</li>
                     * @param GraceDownFlag The graceful scale-in feature. Valid values:
  <li>`true`: Enabled.</li>
  <li>`false`: Disabled.</li>
                     */
                    void SetGraceDownFlag(const bool& _graceDownFlag);

                    /**
                     * 判断参数 GraceDownFlag 是否已赋值
                     * @return GraceDownFlag 是否已赋值
                     */
                    bool GraceDownFlagHasBeenSet() const;

                    /**
                     * 获取The graceful scale-in wait time in seconds. Value range: 60–1800.
                     * @return GraceDownTime The graceful scale-in wait time in seconds. Value range: 60–1800.
                     */
                    int64_t GetGraceDownTime() const;

                    /**
                     * 设置The graceful scale-in wait time in seconds. Value range: 60–1800.
                     * @param GraceDownTime The graceful scale-in wait time in seconds. Value range: 60–1800.
                     */
                    void SetGraceDownTime(const int64_t& _graceDownTime);

                    /**
                     * 判断参数 GraceDownTime 是否已赋值
                     * @return GraceDownTime 是否已赋值
                     */
                    bool GraceDownTimeHasBeenSet() const;

                private:

                    /**
                     * The instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The list of resources to be terminated.
                     */
                    std::vector<std::string> m_cvmInstanceIds;
                    bool m_cvmInstanceIdsHasBeenSet;

                    /**
                     * Valid values of node type:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     */
                    std::string m_nodeFlag;
                    bool m_nodeFlagHasBeenSet;

                    /**
                     * The graceful scale-in feature. Valid values:
  <li>`true`: Enabled.</li>
  <li>`false`: Disabled.</li>
                     */
                    bool m_graceDownFlag;
                    bool m_graceDownFlagHasBeenSet;

                    /**
                     * The graceful scale-in wait time in seconds. Value range: 60–1800.
                     */
                    int64_t m_graceDownTime;
                    bool m_graceDownTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATECLUSTERNODESREQUEST_H_
