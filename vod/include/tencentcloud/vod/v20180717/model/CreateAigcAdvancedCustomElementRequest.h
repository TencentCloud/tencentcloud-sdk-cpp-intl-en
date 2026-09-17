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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateAigcAdvancedCustomElement request structure.
                */
                class CreateAigcAdvancedCustomElementRequest : public AbstractModel
                {
                public:
                    CreateAigcAdvancedCustomElementRequest();
                    ~CreateAigcAdvancedCustomElementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ElementName 
                     * 
                     */
                    std::string GetElementName() const;

                    /**
                     * 设置
                     * @param _elementName 
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
                     * 获取
                     * @return ElementDescription 
                     * 
                     */
                    std::string GetElementDescription() const;

                    /**
                     * 设置
                     * @param _elementDescription 
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
                     * 获取
                     * @return ReferenceType 
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置
                     * @param _referenceType 
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
                     * 获取
                     * @return ElementVoiceId 
                     * 
                     */
                    std::string GetElementVoiceId() const;

                    /**
                     * 设置
                     * @param _elementVoiceId 
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
                     * 获取
                     * @return ElementVideoList 
                     * 
                     */
                    std::string GetElementVideoList() const;

                    /**
                     * 设置
                     * @param _elementVideoList 
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
                     * 获取
                     * @return ElementImageList 
                     * 
                     */
                    std::string GetElementImageList() const;

                    /**
                     * 设置
                     * @param _elementImageList 
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
                     * 获取
                     * @return TagList 
                     * 
                     */
                    std::string GetTagList() const;

                    /**
                     * 设置
                     * @param _tagList 
                     * 
                     */
                    void SetTagList(const std::string& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取
                     * @return DisableModeration 
                     * 
                     */
                    std::string GetDisableModeration() const;

                    /**
                     * 设置
                     * @param _disableModeration 
                     * 
                     */
                    void SetDisableModeration(const std::string& _disableModeration);

                    /**
                     * 判断参数 DisableModeration 是否已赋值
                     * @return DisableModeration 是否已赋值
                     * 
                     */
                    bool DisableModerationHasBeenSet() const;

                    /**
                     * 获取
                     * @return SessionId 
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置
                     * @param _sessionId 
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return SessionContext 
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置
                     * @param _sessionContext 
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取
                     * @return TasksPriority 
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置
                     * @param _tasksPriority 
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_elementName;
                    bool m_elementNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_elementDescription;
                    bool m_elementDescriptionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_elementVoiceId;
                    bool m_elementVoiceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_elementVideoList;
                    bool m_elementVideoListHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_elementImageList;
                    bool m_elementImageListHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_disableModeration;
                    bool m_disableModerationHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTREQUEST_H_
