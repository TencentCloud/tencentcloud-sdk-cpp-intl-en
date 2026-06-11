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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBESUBSCRIBEMESSAGETEMPLATELIBRARYKEYWORDINFORESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBESUBSCRIBEMESSAGETEMPLATELIBRARYKEYWORDINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/I18nItem.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Response for querying mini program subscription message template library details
                */
                class DescribeSubscribeMessageTemplateLibraryKeywordInfoResp : public AbstractModel
                {
                public:
                    DescribeSubscribeMessageTemplateLibraryKeywordInfoResp();
                    ~DescribeSubscribeMessageTemplateLibraryKeywordInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Template keyword ID.</p>
                     * @return KeywordId <p>Template keyword ID.</p>
                     * 
                     */
                    std::string GetKeywordId() const;

                    /**
                     * 设置<p>Template keyword ID.</p>
                     * @param _keywordId <p>Template keyword ID.</p>
                     * 
                     */
                    void SetKeywordId(const std::string& _keywordId);

                    /**
                     * 判断参数 KeywordId 是否已赋值
                     * @return KeywordId 是否已赋值
                     * 
                     */
                    bool KeywordIdHasBeenSet() const;

                    /**
                     * 获取<p>Template keyword.</p>
                     * @return Keyword <p>Template keyword.</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>Template keyword.</p>
                     * @param _keyword <p>Template keyword.</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>Template keyword type.</p>
                     * @return KeywordType <p>Template keyword type.</p>
                     * 
                     */
                    std::string GetKeywordType() const;

                    /**
                     * 设置<p>Template keyword type.</p>
                     * @param _keywordType <p>Template keyword type.</p>
                     * 
                     */
                    void SetKeywordType(const std::string& _keywordType);

                    /**
                     * 判断参数 KeywordType 是否已赋值
                     * @return KeywordType 是否已赋值
                     * 
                     */
                    bool KeywordTypeHasBeenSet() const;

                    /**
                     * 获取<p>Template keyword default value.</p>
                     * @return DefaultValue <p>Template keyword default value.</p>
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置<p>Template keyword default value.</p>
                     * @param _defaultValue <p>Template keyword default value.</p>
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取<p>Template keyword in multiple languages.</p>
                     * @return KeywordList <p>Template keyword in multiple languages.</p>
                     * 
                     */
                    std::vector<I18nItem> GetKeywordList() const;

                    /**
                     * 设置<p>Template keyword in multiple languages.</p>
                     * @param _keywordList <p>Template keyword in multiple languages.</p>
                     * 
                     */
                    void SetKeywordList(const std::vector<I18nItem>& _keywordList);

                    /**
                     * 判断参数 KeywordList 是否已赋值
                     * @return KeywordList 是否已赋值
                     * 
                     */
                    bool KeywordListHasBeenSet() const;

                    /**
                     * 获取<p>Template keyword default values in multiple languages.</p>
                     * @return DefaultValueList <p>Template keyword default values in multiple languages.</p>
                     * 
                     */
                    std::vector<I18nItem> GetDefaultValueList() const;

                    /**
                     * 设置<p>Template keyword default values in multiple languages.</p>
                     * @param _defaultValueList <p>Template keyword default values in multiple languages.</p>
                     * 
                     */
                    void SetDefaultValueList(const std::vector<I18nItem>& _defaultValueList);

                    /**
                     * 判断参数 DefaultValueList 是否已赋值
                     * @return DefaultValueList 是否已赋值
                     * 
                     */
                    bool DefaultValueListHasBeenSet() const;

                private:

                    /**
                     * <p>Template keyword ID.</p>
                     */
                    std::string m_keywordId;
                    bool m_keywordIdHasBeenSet;

                    /**
                     * <p>Template keyword.</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>Template keyword type.</p>
                     */
                    std::string m_keywordType;
                    bool m_keywordTypeHasBeenSet;

                    /**
                     * <p>Template keyword default value.</p>
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * <p>Template keyword in multiple languages.</p>
                     */
                    std::vector<I18nItem> m_keywordList;
                    bool m_keywordListHasBeenSet;

                    /**
                     * <p>Template keyword default values in multiple languages.</p>
                     */
                    std::vector<I18nItem> m_defaultValueList;
                    bool m_defaultValueListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBESUBSCRIBEMESSAGETEMPLATELIBRARYKEYWORDINFORESP_H_
