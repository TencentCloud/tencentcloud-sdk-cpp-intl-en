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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLSLOGCONFIGREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLSLOGCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateCLSLogConfig request structure.
                */
                class CreateCLSLogConfigRequest : public AbstractModel
                {
                public:
                    CreateCLSLogConfigRequest();
                    ~CreateCLSLogConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log collection configuration in json form
                     * @return LogConfig Log collection configuration in json form
                     * 
                     */
                    std::string GetLogConfig() const;

                    /**
                     * 设置Log collection configuration in json form
                     * @param _logConfig Log collection configuration in json form
                     * 
                     */
                    void SetLogConfig(const std::string& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     * 
                     */
                    bool LogConfigHasBeenSet() const;

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
                     * 获取CLS Logset ID
                     * @return LogsetId CLS Logset ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置CLS Logset ID
                     * @param _logsetId CLS Logset ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Current cluster types support tke, eks.
                     * @return ClusterType Current cluster types support tke, eks.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Current cluster types support tke, eks.
                     * @param _clusterType Current cluster types support tke, eks.
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * Log collection configuration in json form
                     */
                    std::string m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * CLS Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Current cluster types support tke, eks.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLSLOGCONFIGREQUEST_H_
