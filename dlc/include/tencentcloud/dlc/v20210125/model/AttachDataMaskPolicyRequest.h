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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ATTACHDATAMASKPOLICYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ATTACHDATAMASKPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataMaskStrategyPolicy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * AttachDataMaskPolicy request structure.
                */
                class AttachDataMaskPolicyRequest : public AbstractModel
                {
                public:
                    AttachDataMaskPolicyRequest();
                    ~AttachDataMaskPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Collection of DMask permission objects that should be bound.
                     * @return DataMaskStrategyPolicySet Collection of DMask permission objects that should be bound.
                     * 
                     */
                    std::vector<DataMaskStrategyPolicy> GetDataMaskStrategyPolicySet() const;

                    /**
                     * 设置Collection of DMask permission objects that should be bound.
                     * @param _dataMaskStrategyPolicySet Collection of DMask permission objects that should be bound.
                     * 
                     */
                    void SetDataMaskStrategyPolicySet(const std::vector<DataMaskStrategyPolicy>& _dataMaskStrategyPolicySet);

                    /**
                     * 判断参数 DataMaskStrategyPolicySet 是否已赋值
                     * @return DataMaskStrategyPolicySet 是否已赋值
                     * 
                     */
                    bool DataMaskStrategyPolicySetHasBeenSet() const;

                private:

                    /**
                     * Collection of DMask permission objects that should be bound.
                     */
                    std::vector<DataMaskStrategyPolicy> m_dataMaskStrategyPolicySet;
                    bool m_dataMaskStrategyPolicySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ATTACHDATAMASKPOLICYREQUEST_H_
