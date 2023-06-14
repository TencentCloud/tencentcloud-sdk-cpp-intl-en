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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACESTATUSINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACESTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/TemEnvironmentStartingStatus.h>
#include <tencentcloud/tem/v20210701/model/TemEnvironmentStoppingStatus.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Environment status
                */
                class NamespaceStatusInfo : public AbstractModel
                {
                public:
                    NamespaceStatusInfo();
                    ~NamespaceStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the environment
                     * @return EnvironmentId ID of the environment
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置ID of the environment
                     * @param _environmentId ID of the environment
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Environment name
                     * @return EnvironmentName Environment name
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment name
                     * @param _environmentName Environment name
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取TCB envId | EKS clusterId
                     * @return ClusterId TCB envId | EKS clusterId
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置TCB envId | EKS clusterId
                     * @param _clusterId TCB envId | EKS clusterId
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
                     * 获取Environment status
                     * @return ClusterStatus Environment status
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置Environment status
                     * @param _clusterStatus Environment status
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取Whether the environment is being started. `null` is returned if it’s not being started.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EnvironmentStartingStatus Whether the environment is being started. `null` is returned if it’s not being started.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    TemEnvironmentStartingStatus GetEnvironmentStartingStatus() const;

                    /**
                     * 设置Whether the environment is being started. `null` is returned if it’s not being started.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _environmentStartingStatus Whether the environment is being started. `null` is returned if it’s not being started.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnvironmentStartingStatus(const TemEnvironmentStartingStatus& _environmentStartingStatus);

                    /**
                     * 判断参数 EnvironmentStartingStatus 是否已赋值
                     * @return EnvironmentStartingStatus 是否已赋值
                     * 
                     */
                    bool EnvironmentStartingStatusHasBeenSet() const;

                    /**
                     * 获取Whether the environment is being stopped. `null` is returned if it’s not being stopped.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EnvironmentStoppingStatus Whether the environment is being stopped. `null` is returned if it’s not being stopped.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    TemEnvironmentStoppingStatus GetEnvironmentStoppingStatus() const;

                    /**
                     * 设置Whether the environment is being stopped. `null` is returned if it’s not being stopped.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _environmentStoppingStatus Whether the environment is being stopped. `null` is returned if it’s not being stopped.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnvironmentStoppingStatus(const TemEnvironmentStoppingStatus& _environmentStoppingStatus);

                    /**
                     * 判断参数 EnvironmentStoppingStatus 是否已赋值
                     * @return EnvironmentStoppingStatus 是否已赋值
                     * 
                     */
                    bool EnvironmentStoppingStatusHasBeenSet() const;

                private:

                    /**
                     * ID of the environment
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Environment name
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * TCB envId | EKS clusterId
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Environment status
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * Whether the environment is being started. `null` is returned if it’s not being started.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    TemEnvironmentStartingStatus m_environmentStartingStatus;
                    bool m_environmentStartingStatusHasBeenSet;

                    /**
                     * Whether the environment is being stopped. `null` is returned if it’s not being stopped.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    TemEnvironmentStoppingStatus m_environmentStoppingStatus;
                    bool m_environmentStoppingStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACESTATUSINFO_H_
