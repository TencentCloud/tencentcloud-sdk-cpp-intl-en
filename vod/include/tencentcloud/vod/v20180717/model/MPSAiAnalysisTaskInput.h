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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIANALYSISTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIANALYSISTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Input parameter type for AI smart video analysis
                */
                class MPSAiAnalysisTaskInput : public AbstractModel
                {
                public:
                    MPSAiAnalysisTaskInput();
                    ~MPSAiAnalysisTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Video content analysis template ID.</p>
                     * @return Definition <p>Video content analysis template ID.</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>Video content analysis template ID.</p>
                     * @param _definition <p>Video content analysis template ID.</p>
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
                     * 获取<p>Additional parameters, with the value being a serialized json string. Note: This parameter is a customization requirement parameter. See the following: <a href="https://www.tencentcloud.com/document/product/862/101530?from_cn_redirect=1">Intelligent Erase</a><a href="https://www.tencentcloud.com/document/product/862/112098?from_cn_redirect=1">Intelligent Splitting</a><a href="https://www.tencentcloud.com/document/product/862/107280?from_cn_redirect=1">Intelligent Highlight</a><a href="https://www.tencentcloud.com/document/product/862/112112?from_cn_redirect=1">Intelligent Landscape-to-Portrait</a></p>
                     * @return ExtendedParameter <p>Additional parameters, with the value being a serialized json string. Note: This parameter is a customization requirement parameter. See the following: <a href="https://www.tencentcloud.com/document/product/862/101530?from_cn_redirect=1">Intelligent Erase</a><a href="https://www.tencentcloud.com/document/product/862/112098?from_cn_redirect=1">Intelligent Splitting</a><a href="https://www.tencentcloud.com/document/product/862/107280?from_cn_redirect=1">Intelligent Highlight</a><a href="https://www.tencentcloud.com/document/product/862/112112?from_cn_redirect=1">Intelligent Landscape-to-Portrait</a></p>
                     * 
                     */
                    std::string GetExtendedParameter() const;

                    /**
                     * 设置<p>Additional parameters, with the value being a serialized json string. Note: This parameter is a customization requirement parameter. See the following: <a href="https://www.tencentcloud.com/document/product/862/101530?from_cn_redirect=1">Intelligent Erase</a><a href="https://www.tencentcloud.com/document/product/862/112098?from_cn_redirect=1">Intelligent Splitting</a><a href="https://www.tencentcloud.com/document/product/862/107280?from_cn_redirect=1">Intelligent Highlight</a><a href="https://www.tencentcloud.com/document/product/862/112112?from_cn_redirect=1">Intelligent Landscape-to-Portrait</a></p>
                     * @param _extendedParameter <p>Additional parameters, with the value being a serialized json string. Note: This parameter is a customization requirement parameter. See the following: <a href="https://www.tencentcloud.com/document/product/862/101530?from_cn_redirect=1">Intelligent Erase</a><a href="https://www.tencentcloud.com/document/product/862/112098?from_cn_redirect=1">Intelligent Splitting</a><a href="https://www.tencentcloud.com/document/product/862/107280?from_cn_redirect=1">Intelligent Highlight</a><a href="https://www.tencentcloud.com/document/product/862/112112?from_cn_redirect=1">Intelligent Landscape-to-Portrait</a></p>
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
                     * <p>Video content analysis template ID.</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Additional parameters, with the value being a serialized json string. Note: This parameter is a customization requirement parameter. See the following: <a href="https://www.tencentcloud.com/document/product/862/101530?from_cn_redirect=1">Intelligent Erase</a><a href="https://www.tencentcloud.com/document/product/862/112098?from_cn_redirect=1">Intelligent Splitting</a><a href="https://www.tencentcloud.com/document/product/862/107280?from_cn_redirect=1">Intelligent Highlight</a><a href="https://www.tencentcloud.com/document/product/862/112112?from_cn_redirect=1">Intelligent Landscape-to-Portrait</a></p>
                     */
                    std::string m_extendedParameter;
                    bool m_extendedParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIANALYSISTASKINPUT_H_
