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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECUSTOMITEMCONF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECUSTOMITEMCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Configuration item for overriding the built-in detection item with a custom value in a policy.
                */
                class BaselineCustomItemConf : public AbstractModel
                {
                public:
                    BaselineCustomItemConf();
                    ~BaselineCustomItemConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Built-in detection item rule ID. Either this or CustomItemID needs to be imported.</p>
                     * @return RuleID <p>Built-in detection item rule ID. Either this or CustomItemID needs to be imported.</p>
                     * 
                     */
                    uint64_t GetRuleID() const;

                    /**
                     * 设置<p>Built-in detection item rule ID. Either this or CustomItemID needs to be imported.</p>
                     * @param _ruleID <p>Built-in detection item rule ID. Either this or CustomItemID needs to be imported.</p>
                     * 
                     */
                    void SetRuleID(const uint64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>User-defined judgment value list, which must comply with the value constraints defined by the detection item WebEditParam.</p>
                     * @return CustomValueList <p>User-defined judgment value list, which must comply with the value constraints defined by the detection item WebEditParam.</p>
                     * 
                     */
                    std::vector<std::string> GetCustomValueList() const;

                    /**
                     * 设置<p>User-defined judgment value list, which must comply with the value constraints defined by the detection item WebEditParam.</p>
                     * @param _customValueList <p>User-defined judgment value list, which must comply with the value constraints defined by the detection item WebEditParam.</p>
                     * 
                     */
                    void SetCustomValueList(const std::vector<std::string>& _customValueList);

                    /**
                     * 判断参数 CustomValueList 是否已赋值
                     * @return CustomValueList 是否已赋值
                     * 
                     */
                    bool CustomValueListHasBeenSet() const;

                    /**
                     * 获取<p>Existing custom configuration ID. It can be omitted when projects are added and is filled in when editing.</p>
                     * @return CustomItemID <p>Existing custom configuration ID. It can be omitted when projects are added and is filled in when editing.</p>
                     * 
                     */
                    uint64_t GetCustomItemID() const;

                    /**
                     * 设置<p>Existing custom configuration ID. It can be omitted when projects are added and is filled in when editing.</p>
                     * @param _customItemID <p>Existing custom configuration ID. It can be omitted when projects are added and is filled in when editing.</p>
                     * 
                     */
                    void SetCustomItemID(const uint64_t& _customItemID);

                    /**
                     * 判断参数 CustomItemID 是否已赋值
                     * @return CustomItemID 是否已赋值
                     * 
                     */
                    bool CustomItemIDHasBeenSet() const;

                private:

                    /**
                     * <p>Built-in detection item rule ID. Either this or CustomItemID needs to be imported.</p>
                     */
                    uint64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>User-defined judgment value list, which must comply with the value constraints defined by the detection item WebEditParam.</p>
                     */
                    std::vector<std::string> m_customValueList;
                    bool m_customValueListHasBeenSet;

                    /**
                     * <p>Existing custom configuration ID. It can be omitted when projects are added and is filled in when editing.</p>
                     */
                    uint64_t m_customItemID;
                    bool m_customItemIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECUSTOMITEMCONF_H_
