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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CONTENT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/QuoteInfo.h>
#include <tencentcloud/lke/v20231130/model/ContentReference.h>
#include <tencentcloud/lke/v20231130/model/ImageInfoContent.h>
#include <tencentcloud/lke/v20231130/model/FileInfoContent.h>
#include <tencentcloud/lke/v20231130/model/SandboxContent.h>
#include <tencentcloud/lke/v20231130/model/WebSearchContent.h>
#include <tencentcloud/lke/v20231130/model/FileCollection.h>
#include <tencentcloud/lke/v20231130/model/Widget.h>
#include <tencentcloud/lke/v20231130/model/WidgetAction.h>
#include <tencentcloud/lke/v20231130/model/AgentTask.h>
#include <tencentcloud/lke/v20231130/model/Questionnaire.h>
#include <tencentcloud/lke/v20231130/model/ConversationMcpApp.h>
#include <tencentcloud/lke/v20231130/model/ConversationResourceArtifact.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Dialogue record content details
                */
                class Content : public AbstractModel
                {
                public:
                    Content();
                    ~Content() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Message content type<br>text: text<br>image: image<br>file: file<br>option_cards: tabs<br>custom_params: custom business parameters<br>sandbox: cloud desktop<br>custom_variables: custom input parameters<br>web_search: web search content<br>file_collection: file collection information<br>widget: widget info<br>widget_action: client-side widget action information</p>
                     * @return Type <p>Message content type<br>text: text<br>image: image<br>file: file<br>option_cards: tabs<br>custom_params: custom business parameters<br>sandbox: cloud desktop<br>custom_variables: custom input parameters<br>web_search: web search content<br>file_collection: file collection information<br>widget: widget info<br>widget_action: client-side widget action information</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Message content type<br>text: text<br>image: image<br>file: file<br>option_cards: tabs<br>custom_params: custom business parameters<br>sandbox: cloud desktop<br>custom_variables: custom input parameters<br>web_search: web search content<br>file_collection: file collection information<br>widget: widget info<br>widget_action: client-side widget action information</p>
                     * @param _type <p>Message content type<br>text: text<br>image: image<br>file: file<br>option_cards: tabs<br>custom_params: custom business parameters<br>sandbox: cloud desktop<br>custom_variables: custom input parameters<br>web_search: web search content<br>file_collection: file collection information<br>widget: widget info<br>widget_action: client-side widget action information</p>
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
                     * 获取<p>Reference info.</p>
                     * @return QuoteInfos <p>Reference info.</p>
                     * 
                     */
                    std::vector<QuoteInfo> GetQuoteInfos() const;

                    /**
                     * 设置<p>Reference info.</p>
                     * @param _quoteInfos <p>Reference info.</p>
                     * 
                     */
                    void SetQuoteInfos(const std::vector<QuoteInfo>& _quoteInfos);

                    /**
                     * 判断参数 QuoteInfos 是否已赋值
                     * @return QuoteInfos 是否已赋值
                     * 
                     */
                    bool QuoteInfosHasBeenSet() const;

                    /**
                     * 获取<p>Reference information</p>
                     * @return References <p>Reference information</p>
                     * 
                     */
                    std::vector<ContentReference> GetReferences() const;

                    /**
                     * 设置<p>Reference information</p>
                     * @param _references <p>Reference information</p>
                     * 
                     */
                    void SetReferences(const std::vector<ContentReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取<p>Image information.</p>
                     * @return Image <p>Image information.</p>
                     * 
                     */
                    ImageInfoContent GetImage() const;

                    /**
                     * 设置<p>Image information.</p>
                     * @param _image <p>Image information.</p>
                     * 
                     */
                    void SetImage(const ImageInfoContent& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>File information</p>
                     * @return File <p>File information</p>
                     * 
                     */
                    FileInfoContent GetFile() const;

                    /**
                     * 设置<p>File information</p>
                     * @param _file <p>File information</p>
                     * 
                     */
                    void SetFile(const FileInfoContent& _file);

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     * 
                     */
                    bool FileHasBeenSet() const;

                    /**
                     * 获取<p>Tab info.</p>
                     * @return OptionCards <p>Tab info.</p>
                     * 
                     */
                    std::vector<std::string> GetOptionCards() const;

                    /**
                     * 设置<p>Tab info.</p>
                     * @param _optionCards <p>Tab info.</p>
                     * 
                     */
                    void SetOptionCards(const std::vector<std::string>& _optionCards);

                    /**
                     * 判断参数 OptionCards 是否已赋值
                     * @return OptionCards 是否已赋值
                     * 
                     */
                    bool OptionCardsHasBeenSet() const;

                    /**
                     * 获取<p>User-customized business parameter information.</p>
                     * @return CustomParams <p>User-customized business parameter information.</p>
                     * 
                     */
                    std::vector<std::string> GetCustomParams() const;

                    /**
                     * 设置<p>User-customized business parameter information.</p>
                     * @param _customParams <p>User-customized business parameter information.</p>
                     * 
                     */
                    void SetCustomParams(const std::vector<std::string>& _customParams);

                    /**
                     * 判断参数 CustomParams 是否已赋值
                     * @return CustomParams 是否已赋值
                     * 
                     */
                    bool CustomParamsHasBeenSet() const;

                    /**
                     * 获取<p>Custom Variable</p>
                     * @return CustomVariables <p>Custom Variable</p>
                     * 
                     */
                    std::vector<std::string> GetCustomVariables() const;

                    /**
                     * 设置<p>Custom Variable</p>
                     * @param _customVariables <p>Custom Variable</p>
                     * 
                     */
                    void SetCustomVariables(const std::vector<std::string>& _customVariables);

                    /**
                     * 判断参数 CustomVariables 是否已赋值
                     * @return CustomVariables 是否已赋值
                     * 
                     */
                    bool CustomVariablesHasBeenSet() const;

                    /**
                     * 获取<p>Sandbox information</p>
                     * @return Sandbox <p>Sandbox information</p>
                     * 
                     */
                    SandboxContent GetSandbox() const;

                    /**
                     * 设置<p>Sandbox information</p>
                     * @param _sandbox <p>Sandbox information</p>
                     * 
                     */
                    void SetSandbox(const SandboxContent& _sandbox);

                    /**
                     * 判断参数 Sandbox 是否已赋值
                     * @return Sandbox 是否已赋值
                     * 
                     */
                    bool SandboxHasBeenSet() const;

                    /**
                     * 获取<p>Web page search content</p>
                     * @return WebSearch <p>Web page search content</p>
                     * 
                     */
                    WebSearchContent GetWebSearch() const;

                    /**
                     * 设置<p>Web page search content</p>
                     * @param _webSearch <p>Web page search content</p>
                     * 
                     */
                    void SetWebSearch(const WebSearchContent& _webSearch);

                    /**
                     * 判断参数 WebSearch 是否已赋值
                     * @return WebSearch 是否已赋值
                     * 
                     */
                    bool WebSearchHasBeenSet() const;

                    /**
                     * 获取<p>File information collection</p>
                     * @return FileCollection <p>File information collection</p>
                     * 
                     */
                    FileCollection GetFileCollection() const;

                    /**
                     * 设置<p>File information collection</p>
                     * @param _fileCollection <p>File information collection</p>
                     * 
                     */
                    void SetFileCollection(const FileCollection& _fileCollection);

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
                    Widget GetWidget() const;

                    /**
                     * 设置<p>Widget information.</p>
                     * @param _widget <p>Widget information.</p>
                     * 
                     */
                    void SetWidget(const Widget& _widget);

                    /**
                     * 判断参数 Widget 是否已赋值
                     * @return Widget 是否已赋值
                     * 
                     */
                    bool WidgetHasBeenSet() const;

                    /**
                     * 获取<p>Widget action information</p>
                     * @return WidgetAction <p>Widget action information</p>
                     * 
                     */
                    WidgetAction GetWidgetAction() const;

                    /**
                     * 设置<p>Widget action information</p>
                     * @param _widgetAction <p>Widget action information</p>
                     * 
                     */
                    void SetWidgetAction(const WidgetAction& _widgetAction);

                    /**
                     * 判断参数 WidgetAction 是否已赋值
                     * @return WidgetAction 是否已赋值
                     * 
                     */
                    bool WidgetActionHasBeenSet() const;

                    /**
                     * 获取<p>Task List</p>
                     * @return Tasks <p>Task List</p>
                     * 
                     */
                    std::vector<AgentTask> GetTasks() const;

                    /**
                     * 设置<p>Task List</p>
                     * @param _tasks <p>Task List</p>
                     * 
                     */
                    void SetTasks(const std::vector<AgentTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取<p>Questionnaire information</p>
                     * @return Questionnaire <p>Questionnaire information</p>
                     * 
                     */
                    Questionnaire GetQuestionnaire() const;

                    /**
                     * 设置<p>Questionnaire information</p>
                     * @param _questionnaire <p>Questionnaire information</p>
                     * 
                     */
                    void SetQuestionnaire(const Questionnaire& _questionnaire);

                    /**
                     * 判断参数 Questionnaire 是否已赋值
                     * @return Questionnaire 是否已赋值
                     * 
                     */
                    bool QuestionnaireHasBeenSet() const;

                    /**
                     * 获取<p>Tab mode</p>
                     * @return OptionMode <p>Tab mode</p>
                     * 
                     */
                    int64_t GetOptionMode() const;

                    /**
                     * 设置<p>Tab mode</p>
                     * @param _optionMode <p>Tab mode</p>
                     * 
                     */
                    void SetOptionMode(const int64_t& _optionMode);

                    /**
                     * 判断参数 OptionMode 是否已赋值
                     * @return OptionMode 是否已赋值
                     * 
                     */
                    bool OptionModeHasBeenSet() const;

                    /**
                     * 获取<p>MCP APP information returned</p>
                     * @return McpApp <p>MCP APP information returned</p>
                     * 
                     */
                    ConversationMcpApp GetMcpApp() const;

                    /**
                     * 设置<p>MCP APP information returned</p>
                     * @param _mcpApp <p>MCP APP information returned</p>
                     * 
                     */
                    void SetMcpApp(const ConversationMcpApp& _mcpApp);

                    /**
                     * 判断参数 McpApp 是否已赋值
                     * @return McpApp 是否已赋值
                     * 
                     */
                    bool McpAppHasBeenSet() const;

                    /**
                     * 获取<p>Application or workflow resource product</p>
                     * @return Resource <p>Application or workflow resource product</p>
                     * 
                     */
                    ConversationResourceArtifact GetResource() const;

                    /**
                     * 设置<p>Application or workflow resource product</p>
                     * @param _resource <p>Application or workflow resource product</p>
                     * 
                     */
                    void SetResource(const ConversationResourceArtifact& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                private:

                    /**
                     * <p>Message content type<br>text: text<br>image: image<br>file: file<br>option_cards: tabs<br>custom_params: custom business parameters<br>sandbox: cloud desktop<br>custom_variables: custom input parameters<br>web_search: web search content<br>file_collection: file collection information<br>widget: widget info<br>widget_action: client-side widget action information</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Text content</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Reference info.</p>
                     */
                    std::vector<QuoteInfo> m_quoteInfos;
                    bool m_quoteInfosHasBeenSet;

                    /**
                     * <p>Reference information</p>
                     */
                    std::vector<ContentReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * <p>Image information.</p>
                     */
                    ImageInfoContent m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>File information</p>
                     */
                    FileInfoContent m_file;
                    bool m_fileHasBeenSet;

                    /**
                     * <p>Tab info.</p>
                     */
                    std::vector<std::string> m_optionCards;
                    bool m_optionCardsHasBeenSet;

                    /**
                     * <p>User-customized business parameter information.</p>
                     */
                    std::vector<std::string> m_customParams;
                    bool m_customParamsHasBeenSet;

                    /**
                     * <p>Custom Variable</p>
                     */
                    std::vector<std::string> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                    /**
                     * <p>Sandbox information</p>
                     */
                    SandboxContent m_sandbox;
                    bool m_sandboxHasBeenSet;

                    /**
                     * <p>Web page search content</p>
                     */
                    WebSearchContent m_webSearch;
                    bool m_webSearchHasBeenSet;

                    /**
                     * <p>File information collection</p>
                     */
                    FileCollection m_fileCollection;
                    bool m_fileCollectionHasBeenSet;

                    /**
                     * <p>Widget information.</p>
                     */
                    Widget m_widget;
                    bool m_widgetHasBeenSet;

                    /**
                     * <p>Widget action information</p>
                     */
                    WidgetAction m_widgetAction;
                    bool m_widgetActionHasBeenSet;

                    /**
                     * <p>Task List</p>
                     */
                    std::vector<AgentTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>Questionnaire information</p>
                     */
                    Questionnaire m_questionnaire;
                    bool m_questionnaireHasBeenSet;

                    /**
                     * <p>Tab mode</p>
                     */
                    int64_t m_optionMode;
                    bool m_optionModeHasBeenSet;

                    /**
                     * <p>MCP APP information returned</p>
                     */
                    ConversationMcpApp m_mcpApp;
                    bool m_mcpAppHasBeenSet;

                    /**
                     * <p>Application or workflow resource product</p>
                     */
                    ConversationResourceArtifact m_resource;
                    bool m_resourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CONTENT_H_
