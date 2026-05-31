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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSBYOPERATIONTYPEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSBYOPERATIONTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeInstanceSpecsByOperationType request structure.
                */
                class DescribeInstanceSpecsByOperationTypeRequest : public AbstractModel
                {
                public:
                    DescribeInstanceSpecsByOperationTypeRequest();
                    ~DescribeInstanceSpecsByOperationTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Operation type.
Add new RO instance
modifyInstance: Modify configuration
                     * @return OperationType Operation type.
Add new RO instance
modifyInstance: Modify configuration
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置Operation type.
Add new RO instance
modifyInstance: Modify configuration
                     * @param _operationType Operation type.
Add new RO instance
modifyInstance: Modify configuration
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取Instance ID, required when querying configuration modification specifications
                     * @return InstanceId Instance ID, required when querying configuration modification specifications
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, required when querying configuration modification specifications
                     * @param _instanceId Instance ID, required when querying configuration modification specifications
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
                     * 获取Instance Machine Type
                     * @return DeviceType Instance Machine Type
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Instance Machine Type
                     * @param _deviceType Instance Machine Type
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Operation type.
Add new RO instance
modifyInstance: Modify configuration
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * Instance ID, required when querying configuration modification specifications
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance Machine Type
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSBYOPERATIONTYPEREQUEST_H_
