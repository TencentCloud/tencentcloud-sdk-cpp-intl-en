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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYINDEXREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYINDEXREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/RuleInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyIndex request structure.
                */
                class ModifyIndexRequest : public AbstractModel
                {
                public:
                    ModifyIndexRequest();
                    ~ModifyIndexRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic Id.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @return TopicId Log topic Id.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic Id.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @param _topicId Log topic Id.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
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
                     * 获取Index status. false: close index, true: enable index.
Once enabled, retrieval and analysis of logs will generate indexing traffic, index storage and corresponding fees. [Billing details](https://www.tencentcloud.com/document/product/614/45802?from_cn_redirect=1#.E8.AE.A1.E8.B4.B9.E9.A1.B9)
                     * @return Status Index status. false: close index, true: enable index.
Once enabled, retrieval and analysis of logs will generate indexing traffic, index storage and corresponding fees. [Billing details](https://www.tencentcloud.com/document/product/614/45802?from_cn_redirect=1#.E8.AE.A1.E8.B4.B9.E9.A1.B9)
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Index status. false: close index, true: enable index.
Once enabled, retrieval and analysis of logs will generate indexing traffic, index storage and corresponding fees. [Billing details](https://www.tencentcloud.com/document/product/614/45802?from_cn_redirect=1#.E8.AE.A1.E8.B4.B9.E9.A1.B9)
                     * @param _status Index status. false: close index, true: enable index.
Once enabled, retrieval and analysis of logs will generate indexing traffic, index storage and corresponding fees. [Billing details](https://www.tencentcloud.com/document/product/614/45802?from_cn_redirect=1#.E8.AE.A1.E8.B4.B9.E9.A1.B9)
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Index rule
                     * @return Rule Index rule
                     * 
                     */
                    RuleInfo GetRule() const;

                    /**
                     * 设置Index rule
                     * @param _rule Index rule
                     * 
                     */
                    void SetRule(const RuleInfo& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Whether full-text indexing includes internal fields (`__FILENAME__`, `__HOSTNAME__`, and `__SOURCE__`). Default value: `false`. Recommended value: `true`.
* `false`: Full-text indexing does not include internal fields.
* `true`: Full-text indexing includes internal fields.
                     * @return IncludeInternalFields Whether full-text indexing includes internal fields (`__FILENAME__`, `__HOSTNAME__`, and `__SOURCE__`). Default value: `false`. Recommended value: `true`.
* `false`: Full-text indexing does not include internal fields.
* `true`: Full-text indexing includes internal fields.
                     * 
                     */
                    bool GetIncludeInternalFields() const;

                    /**
                     * 设置Whether full-text indexing includes internal fields (`__FILENAME__`, `__HOSTNAME__`, and `__SOURCE__`). Default value: `false`. Recommended value: `true`.
* `false`: Full-text indexing does not include internal fields.
* `true`: Full-text indexing includes internal fields.
                     * @param _includeInternalFields Whether full-text indexing includes internal fields (`__FILENAME__`, `__HOSTNAME__`, and `__SOURCE__`). Default value: `false`. Recommended value: `true`.
* `false`: Full-text indexing does not include internal fields.
* `true`: Full-text indexing includes internal fields.
                     * 
                     */
                    void SetIncludeInternalFields(const bool& _includeInternalFields);

                    /**
                     * 判断参数 IncludeInternalFields 是否已赋值
                     * @return IncludeInternalFields 是否已赋值
                     * 
                     */
                    bool IncludeInternalFieldsHasBeenSet() const;

                    /**
                     * 获取Whether full-text indexing includes metadata fields (which are prefixed with `__TAG__`). Default value: `0`. Recommended value: `1`.
* `0`: Full-text indexing includes only metadata fields with key-value indexing enabled.
* `1`: Full-text indexing includes all metadata fields.
* `2`: Full-text indexing does not include metadata fields.
                     * @return MetadataFlag Whether full-text indexing includes metadata fields (which are prefixed with `__TAG__`). Default value: `0`. Recommended value: `1`.
* `0`: Full-text indexing includes only metadata fields with key-value indexing enabled.
* `1`: Full-text indexing includes all metadata fields.
* `2`: Full-text indexing does not include metadata fields.
                     * 
                     */
                    uint64_t GetMetadataFlag() const;

                    /**
                     * 设置Whether full-text indexing includes metadata fields (which are prefixed with `__TAG__`). Default value: `0`. Recommended value: `1`.
* `0`: Full-text indexing includes only metadata fields with key-value indexing enabled.
* `1`: Full-text indexing includes all metadata fields.
* `2`: Full-text indexing does not include metadata fields.
                     * @param _metadataFlag Whether full-text indexing includes metadata fields (which are prefixed with `__TAG__`). Default value: `0`. Recommended value: `1`.
* `0`: Full-text indexing includes only metadata fields with key-value indexing enabled.
* `1`: Full-text indexing includes all metadata fields.
* `2`: Full-text indexing does not include metadata fields.
                     * 
                     */
                    void SetMetadataFlag(const uint64_t& _metadataFlag);

                    /**
                     * 判断参数 MetadataFlag 是否已赋值
                     * @return MetadataFlag 是否已赋值
                     * 
                     */
                    bool MetadataFlagHasBeenSet() const;

                    /**
                     * 获取Custom log parsing exception storage fields
                     * @return CoverageField Custom log parsing exception storage fields
                     * 
                     */
                    std::string GetCoverageField() const;

                    /**
                     * 设置Custom log parsing exception storage fields
                     * @param _coverageField Custom log parsing exception storage fields
                     * 
                     */
                    void SetCoverageField(const std::string& _coverageField);

                    /**
                     * 判断参数 CoverageField 是否已赋值
                     * @return CoverageField 是否已赋值
                     * 
                     */
                    bool CoverageFieldHasBeenSet() const;

                private:

                    /**
                     * Log topic Id.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Index status. false: close index, true: enable index.
Once enabled, retrieval and analysis of logs will generate indexing traffic, index storage and corresponding fees. [Billing details](https://www.tencentcloud.com/document/product/614/45802?from_cn_redirect=1#.E8.AE.A1.E8.B4.B9.E9.A1.B9)
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Index rule
                     */
                    RuleInfo m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Whether full-text indexing includes internal fields (`__FILENAME__`, `__HOSTNAME__`, and `__SOURCE__`). Default value: `false`. Recommended value: `true`.
* `false`: Full-text indexing does not include internal fields.
* `true`: Full-text indexing includes internal fields.
                     */
                    bool m_includeInternalFields;
                    bool m_includeInternalFieldsHasBeenSet;

                    /**
                     * Whether full-text indexing includes metadata fields (which are prefixed with `__TAG__`). Default value: `0`. Recommended value: `1`.
* `0`: Full-text indexing includes only metadata fields with key-value indexing enabled.
* `1`: Full-text indexing includes all metadata fields.
* `2`: Full-text indexing does not include metadata fields.
                     */
                    uint64_t m_metadataFlag;
                    bool m_metadataFlagHasBeenSet;

                    /**
                     * Custom log parsing exception storage fields
                     */
                    std::string m_coverageField;
                    bool m_coverageFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYINDEXREQUEST_H_
