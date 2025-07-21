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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_TARGETATTRIBUTE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_TARGETATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Load balancer target attribute
                */
                class TargetAttribute : public AbstractModel
                {
                public:
                    TargetAttribute();
                    ~TargetAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Port. value range: [1,65535]. as an input parameter, this parameter is required.
                     * @return Port Port. value range: [1,65535]. as an input parameter, this parameter is required.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port. value range: [1,65535]. as an input parameter, this parameter is required.
                     * @param _port Port. value range: [1,65535]. as an input parameter, this parameter is required.
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
                     * 获取Weight. value range: [0,100]. this parameter is required as an input parameter.
                     * @return Weight Weight. value range: [0,100]. this parameter is required as an input parameter.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Weight. value range: [0,100]. this parameter is required as an input parameter.
                     * @param _weight Weight. value range: [0,100]. this parameter is required as an input parameter.
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
                     * Port. value range: [1,65535]. as an input parameter, this parameter is required.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Weight. value range: [0,100]. this parameter is required as an input parameter.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_TARGETATTRIBUTE_H_
