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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERINTERNALLB_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERINTERNALLB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Edge compute cluster private LB information
                */
                class EdgeClusterInternalLB : public AbstractModel
                {
                public:
                    EdgeClusterInternalLB();
                    ~EdgeClusterInternalLB() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the private LB is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Enabled Whether the private LB is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether the private LB is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _enabled Whether the private LB is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取ID of the subnet associated with the private LB
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SubnetId ID of the subnet associated with the private LB
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSubnetId() const;

                    /**
                     * 设置ID of the subnet associated with the private LB
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _subnetId ID of the subnet associated with the private LB
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnetId(const std::vector<std::string>& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * Whether the private LB is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * ID of the subnet associated with the private LB
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERINTERNALLB_H_
