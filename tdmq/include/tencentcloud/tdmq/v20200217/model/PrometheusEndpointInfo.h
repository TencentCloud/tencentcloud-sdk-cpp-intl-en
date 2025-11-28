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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PROMETHEUSENDPOINTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PROMETHEUSENDPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcEndpointInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 
                */
                class PrometheusEndpointInfo : public AbstractModel
                {
                public:
                    PrometheusEndpointInfo();
                    ~PrometheusEndpointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return PrometheusEndpointStatus 
                     * 
                     */
                    std::string GetPrometheusEndpointStatus() const;

                    /**
                     * 设置
                     * @param _prometheusEndpointStatus 
                     * 
                     */
                    void SetPrometheusEndpointStatus(const std::string& _prometheusEndpointStatus);

                    /**
                     * 判断参数 PrometheusEndpointStatus 是否已赋值
                     * @return PrometheusEndpointStatus 是否已赋值
                     * 
                     */
                    bool PrometheusEndpointStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return VpcPrometheusEndpoint 
                     * 
                     */
                    std::vector<std::string> GetVpcPrometheusEndpoint() const;

                    /**
                     * 设置
                     * @param _vpcPrometheusEndpoint 
                     * 
                     */
                    void SetVpcPrometheusEndpoint(const std::vector<std::string>& _vpcPrometheusEndpoint);

                    /**
                     * 判断参数 VpcPrometheusEndpoint 是否已赋值
                     * @return VpcPrometheusEndpoint 是否已赋值
                     * 
                     */
                    bool VpcPrometheusEndpointHasBeenSet() const;

                    /**
                     * 获取
                     * @return NodePrometheusAddress 
                     * 
                     */
                    std::vector<std::string> GetNodePrometheusAddress() const;

                    /**
                     * 设置
                     * @param _nodePrometheusAddress 
                     * 
                     */
                    void SetNodePrometheusAddress(const std::vector<std::string>& _nodePrometheusAddress);

                    /**
                     * 判断参数 NodePrometheusAddress 是否已赋值
                     * @return NodePrometheusAddress 是否已赋值
                     * 
                     */
                    bool NodePrometheusAddressHasBeenSet() const;

                    /**
                     * 获取
                     * @return VpcEndpointInfo 
                     * 
                     */
                    VpcEndpointInfo GetVpcEndpointInfo() const;

                    /**
                     * 设置
                     * @param _vpcEndpointInfo 
                     * 
                     */
                    void SetVpcEndpointInfo(const VpcEndpointInfo& _vpcEndpointInfo);

                    /**
                     * 判断参数 VpcEndpointInfo 是否已赋值
                     * @return VpcEndpointInfo 是否已赋值
                     * 
                     */
                    bool VpcEndpointInfoHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_prometheusEndpointStatus;
                    bool m_prometheusEndpointStatusHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_vpcPrometheusEndpoint;
                    bool m_vpcPrometheusEndpointHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_nodePrometheusAddress;
                    bool m_nodePrometheusAddressHasBeenSet;

                    /**
                     * 
                     */
                    VpcEndpointInfo m_vpcEndpointInfo;
                    bool m_vpcEndpointInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PROMETHEUSENDPOINTINFO_H_
