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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_TRANSITION_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_TRANSITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * Lifecycle rule transition attribute
                */
                class Transition : public AbstractModel
                {
                public:
                    Transition();
                    ~Transition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Trigger time (in days)
                     * @return Days Trigger time (in days)
                     */
                    uint64_t GetDays() const;

                    /**
                     * 设置Trigger time (in days)
                     * @param Days Trigger time (in days)
                     */
                    void SetDays(const uint64_t& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取Transition type (`1`: transition to ARCHIVE; `2`: delete; `3`: transition to STANDARD_IA)
                     * @return Type Transition type (`1`: transition to ARCHIVE; `2`: delete; `3`: transition to STANDARD_IA)
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Transition type (`1`: transition to ARCHIVE; `2`: delete; `3`: transition to STANDARD_IA)
                     * @param Type Transition type (`1`: transition to ARCHIVE; `2`: delete; `3`: transition to STANDARD_IA)
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Trigger time (in days)
                     */
                    uint64_t m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * Transition type (`1`: transition to ARCHIVE; `2`: delete; `3`: transition to STANDARD_IA)
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_TRANSITION_H_
