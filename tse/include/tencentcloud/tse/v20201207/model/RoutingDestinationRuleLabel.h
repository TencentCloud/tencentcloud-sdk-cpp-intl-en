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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ROUTINGDESTINATIONRULELABEL_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ROUTINGDESTINATIONRULELABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Target service instance instance tag info
                */
                class RoutingDestinationRuleLabel : public AbstractModel
                {
                public:
                    RoutingDestinationRuleLabel();
                    ~RoutingDestinationRuleLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LabelKey Tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabelKey() const;

                    /**
                     * 设置Tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labelKey Tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabelKey(const std::string& _labelKey);

                    /**
                     * 判断参数 LabelKey 是否已赋值
                     * @return LabelKey 是否已赋值
                     * 
                     */
                    bool LabelKeyHasBeenSet() const;

                    /**
                     * 获取Tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LabelValue Tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置Tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labelValue Tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                    /**
                     * 获取expression type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LabelType expression type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabelType() const;

                    /**
                     * 设置expression type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labelType expression type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabelType(const std::string& _labelType);

                    /**
                     * 判断参数 LabelType 是否已赋值
                     * @return LabelType 是否已赋值
                     * 
                     */
                    bool LabelTypeHasBeenSet() const;

                    /**
                     * 获取value type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LabelValueType value type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabelValueType() const;

                    /**
                     * 设置value type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labelValueType value type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabelValueType(const std::string& _labelValueType);

                    /**
                     * 判断参数 LabelValueType 是否已赋值
                     * @return LabelValueType 是否已赋值
                     * 
                     */
                    bool LabelValueTypeHasBeenSet() const;

                private:

                    /**
                     * Tag key.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_labelKey;
                    bool m_labelKeyHasBeenSet;

                    /**
                     * Tag value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                    /**
                     * expression type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_labelType;
                    bool m_labelTypeHasBeenSet;

                    /**
                     * value type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_labelValueType;
                    bool m_labelValueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ROUTINGDESTINATIONRULELABEL_H_
