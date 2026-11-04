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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_REPLYCONTENT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_REPLYCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConversationFileCollection.h>
#include <tencentcloud/adp/v20260520/model/ConversationWidget.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Details of the reply content
                */
                class ReplyContent : public AbstractModel
                {
                public:
                    ReplyContent();
                    ~ReplyContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Message content type<br>text: text<br>image: image<br>file: file<br>option_cards: tab<br>custom_params: user-customized business parameter<br>sandbox: cloud desktop<br>custom_variables: custom input parameter<br>web_search: web search content<br>file_collection: file collection info<br>widget: widget info<br>widget_action: client-side widget action information</p>
                     * @return Type <p>Message content type<br>text: text<br>image: image<br>file: file<br>option_cards: tab<br>custom_params: user-customized business parameter<br>sandbox: cloud desktop<br>custom_variables: custom input parameter<br>web_search: web search content<br>file_collection: file collection info<br>widget: widget info<br>widget_action: client-side widget action information</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Message content type<br>text: text<br>image: image<br>file: file<br>option_cards: tab<br>custom_params: user-customized business parameter<br>sandbox: cloud desktop<br>custom_variables: custom input parameter<br>web_search: web search content<br>file_collection: file collection info<br>widget: widget info<br>widget_action: client-side widget action information</p>
                     * @param _type <p>Message content type<br>text: text<br>image: image<br>file: file<br>option_cards: tab<br>custom_params: user-customized business parameter<br>sandbox: cloud desktop<br>custom_variables: custom input parameter<br>web_search: web search content<br>file_collection: file collection info<br>widget: widget info<br>widget_action: client-side widget action information</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Text content</p>
                     * @return Text <p>Text content</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Text content</p>
                     * @param _text <p>Text content</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>Tab information</p>
                     * @return OptionCardList <p>Tab information</p>
                     * 
                     */
                    std::vector<std::string> GetOptionCardList() const;

                    /**
                     * 设置<p>Tab information</p>
                     * @param _optionCardList <p>Tab information</p>
                     * 
                     */
                    void SetOptionCardList(const std::vector<std::string>& _optionCardList);

                    /**
                     * 判断参数 OptionCardList 是否已赋值
                     * @return OptionCardList 是否已赋值
                     * 
                     */
                    bool OptionCardListHasBeenSet() const;

                    /**
                     * 获取<p>File collection info</p>
                     * @return FileCollection <p>File collection info</p>
                     * 
                     */
                    ConversationFileCollection GetFileCollection() const;

                    /**
                     * 设置<p>File collection info</p>
                     * @param _fileCollection <p>File collection info</p>
                     * 
                     */
                    void SetFileCollection(const ConversationFileCollection& _fileCollection);

                    /**
                     * 判断参数 FileCollection 是否已赋值
                     * @return FileCollection 是否已赋值
                     * 
                     */
                    bool FileCollectionHasBeenSet() const;

                    /**
                     * 获取<p>Widget information.</p>
                     * @return Widget <p>Widget information.</p>
                     * 
                     */
                    ConversationWidget GetWidget() const;

                    /**
                     * 设置<p>Widget information.</p>
                     * @param _widget <p>Widget information.</p>
                     * 
                     */
                    void SetWidget(const ConversationWidget& _widget);

                    /**
                     * 判断参数 Widget 是否已赋值
                     * @return Widget 是否已赋值
                     * 
                     */
                    bool WidgetHasBeenSet() const;

                private:

                    /**
                     * <p>Message content type<br>text: text<br>image: image<br>file: file<br>option_cards: tab<br>custom_params: user-customized business parameter<br>sandbox: cloud desktop<br>custom_variables: custom input parameter<br>web_search: web search content<br>file_collection: file collection info<br>widget: widget info<br>widget_action: client-side widget action information</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Text content</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Tab information</p>
                     */
                    std::vector<std::string> m_optionCardList;
                    bool m_optionCardListHasBeenSet;

                    /**
                     * <p>File collection info</p>
                     */
                    ConversationFileCollection m_fileCollection;
                    bool m_fileCollectionHasBeenSet;

                    /**
                     * <p>Widget information.</p>
                     */
                    ConversationWidget m_widget;
                    bool m_widgetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_REPLYCONTENT_H_
