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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MAXAGE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MAXAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MaxAgeRule.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Browser cache rule configuration, which is used to set the default value of MaxAge and is disabled by default.
                */
                class MaxAge : public AbstractModel
                {
                public:
                    MaxAge();
                    ~MaxAge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MaxAge rule
                     * @return MaxAgeRules MaxAge rule
                     * 
                     */
                    std::vector<MaxAgeRule> GetMaxAgeRules() const;

                    /**
                     * 设置MaxAge rule
                     * @param _maxAgeRules MaxAge rule
                     * 
                     */
                    void SetMaxAgeRules(const std::vector<MaxAgeRule>& _maxAgeRules);

                    /**
                     * 判断参数 MaxAgeRules 是否已赋值
                     * @return MaxAgeRules 是否已赋值
                     * 
                     */
                    bool MaxAgeRulesHasBeenSet() const;

                private:

                    /**
                     * MaxAge rule
                     */
                    std::vector<MaxAgeRule> m_maxAgeRules;
                    bool m_maxAgeRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MAXAGE_H_
