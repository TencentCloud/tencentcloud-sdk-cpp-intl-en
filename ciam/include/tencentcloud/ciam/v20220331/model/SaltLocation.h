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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_SALTLOCATION_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_SALTLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/SaltLocationRule.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * Salt location
                */
                class SaltLocation : public AbstractModel
                {
                public:
                    SaltLocation();
                    ~SaltLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Password salt type. Valid values: `HEAD`, `TAIL`, `OTHER`.
                     * @return SaltLocationTypeEnum Password salt type. Valid values: `HEAD`, `TAIL`, `OTHER`.
                     * 
                     */
                    std::string GetSaltLocationTypeEnum() const;

                    /**
                     * 设置Password salt type. Valid values: `HEAD`, `TAIL`, `OTHER`.
                     * @param _saltLocationTypeEnum Password salt type. Valid values: `HEAD`, `TAIL`, `OTHER`.
                     * 
                     */
                    void SetSaltLocationTypeEnum(const std::string& _saltLocationTypeEnum);

                    /**
                     * 判断参数 SaltLocationTypeEnum 是否已赋值
                     * @return SaltLocationTypeEnum 是否已赋值
                     * 
                     */
                    bool SaltLocationTypeEnumHasBeenSet() const;

                    /**
                     * 获取Salting rule
                     * @return SaltLocationRule Salting rule
                     * 
                     */
                    SaltLocationRule GetSaltLocationRule() const;

                    /**
                     * 设置Salting rule
                     * @param _saltLocationRule Salting rule
                     * 
                     */
                    void SetSaltLocationRule(const SaltLocationRule& _saltLocationRule);

                    /**
                     * 判断参数 SaltLocationRule 是否已赋值
                     * @return SaltLocationRule 是否已赋值
                     * 
                     */
                    bool SaltLocationRuleHasBeenSet() const;

                private:

                    /**
                     * Password salt type. Valid values: `HEAD`, `TAIL`, `OTHER`.
                     */
                    std::string m_saltLocationTypeEnum;
                    bool m_saltLocationTypeEnumHasBeenSet;

                    /**
                     * Salting rule
                     */
                    SaltLocationRule m_saltLocationRule;
                    bool m_saltLocationRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_SALTLOCATION_H_
