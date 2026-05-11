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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTINPUT_H_

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
                * Create custom input.
                */
                class CreateAigcAdvancedCustomElementInput : public AbstractModel
                {
                public:
                    CreateAigcAdvancedCustomElementInput();
                    ~CreateAigcAdvancedCustomElementInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Subject name.</p>
                     * @return ElementName <p>Subject name.</p>
                     * 
                     */
                    std::string GetElementName() const;

                    /**
                     * 设置<p>Subject name.</p>
                     * @param _elementName <p>Subject name.</p>
                     * 
                     */
                    void SetElementName(const std::string& _elementName);

                    /**
                     * 判断参数 ElementName 是否已赋值
                     * @return ElementName 是否已赋值
                     * 
                     */
                    bool ElementNameHasBeenSet() const;

                    /**
                     * 获取<p>Subject description.</p>
                     * @return ElementDescription <p>Subject description.</p>
                     * 
                     */
                    std::string GetElementDescription() const;

                    /**
                     * 设置<p>Subject description.</p>
                     * @param _elementDescription <p>Subject description.</p>
                     * 
                     */
                    void SetElementDescription(const std::string& _elementDescription);

                    /**
                     * 判断参数 ElementDescription 是否已赋值
                     * @return ElementDescription 是否已赋值
                     * 
                     */
                    bool ElementDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Subject reference method.</p>
                     * @return ReferenceType <p>Subject reference method.</p>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置<p>Subject reference method.</p>
                     * @param _referenceType <p>Subject reference method.</p>
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Main voice type.</p>
                     * @return ElementVoiceId <p>Main voice type.</p>
                     * 
                     */
                    std::string GetElementVoiceId() const;

                    /**
                     * 设置<p>Main voice type.</p>
                     * @param _elementVoiceId <p>Main voice type.</p>
                     * 
                     */
                    void SetElementVoiceId(const std::string& _elementVoiceId);

                    /**
                     * 判断参数 ElementVoiceId 是否已赋值
                     * @return ElementVoiceId 是否已赋值
                     * 
                     */
                    bool ElementVoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Reference video.</p>
                     * @return ElementVideoList <p>Reference video.</p>
                     * 
                     */
                    std::string GetElementVideoList() const;

                    /**
                     * 设置<p>Reference video.</p>
                     * @param _elementVideoList <p>Reference video.</p>
                     * 
                     */
                    void SetElementVideoList(const std::string& _elementVideoList);

                    /**
                     * 判断参数 ElementVideoList 是否已赋值
                     * @return ElementVideoList 是否已赋值
                     * 
                     */
                    bool ElementVideoListHasBeenSet() const;

                    /**
                     * 获取<p>Subject reference diagram.</p>
                     * @return ElementImageList <p>Subject reference diagram.</p>
                     * 
                     */
                    std::string GetElementImageList() const;

                    /**
                     * 设置<p>Subject reference diagram.</p>
                     * @param _elementImageList <p>Subject reference diagram.</p>
                     * 
                     */
                    void SetElementImageList(const std::string& _elementImageList);

                    /**
                     * 判断参数 ElementImageList 是否已赋值
                     * @return ElementImageList 是否已赋值
                     * 
                     */
                    bool ElementImageListHasBeenSet() const;

                    /**
                     * 获取<p>Subject configuration tag.</p>
                     * @return TagList <p>Subject configuration tag.</p>
                     * 
                     */
                    std::string GetTagList() const;

                    /**
                     * 设置<p>Subject configuration tag.</p>
                     * @param _tagList <p>Subject configuration tag.</p>
                     * 
                     */
                    void SetTagList(const std::string& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * <p>Subject name.</p>
                     */
                    std::string m_elementName;
                    bool m_elementNameHasBeenSet;

                    /**
                     * <p>Subject description.</p>
                     */
                    std::string m_elementDescription;
                    bool m_elementDescriptionHasBeenSet;

                    /**
                     * <p>Subject reference method.</p>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * <p>Main voice type.</p>
                     */
                    std::string m_elementVoiceId;
                    bool m_elementVoiceIdHasBeenSet;

                    /**
                     * <p>Reference video.</p>
                     */
                    std::string m_elementVideoList;
                    bool m_elementVideoListHasBeenSet;

                    /**
                     * <p>Subject reference diagram.</p>
                     */
                    std::string m_elementImageList;
                    bool m_elementImageListHasBeenSet;

                    /**
                     * <p>Subject configuration tag.</p>
                     */
                    std::string m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTINPUT_H_
