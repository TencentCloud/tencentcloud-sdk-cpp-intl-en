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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPINSTANCE_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * Target group instance
                */
                class TargetGroupInstance : public AbstractModel
                {
                public:
                    TargetGroupInstance();
                    ~TargetGroupInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private network IP of target group instance.
                     * @return BindIP Private network IP of target group instance.
                     * 
                     */
                    std::string GetBindIP() const;

                    /**
                     * 设置Private network IP of target group instance.
                     * @param _bindIP Private network IP of target group instance.
                     * 
                     */
                    void SetBindIP(const std::string& _bindIP);

                    /**
                     * 判断参数 BindIP 是否已赋值
                     * @return BindIP 是否已赋值
                     * 
                     */
                    bool BindIPHasBeenSet() const;

                    /**
                     * 获取Port of target group instance. Only 6081 is supported.
                     * @return Port Port of target group instance. Only 6081 is supported.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port of target group instance. Only 6081 is supported.
                     * @param _port Port of target group instance. Only 6081 is supported.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Weight of target group instance. Only 0 or 16 is supported, and non-0 is uniformly treated as 16.
                     * @return Weight Weight of target group instance. Only 0 or 16 is supported, and non-0 is uniformly treated as 16.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Weight of target group instance. Only 0 or 16 is supported, and non-0 is uniformly treated as 16.
                     * @param _weight Weight of target group instance. Only 0 or 16 is supported, and non-0 is uniformly treated as 16.
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * Private network IP of target group instance.
                     */
                    std::string m_bindIP;
                    bool m_bindIPHasBeenSet;

                    /**
                     * Port of target group instance. Only 6081 is supported.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Weight of target group instance. Only 0 or 16 is supported, and non-0 is uniformly treated as 16.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPINSTANCE_H_
