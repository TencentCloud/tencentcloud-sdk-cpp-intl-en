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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMRESOUCEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMRESOUCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Information about the resource for data processing
                */
                class DataTransformResouceInfo : public AbstractModel
                {
                public:
                    DataTransformResouceInfo();
                    ~DataTransformResouceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Log topic ID</p><ul><li>Get the log topic ID by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">getting the log topic list</a>.</li></ul>
                     * @return TopicId <p>Log topic ID</p><ul><li>Get the log topic ID by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">getting the log topic list</a>.</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Log topic ID</p><ul><li>Get the log topic ID by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">getting the log topic list</a>.</li></ul>
                     * @param _topicId <p>Log topic ID</p><ul><li>Get the log topic ID by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">getting the log topic list</a>.</li></ul>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Alias<br>Limitation: Cannot contain character |.</p>
                     * @return Alias <p>Alias<br>Limitation: Cannot contain character |.</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>Alias<br>Limitation: Cannot contain character |.</p>
                     * @param _alias <p>Alias<br>Limitation: Cannot contain character |.</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a cross-account topic. false means it is not a cross-account topic, and true means it is a cross-account topic.</p><p>Default value: false</p>
                     * @return IsCrossAccount <p>Whether it is a cross-account topic. false means it is not a cross-account topic, and true means it is a cross-account topic.</p><p>Default value: false</p>
                     * 
                     */
                    bool GetIsCrossAccount() const;

                    /**
                     * 设置<p>Whether it is a cross-account topic. false means it is not a cross-account topic, and true means it is a cross-account topic.</p><p>Default value: false</p>
                     * @param _isCrossAccount <p>Whether it is a cross-account topic. false means it is not a cross-account topic, and true means it is a cross-account topic.</p><p>Default value: false</p>
                     * 
                     */
                    void SetIsCrossAccount(const bool& _isCrossAccount);

                    /**
                     * 判断参数 IsCrossAccount 是否已赋值
                     * @return IsCrossAccount 是否已赋值
                     * 
                     */
                    bool IsCrossAccountHasBeenSet() const;

                    /**
                     * 获取<p>In a cross-account scenario, search for the role ARN value created by the delivery account for the shipping account in the roles of the shipping account.</p>
                     * @return RoleARN <p>In a cross-account scenario, search for the role ARN value created by the delivery account for the shipping account in the roles of the shipping account.</p>
                     * 
                     */
                    std::string GetRoleARN() const;

                    /**
                     * 设置<p>In a cross-account scenario, search for the role ARN value created by the delivery account for the shipping account in the roles of the shipping account.</p>
                     * @param _roleARN <p>In a cross-account scenario, search for the role ARN value created by the delivery account for the shipping account in the roles of the shipping account.</p>
                     * 
                     */
                    void SetRoleARN(const std::string& _roleARN);

                    /**
                     * 判断参数 RoleARN 是否已赋值
                     * @return RoleARN 是否已赋值
                     * 
                     */
                    bool RoleARNHasBeenSet() const;

                    /**
                     * 获取<p>External ID value. Can be found in the role-carrier of the shipping account.</p>
                     * @return ExternalId <p>External ID value. Can be found in the role-carrier of the shipping account.</p>
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置<p>External ID value. Can be found in the role-carrier of the shipping account.</p>
                     * @param _externalId <p>External ID value. Can be found in the role-carrier of the shipping account.</p>
                     * 
                     */
                    void SetExternalId(const std::string& _externalId);

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                    /**
                     * 获取<p>topic name</p>
                     * @return TopicName <p>topic name</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>topic name</p>
                     * @param _topicName <p>topic name</p>
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取<p>Logset name</p>
                     * @return LogsetName <p>Logset name</p>
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置<p>Logset name</p>
                     * @param _logsetName <p>Logset name</p>
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                private:

                    /**
                     * <p>Log topic ID</p><ul><li>Get the log topic ID by <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">getting the log topic list</a>.</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Alias<br>Limitation: Cannot contain character |.</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>Whether it is a cross-account topic. false means it is not a cross-account topic, and true means it is a cross-account topic.</p><p>Default value: false</p>
                     */
                    bool m_isCrossAccount;
                    bool m_isCrossAccountHasBeenSet;

                    /**
                     * <p>In a cross-account scenario, search for the role ARN value created by the delivery account for the shipping account in the roles of the shipping account.</p>
                     */
                    std::string m_roleARN;
                    bool m_roleARNHasBeenSet;

                    /**
                     * <p>External ID value. Can be found in the role-carrier of the shipping account.</p>
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                    /**
                     * <p>topic name</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>Logset name</p>
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMRESOUCEINFO_H_
