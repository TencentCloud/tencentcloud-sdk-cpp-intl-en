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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTARTCLUSTERFORCONFIGSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTARTCLUSTERFORCONFIGSREQUEST_H_

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
                * RestartClusterForConfigs request structure.
                */
                class RestartClusterForConfigsRequest : public AbstractModel
                {
                public:
                    RestartClusterForConfigsRequest();
                    ~RestartClusterForConfigsRequest() = default;
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
                     * 获取grace_restart is an elegant scrolling restart. If this parameter is not filled in, restart now by default.
                     * @return OperationType grace_restart is an elegant scrolling restart. If this parameter is not filled in, restart now by default.
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置grace_restart is an elegant scrolling restart. If this parameter is not filled in, restart now by default.
                     * @param _operationType grace_restart is an elegant scrolling restart. If this parameter is not filled in, restart now by default.
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

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
                     * grace_restart is an elegant scrolling restart. If this parameter is not filled in, restart now by default.
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTARTCLUSTERFORCONFIGSREQUEST_H_
