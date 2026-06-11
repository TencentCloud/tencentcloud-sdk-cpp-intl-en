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
                     * 获取<p>Whether to deliver TAG information.<br>When EnableTag is true, it means to deliver TAG metadata.</p>
                     * @return EnableTag <p>Whether to deliver TAG information.<br>When EnableTag is true, it means to deliver TAG metadata.</p>
                     * 
                     */
                    bool GetEnableTag() const;

                    /**
                     * 设置<p>Whether to deliver TAG information.<br>When EnableTag is true, it means to deliver TAG metadata.</p>
                     * @param _enableTag <p>Whether to deliver TAG information.<br>When EnableTag is true, it means to deliver TAG metadata.</p>
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
                     * 获取<p>List of metadata to be shipped, currently only support: __SOURCE__, __FILENAME__, __TIMESTAMP__, __HOSTNAME__, and __PKGID__</p>
                     * @return MetaFields <p>List of metadata to be shipped, currently only support: __SOURCE__, __FILENAME__, __TIMESTAMP__, __HOSTNAME__, and __PKGID__</p>
                     * 
                     */
                    std::vector<std::string> GetMetaFields() const;

                    /**
                     * 设置<p>List of metadata to be shipped, currently only support: __SOURCE__, __FILENAME__, __TIMESTAMP__, __HOSTNAME__, and __PKGID__</p>
                     * @param _metaFields <p>List of metadata to be shipped, currently only support: __SOURCE__, __FILENAME__, __TIMESTAMP__, __HOSTNAME__, and __PKGID__</p>
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
                     * 获取<p>When EnableTag is true, the TagJsonNotTiled field must be filled.<br>TagJsonNotTiled indicates whether tag information is json tiled.</p><p>When TagJsonNotTiled is true, it is not tiled. Example:<br>tag information: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code><br>Not Tiled: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code></p><p>When TagJsonNotTiled is false, tiling is applied. Example:<br>tag information: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code><br>Tiled: <code>{"__tag__.fieldA":200,"__tag__.fieldB":"text"}</code></p>
                     * @return TagJsonNotTiled <p>When EnableTag is true, the TagJsonNotTiled field must be filled.<br>TagJsonNotTiled indicates whether tag information is json tiled.</p><p>When TagJsonNotTiled is true, it is not tiled. Example:<br>tag information: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code><br>Not Tiled: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code></p><p>When TagJsonNotTiled is false, tiling is applied. Example:<br>tag information: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code><br>Tiled: <code>{"__tag__.fieldA":200,"__tag__.fieldB":"text"}</code></p>
                     * 
                     */
                    bool GetTagJsonNotTiled() const;

                    /**
                     * 设置<p>When EnableTag is true, the TagJsonNotTiled field must be filled.<br>TagJsonNotTiled indicates whether tag information is json tiled.</p><p>When TagJsonNotTiled is true, it is not tiled. Example:<br>tag information: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code><br>Not Tiled: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code></p><p>When TagJsonNotTiled is false, tiling is applied. Example:<br>tag information: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code><br>Tiled: <code>{"__tag__.fieldA":200,"__tag__.fieldB":"text"}</code></p>
                     * @param _tagJsonNotTiled <p>When EnableTag is true, the TagJsonNotTiled field must be filled.<br>TagJsonNotTiled indicates whether tag information is json tiled.</p><p>When TagJsonNotTiled is true, it is not tiled. Example:<br>tag information: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code><br>Not Tiled: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code></p><p>When TagJsonNotTiled is false, tiling is applied. Example:<br>tag information: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code><br>Tiled: <code>{"__tag__.fieldA":200,"__tag__.fieldB":"text"}</code></p>
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
                     * 获取<p>Delivery timestamp precision, options [1: second; 2: millisecond], 1 is selected by default.</p>
                     * @return TimestampAccuracy <p>Delivery timestamp precision, options [1: second; 2: millisecond], 1 is selected by default.</p>
                     * 
                     */
                    int64_t GetTimestampAccuracy() const;

                    /**
                     * 设置<p>Delivery timestamp precision, options [1: second; 2: millisecond], 1 is selected by default.</p>
                     * @param _timestampAccuracy <p>Delivery timestamp precision, options [1: second; 2: millisecond], 1 is selected by default.</p>
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
                     * 获取<p>Deliver in Json format.</p><p>Enumeration value:</p><ul><li>0: Escape. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Deliver to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></li><li>1: Consistent with original log, non-escaping. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Deliver to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></li></ul>
                     * @return JsonType <p>Deliver in Json format.</p><p>Enumeration value:</p><ul><li>0: Escape. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Deliver to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></li><li>1: Consistent with original log, non-escaping. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Deliver to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></li></ul>
                     * 
                     */
                    int64_t GetJsonType() const;

                    /**
                     * 设置<p>Deliver in Json format.</p><p>Enumeration value:</p><ul><li>0: Escape. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Deliver to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></li><li>1: Consistent with original log, non-escaping. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Deliver to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></li></ul>
                     * @param _jsonType <p>Deliver in Json format.</p><p>Enumeration value:</p><ul><li>0: Escape. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Deliver to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></li><li>1: Consistent with original log, non-escaping. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Deliver to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></li></ul>
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
                     * <p>Whether to deliver TAG information.<br>When EnableTag is true, it means to deliver TAG metadata.</p>
                     */
                    bool m_enableTag;
                    bool m_enableTagHasBeenSet;

                    /**
                     * <p>List of metadata to be shipped, currently only support: __SOURCE__, __FILENAME__, __TIMESTAMP__, __HOSTNAME__, and __PKGID__</p>
                     */
                    std::vector<std::string> m_metaFields;
                    bool m_metaFieldsHasBeenSet;

                    /**
                     * <p>When EnableTag is true, the TagJsonNotTiled field must be filled.<br>TagJsonNotTiled indicates whether tag information is json tiled.</p><p>When TagJsonNotTiled is true, it is not tiled. Example:<br>tag information: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code><br>Not Tiled: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code></p><p>When TagJsonNotTiled is false, tiling is applied. Example:<br>tag information: <code>{"__tag__":{"fieldA":200,"fieldB":"text"}}</code><br>Tiled: <code>{"__tag__.fieldA":200,"__tag__.fieldB":"text"}</code></p>
                     */
                    bool m_tagJsonNotTiled;
                    bool m_tagJsonNotTiledHasBeenSet;

                    /**
                     * <p>Delivery timestamp precision, options [1: second; 2: millisecond], 1 is selected by default.</p>
                     */
                    int64_t m_timestampAccuracy;
                    bool m_timestampAccuracyHasBeenSet;

                    /**
                     * <p>Deliver in Json format.</p><p>Enumeration value:</p><ul><li>0: Escape. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Deliver to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;,&quot;b&quot;:&quot;{\&quot;b1\&quot;:\&quot;b1b1\&quot;, \&quot;c1\&quot;:\&quot;c1c1\&quot;}&quot;}</code></li><li>1: Consistent with original log, non-escaping. Example:<br>Original log: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code><br>Deliver to Ckafka: <code>{&quot;a&quot;:&quot;aa&quot;, &quot;b&quot;:{&quot;b1&quot;:&quot;b1b1&quot;, &quot;c1&quot;:&quot;c1c1&quot;}}</code></li></ul>
                     */
                    int64_t m_jsonType;
                    bool m_jsonTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERCONTENT_H_
