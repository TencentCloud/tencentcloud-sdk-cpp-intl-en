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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_RESTARTNODESREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_RESTARTNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * RestartNodes request structure.
                */
                class RestartNodesRequest : public AbstractModel
                {
                public:
                    RestartNodesRequest();
                    ~RestartNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster instance ID
                     * @return InstanceId Cluster instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID
                     * @param _instanceId Cluster instance ID
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
                     * 获取Node name list
                     * @return NodeNames Node name list
                     * 
                     */
                    std::vector<std::string> GetNodeNames() const;

                    /**
                     * 设置Node name list
                     * @param _nodeNames Node name list
                     * 
                     */
                    void SetNodeNames(const std::vector<std::string>& _nodeNames);

                    /**
                     * 判断参数 NodeNames 是否已赋值
                     * @return NodeNames 是否已赋值
                     * 
                     */
                    bool NodeNamesHasBeenSet() const;

                    /**
                     * 获取Whether to force restart
                     * @return ForceRestart Whether to force restart
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置Whether to force restart
                     * @param _forceRestart Whether to force restart
                     * 
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     * 
                     */
                    bool ForceRestartHasBeenSet() const;

                    /**
                     * 获取The restart mode. Valid values: `in-place` (default), `blue-green`.
                     * @return RestartMode The restart mode. Valid values: `in-place` (default), `blue-green`.
                     * 
                     */
                    std::string GetRestartMode() const;

                    /**
                     * 设置The restart mode. Valid values: `in-place` (default), `blue-green`.
                     * @param _restartMode The restart mode. Valid values: `in-place` (default), `blue-green`.
                     * 
                     */
                    void SetRestartMode(const std::string& _restartMode);

                    /**
                     * 判断参数 RestartMode 是否已赋值
                     * @return RestartMode 是否已赋值
                     * 
                     */
                    bool RestartModeHasBeenSet() const;

                    /**
                     * 获取The node status, applicable in the blue/green mode. The blue/green restart is risky if the node is offline.
                     * @return IsOffline The node status, applicable in the blue/green mode. The blue/green restart is risky if the node is offline.
                     * 
                     */
                    bool GetIsOffline() const;

                    /**
                     * 设置The node status, applicable in the blue/green mode. The blue/green restart is risky if the node is offline.
                     * @param _isOffline The node status, applicable in the blue/green mode. The blue/green restart is risky if the node is offline.
                     * 
                     */
                    void SetIsOffline(const bool& _isOffline);

                    /**
                     * 判断参数 IsOffline 是否已赋值
                     * @return IsOffline 是否已赋值
                     * 
                     */
                    bool IsOfflineHasBeenSet() const;

                private:

                    /**
                     * Cluster instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node name list
                     */
                    std::vector<std::string> m_nodeNames;
                    bool m_nodeNamesHasBeenSet;

                    /**
                     * Whether to force restart
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * The restart mode. Valid values: `in-place` (default), `blue-green`.
                     */
                    std::string m_restartMode;
                    bool m_restartModeHasBeenSet;

                    /**
                     * The node status, applicable in the blue/green mode. The blue/green restart is risky if the node is offline.
                     */
                    bool m_isOffline;
                    bool m_isOfflineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_RESTARTNODESREQUEST_H_
