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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeTokenUsage request structure.
                */
                class DescribeTokenUsageRequest : public AbstractModel
                {
                public:
                    DescribeTokenUsageRequest();
                    ~DescribeTokenUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Root account of Tencent Cloud.
                     * @return UinAccount Root account of Tencent Cloud.
                     * 
                     */
                    std::vector<std::string> GetUinAccount() const;

                    /**
                     * 设置Root account of Tencent Cloud.
                     * @param _uinAccount Root account of Tencent Cloud.
                     * 
                     */
                    void SetUinAccount(const std::vector<std::string>& _uinAccount);

                    /**
                     * 判断参数 UinAccount 是否已赋值
                     * @return UinAccount 是否已赋值
                     * 
                     */
                    bool UinAccountHasBeenSet() const;

                    /**
                     * 获取Log in to user's root account (required in the integrator mode).
                     * @return LoginUin Log in to user's root account (required in the integrator mode).
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置Log in to user's root account (required in the integrator mode).
                     * @param _loginUin Log in to user's root account (required in the integrator mode).
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取Login to user's sub-account (required in integrator mode).
                     * @return LoginSubAccountUin Login to user's sub-account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置Login to user's sub-account (required in integrator mode).
                     * @param _loginSubAccountUin Login to user's sub-account (required in integrator mode).
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                    /**
                     * 获取Sub-business types of Tencent Cloud Agent Development Platform/TCADP: FileParse (document parsing), embedding, Rewrite (multi-round rewriting), Concurrency, KnowledgeSummary (knowledge summary), KnowledgeQA (knowledge Q&A), KnowledgeCapacity (knowledge base capacity), SearchEngine (search engine).
                     * @return SubBizType Sub-business types of Tencent Cloud Agent Development Platform/TCADP: FileParse (document parsing), embedding, Rewrite (multi-round rewriting), Concurrency, KnowledgeSummary (knowledge summary), KnowledgeQA (knowledge Q&A), KnowledgeCapacity (knowledge base capacity), SearchEngine (search engine).
                     * 
                     */
                    std::string GetSubBizType() const;

                    /**
                     * 设置Sub-business types of Tencent Cloud Agent Development Platform/TCADP: FileParse (document parsing), embedding, Rewrite (multi-round rewriting), Concurrency, KnowledgeSummary (knowledge summary), KnowledgeQA (knowledge Q&A), KnowledgeCapacity (knowledge base capacity), SearchEngine (search engine).
                     * @param _subBizType Sub-business types of Tencent Cloud Agent Development Platform/TCADP: FileParse (document parsing), embedding, Rewrite (multi-round rewriting), Concurrency, KnowledgeSummary (knowledge summary), KnowledgeQA (knowledge Q&A), KnowledgeCapacity (knowledge base capacity), SearchEngine (search engine).
                     * 
                     */
                    void SetSubBizType(const std::string& _subBizType);

                    /**
                     * 判断参数 SubBizType 是否已赋值
                     * @return SubBizType 是否已赋值
                     * 
                     */
                    bool SubBizTypeHasBeenSet() const;

                    /**
                     * 获取Model identifier.
                     * @return ModelName Model identifier.
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model identifier.
                     * @param _modelName Model identifier.
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取Start timestamp, in seconds (default value: 0).
                     * @return StartTime Start timestamp, in seconds (default value: 0).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start timestamp, in seconds (default value: 0).
                     * @param _startTime Start timestamp, in seconds (default value: 0).
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End timestamp, in seconds (default value: 0, must be greater than the start timestamp).
                     * @return EndTime End timestamp, in seconds (default value: 0, must be greater than the start timestamp).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End timestamp, in seconds (default value: 0, must be greater than the start timestamp).
                     * @param _endTime End timestamp, in seconds (default value: 0, must be greater than the start timestamp).
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Application ID list.
                     * @return AppBizIds Application ID list.
                     * 
                     */
                    std::vector<std::string> GetAppBizIds() const;

                    /**
                     * 设置Application ID list.
                     * @param _appBizIds Application ID list.
                     * 
                     */
                    void SetAppBizIds(const std::vector<std::string>& _appBizIds);

                    /**
                     * 判断参数 AppBizIds 是否已赋值
                     * @return AppBizIds 是否已赋值
                     * 
                     */
                    bool AppBizIdsHasBeenSet() const;

                    /**
                     * 获取Filter sub-scenario (used in document parsing scenario).
                     * @return SubScenes Filter sub-scenario (used in document parsing scenario).
                     * 
                     */
                    std::vector<std::string> GetSubScenes() const;

                    /**
                     * 设置Filter sub-scenario (used in document parsing scenario).
                     * @param _subScenes Filter sub-scenario (used in document parsing scenario).
                     * 
                     */
                    void SetSubScenes(const std::vector<std::string>& _subScenes);

                    /**
                     * 判断参数 SubScenes 是否已赋值
                     * @return SubScenes 是否已赋值
                     * 
                     */
                    bool SubScenesHasBeenSet() const;

                private:

                    /**
                     * Root account of Tencent Cloud.
                     */
                    std::vector<std::string> m_uinAccount;
                    bool m_uinAccountHasBeenSet;

                    /**
                     * Log in to user's root account (required in the integrator mode).
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * Login to user's sub-account (required in integrator mode).
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * Sub-business types of Tencent Cloud Agent Development Platform/TCADP: FileParse (document parsing), embedding, Rewrite (multi-round rewriting), Concurrency, KnowledgeSummary (knowledge summary), KnowledgeQA (knowledge Q&A), KnowledgeCapacity (knowledge base capacity), SearchEngine (search engine).
                     */
                    std::string m_subBizType;
                    bool m_subBizTypeHasBeenSet;

                    /**
                     * Model identifier.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Start timestamp, in seconds (default value: 0).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timestamp, in seconds (default value: 0, must be greater than the start timestamp).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Application ID list.
                     */
                    std::vector<std::string> m_appBizIds;
                    bool m_appBizIdsHasBeenSet;

                    /**
                     * Filter sub-scenario (used in document parsing scenario).
                     */
                    std::vector<std::string> m_subScenes;
                    bool m_subScenesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEREQUEST_H_
