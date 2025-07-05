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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERCONTENT_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERCONTENT_H_

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
                * Shipping content
                */
                class ConsumerContent : public AbstractModel
                {
                public:
                    ConsumerContent();
                    ~ConsumerContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to deliver TAG information.
When EnableTag is true, it indicates the delivery of TAG metadata.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableTag Whether to deliver TAG information.
When EnableTag is true, it indicates the delivery of TAG metadata.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnableTag() const;

                    /**
                     * 设置Whether to deliver TAG information.
When EnableTag is true, it indicates the delivery of TAG metadata.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enableTag Whether to deliver TAG information.
When EnableTag is true, it indicates the delivery of TAG metadata.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of metadata to ship. Supported metadata types: \_\_SOURCE\_\_, \_\_FILENAME\_\_, \_\_TIMESTAMP\_\_, \_\_HOSTNAME\_\_, and \_\_PKGID\_\_.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetaFields List of metadata to ship. Supported metadata types: \_\_SOURCE\_\_, \_\_FILENAME\_\_, \_\_TIMESTAMP\_\_, \_\_HOSTNAME\_\_, and \_\_PKGID\_\_.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetMetaFields() const;

                    /**
                     * 设置List of metadata to ship. Supported metadata types: \_\_SOURCE\_\_, \_\_FILENAME\_\_, \_\_TIMESTAMP\_\_, \_\_HOSTNAME\_\_, and \_\_PKGID\_\_.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metaFields List of metadata to ship. Supported metadata types: \_\_SOURCE\_\_, \_\_FILENAME\_\_, \_\_TIMESTAMP\_\_, \_\_HOSTNAME\_\_, and \_\_PKGID\_\_.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取When EnableTag is true, the TagJsonNotTiled field must be filled.TagJsonNotTiled is used to indicate whether tag information is JSON flattened.When TagJsonNotTiled is true, it is not flattened. Example:TAG information: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
Untiled: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`When TagJsonNotTiled is false, the data is tiled. Example:TAG information: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`Tiled: `{"__TAG__.fieldA":200,"__TAG__.fieldB":"text"}`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagJsonNotTiled When EnableTag is true, the TagJsonNotTiled field must be filled.TagJsonNotTiled is used to indicate whether tag information is JSON flattened.When TagJsonNotTiled is true, it is not flattened. Example:TAG information: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
Untiled: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`When TagJsonNotTiled is false, the data is tiled. Example:TAG information: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`Tiled: `{"__TAG__.fieldA":200,"__TAG__.fieldB":"text"}`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetTagJsonNotTiled() const;

                    /**
                     * 设置When EnableTag is true, the TagJsonNotTiled field must be filled.TagJsonNotTiled is used to indicate whether tag information is JSON flattened.When TagJsonNotTiled is true, it is not flattened. Example:TAG information: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
Untiled: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`When TagJsonNotTiled is false, the data is tiled. Example:TAG information: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`Tiled: `{"__TAG__.fieldA":200,"__TAG__.fieldB":"text"}`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagJsonNotTiled When EnableTag is true, the TagJsonNotTiled field must be filled.TagJsonNotTiled is used to indicate whether tag information is JSON flattened.When TagJsonNotTiled is true, it is not flattened. Example:TAG information: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
Untiled: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`When TagJsonNotTiled is false, the data is tiled. Example:TAG information: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`Tiled: `{"__TAG__.fieldA":200,"__TAG__.fieldB":"text"}`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagJsonNotTiled(const bool& _tagJsonNotTiled);

                    /**
                     * 判断参数 TagJsonNotTiled 是否已赋值
                     * @return TagJsonNotTiled 是否已赋值
                     * 
                     */
                    bool TagJsonNotTiledHasBeenSet() const;

                    /**
                     * 获取Delivery timestamp precision, optional [1: second; 2: millisecond], default is 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimestampAccuracy Delivery timestamp precision, optional [1: second; 2: millisecond], default is 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTimestampAccuracy() const;

                    /**
                     * 设置Delivery timestamp precision, optional [1: second; 2: millisecond], default is 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timestampAccuracy Delivery timestamp precision, optional [1: second; 2: millisecond], default is 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimestampAccuracy(const int64_t& _timestampAccuracy);

                    /**
                     * 判断参数 TimestampAccuracy 是否已赋值
                     * @return TimestampAccuracy 是否已赋值
                     * 
                     */
                    bool TimestampAccuracyHasBeenSet() const;

                    /**
                     * 获取Deliver in JSON format.JsonType is 0: Consistent with the original log, no escape. Example:
Original log: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`Deliver to CKafka: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`JsonType is 1: Escaped. Example:Original log: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`Delivered to CKafka: `{"a":"aa","b":"{\"b1\":\"b1b1\", \"c1\":\"c1c1\"}"}`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JsonType Deliver in JSON format.JsonType is 0: Consistent with the original log, no escape. Example:
Original log: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`Deliver to CKafka: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`JsonType is 1: Escaped. Example:Original log: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`Delivered to CKafka: `{"a":"aa","b":"{\"b1\":\"b1b1\", \"c1\":\"c1c1\"}"}`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetJsonType() const;

                    /**
                     * 设置Deliver in JSON format.JsonType is 0: Consistent with the original log, no escape. Example:
Original log: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`Deliver to CKafka: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`JsonType is 1: Escaped. Example:Original log: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`Delivered to CKafka: `{"a":"aa","b":"{\"b1\":\"b1b1\", \"c1\":\"c1c1\"}"}`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jsonType Deliver in JSON format.JsonType is 0: Consistent with the original log, no escape. Example:
Original log: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`Deliver to CKafka: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`JsonType is 1: Escaped. Example:Original log: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`Delivered to CKafka: `{"a":"aa","b":"{\"b1\":\"b1b1\", \"c1\":\"c1c1\"}"}`
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Whether to deliver TAG information.
When EnableTag is true, it indicates the delivery of TAG metadata.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enableTag;
                    bool m_enableTagHasBeenSet;

                    /**
                     * List of metadata to ship. Supported metadata types: \_\_SOURCE\_\_, \_\_FILENAME\_\_, \_\_TIMESTAMP\_\_, \_\_HOSTNAME\_\_, and \_\_PKGID\_\_.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_metaFields;
                    bool m_metaFieldsHasBeenSet;

                    /**
                     * When EnableTag is true, the TagJsonNotTiled field must be filled.TagJsonNotTiled is used to indicate whether tag information is JSON flattened.When TagJsonNotTiled is true, it is not flattened. Example:TAG information: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`
Untiled: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`When TagJsonNotTiled is false, the data is tiled. Example:TAG information: `{"__TAG__":{"fieldA":200,"fieldB":"text"}}`Tiled: `{"__TAG__.fieldA":200,"__TAG__.fieldB":"text"}`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_tagJsonNotTiled;
                    bool m_tagJsonNotTiledHasBeenSet;

                    /**
                     * Delivery timestamp precision, optional [1: second; 2: millisecond], default is 1.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_timestampAccuracy;
                    bool m_timestampAccuracyHasBeenSet;

                    /**
                     * Deliver in JSON format.JsonType is 0: Consistent with the original log, no escape. Example:
Original log: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`Deliver to CKafka: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`JsonType is 1: Escaped. Example:Original log: `{"a":"aa", "b":{"b1":"b1b1", "c1":"c1c1"}}`Delivered to CKafka: `{"a":"aa","b":"{\"b1\":\"b1b1\", \"c1\":\"c1c1\"}"}`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_jsonType;
                    bool m_jsonTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERCONTENT_H_
