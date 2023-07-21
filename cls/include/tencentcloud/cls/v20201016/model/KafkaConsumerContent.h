/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_KAFKACONSUMERCONTENT_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_KAFKACONSUMERCONTENT_H_

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
                * Kafka consumer content
                */
                class KafkaConsumerContent : public AbstractModel
                {
                public:
                    KafkaConsumerContent();
                    ~KafkaConsumerContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Format. Valid values: 0 (full-text) and 1 (JSON).
                     * @return Format Format. Valid values: 0 (full-text) and 1 (JSON).
                     * 
                     */
                    int64_t GetFormat() const;

                    /**
                     * 设置Format. Valid values: 0 (full-text) and 1 (JSON).
                     * @param _format Format. Valid values: 0 (full-text) and 1 (JSON).
                     * 
                     */
                    void SetFormat(const int64_t& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Whether to ship tag information
This parameter does not need to be set when `Format` is set to `0`.
                     * @return EnableTag Whether to ship tag information
This parameter does not need to be set when `Format` is set to `0`.
                     * 
                     */
                    bool GetEnableTag() const;

                    /**
                     * 设置Whether to ship tag information
This parameter does not need to be set when `Format` is set to `0`.
                     * @param _enableTag Whether to ship tag information
This parameter does not need to be set when `Format` is set to `0`.
                     * 
                     */
                    void SetEnableTag(const bool& _enableTag);

                    /**
                     * 判断参数 EnableTag 是否已赋值
                     * @return EnableTag 是否已赋值
                     * 
                     */
                    bool EnableTagHasBeenSet() const;

                    /**
                     * 获取Metadata information list. Valid values: \_\_SOURCE\_\_, \_\_FILENAME\_\_,
\_\_TIMESTAMP\_\_, \_\_HOSTNAME\_\_, and \_\_PKGID\_\_.
This parameter does not need to be set when `Format` is set to `0`.
                     * @return MetaFields Metadata information list. Valid values: \_\_SOURCE\_\_, \_\_FILENAME\_\_,
\_\_TIMESTAMP\_\_, \_\_HOSTNAME\_\_, and \_\_PKGID\_\_.
This parameter does not need to be set when `Format` is set to `0`.
                     * 
                     */
                    std::vector<std::string> GetMetaFields() const;

                    /**
                     * 设置Metadata information list. Valid values: \_\_SOURCE\_\_, \_\_FILENAME\_\_,
\_\_TIMESTAMP\_\_, \_\_HOSTNAME\_\_, and \_\_PKGID\_\_.
This parameter does not need to be set when `Format` is set to `0`.
                     * @param _metaFields Metadata information list. Valid values: \_\_SOURCE\_\_, \_\_FILENAME\_\_,
\_\_TIMESTAMP\_\_, \_\_HOSTNAME\_\_, and \_\_PKGID\_\_.
This parameter does not need to be set when `Format` is set to `0`.
                     * 
                     */
                    void SetMetaFields(const std::vector<std::string>& _metaFields);

                    /**
                     * 判断参数 MetaFields 是否已赋值
                     * @return MetaFields 是否已赋值
                     * 
                     */
                    bool MetaFieldsHasBeenSet() const;

                    /**
                     * 获取Tag data processing mode. Valid values:
1 (default): Do not tile data.
2: Tile data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagTransaction Tag data processing mode. Valid values:
1 (default): Do not tile data.
2: Tile data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTagTransaction() const;

                    /**
                     * 设置Tag data processing mode. Valid values:
1 (default): Do not tile data.
2: Tile data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagTransaction Tag data processing mode. Valid values:
1 (default): Do not tile data.
2: Tile data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagTransaction(const int64_t& _tagTransaction);

                    /**
                     * 判断参数 TagTransaction 是否已赋值
                     * @return TagTransaction 是否已赋值
                     * 
                     */
                    bool TagTransactionHasBeenSet() const;

                    /**
                     * 获取JSON data format. Valid values:
1 (default): Not escaped.
2: Escaped.
                     * @return JsonType JSON data format. Valid values:
1 (default): Not escaped.
2: Escaped.
                     * 
                     */
                    int64_t GetJsonType() const;

                    /**
                     * 设置JSON data format. Valid values:
1 (default): Not escaped.
2: Escaped.
                     * @param _jsonType JSON data format. Valid values:
1 (default): Not escaped.
2: Escaped.
                     * 
                     */
                    void SetJsonType(const int64_t& _jsonType);

                    /**
                     * 判断参数 JsonType 是否已赋值
                     * @return JsonType 是否已赋值
                     * 
                     */
                    bool JsonTypeHasBeenSet() const;

                private:

                    /**
                     * Format. Valid values: 0 (full-text) and 1 (JSON).
                     */
                    int64_t m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Whether to ship tag information
This parameter does not need to be set when `Format` is set to `0`.
                     */
                    bool m_enableTag;
                    bool m_enableTagHasBeenSet;

                    /**
                     * Metadata information list. Valid values: \_\_SOURCE\_\_, \_\_FILENAME\_\_,
\_\_TIMESTAMP\_\_, \_\_HOSTNAME\_\_, and \_\_PKGID\_\_.
This parameter does not need to be set when `Format` is set to `0`.
                     */
                    std::vector<std::string> m_metaFields;
                    bool m_metaFieldsHasBeenSet;

                    /**
                     * Tag data processing mode. Valid values:
1 (default): Do not tile data.
2: Tile data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tagTransaction;
                    bool m_tagTransactionHasBeenSet;

                    /**
                     * JSON data format. Valid values:
1 (default): Not escaped.
2: Escaped.
                     */
                    int64_t m_jsonType;
                    bool m_jsonTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_KAFKACONSUMERCONTENT_H_
