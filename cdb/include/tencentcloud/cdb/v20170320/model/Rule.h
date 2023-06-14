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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_RULE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Weight rule
                */
                class Rule : public AbstractModel
                {
                public:
                    Rule();
                    ~Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The maximum weight
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return LessThan The maximum weight
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    uint64_t GetLessThan() const;

                    /**
                     * 设置The maximum weight
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _lessThan The maximum weight
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetLessThan(const uint64_t& _lessThan);

                    /**
                     * 判断参数 LessThan 是否已赋值
                     * @return LessThan 是否已赋值
                     * 
                     */
                    bool LessThanHasBeenSet() const;

                    /**
                     * 获取Weight
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Weight Weight
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Weight
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _weight Weight
Note: this field may return `null`, indicating that no valid value can be found.
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
                     * The maximum weight
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_lessThan;
                    bool m_lessThanHasBeenSet;

                    /**
                     * Weight
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_RULE_H_
