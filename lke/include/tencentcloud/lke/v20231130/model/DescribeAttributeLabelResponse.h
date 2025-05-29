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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEATTRIBUTELABELRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEATTRIBUTELABELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttributeLabel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeAttributeLabel response structure.
                */
                class DescribeAttributeLabelResponse : public AbstractModel
                {
                public:
                    DescribeAttributeLabelResponse();
                    ~DescribeAttributeLabelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Attribute ID.
                     * @return AttributeBizId Attribute ID.
                     * 
                     */
                    std::string GetAttributeBizId() const;

                    /**
                     * 判断参数 AttributeBizId 是否已赋值
                     * @return AttributeBizId 是否已赋值
                     * 
                     */
                    bool AttributeBizIdHasBeenSet() const;

                    /**
                     * 获取Attribute identifier.
                     * @return AttrKey Attribute identifier.
                     * 
                     */
                    std::string GetAttrKey() const;

                    /**
                     * 判断参数 AttrKey 是否已赋值
                     * @return AttrKey 是否已赋值
                     * 
                     */
                    bool AttrKeyHasBeenSet() const;

                    /**
                     * 获取Attribute name.
                     * @return AttrName Attribute name.
                     * 
                     */
                    std::string GetAttrName() const;

                    /**
                     * 判断参数 AttrName 是否已赋值
                     * @return AttrName 是否已赋值
                     * 
                     */
                    bool AttrNameHasBeenSet() const;

                    /**
                     * 获取Quantity of labels.
                     * @return LabelNumber Quantity of labels.
                     * 
                     */
                    std::string GetLabelNumber() const;

                    /**
                     * 判断参数 LabelNumber 是否已赋值
                     * @return LabelNumber 是否已赋值
                     * 
                     */
                    bool LabelNumberHasBeenSet() const;

                    /**
                     * 获取Label name.
                     * @return Labels Label name.
                     * 
                     */
                    std::vector<AttributeLabel> GetLabels() const;

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * Attribute ID.
                     */
                    std::string m_attributeBizId;
                    bool m_attributeBizIdHasBeenSet;

                    /**
                     * Attribute identifier.
                     */
                    std::string m_attrKey;
                    bool m_attrKeyHasBeenSet;

                    /**
                     * Attribute name.
                     */
                    std::string m_attrName;
                    bool m_attrNameHasBeenSet;

                    /**
                     * Quantity of labels.
                     */
                    std::string m_labelNumber;
                    bool m_labelNumberHasBeenSet;

                    /**
                     * Label name.
                     */
                    std::vector<AttributeLabel> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEATTRIBUTELABELRESPONSE_H_
