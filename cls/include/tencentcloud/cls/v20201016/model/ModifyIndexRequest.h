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
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _topicId Log topic ID
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
                     * 获取It does not take effect by default
                     * @return Status It does not take effect by default
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置It does not take effect by default
                     * @param _status It does not take effect by default
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

                private:

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * It does not take effect by default
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYINDEXREQUEST_H_
