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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERPUBLICLB_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERPUBLICLB_H_

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
                * Edge compute cluster public LB information
                */
                class EdgeClusterPublicLB : public AbstractModel
                {
                public:
                    EdgeClusterPublicLB();
                    ~EdgeClusterPublicLB() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the public LB is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Enabled Whether the public LB is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether the public LB is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Enabled Whether the public LB is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Public network CIDR block allowed to access
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AllowFromCidrs Public network CIDR block allowed to access
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetAllowFromCidrs() const;

                    /**
                     * 设置Public network CIDR block allowed to access
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param AllowFromCidrs Public network CIDR block allowed to access
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAllowFromCidrs(const std::vector<std::string>& _allowFromCidrs);

                    /**
                     * 判断参数 AllowFromCidrs 是否已赋值
                     * @return AllowFromCidrs 是否已赋值
                     */
                    bool AllowFromCidrsHasBeenSet() const;

                private:

                    /**
                     * Whether the public LB is enabled
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Public network CIDR block allowed to access
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_allowFromCidrs;
                    bool m_allowFromCidrsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERPUBLICLB_H_
