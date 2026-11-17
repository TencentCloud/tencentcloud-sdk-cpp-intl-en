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
                * Kafka consumption content
                */
                class KafkaConsumerContent : public AbstractModel
                {
                public:
                    KafkaConsumerContent();
                    ~KafkaConsumerContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Consumption data format. 0: Raw content; 1: JSON.</p>
                     * @return Format <p>Consumption data format. 0: Raw content; 1: JSON.</p>
                     * 
                     */
                    int64_t GetFormat() const;

                    /**
                     * 设置<p>Consumption data format. 0: Raw content; 1: JSON.</p>
                     * @param _format <p>Consumption data format. 0: Raw content; 1: JSON.</p>
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
                     * 获取<p>Whether to deliver TAG information<br>When Format is 0, this field does not need to be assigned a value</p>
                     * @return EnableTag <p>Whether to deliver TAG information<br>When Format is 0, this field does not need to be assigned a value</p>
                     * 
                     */
                    bool GetEnableTag() const;

                    /**
                     * 设置<p>Whether to deliver TAG information<br>When Format is 0, this field does not need to be assigned a value</p>
                     * @param _enableTag <p>Whether to deliver TAG information<br>When Format is 0, this field does not need to be assigned a value</p>
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
                     * 获取<p>Metadata information list. Valid values: __SOURCE__, __FILENAME__<br>, __TIMESTAMP__, __HOSTNAME__, __PKGID__<br>When Format is 0, this field does not need to be assigned a value</p>
                     * @return MetaFields <p>Metadata information list. Valid values: __SOURCE__, __FILENAME__<br>, __TIMESTAMP__, __HOSTNAME__, __PKGID__<br>When Format is 0, this field does not need to be assigned a value</p>
                     * 
                     */
                    std::vector<std::string> GetMetaFields() const;

                    /**
                     * 设置<p>Metadata information list. Valid values: __SOURCE__, __FILENAME__<br>, __TIMESTAMP__, __HOSTNAME__, __PKGID__<br>When Format is 0, this field does not need to be assigned a value</p>
                     * @param _metaFields <p>Metadata information list. Valid values: __SOURCE__, __FILENAME__<br>, __TIMESTAMP__, __HOSTNAME__, __PKGID__<br>When Format is 0, this field does not need to be assigned a value</p>
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
                     * 获取<p>Tag data processing method. 1: Not flattened (default); 2: Flattened.</p><p>Not flattened example:<br>TAG information: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>Not flattened: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>Flattened example:<br>TAG information: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>Flattened: <code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     * @return TagTransaction <p>Tag data processing method. 1: Not flattened (default); 2: Flattened.</p><p>Not flattened example:<br>TAG information: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>Not flattened: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>Flattened example:<br>TAG information: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>Flattened: <code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     * 
                     */
                    int64_t GetTagTransaction() const;

                    /**
                     * 设置<p>Tag data processing method. 1: Not flattened (default); 2: Flattened.</p><p>Not flattened example:<br>TAG information: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>Not flattened: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>Flattened example:<br>TAG information: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>Flattened: <code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     * @param _tagTransaction <p>Tag data processing method. 1: Not flattened (default); 2: Flattened.</p><p>Not flattened example:<br>TAG information: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>Not flattened: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>Flattened example:<br>TAG information: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>Flattened: <code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
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
                     * 获取<p>Consumption data Json format:<br>1: Not escaped (default format)<br>2: Escaped</p><p>Delivery Json format.<br>When JsonType is 1: Consistent with the original log, not escaped. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Delivered to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></p><p>When JsonType is 2: Escaped. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Delivered to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></p>
                     * @return JsonType <p>Consumption data Json format:<br>1: Not escaped (default format)<br>2: Escaped</p><p>Delivery Json format.<br>When JsonType is 1: Consistent with the original log, not escaped. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Delivered to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></p><p>When JsonType is 2: Escaped. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Delivered to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></p>
                     * 
                     */
                    int64_t GetJsonType() const;

                    /**
                     * 设置<p>Consumption data Json format:<br>1: Not escaped (default format)<br>2: Escaped</p><p>Delivery Json format.<br>When JsonType is 1: Consistent with the original log, not escaped. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Delivered to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></p><p>When JsonType is 2: Escaped. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Delivered to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></p>
                     * @param _jsonType <p>Consumption data Json format:<br>1: Not escaped (default format)<br>2: Escaped</p><p>Delivery Json format.<br>When JsonType is 1: Consistent with the original log, not escaped. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Delivered to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></p><p>When JsonType is 2: Escaped. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Delivered to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></p>
                     * 
                     */
                    void SetJsonType(const int64_t& _jsonType);

                    /**
                     * 判断参数 JsonType 是否已赋值
                     * @return JsonType 是否已赋值
                     * 
                     */
                    bool JsonTypeHasBeenSet() const;

                    /**
                     * 获取<p>Switch for automatic conversion of numeric types</p><p>Valid values:</p><ul><li>true: Numeric strings (such as &quot;123&quot;) in the first-level values of the JSON structure are automatically converted to numeric types (int/float).</li><li>false: Numeric strings (such as &quot;123&quot;) in the first-level values of the JSON structure remain strings.</li></ul><p>Default value: false</p>
                     * @return AutoConvertNumber <p>Switch for automatic conversion of numeric types</p><p>Valid values:</p><ul><li>true: Numeric strings (such as &quot;123&quot;) in the first-level values of the JSON structure are automatically converted to numeric types (int/float).</li><li>false: Numeric strings (such as &quot;123&quot;) in the first-level values of the JSON structure remain strings.</li></ul><p>Default value: false</p>
                     * 
                     */
                    bool GetAutoConvertNumber() const;

                    /**
                     * 设置<p>Switch for automatic conversion of numeric types</p><p>Valid values:</p><ul><li>true: Numeric strings (such as &quot;123&quot;) in the first-level values of the JSON structure are automatically converted to numeric types (int/float).</li><li>false: Numeric strings (such as &quot;123&quot;) in the first-level values of the JSON structure remain strings.</li></ul><p>Default value: false</p>
                     * @param _autoConvertNumber <p>Switch for automatic conversion of numeric types</p><p>Valid values:</p><ul><li>true: Numeric strings (such as &quot;123&quot;) in the first-level values of the JSON structure are automatically converted to numeric types (int/float).</li><li>false: Numeric strings (such as &quot;123&quot;) in the first-level values of the JSON structure remain strings.</li></ul><p>Default value: false</p>
                     * 
                     */
                    void SetAutoConvertNumber(const bool& _autoConvertNumber);

                    /**
                     * 判断参数 AutoConvertNumber 是否已赋值
                     * @return AutoConvertNumber 是否已赋值
                     * 
                     */
                    bool AutoConvertNumberHasBeenSet() const;

                private:

                    /**
                     * <p>Consumption data format. 0: Raw content; 1: JSON.</p>
                     */
                    int64_t m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>Whether to deliver TAG information<br>When Format is 0, this field does not need to be assigned a value</p>
                     */
                    bool m_enableTag;
                    bool m_enableTagHasBeenSet;

                    /**
                     * <p>Metadata information list. Valid values: __SOURCE__, __FILENAME__<br>, __TIMESTAMP__, __HOSTNAME__, __PKGID__<br>When Format is 0, this field does not need to be assigned a value</p>
                     */
                    std::vector<std::string> m_metaFields;
                    bool m_metaFieldsHasBeenSet;

                    /**
                     * <p>Tag data processing method. 1: Not flattened (default); 2: Flattened.</p><p>Not flattened example:<br>TAG information: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>Not flattened: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code></p><p>Flattened example:<br>TAG information: <code>{&quot;__TAG__&quot;:{&quot;fieldA&quot;:200,&quot;fieldB&quot;:&quot;text&quot;}}</code><br>Flattened: <code>{&quot;__TAG__.fieldA&quot;:200,&quot;__TAG__.fieldB&quot;:&quot;text&quot;}</code></p>
                     */
                    int64_t m_tagTransaction;
                    bool m_tagTransactionHasBeenSet;

                    /**
                     * <p>Consumption data Json format:<br>1: Not escaped (default format)<br>2: Escaped</p><p>Delivery Json format.<br>When JsonType is 1: Consistent with the original log, not escaped. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Delivered to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></p><p>When JsonType is 2: Escaped. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Delivered to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></p>
                     */
                    int64_t m_jsonType;
                    bool m_jsonTypeHasBeenSet;

                    /**
                     * <p>Switch for automatic conversion of numeric types</p><p>Valid values:</p><ul><li>true: Numeric strings (such as &quot;123&quot;) in the first-level values of the JSON structure are automatically converted to numeric types (int/float).</li><li>false: Numeric strings (such as &quot;123&quot;) in the first-level values of the JSON structure remain strings.</li></ul><p>Default value: false</p>
                     */
                    bool m_autoConvertNumber;
                    bool m_autoConvertNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_KAFKACONSUMERCONTENT_H_
