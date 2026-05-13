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


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 
                */
                class Content : public AbstractModel
                {
                public:
                    Content();
                    ~Content() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
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
                     * 获取
                     * @return Text 
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置
                     * @param _text 
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
                     * 获取
                     * @return QuoteInfos 
                     * 
                     */
                    std::vector<QuoteInfo> GetQuoteInfos() const;

                    /**
                     * 设置
                     * @param _quoteInfos 
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
                     * 获取
                     * @return References 
                     * 
                     */
                    std::vector<ContentReference> GetReferences() const;

                    /**
                     * 设置
                     * @param _references 
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
                     * 获取
                     * @return Image 
                     * 
                     */
                    ImageInfoContent GetImage() const;

                    /**
                     * 设置
                     * @param _image 
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
                     * 获取
                     * @return File 
                     * 
                     */
                    FileInfoContent GetFile() const;

                    /**
                     * 设置
                     * @param _file 
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
                     * 获取
                     * @return OptionCards 
                     * 
                     */
                    std::vector<std::string> GetOptionCards() const;

                    /**
                     * 设置
                     * @param _optionCards 
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
                     * 获取
                     * @return CustomParams 
                     * 
                     */
                    std::vector<std::string> GetCustomParams() const;

                    /**
                     * 设置
                     * @param _customParams 
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
                     * 获取
                     * @return CustomVariables 
                     * 
                     */
                    std::vector<std::string> GetCustomVariables() const;

                    /**
                     * 设置
                     * @param _customVariables 
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
                     * 获取
                     * @return Sandbox 
                     * 
                     */
                    SandboxContent GetSandbox() const;

                    /**
                     * 设置
                     * @param _sandbox 
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
                     * 获取
                     * @return WebSearch 
                     * 
                     */
                    WebSearchContent GetWebSearch() const;

                    /**
                     * 设置
                     * @param _webSearch 
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
                     * 获取
                     * @return FileCollection 
                     * 
                     */
                    FileCollection GetFileCollection() const;

                    /**
                     * 设置
                     * @param _fileCollection 
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
                     * 获取
                     * @return Widget 
                     * 
                     */
                    Widget GetWidget() const;

                    /**
                     * 设置
                     * @param _widget 
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
                     * 获取
                     * @return WidgetAction 
                     * 
                     */
                    WidgetAction GetWidgetAction() const;

                    /**
                     * 设置
                     * @param _widgetAction 
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
                     * 获取
                     * @return Tasks 
                     * 
                     */
                    std::vector<AgentTask> GetTasks() const;

                    /**
                     * 设置
                     * @param _tasks 
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
                     * 获取
                     * @return Questionnaire 
                     * 
                     */
                    Questionnaire GetQuestionnaire() const;

                    /**
                     * 设置
                     * @param _questionnaire 
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
                     * 获取
                     * @return OptionMode 
                     * 
                     */
                    int64_t GetOptionMode() const;

                    /**
                     * 设置
                     * @param _optionMode 
                     * 
                     */
                    void SetOptionMode(const int64_t& _optionMode);

                    /**
                     * 判断参数 OptionMode 是否已赋值
                     * @return OptionMode 是否已赋值
                     * 
                     */
                    bool OptionModeHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<QuoteInfo> m_quoteInfos;
                    bool m_quoteInfosHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ContentReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * 
                     */
                    ImageInfoContent m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 
                     */
                    FileInfoContent m_file;
                    bool m_fileHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_optionCards;
                    bool m_optionCardsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_customParams;
                    bool m_customParamsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                    /**
                     * 
                     */
                    SandboxContent m_sandbox;
                    bool m_sandboxHasBeenSet;

                    /**
                     * 
                     */
                    WebSearchContent m_webSearch;
                    bool m_webSearchHasBeenSet;

                    /**
                     * 
                     */
                    FileCollection m_fileCollection;
                    bool m_fileCollectionHasBeenSet;

                    /**
                     * 
                     */
                    Widget m_widget;
                    bool m_widgetHasBeenSet;

                    /**
                     * 
                     */
                    WidgetAction m_widgetAction;
                    bool m_widgetActionHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<AgentTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 
                     */
                    Questionnaire m_questionnaire;
                    bool m_questionnaireHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_optionMode;
                    bool m_optionModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CONTENT_H_
