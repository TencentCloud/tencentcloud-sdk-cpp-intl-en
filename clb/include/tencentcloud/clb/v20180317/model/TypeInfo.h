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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TYPEINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/SpecAvailability.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ISP Type
                */
                class TypeInfo : public AbstractModel
                {
                public:
                    TypeInfo();
                    ~TypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operator type.
                     * @return Type Operator type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Operator type.
                     * @param _type Operator type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Specification availability.
                     * @return SpecAvailabilitySet Specification availability.
                     * 
                     */
                    std::vector<SpecAvailability> GetSpecAvailabilitySet() const;

                    /**
                     * 设置Specification availability.
                     * @param _specAvailabilitySet Specification availability.
                     * 
                     */
                    void SetSpecAvailabilitySet(const std::vector<SpecAvailability>& _specAvailabilitySet);

                    /**
                     * 判断参数 SpecAvailabilitySet 是否已赋值
                     * @return SpecAvailabilitySet 是否已赋值
                     * 
                     */
                    bool SpecAvailabilitySetHasBeenSet() const;

                private:

                    /**
                     * Operator type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Specification availability.
                     */
                    std::vector<SpecAvailability> m_specAvailabilitySet;
                    bool m_specAvailabilitySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TYPEINFO_H_
