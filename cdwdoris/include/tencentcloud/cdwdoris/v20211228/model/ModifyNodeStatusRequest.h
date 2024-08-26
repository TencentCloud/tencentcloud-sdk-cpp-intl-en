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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYNODESTATUSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYNODESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/NodeInfos.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyNodeStatus request structure.
                */
                class ModifyNodeStatusRequest : public AbstractModel
                {
                public:
                    ModifyNodeStatusRequest();
                    ~ModifyNodeStatusRequest() = default;
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
                     * 获取Node information
                     * @return NodeInfos Node information
                     * 
                     */
                    std::vector<NodeInfos> GetNodeInfos() const;

                    /**
                     * 设置Node information
                     * @param _nodeInfos Node information
                     * 
                     */
                    void SetNodeInfos(const std::vector<NodeInfos>& _nodeInfos);

                    /**
                     * 判断参数 NodeInfos 是否已赋值
                     * @return NodeInfos 是否已赋值
                     * 
                     */
                    bool NodeInfosHasBeenSet() const;

                    /**
                     * 获取Node operation
                     * @return OperationCode Node operation
                     * 
                     */
                    std::string GetOperationCode() const;

                    /**
                     * 设置Node operation
                     * @param _operationCode Node operation
                     * 
                     */
                    void SetOperationCode(const std::string& _operationCode);

                    /**
                     * 判断参数 OperationCode 是否已赋值
                     * @return OperationCode 是否已赋值
                     * 
                     */
                    bool OperationCodeHasBeenSet() const;

                    /**
                     * 获取Timeout period (s)
                     * @return RestartTimeOut Timeout period (s)
                     * 
                     */
                    std::string GetRestartTimeOut() const;

                    /**
                     * 设置Timeout period (s)
                     * @param _restartTimeOut Timeout period (s)
                     * 
                     */
                    void SetRestartTimeOut(const std::string& _restartTimeOut);

                    /**
                     * 判断参数 RestartTimeOut 是否已赋值
                     * @return RestartTimeOut 是否已赋值
                     * 
                     */
                    bool RestartTimeOutHasBeenSet() const;

                private:

                    /**
                     * Cluster ID, such as cdwch-xxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node information
                     */
                    std::vector<NodeInfos> m_nodeInfos;
                    bool m_nodeInfosHasBeenSet;

                    /**
                     * Node operation
                     */
                    std::string m_operationCode;
                    bool m_operationCodeHasBeenSet;

                    /**
                     * Timeout period (s)
                     */
                    std::string m_restartTimeOut;
                    bool m_restartTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYNODESTATUSREQUEST_H_
