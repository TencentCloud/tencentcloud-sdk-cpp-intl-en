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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSREQUEST_H_

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
                * DescribeClusterConfigs request structure.
                */
                class DescribeClusterConfigsRequest : public AbstractModel
                {
                public:
                    DescribeClusterConfigsRequest();
                    ~DescribeClusterConfigsRequest() = default;
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
                     * 获取0 indicates public cloud query, and 1 Qinge query. Qinge query shows all that needs to be displayed.
                     * @return ConfigType 0 indicates public cloud query, and 1 Qinge query. Qinge query shows all that needs to be displayed.
                     * 
                     */
                    int64_t GetConfigType() const;

                    /**
                     * 设置0 indicates public cloud query, and 1 Qinge query. Qinge query shows all that needs to be displayed.
                     * @param _configType 0 indicates public cloud query, and 1 Qinge query. Qinge query shows all that needs to be displayed.
                     * 
                     */
                    void SetConfigType(const int64_t& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     * 
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取Search for files with fuzzy keywords
                     * @return FileName Search for files with fuzzy keywords
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Search for files with fuzzy keywords
                     * @param _fileName Search for files with fuzzy keywords
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取0 indicates cluster dimension and 1 node dimension
                     * @return ClusterConfigType 0 indicates cluster dimension and 1 node dimension
                     * 
                     */
                    int64_t GetClusterConfigType() const;

                    /**
                     * 设置0 indicates cluster dimension and 1 node dimension
                     * @param _clusterConfigType 0 indicates cluster dimension and 1 node dimension
                     * 
                     */
                    void SetClusterConfigType(const int64_t& _clusterConfigType);

                    /**
                     * 判断参数 ClusterConfigType 是否已赋值
                     * @return ClusterConfigType 是否已赋值
                     * 
                     */
                    bool ClusterConfigTypeHasBeenSet() const;

                    /**
                     * 获取eth0's IP address
                     * @return IPAddress eth0's IP address
                     * 
                     */
                    std::string GetIPAddress() const;

                    /**
                     * 设置eth0's IP address
                     * @param _iPAddress eth0's IP address
                     * 
                     */
                    void SetIPAddress(const std::string& _iPAddress);

                    /**
                     * 判断参数 IPAddress 是否已赋值
                     * @return IPAddress 是否已赋值
                     * 
                     */
                    bool IPAddressHasBeenSet() const;

                private:

                    /**
                     * Cluster instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 0 indicates public cloud query, and 1 Qinge query. Qinge query shows all that needs to be displayed.
                     */
                    int64_t m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * Search for files with fuzzy keywords
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 0 indicates cluster dimension and 1 node dimension
                     */
                    int64_t m_clusterConfigType;
                    bool m_clusterConfigTypeHasBeenSet;

                    /**
                     * eth0's IP address
                     */
                    std::string m_iPAddress;
                    bool m_iPAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSREQUEST_H_
