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
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取List of terminated resources.
                     * @return CvmInstanceIds List of terminated resources.
                     * 
                     */
                    std::vector<std::string> GetCvmInstanceIds() const;

                    /**
                     * 设置List of terminated resources.
                     * @param _cvmInstanceIds List of terminated resources.
                     * 
                     */
                    void SetCvmInstanceIds(const std::vector<std::string>& _cvmInstanceIds);

                    /**
                     * 判断参数 CvmInstanceIds 是否已赋值
                     * @return CvmInstanceIds 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdsHasBeenSet() const;

                    /**
                     * 获取Valid values of the node type to be terminated:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * @return NodeFlag Valid values of the node type to be terminated:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * 
                     */
                    std::string GetNodeFlag() const;

                    /**
                     * 设置Valid values of the node type to be terminated:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * @param _nodeFlag Valid values of the node type to be terminated:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * 
                     */
                    void SetNodeFlag(const std::string& _nodeFlag);

                    /**
                     * 判断参数 NodeFlag 是否已赋值
                     * @return NodeFlag 是否已赋值
                     * 
                     */
                    bool NodeFlagHasBeenSet() const;

                    /**
                     * 获取Graceful scale-in switch.
  <li>true: enable</li>
  <li>false: disable</li>
                     * @return GraceDownFlag Graceful scale-in switch.
  <li>true: enable</li>
  <li>false: disable</li>
                     * 
                     */
                    bool GetGraceDownFlag() const;

                    /**
                     * 设置Graceful scale-in switch.
  <li>true: enable</li>
  <li>false: disable</li>
                     * @param _graceDownFlag Graceful scale-in switch.
  <li>true: enable</li>
  <li>false: disable</li>
                     * 
                     */
                    void SetGraceDownFlag(const bool& _graceDownFlag);

                    /**
                     * 判断参数 GraceDownFlag 是否已赋值
                     * @return GraceDownFlag 是否已赋值
                     * 
                     */
                    bool GraceDownFlagHasBeenSet() const;

                    /**
                     * 获取Graceful scale-in waiting time. Value range: 60–1800, in seconds.
                     * @return GraceDownTime Graceful scale-in waiting time. Value range: 60–1800, in seconds.
                     * 
                     */
                    int64_t GetGraceDownTime() const;

                    /**
                     * 设置Graceful scale-in waiting time. Value range: 60–1800, in seconds.
                     * @param _graceDownTime Graceful scale-in waiting time. Value range: 60–1800, in seconds.
                     * 
                     */
                    void SetGraceDownTime(const int64_t& _graceDownTime);

                    /**
                     * 判断参数 GraceDownTime 是否已赋值
                     * @return GraceDownTime 是否已赋值
                     * 
                     */
                    bool GraceDownTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * List of terminated resources.
                     */
                    std::vector<std::string> m_cvmInstanceIds;
                    bool m_cvmInstanceIdsHasBeenSet;

                    /**
                     * Valid values of the node type to be terminated:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     */
                    std::string m_nodeFlag;
                    bool m_nodeFlagHasBeenSet;

                    /**
                     * Graceful scale-in switch.
  <li>true: enable</li>
  <li>false: disable</li>
                     */
                    bool m_graceDownFlag;
                    bool m_graceDownFlagHasBeenSet;

                    /**
                     * Graceful scale-in waiting time. Value range: 60–1800, in seconds.
                     */
                    int64_t m_graceDownTime;
                    bool m_graceDownTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATECLUSTERNODESREQUEST_H_
