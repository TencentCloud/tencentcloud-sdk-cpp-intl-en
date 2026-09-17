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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TARGETTOPICCONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TARGETTOPICCONFIG_H_

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
                * Target topic configuration
                */
                class TargetTopicConfig : public AbstractModel
                {
                public:
                    TargetTopicConfig();
                    ~TargetTopicConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Target account type.</p><p>Enumeration values:</p><ul><li>1: Current root account</li><li>2: Other root account</li></ul>
                     * @return AccountType <p>Target account type.</p><p>Enumeration values:</p><ul><li>1: Current root account</li><li>2: Other root account</li></ul>
                     * 
                     */
                    uint64_t GetAccountType() const;

                    /**
                     * 设置<p>Target account type.</p><p>Enumeration values:</p><ul><li>1: Current root account</li><li>2: Other root account</li></ul>
                     * @param _accountType <p>Target account type.</p><p>Enumeration values:</p><ul><li>1: Current root account</li><li>2: Other root account</li></ul>
                     * 
                     */
                    void SetAccountType(const uint64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取<p>Target region</p><p>Parameter format: ap-guangzhou</p>
                     * @return Region <p>Target region</p><p>Parameter format: ap-guangzhou</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Target region</p><p>Parameter format: ap-guangzhou</p>
                     * @param _region <p>Target region</p><p>Parameter format: ap-guangzhou</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Target logset id</p>
                     * @return LogsetId <p>Target logset id</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>Target logset id</p>
                     * @param _logsetId <p>Target logset id</p>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>Target log topic id.</p>
                     * @return TopicId <p>Target log topic id.</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Target log topic id.</p>
                     * @param _topicId <p>Target log topic id.</p>
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
                     * 获取<p>Role ARN</p><p>Required when AccountType=2</p>
                     * @return RoleArn <p>Role ARN</p><p>Required when AccountType=2</p>
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置<p>Role ARN</p><p>Required when AccountType=2</p>
                     * @param _roleArn <p>Role ARN</p><p>Required when AccountType=2</p>
                     * 
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取<p>External ID</p><p>Required when AccountType=2</p>
                     * @return ExternalId <p>External ID</p><p>Required when AccountType=2</p>
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置<p>External ID</p><p>Required when AccountType=2</p>
                     * @param _externalId <p>External ID</p><p>Required when AccountType=2</p>
                     * 
                     */
                    void SetExternalId(const std::string& _externalId);

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                private:

                    /**
                     * <p>Target account type.</p><p>Enumeration values:</p><ul><li>1: Current root account</li><li>2: Other root account</li></ul>
                     */
                    uint64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * <p>Target region</p><p>Parameter format: ap-guangzhou</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Target logset id</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>Target log topic id.</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Role ARN</p><p>Required when AccountType=2</p>
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * <p>External ID</p><p>Required when AccountType=2</p>
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TARGETTOPICCONFIG_H_
