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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_INTENTACHIEVEMENT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_INTENTACHIEVEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Method to attain the intent
                */
                class IntentAchievement : public AbstractModel
                {
                public:
                    IntentAchievement();
                    ~IntentAchievement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intent attainment method. `qa`: QA reply, `doc`: document reply, `workflow`: workflow reply, `llm`: large model reply.
                     * @return Name Intent attainment method. `qa`: QA reply, `doc`: document reply, `workflow`: workflow reply, `llm`: large model reply.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Intent attainment method. `qa`: QA reply, `doc`: document reply, `workflow`: workflow reply, `llm`: large model reply.
                     * @param _name Intent attainment method. `qa`: QA reply, `doc`: document reply, `workflow`: workflow reply, `llm`: large model reply.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description of the method to attain the intent
                     * @return Desc Description of the method to attain the intent
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description of the method to attain the intent
                     * @param _desc Description of the method to attain the intent
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * Intent attainment method. `qa`: QA reply, `doc`: document reply, `workflow`: workflow reply, `llm`: large model reply.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of the method to attain the intent
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_INTENTACHIEVEMENT_H_
