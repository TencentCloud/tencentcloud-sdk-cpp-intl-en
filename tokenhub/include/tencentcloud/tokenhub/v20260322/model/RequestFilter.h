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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_REQUESTFILTER_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_REQUESTFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Filter criteria
                */
                class RequestFilter : public AbstractModel
                {
                public:
                    RequestFilter();
                    ~RequestFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter field name.
                     * @return Name Filter field name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filter field name.
                     * @param _name Filter field name.
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
                     * 获取Filter operator. Values: EXACT (exact match), FUZZY (fuzzy matching), NOT (exclusion).
                     * @return Op Filter operator. Values: EXACT (exact match), FUZZY (fuzzy matching), NOT (exclusion).
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置Filter operator. Values: EXACT (exact match), FUZZY (fuzzy matching), NOT (exclusion).
                     * @param _op Filter operator. Values: EXACT (exact match), FUZZY (fuzzy matching), NOT (exclusion).
                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

                    /**
                     * 获取Filter value list. Supports up to 10.
                     * @return Values Filter value list. Supports up to 10.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Filter value list. Supports up to 10.
                     * @param _values Filter value list. Supports up to 10.
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Filter field name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Filter operator. Values: EXACT (exact match), FUZZY (fuzzy matching), NOT (exclusion).
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * Filter value list. Supports up to 10.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_REQUESTFILTER_H_
