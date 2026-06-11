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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEINDEXRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEINDEXRESPONSE_H_

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
                * DescribeIndex response structure.
                */
                class DescribeIndexResponse : public AbstractModel
                {
                public:
                    DescribeIndexResponse();
                    ~DescribeIndexResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Log topic Id</p>
                     * @return TopicId <p>Log topic Id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Index status. true: enabled, false: disabled<br>Once enabled, you can perform retrieval and analysis of logs, which will generate indexing traffic, index storage, and corresponding fees. <a href="https://www.tencentcloud.com/document/product/614/45802?from_cn_redirect=1#.E8.AE.A1.E8.B4.B9.E9.A1.B9">Billing details</a></p>
                     * @return Status <p>Index status. true: enabled, false: disabled<br>Once enabled, you can perform retrieval and analysis of logs, which will generate indexing traffic, index storage, and corresponding fees. <a href="https://www.tencentcloud.com/document/product/614/45802?from_cn_redirect=1#.E8.AE.A1.E8.B4.B9.E9.A1.B9">Billing details</a></p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Index configuration information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rule <p>Index configuration information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RuleInfo GetRule() const;

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取<p>Index modification time, which is initially the index creation time. Format <code>YYYY-MM-DD HH:MM:SS</code></p>
                     * @return ModifyTime <p>Index modification time, which is initially the index creation time. Format <code>YYYY-MM-DD HH:MM:SS</code></p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether the built-in reserved fields (<code>__FILENAME__</code>, <code>__HOSTNAME__</code>, and <code>__SOURCE__</code>) are included in the full-text index</p><ul><li>false: does not include</li><li>true: includes</li></ul>
                     * @return IncludeInternalFields <p>Whether the built-in reserved fields (<code>__FILENAME__</code>, <code>__HOSTNAME__</code>, and <code>__SOURCE__</code>) are included in the full-text index</p><ul><li>false: does not include</li><li>true: includes</li></ul>
                     * 
                     */
                    bool GetIncludeInternalFields() const;

                    /**
                     * 判断参数 IncludeInternalFields 是否已赋值
                     * @return IncludeInternalFields 是否已赋值
                     * 
                     */
                    bool IncludeInternalFieldsHasBeenSet() const;

                    /**
                     * 获取<p>Whether metadata fields (fields prefixed with <code>__TAG__</code>) are included in full-text indexing</p><ul><li>0: Contain only metadata fields with key-value index enabled</li><li>1: Include all metadata fields</li><li>2: Exclude any metadata fields</li></ul>
                     * @return MetadataFlag <p>Whether metadata fields (fields prefixed with <code>__TAG__</code>) are included in full-text indexing</p><ul><li>0: Contain only metadata fields with key-value index enabled</li><li>1: Include all metadata fields</li><li>2: Exclude any metadata fields</li></ul>
                     * 
                     */
                    uint64_t GetMetadataFlag() const;

                    /**
                     * 判断参数 MetadataFlag 是否已赋值
                     * @return MetadataFlag 是否已赋值
                     * 
                     */
                    bool MetadataFlagHasBeenSet() const;

                    /**
                     * 获取<p>Custom log parsing exception storage field.</p>
                     * @return CoverageField <p>Custom log parsing exception storage field.</p>
                     * 
                     */
                    std::string GetCoverageField() const;

                    /**
                     * 判断参数 CoverageField 是否已赋值
                     * @return CoverageField 是否已赋值
                     * 
                     */
                    bool CoverageFieldHasBeenSet() const;

                private:

                    /**
                     * <p>Log topic Id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Index status. true: enabled, false: disabled<br>Once enabled, you can perform retrieval and analysis of logs, which will generate indexing traffic, index storage, and corresponding fees. <a href="https://www.tencentcloud.com/document/product/614/45802?from_cn_redirect=1#.E8.AE.A1.E8.B4.B9.E9.A1.B9">Billing details</a></p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Index configuration information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RuleInfo m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>Index modification time, which is initially the index creation time. Format <code>YYYY-MM-DD HH:MM:SS</code></p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>Whether the built-in reserved fields (<code>__FILENAME__</code>, <code>__HOSTNAME__</code>, and <code>__SOURCE__</code>) are included in the full-text index</p><ul><li>false: does not include</li><li>true: includes</li></ul>
                     */
                    bool m_includeInternalFields;
                    bool m_includeInternalFieldsHasBeenSet;

                    /**
                     * <p>Whether metadata fields (fields prefixed with <code>__TAG__</code>) are included in full-text indexing</p><ul><li>0: Contain only metadata fields with key-value index enabled</li><li>1: Include all metadata fields</li><li>2: Exclude any metadata fields</li></ul>
                     */
                    uint64_t m_metadataFlag;
                    bool m_metadataFlagHasBeenSet;

                    /**
                     * <p>Custom log parsing exception storage field.</p>
                     */
                    std::string m_coverageField;
                    bool m_coverageFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEINDEXRESPONSE_H_
