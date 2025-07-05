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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SLAUPDATEPARAM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SLAUPDATEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Parameters for upgrading to an LCU-supported instance
                */
                class SlaUpdateParam : public AbstractModel
                {
                public:
                    SlaUpdateParam();
                    ~SlaUpdateParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the CLB instance
                     * @return LoadBalancerId ID of the CLB instance
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the CLB instance
                     * @param _loadBalancerId ID of the CLB instance
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取Specification of the LCU-supported instance. Valid values:<li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li> For specification details, see [Instance Specifications Comparison](https://intl.cloud.tencent.com/document/product/214/84689?from_cn_redirect=1).
                     * @return SlaType Specification of the LCU-supported instance. Valid values:<li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li> For specification details, see [Instance Specifications Comparison](https://intl.cloud.tencent.com/document/product/214/84689?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置Specification of the LCU-supported instance. Valid values:<li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li> For specification details, see [Instance Specifications Comparison](https://intl.cloud.tencent.com/document/product/214/84689?from_cn_redirect=1).
                     * @param _slaType Specification of the LCU-supported instance. Valid values:<li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li> For specification details, see [Instance Specifications Comparison](https://intl.cloud.tencent.com/document/product/214/84689?from_cn_redirect=1).
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                private:

                    /**
                     * ID of the CLB instance
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Specification of the LCU-supported instance. Valid values:<li> clb.c2.medium: Standard </li><li> clb.c3.small: Advanced 1 </li><li> clb.c3.medium: Advanced 2 </li><li> clb.c4.small: Super Large 1 </li><li> clb.c4.medium: Super Large 2 </li><li> clb.c4.large: Super Large 3 </li><li> clb.c4.xlarge: Super Large 4 </li> For specification details, see [Instance Specifications Comparison](https://intl.cloud.tencent.com/document/product/214/84689?from_cn_redirect=1).
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SLAUPDATEPARAM_H_
