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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_ATTRIBUTEITEM_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_ATTRIBUTEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Face attribute information
                */
                class AttributeItem : public AbstractModel
                {
                public:
                    AttributeItem();
                    ~AttributeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attribute value
                     * @return Type Attribute value
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Attribute value
                     * @param _type Attribute value
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Probability of recognizing `Type`, which indicates the probability of correct recognition. Value range: [0,1].
                     * @return Probability Probability of recognizing `Type`, which indicates the probability of correct recognition. Value range: [0,1].
                     * 
                     */
                    double GetProbability() const;

                    /**
                     * 设置Probability of recognizing `Type`, which indicates the probability of correct recognition. Value range: [0,1].
                     * @param _probability Probability of recognizing `Type`, which indicates the probability of correct recognition. Value range: [0,1].
                     * 
                     */
                    void SetProbability(const double& _probability);

                    /**
                     * 判断参数 Probability 是否已赋值
                     * @return Probability 是否已赋值
                     * 
                     */
                    bool ProbabilityHasBeenSet() const;

                private:

                    /**
                     * Attribute value
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Probability of recognizing `Type`, which indicates the probability of correct recognition. Value range: [0,1].
                     */
                    double m_probability;
                    bool m_probabilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_ATTRIBUTEITEM_H_
