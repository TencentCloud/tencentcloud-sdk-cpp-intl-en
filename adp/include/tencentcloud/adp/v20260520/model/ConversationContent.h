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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONCONTENT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConversationQuoteInfo.h>
#include <tencentcloud/adp/v20260520/model/ConversationReference.h>
#include <tencentcloud/adp/v20260520/model/ConversationAgentTask.h>
#include <tencentcloud/adp/v20260520/model/ConversationMcpApp.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Content message information
                */
                class ConversationContent : public AbstractModel
                {
                public:
                    ConversationContent();
                    ~ConversationContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Content type. text: text, image: image, file: file, custom_variables: custom input parameter information, widget_action: widget action information</p>
                     * @return Type <p>Content type. text: text, image: image, file: file, custom_variables: custom input parameter information, widget_action: widget action information</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Content type. text: text, image: image, file: file, custom_variables: custom input parameter information, widget_action: widget action information</p>
                     * @param _type <p>Content type. text: text, image: image, file: file, custom_variables: custom input parameter information, widget_action: widget action information</p>
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
                     * 获取<p>Custom parameter data</p>
                     * @return CustomParamList <p>Custom parameter data</p>
                     * 
                     */
                    std::vector<std::string> GetCustomParamList() const;

                    /**
                     * 设置<p>Custom parameter data</p>
                     * @param _customParamList <p>Custom parameter data</p>
                     * 
                     */
                    void SetCustomParamList(const std::vector<std::string>& _customParamList);

                    /**
                     * 判断参数 CustomParamList 是否已赋值
                     * @return CustomParamList 是否已赋值
                     * 
                     */
                    bool CustomParamListHasBeenSet() const;

                    /**
                     * 获取<p>Custom parameter data</p>
                     * @return CustomParams <p>Custom parameter data</p>
                     * 
                     */
                    std::vector<std::string> GetCustomParams() const;

                    /**
                     * 设置<p>Custom parameter data</p>
                     * @param _customParams <p>Custom parameter data</p>
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
                     * 获取<p>Custom variable data</p>
                     * @return CustomVariablesData <p>Custom variable data</p>
                     * 
                     */
                    std::string GetCustomVariablesData() const;

                    /**
                     * 设置<p>Custom variable data</p>
                     * @param _customVariablesData <p>Custom variable data</p>
                     * 
                     */
                    void SetCustomVariablesData(const std::string& _customVariablesData);

                    /**
                     * 判断参数 CustomVariablesData 是否已赋值
                     * @return CustomVariablesData 是否已赋值
                     * 
                     */
                    bool CustomVariablesDataHasBeenSet() const;

                    /**
                     * 获取<p>Business form</p>
                     * @return EnterpriseCharts <p>Business form</p>
                     * 
                     */
                    std::string GetEnterpriseCharts() const;

                    /**
                     * 设置<p>Business form</p>
                     * @param _enterpriseCharts <p>Business form</p>
                     * 
                     */
                    void SetEnterpriseCharts(const std::string& _enterpriseCharts);

                    /**
                     * 判断参数 EnterpriseCharts 是否已赋值
                     * @return EnterpriseCharts 是否已赋值
                     * 
                     */
                    bool EnterpriseChartsHasBeenSet() const;

                    /**
                     * 获取<p>Tab List</p>
                     * @return OptionCardList <p>Tab List</p>
                     * 
                     */
                    std::vector<std::string> GetOptionCardList() const;

                    /**
                     * 设置<p>Tab List</p>
                     * @param _optionCardList <p>Tab List</p>
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
                     * 获取<p>Tab list.</p>
                     * @return OptionCards <p>Tab list.</p>
                     * 
                     */
                    std::vector<std::string> GetOptionCards() const;

                    /**
                     * 设置<p>Tab list.</p>
                     * @param _optionCards <p>Tab list.</p>
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
                     * 获取<p>Tab mode. Enumeration values: 0-OPTION_MODE_SINGLE (single selection), 1-OPTION_MODE_MULTI (multiple selection)</p>
                     * @return OptionMode <p>Tab mode. Enumeration values: 0-OPTION_MODE_SINGLE (single selection), 1-OPTION_MODE_MULTI (multiple selection)</p>
                     * 
                     */
                    int64_t GetOptionMode() const;

                    /**
                     * 设置<p>Tab mode. Enumeration values: 0-OPTION_MODE_SINGLE (single selection), 1-OPTION_MODE_MULTI (multiple selection)</p>
                     * @param _optionMode <p>Tab mode. Enumeration values: 0-OPTION_MODE_SINGLE (single selection), 1-OPTION_MODE_MULTI (multiple selection)</p>
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
                     * 获取<p>Reference marker information list</p>
                     * @return QuoteInfoList <p>Reference marker information list</p>
                     * 
                     */
                    std::vector<ConversationQuoteInfo> GetQuoteInfoList() const;

                    /**
                     * 设置<p>Reference marker information list</p>
                     * @param _quoteInfoList <p>Reference marker information list</p>
                     * 
                     */
                    void SetQuoteInfoList(const std::vector<ConversationQuoteInfo>& _quoteInfoList);

                    /**
                     * 判断参数 QuoteInfoList 是否已赋值
                     * @return QuoteInfoList 是否已赋值
                     * 
                     */
                    bool QuoteInfoListHasBeenSet() const;

                    /**
                     * 获取<p>List of reference superscript information</p>
                     * @return QuoteInfos <p>List of reference superscript information</p>
                     * 
                     */
                    std::vector<ConversationQuoteInfo> GetQuoteInfos() const;

                    /**
                     * 设置<p>List of reference superscript information</p>
                     * @param _quoteInfos <p>List of reference superscript information</p>
                     * 
                     */
                    void SetQuoteInfos(const std::vector<ConversationQuoteInfo>& _quoteInfos);

                    /**
                     * 判断参数 QuoteInfos 是否已赋值
                     * @return QuoteInfos 是否已赋值
                     * 
                     */
                    bool QuoteInfosHasBeenSet() const;

                    /**
                     * 获取<p>Reference source list</p>
                     * @return ReferenceList <p>Reference source list</p>
                     * 
                     */
                    std::vector<ConversationReference> GetReferenceList() const;

                    /**
                     * 设置<p>Reference source list</p>
                     * @param _referenceList <p>Reference source list</p>
                     * 
                     */
                    void SetReferenceList(const std::vector<ConversationReference>& _referenceList);

                    /**
                     * 判断参数 ReferenceList 是否已赋值
                     * @return ReferenceList 是否已赋值
                     * 
                     */
                    bool ReferenceListHasBeenSet() const;

                    /**
                     * 获取<p>Reference list</p>
                     * @return References <p>Reference list</p>
                     * 
                     */
                    std::vector<ConversationReference> GetReferences() const;

                    /**
                     * 设置<p>Reference list</p>
                     * @param _references <p>Reference list</p>
                     * 
                     */
                    void SetReferences(const std::vector<ConversationReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取<p>Associated record ID</p>
                     * @return RelatedRecordId <p>Associated record ID</p>
                     * 
                     */
                    std::string GetRelatedRecordId() const;

                    /**
                     * 设置<p>Associated record ID</p>
                     * @param _relatedRecordId <p>Associated record ID</p>
                     * 
                     */
                    void SetRelatedRecordId(const std::string& _relatedRecordId);

                    /**
                     * 判断参数 RelatedRecordId 是否已赋值
                     * @return RelatedRecordId 是否已赋值
                     * 
                     */
                    bool RelatedRecordIdHasBeenSet() const;

                    /**
                     * 获取<p>Intelligent Agent Task List</p>
                     * @return TaskList <p>Intelligent Agent Task List</p>
                     * 
                     */
                    std::vector<ConversationAgentTask> GetTaskList() const;

                    /**
                     * 设置<p>Intelligent Agent Task List</p>
                     * @param _taskList <p>Intelligent Agent Task List</p>
                     * 
                     */
                    void SetTaskList(const std::vector<ConversationAgentTask>& _taskList);

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     * 
                     */
                    bool TaskListHasBeenSet() const;

                    /**
                     * 获取<p>Intelligent Agent Task List</p>
                     * @return Tasks <p>Intelligent Agent Task List</p>
                     * 
                     */
                    std::vector<ConversationAgentTask> GetTasks() const;

                    /**
                     * 设置<p>Intelligent Agent Task List</p>
                     * @param _tasks <p>Intelligent Agent Task List</p>
                     * 
                     */
                    void SetTasks(const std::vector<ConversationAgentTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取<p>Workflow input parameter</p>
                     * @return WorkflowInput <p>Workflow input parameter</p>
                     * 
                     */
                    std::string GetWorkflowInput() const;

                    /**
                     * 设置<p>Workflow input parameter</p>
                     * @param _workflowInput <p>Workflow input parameter</p>
                     * 
                     */
                    void SetWorkflowInput(const std::string& _workflowInput);

                    /**
                     * 判断参数 WorkflowInput 是否已赋值
                     * @return WorkflowInput 是否已赋值
                     * 
                     */
                    bool WorkflowInputHasBeenSet() const;

                    /**
                     * 获取<p>MCP-APP call information</p>
                     * @return McpApp <p>MCP-APP call information</p>
                     * 
                     */
                    ConversationMcpApp GetMcpApp() const;

                    /**
                     * 设置<p>MCP-APP call information</p>
                     * @param _mcpApp <p>MCP-APP call information</p>
                     * 
                     */
                    void SetMcpApp(const ConversationMcpApp& _mcpApp);

                    /**
                     * 判断参数 McpApp 是否已赋值
                     * @return McpApp 是否已赋值
                     * 
                     */
                    bool McpAppHasBeenSet() const;

                private:

                    /**
                     * <p>Text content</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Content type. text: text, image: image, file: file, custom_variables: custom input parameter information, widget_action: widget action information</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Custom parameter data</p>
                     */
                    std::vector<std::string> m_customParamList;
                    bool m_customParamListHasBeenSet;

                    /**
                     * <p>Custom parameter data</p>
                     */
                    std::vector<std::string> m_customParams;
                    bool m_customParamsHasBeenSet;

                    /**
                     * <p>Custom variable data</p>
                     */
                    std::string m_customVariablesData;
                    bool m_customVariablesDataHasBeenSet;

                    /**
                     * <p>Business form</p>
                     */
                    std::string m_enterpriseCharts;
                    bool m_enterpriseChartsHasBeenSet;

                    /**
                     * <p>Tab List</p>
                     */
                    std::vector<std::string> m_optionCardList;
                    bool m_optionCardListHasBeenSet;

                    /**
                     * <p>Tab list.</p>
                     */
                    std::vector<std::string> m_optionCards;
                    bool m_optionCardsHasBeenSet;

                    /**
                     * <p>Tab mode. Enumeration values: 0-OPTION_MODE_SINGLE (single selection), 1-OPTION_MODE_MULTI (multiple selection)</p>
                     */
                    int64_t m_optionMode;
                    bool m_optionModeHasBeenSet;

                    /**
                     * <p>Reference marker information list</p>
                     */
                    std::vector<ConversationQuoteInfo> m_quoteInfoList;
                    bool m_quoteInfoListHasBeenSet;

                    /**
                     * <p>List of reference superscript information</p>
                     */
                    std::vector<ConversationQuoteInfo> m_quoteInfos;
                    bool m_quoteInfosHasBeenSet;

                    /**
                     * <p>Reference source list</p>
                     */
                    std::vector<ConversationReference> m_referenceList;
                    bool m_referenceListHasBeenSet;

                    /**
                     * <p>Reference list</p>
                     */
                    std::vector<ConversationReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * <p>Associated record ID</p>
                     */
                    std::string m_relatedRecordId;
                    bool m_relatedRecordIdHasBeenSet;

                    /**
                     * <p>Intelligent Agent Task List</p>
                     */
                    std::vector<ConversationAgentTask> m_taskList;
                    bool m_taskListHasBeenSet;

                    /**
                     * <p>Intelligent Agent Task List</p>
                     */
                    std::vector<ConversationAgentTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>Workflow input parameter</p>
                     */
                    std::string m_workflowInput;
                    bool m_workflowInputHasBeenSet;

                    /**
                     * <p>MCP-APP call information</p>
                     */
                    ConversationMcpApp m_mcpApp;
                    bool m_mcpAppHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONCONTENT_H_
