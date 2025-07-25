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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_L4RULESOURCE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_L4RULESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Layer-4 forwarding rule list
                */
                class L4RuleSource : public AbstractModel
                {
                public:
                    L4RuleSource();
                    ~L4RuleSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intermediate IP or domain name
                     * @return Source Intermediate IP or domain name
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Intermediate IP or domain name
                     * @param _source Intermediate IP or domain name
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Weight value. Value range: [0,100]
                     * @return Weight Weight value. Value range: [0,100]
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Weight value. Value range: [0,100]
                     * @param _weight Weight value. Value range: [0,100]
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
                     * Intermediate IP or domain name
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Weight value. Value range: [0,100]
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_L4RULESOURCE_H_
