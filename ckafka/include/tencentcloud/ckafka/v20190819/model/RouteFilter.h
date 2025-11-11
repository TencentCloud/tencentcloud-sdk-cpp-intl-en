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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTEFILTER_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Routing list filter.
                */
                class RouteFilter : public AbstractModel
                {
                public:
                    RouteFilter();
                    ~RouteFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filters by name. currently supports security-group-id. filters by security group association.
                     * @return Name Filters by name. currently supports security-group-id. filters by security group association.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filters by name. currently supports security-group-id. filters by security group association.
                     * @param _name Filters by name. currently supports security-group-id. filters by security group association.
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
                     * 获取Filter value. when the filter name is security-group-id, only supports transmission of one value.
                     * @return Values Filter value. when the filter name is security-group-id, only supports transmission of one value.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Filter value. when the filter name is security-group-id, only supports transmission of one value.
                     * @param _values Filter value. when the filter name is security-group-id, only supports transmission of one value.
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取Filter relationship. supports IN and NOT_IN. default is IN.
                     * @return Relation Filter relationship. supports IN and NOT_IN. default is IN.
                     * 
                     */
                    std::string GetRelation() const;

                    /**
                     * 设置Filter relationship. supports IN and NOT_IN. default is IN.
                     * @param _relation Filter relationship. supports IN and NOT_IN. default is IN.
                     * 
                     */
                    void SetRelation(const std::string& _relation);

                    /**
                     * 判断参数 Relation 是否已赋值
                     * @return Relation 是否已赋值
                     * 
                     */
                    bool RelationHasBeenSet() const;

                private:

                    /**
                     * Filters by name. currently supports security-group-id. filters by security group association.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Filter value. when the filter name is security-group-id, only supports transmission of one value.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Filter relationship. supports IN and NOT_IN. default is IN.
                     */
                    std::string m_relation;
                    bool m_relationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTEFILTER_H_
