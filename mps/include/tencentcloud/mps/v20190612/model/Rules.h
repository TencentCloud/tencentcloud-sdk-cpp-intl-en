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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RULES_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RuleConditionItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Task judgment conditions.
                */
                class Rules : public AbstractModel
                {
                public:
                    Rules();
                    ~Rules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Judgment condition ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Id Judgment condition ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Judgment condition ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _id Judgment condition ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Judgment condition configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Conditions Judgment condition configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RuleConditionItem> GetConditions() const;

                    /**
                     * 设置Judgment condition configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _conditions Judgment condition configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetConditions(const std::vector<RuleConditionItem>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取Logical operator for the list of conditions. Valid values:

 - &&: logical AND
 - ||: logical OR
                     * @return Linker Logical operator for the list of conditions. Valid values:

 - &&: logical AND
 - ||: logical OR
                     * 
                     */
                    std::string GetLinker() const;

                    /**
                     * 设置Logical operator for the list of conditions. Valid values:

 - &&: logical AND
 - ||: logical OR
                     * @param _linker Logical operator for the list of conditions. Valid values:

 - &&: logical AND
 - ||: logical OR
                     * 
                     */
                    void SetLinker(const std::string& _linker);

                    /**
                     * 判断参数 Linker 是否已赋值
                     * @return Linker 是否已赋值
                     * 
                     */
                    bool LinkerHasBeenSet() const;

                    /**
                     * 获取Indexes of the nodes to execute if the judgment conditions are met.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RearDriveIndexs Indexes of the nodes to execute if the judgment conditions are met.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetRearDriveIndexs() const;

                    /**
                     * 设置Indexes of the nodes to execute if the judgment conditions are met.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _rearDriveIndexs Indexes of the nodes to execute if the judgment conditions are met.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRearDriveIndexs(const std::vector<int64_t>& _rearDriveIndexs);

                    /**
                     * 判断参数 RearDriveIndexs 是否已赋值
                     * @return RearDriveIndexs 是否已赋值
                     * 
                     */
                    bool RearDriveIndexsHasBeenSet() const;

                private:

                    /**
                     * Judgment condition ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Judgment condition configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<RuleConditionItem> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * Logical operator for the list of conditions. Valid values:

 - &&: logical AND
 - ||: logical OR
                     */
                    std::string m_linker;
                    bool m_linkerHasBeenSet;

                    /**
                     * Indexes of the nodes to execute if the judgment conditions are met.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_rearDriveIndexs;
                    bool m_rearDriveIndexsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RULES_H_
