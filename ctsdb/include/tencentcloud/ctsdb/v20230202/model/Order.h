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

#ifndef TENCENTCLOUD_CTSDB_V20230202_MODEL_ORDER_H_
#define TENCENTCLOUD_CTSDB_V20230202_MODEL_ORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctsdb
    {
        namespace V20230202
        {
            namespace Model
            {
                /**
                * Sorting parameter, which is used for sorting the query results.
                */
                class Order : public AbstractModel
                {
                public:
                    Order();
                    ~Order() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sorting field.
                     * @return Name Sorting field.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Sorting field.
                     * @param _name Sorting field.
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
                     * 获取Sorting method.
                     * @return Type Sorting method.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Sorting method.
                     * @param _type Sorting method.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Sorting field.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Sorting method.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTSDB_V20230202_MODEL_ORDER_H_
