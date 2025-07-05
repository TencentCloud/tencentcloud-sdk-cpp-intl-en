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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTARTCLUSTERFORNODEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTARTCLUSTERFORNODEREQUEST_H_

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
                * RestartClusterForNode request structure.
                */
                class RestartClusterForNodeRequest : public AbstractModel
                {
                public:
                    RestartClusterForNodeRequest();
                    ~RestartClusterForNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID, such as cdwch-xxxx
                     * @return InstanceId Cluster ID, such as cdwch-xxxx
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID, such as cdwch-xxxx
                     * @param _instanceId Cluster ID, such as cdwch-xxxx
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
                     * 获取Configuration file's name
                     * @return ConfigName Configuration file's name
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置Configuration file's name
                     * @param _configName Configuration file's name
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取Each batch of restarts
                     * @return BatchSize Each batch of restarts
                     * 
                     */
                    int64_t GetBatchSize() const;

                    /**
                     * 设置Each batch of restarts
                     * @param _batchSize Each batch of restarts
                     * 
                     */
                    void SetBatchSize(const int64_t& _batchSize);

                    /**
                     * 判断参数 BatchSize 是否已赋值
                     * @return BatchSize 是否已赋值
                     * 
                     */
                    bool BatchSizeHasBeenSet() const;

                    /**
                     * 获取Restart node
                     * @return NodeList Restart node
                     * 
                     */
                    std::vector<std::string> GetNodeList() const;

                    /**
                     * 设置Restart node
                     * @param _nodeList Restart node
                     * 
                     */
                    void SetNodeList(const std::vector<std::string>& _nodeList);

                    /**
                     * 判断参数 NodeList 是否已赋值
                     * @return NodeList 是否已赋值
                     * 
                     */
                    bool NodeListHasBeenSet() const;

                    /**
                     * 获取False means non-rolling restart, and true means rolling restart.
                     * @return RollingRestart False means non-rolling restart, and true means rolling restart.
                     * 
                     */
                    bool GetRollingRestart() const;

                    /**
                     * 设置False means non-rolling restart, and true means rolling restart.
                     * @param _rollingRestart False means non-rolling restart, and true means rolling restart.
                     * 
                     */
                    void SetRollingRestart(const bool& _rollingRestart);

                    /**
                     * 判断参数 RollingRestart 是否已赋值
                     * @return RollingRestart 是否已赋值
                     * 
                     */
                    bool RollingRestartHasBeenSet() const;

                private:

                    /**
                     * Cluster ID, such as cdwch-xxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Configuration file's name
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * Each batch of restarts
                     */
                    int64_t m_batchSize;
                    bool m_batchSizeHasBeenSet;

                    /**
                     * Restart node
                     */
                    std::vector<std::string> m_nodeList;
                    bool m_nodeListHasBeenSet;

                    /**
                     * False means non-rolling restart, and true means rolling restart.
                     */
                    bool m_rollingRestart;
                    bool m_rollingRestartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTARTCLUSTERFORNODEREQUEST_H_
