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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AI video intelligent analysis input parameter types
                */
                class AiAnalysisTaskInput : public AbstractModel
                {
                public:
                    AiAnalysisTaskInput();
                    ~AiAnalysisTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video content analysis template ID.
                     * @return Definition Video content analysis template ID.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Video content analysis template ID.
                     * @param _definition Video content analysis template ID.
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Additional parameter. Its value is a serialized JSON string.
Note: This parameter is used to meet customization requirements. References:
[Smart Erase Tutorial]: https://intl.cloud.tencent.com/document/product/862/101530?from_cn_redirect=1
[Video Splitting (Long Videos to Short Videos) Tutorial](https://intl.cloud.tencent.com/document/product/862/112098?from_cn_redirect=1)
[Intelligent Highlights Tutorial](https://intl.cloud.tencent.com/document/product/862/107280?from_cn_redirect=1)
[Horizontal-to-Vertical Video Transformation Tutorial](https://intl.cloud.tencent.com/document/product/862/112112?from_cn_redirect=1)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtendedParameter Additional parameter. Its value is a serialized JSON string.
Note: This parameter is used to meet customization requirements. References:
[Smart Erase Tutorial]: https://intl.cloud.tencent.com/document/product/862/101530?from_cn_redirect=1
[Video Splitting (Long Videos to Short Videos) Tutorial](https://intl.cloud.tencent.com/document/product/862/112098?from_cn_redirect=1)
[Intelligent Highlights Tutorial](https://intl.cloud.tencent.com/document/product/862/107280?from_cn_redirect=1)
[Horizontal-to-Vertical Video Transformation Tutorial](https://intl.cloud.tencent.com/document/product/862/112112?from_cn_redirect=1)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExtendedParameter() const;

                    /**
                     * 设置Additional parameter. Its value is a serialized JSON string.
Note: This parameter is used to meet customization requirements. References:
[Smart Erase Tutorial]: https://intl.cloud.tencent.com/document/product/862/101530?from_cn_redirect=1
[Video Splitting (Long Videos to Short Videos) Tutorial](https://intl.cloud.tencent.com/document/product/862/112098?from_cn_redirect=1)
[Intelligent Highlights Tutorial](https://intl.cloud.tencent.com/document/product/862/107280?from_cn_redirect=1)
[Horizontal-to-Vertical Video Transformation Tutorial](https://intl.cloud.tencent.com/document/product/862/112112?from_cn_redirect=1)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _extendedParameter Additional parameter. Its value is a serialized JSON string.
Note: This parameter is used to meet customization requirements. References:
[Smart Erase Tutorial]: https://intl.cloud.tencent.com/document/product/862/101530?from_cn_redirect=1
[Video Splitting (Long Videos to Short Videos) Tutorial](https://intl.cloud.tencent.com/document/product/862/112098?from_cn_redirect=1)
[Intelligent Highlights Tutorial](https://intl.cloud.tencent.com/document/product/862/107280?from_cn_redirect=1)
[Horizontal-to-Vertical Video Transformation Tutorial](https://intl.cloud.tencent.com/document/product/862/112112?from_cn_redirect=1)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExtendedParameter(const std::string& _extendedParameter);

                    /**
                     * 判断参数 ExtendedParameter 是否已赋值
                     * @return ExtendedParameter 是否已赋值
                     * 
                     */
                    bool ExtendedParameterHasBeenSet() const;

                private:

                    /**
                     * Video content analysis template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Additional parameter. Its value is a serialized JSON string.
Note: This parameter is used to meet customization requirements. References:
[Smart Erase Tutorial]: https://intl.cloud.tencent.com/document/product/862/101530?from_cn_redirect=1
[Video Splitting (Long Videos to Short Videos) Tutorial](https://intl.cloud.tencent.com/document/product/862/112098?from_cn_redirect=1)
[Intelligent Highlights Tutorial](https://intl.cloud.tencent.com/document/product/862/107280?from_cn_redirect=1)
[Horizontal-to-Vertical Video Transformation Tutorial](https://intl.cloud.tencent.com/document/product/862/112112?from_cn_redirect=1)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_extendedParameter;
                    bool m_extendedParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKINPUT_H_
