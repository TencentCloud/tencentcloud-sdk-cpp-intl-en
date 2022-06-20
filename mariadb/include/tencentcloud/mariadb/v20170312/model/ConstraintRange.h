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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_CONSTRAINTRANGE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_CONSTRAINTRANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Range of constraint type values
                */
                class ConstraintRange : public AbstractModel
                {
                public:
                    ConstraintRange();
                    ~ConstraintRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Minimum value when the constraint type is `section`
                     * @return Min Minimum value when the constraint type is `section`
                     */
                    std::string GetMin() const;

                    /**
                     * 设置Minimum value when the constraint type is `section`
                     * @param Min Minimum value when the constraint type is `section`
                     */
                    void SetMin(const std::string& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Maximum value when the constraint type is `section`
                     * @return Max Maximum value when the constraint type is `section`
                     */
                    std::string GetMax() const;

                    /**
                     * 设置Maximum value when the constraint type is `section`
                     * @param Max Maximum value when the constraint type is `section`
                     */
                    void SetMax(const std::string& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     */
                    bool MaxHasBeenSet() const;

                private:

                    /**
                     * Minimum value when the constraint type is `section`
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Maximum value when the constraint type is `section`
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_CONSTRAINTRANGE_H_
