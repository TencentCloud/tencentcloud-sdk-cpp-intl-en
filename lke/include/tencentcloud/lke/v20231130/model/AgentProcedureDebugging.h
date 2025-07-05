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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPROCEDUREDEBUGGING_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPROCEDUREDEBUGGING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/QuoteInfo.h>
#include <tencentcloud/lke/v20231130/model/AgentReference.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Debugging information of the agent thinking process.
                */
                class AgentProcedureDebugging : public AbstractModel
                {
                public:
                    AgentProcedureDebugging();
                    ~AgentProcedureDebugging() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Model thinking content.
                     * @return Content Model thinking content.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Model thinking content.
                     * @param _content Model thinking content.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取The specific text content to be displayed.
                     * @return DisplayContent The specific text content to be displayed.
                     * 
                     */
                    std::string GetDisplayContent() const;

                    /**
                     * 设置The specific text content to be displayed.
                     * @param _displayContent The specific text content to be displayed.
                     * 
                     */
                    void SetDisplayContent(const std::string& _displayContent);

                    /**
                     * 判断参数 DisplayContent 是否已赋值
                     * @return DisplayContent 是否已赋值
                     * 
                     */
                    bool DisplayContentHasBeenSet() const;

                    /**
                     * 获取Display type.
                     * @return DisplayType Display type.
                     * 
                     */
                    uint64_t GetDisplayType() const;

                    /**
                     * 设置Display type.
                     * @param _displayType Display type.
                     * 
                     */
                    void SetDisplayType(const uint64_t& _displayType);

                    /**
                     * 判断参数 DisplayType 是否已赋值
                     * @return DisplayType 是否已赋值
                     * 
                     */
                    bool DisplayTypeHasBeenSet() const;

                    /**
                     * 获取Index displayed by the search engine.
                     * @return QuoteInfos Index displayed by the search engine.
                     * 
                     */
                    std::vector<QuoteInfo> GetQuoteInfos() const;

                    /**
                     * 设置Index displayed by the search engine.
                     * @param _quoteInfos Index displayed by the search engine.
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
                     * 获取Specific reference source.
                     * @return References Specific reference source.
                     * 
                     */
                    std::vector<AgentReference> GetReferences() const;

                    /**
                     * 设置Specific reference source.
                     * @param _references Specific reference source.
                     * 
                     */
                    void SetReferences(const std::vector<AgentReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取Display the ongoing status.
                     * @return DisplayStatus Display the ongoing status.
                     * 
                     */
                    std::string GetDisplayStatus() const;

                    /**
                     * 设置Display the ongoing status.
                     * @param _displayStatus Display the ongoing status.
                     * 
                     */
                    void SetDisplayStatus(const std::string& _displayStatus);

                    /**
                     * 判断参数 DisplayStatus 是否已赋值
                     * @return DisplayStatus 是否已赋值
                     * 
                     */
                    bool DisplayStatusHasBeenSet() const;

                    /**
                     * 获取URL of cloud desktop.
                     * @return SandboxUrl URL of cloud desktop.
                     * 
                     */
                    std::string GetSandboxUrl() const;

                    /**
                     * 设置URL of cloud desktop.
                     * @param _sandboxUrl URL of cloud desktop.
                     * 
                     */
                    void SetSandboxUrl(const std::string& _sandboxUrl);

                    /**
                     * 判断参数 SandboxUrl 是否已赋值
                     * @return SandboxUrl 是否已赋值
                     * 
                     */
                    bool SandboxUrlHasBeenSet() const;

                    /**
                     * 获取URL opened through the browser in cloud desktop.
                     * @return DisplayUrl URL opened through the browser in cloud desktop.
                     * 
                     */
                    std::string GetDisplayUrl() const;

                    /**
                     * 设置URL opened through the browser in cloud desktop.
                     * @param _displayUrl URL opened through the browser in cloud desktop.
                     * 
                     */
                    void SetDisplayUrl(const std::string& _displayUrl);

                    /**
                     * 判断参数 DisplayUrl 是否已赋值
                     * @return DisplayUrl 是否已赋值
                     * 
                     */
                    bool DisplayUrlHasBeenSet() const;

                private:

                    /**
                     * Model thinking content.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * The specific text content to be displayed.
                     */
                    std::string m_displayContent;
                    bool m_displayContentHasBeenSet;

                    /**
                     * Display type.
                     */
                    uint64_t m_displayType;
                    bool m_displayTypeHasBeenSet;

                    /**
                     * Index displayed by the search engine.
                     */
                    std::vector<QuoteInfo> m_quoteInfos;
                    bool m_quoteInfosHasBeenSet;

                    /**
                     * Specific reference source.
                     */
                    std::vector<AgentReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * Display the ongoing status.
                     */
                    std::string m_displayStatus;
                    bool m_displayStatusHasBeenSet;

                    /**
                     * URL of cloud desktop.
                     */
                    std::string m_sandboxUrl;
                    bool m_sandboxUrlHasBeenSet;

                    /**
                     * URL opened through the browser in cloud desktop.
                     */
                    std::string m_displayUrl;
                    bool m_displayUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPROCEDUREDEBUGGING_H_
