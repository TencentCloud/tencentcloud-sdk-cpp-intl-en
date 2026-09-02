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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULEDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmIdentifyRuleDetail response structure.
                */
                class DescribeDspmIdentifyRuleDetailResponse : public AbstractModel
                {
                public:
                    DescribeDspmIdentifyRuleDetailResponse();
                    ~DescribeDspmIdentifyRuleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Data item id</p>
                     * @return Id <p>Data item id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Data item name</p>
                     * @return Name <p>Data item name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Data item description.</p>
                     * @return Description <p>Data item description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable the data item</p><p>Enumeration values:</p><ul><li>0: No</li><li>1: Yes</li></ul><p>Default value: 0</p>
                     * @return Status <p>Whether to enable the data item</p><p>Enumeration values:</p><ul><li>0: No</li><li>1: Yes</li></ul><p>Default value: 0</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Data item type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * @return Type <p>Data item type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Structured rule</p>
                     * @return StructuredRule <p>Structured rule</p>
                     * 
                     */
                    std::string GetStructuredRule() const;

                    /**
                     * 判断参数 StructuredRule 是否已赋值
                     * @return StructuredRule 是否已赋值
                     * 
                     */
                    bool StructuredRuleHasBeenSet() const;

                    /**
                     * 获取<p>Unstructured rule</p>
                     * @return UnStructuredRule <p>Unstructured rule</p>
                     * 
                     */
                    std::string GetUnStructuredRule() const;

                    /**
                     * 判断参数 UnStructuredRule 是否已赋值
                     * @return UnStructuredRule 是否已赋值
                     * 
                     */
                    bool UnStructuredRuleHasBeenSet() const;

                private:

                    /**
                     * <p>Data item id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Data item name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Data item description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Whether to enable the data item</p><p>Enumeration values:</p><ul><li>0: No</li><li>1: Yes</li></ul><p>Default value: 0</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Data item type</p><p>Enumeration values:</p><ul><li>0: Built-in</li><li>1: Custom</li></ul>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Structured rule</p>
                     */
                    std::string m_structuredRule;
                    bool m_structuredRuleHasBeenSet;

                    /**
                     * <p>Unstructured rule</p>
                     */
                    std::string m_unStructuredRule;
                    bool m_unStructuredRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULEDETAILRESPONSE_H_
