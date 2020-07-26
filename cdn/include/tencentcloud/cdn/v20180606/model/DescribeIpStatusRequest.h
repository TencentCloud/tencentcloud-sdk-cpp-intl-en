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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPSTATUSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeIpStatus request structure.
                */
                class DescribeIpStatusRequest : public AbstractModel
                {
                public:
                    DescribeIpStatusRequest();
                    ~DescribeIpStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Acceleration domain name
                     * @return Domain Acceleration domain name
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Acceleration domain name
                     * @param Domain Acceleration domain name
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Node type.
edge: edge server
last: intermediate server
If this parameter is left empty, edge server information will be returned by default
                     * @return Layer Node type.
edge: edge server
last: intermediate server
If this parameter is left empty, edge server information will be returned by default
                     */
                    std::string GetLayer() const;

                    /**
                     * 设置Node type.
edge: edge server
last: intermediate server
If this parameter is left empty, edge server information will be returned by default
                     * @param Layer Node type.
edge: edge server
last: intermediate server
If this parameter is left empty, edge server information will be returned by default
                     */
                    void SetLayer(const std::string& _layer);

                    /**
                     * 判断参数 Layer 是否已赋值
                     * @return Layer 是否已赋值
                     */
                    bool LayerHasBeenSet() const;

                private:

                    /**
                     * Acceleration domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Node type.
edge: edge server
last: intermediate server
If this parameter is left empty, edge server information will be returned by default
                     */
                    std::string m_layer;
                    bool m_layerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEIPSTATUSREQUEST_H_
