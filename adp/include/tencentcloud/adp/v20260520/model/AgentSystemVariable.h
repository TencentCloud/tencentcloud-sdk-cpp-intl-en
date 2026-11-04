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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSYSTEMVARIABLE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSYSTEMVARIABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * System parameters
                */
                class AgentSystemVariable : public AbstractModel
                {
                public:
                    AgentSystemVariable();
                    ~AgentSystemVariable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>System parameter name</p>
                     * @return Name <p>System parameter name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>System parameter name</p>
                     * @param _name <p>System parameter name</p>
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
                     * 获取<p>Configuration of dialogue history rounds; used only when Input is "dialogue history" in system variables;</p>
                     * @return DialogHistoryLimit <p>Configuration of dialogue history rounds; used only when Input is "dialogue history" in system variables;</p>
                     * 
                     */
                    int64_t GetDialogHistoryLimit() const;

                    /**
                     * 设置<p>Configuration of dialogue history rounds; used only when Input is "dialogue history" in system variables;</p>
                     * @param _dialogHistoryLimit <p>Configuration of dialogue history rounds; used only when Input is "dialogue history" in system variables;</p>
                     * 
                     */
                    void SetDialogHistoryLimit(const int64_t& _dialogHistoryLimit);

                    /**
                     * 判断参数 DialogHistoryLimit 是否已赋值
                     * @return DialogHistoryLimit 是否已赋值
                     * 
                     */
                    bool DialogHistoryLimitHasBeenSet() const;

                private:

                    /**
                     * <p>System parameter name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Configuration of dialogue history rounds; used only when Input is "dialogue history" in system variables;</p>
                     */
                    int64_t m_dialogHistoryLimit;
                    bool m_dialogHistoryLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTSYSTEMVARIABLE_H_
