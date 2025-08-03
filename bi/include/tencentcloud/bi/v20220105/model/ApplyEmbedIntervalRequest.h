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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDINTERVALREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDINTERVALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * ApplyEmbedInterval request structure.
                */
                class ApplyEmbedIntervalRequest : public AbstractModel
                {
                public:
                    ApplyEmbedIntervalRequest();
                    ~ApplyEmbedIntervalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Shares the project ID. Required.
                     * @return ProjectId Shares the project ID. Required.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Shares the project ID. Required.
                     * @param _projectId Shares the project ID. Required.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Shares the page ID. This field is empty (0) for embedding a dashboard and is not passed for embedding ChatBI.

                     * @return PageId Shares the page ID. This field is empty (0) for embedding a dashboard and is not passed for embedding ChatBI.

                     * 
                     */
                    uint64_t GetPageId() const;

                    /**
                     * 设置Shares the page ID. This field is empty (0) for embedding a dashboard and is not passed for embedding ChatBI.

                     * @param _pageId Shares the page ID. This field is empty (0) for embedding a dashboard and is not passed for embedding ChatBI.

                     * 
                     */
                    void SetPageId(const uint64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取Token requiring extension.
                     * @return BIToken Token requiring extension.
                     * 
                     */
                    std::string GetBIToken() const;

                    /**
                     * 设置Token requiring extension.
                     * @param _bIToken Token requiring extension.
                     * 
                     */
                    void SetBIToken(const std::string& _bIToken);

                    /**
                     * 判断参数 BIToken 是否已赋值
                     * @return BIToken 是否已赋值
                     * 
                     */
                    bool BITokenHasBeenSet() const;

                    /**
                     * 获取Alternate field.
                     * @return ExtraParam Alternate field.
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置Alternate field.
                     * @param _extraParam Alternate field.
                     * 
                     */
                    void SetExtraParam(const std::string& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     * 
                     */
                    bool ExtraParamHasBeenSet() const;

                    /**
                     * 获取embed: page/dashboard embedding.
chatBIEmbed: ChatBI embedding.
                     * @return Intention embed: page/dashboard embedding.
chatBIEmbed: ChatBI embedding.
                     * 
                     */
                    std::string GetIntention() const;

                    /**
                     * 设置embed: page/dashboard embedding.
chatBIEmbed: ChatBI embedding.
                     * @param _intention embed: page/dashboard embedding.
chatBIEmbed: ChatBI embedding.
                     * 
                     */
                    void SetIntention(const std::string& _intention);

                    /**
                     * 判断参数 Intention 是否已赋值
                     * @return Intention 是否已赋值
                     * 
                     */
                    bool IntentionHasBeenSet() const;

                    /**
                     * 获取panel: dashboard; page: page.
project, during ChatBI embedding.
                     * @return Scope panel: dashboard; page: page.
project, during ChatBI embedding.
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置panel: dashboard; page: page.
project, during ChatBI embedding.
                     * @param _scope panel: dashboard; page: page.
project, during ChatBI embedding.
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                private:

                    /**
                     * Shares the project ID. Required.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Shares the page ID. This field is empty (0) for embedding a dashboard and is not passed for embedding ChatBI.

                     */
                    uint64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * Token requiring extension.
                     */
                    std::string m_bIToken;
                    bool m_bITokenHasBeenSet;

                    /**
                     * Alternate field.
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * embed: page/dashboard embedding.
chatBIEmbed: ChatBI embedding.
                     */
                    std::string m_intention;
                    bool m_intentionHasBeenSet;

                    /**
                     * panel: dashboard; page: page.
project, during ChatBI embedding.
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDINTERVALREQUEST_H_
