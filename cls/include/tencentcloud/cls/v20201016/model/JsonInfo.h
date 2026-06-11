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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_JSONINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_JSONINFO_H_

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
                * JSON type description
                */
                class JsonInfo : public AbstractModel
                {
                public:
                    JsonInfo();
                    ~JsonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enablement flag
                     * @return EnableTag Enablement flag
                     * 
                     */
                    bool GetEnableTag() const;

                    /**
                     * 设置Enablement flag
                     * @param _enableTag Enablement flag
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
                     * 获取Metadata information list, available values are __SOURCE__, __FILENAME__, __TIMESTAMP__, __HOSTNAME__.

-SOURCE IP for log collection, for example: 10.0.1.2
-__FILENAME__: Log collection file name, for example: /data/log/nginx/access.log
-__TIMESTAMP__: Log timestamp (millisecond-level Unix timestamp). When retrieving logs by time range, the time is automatically used to retrieve logs. It is displayed on the console as "log time", for example: 1640005601188.
-__HOSTNAME__: Log source machine name. Need to use Loglistener 2.7.4 and above versions to capture this field, for example: localhost.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetaFields Metadata information list, available values are __SOURCE__, __FILENAME__, __TIMESTAMP__, __HOSTNAME__.

-SOURCE IP for log collection, for example: 10.0.1.2
-__FILENAME__: Log collection file name, for example: /data/log/nginx/access.log
-__TIMESTAMP__: Log timestamp (millisecond-level Unix timestamp). When retrieving logs by time range, the time is automatically used to retrieve logs. It is displayed on the console as "log time", for example: 1640005601188.
-__HOSTNAME__: Log source machine name. Need to use Loglistener 2.7.4 and above versions to capture this field, for example: localhost.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetMetaFields() const;

                    /**
                     * 设置Metadata information list, available values are __SOURCE__, __FILENAME__, __TIMESTAMP__, __HOSTNAME__.

-SOURCE IP for log collection, for example: 10.0.1.2
-__FILENAME__: Log collection file name, for example: /data/log/nginx/access.log
-__TIMESTAMP__: Log timestamp (millisecond-level Unix timestamp). When retrieving logs by time range, the time is automatically used to retrieve logs. It is displayed on the console as "log time", for example: 1640005601188.
-__HOSTNAME__: Log source machine name. Need to use Loglistener 2.7.4 and above versions to capture this field, for example: localhost.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metaFields Metadata information list, available values are __SOURCE__, __FILENAME__, __TIMESTAMP__, __HOSTNAME__.

-SOURCE IP for log collection, for example: 10.0.1.2
-__FILENAME__: Log collection file name, for example: /data/log/nginx/access.log
-__TIMESTAMP__: Log timestamp (millisecond-level Unix timestamp). When retrieving logs by time range, the time is automatically used to retrieve logs. It is displayed on the console as "log time", for example: 1640005601188.
-__HOSTNAME__: Log source machine name. Need to use Loglistener 2.7.4 and above versions to capture this field, for example: localhost.
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
                     * 获取JSON format for shipping. 0: shipped as a string; 1: shipped in a structured way.
                     * @return JsonType JSON format for shipping. 0: shipped as a string; 1: shipped in a structured way.
                     * 
                     */
                    int64_t GetJsonType() const;

                    /**
                     * 设置JSON format for shipping. 0: shipped as a string; 1: shipped in a structured way.
                     * @param _jsonType JSON format for shipping. 0: shipped as a string; 1: shipped in a structured way.
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
                     * Enablement flag
                     */
                    bool m_enableTag;
                    bool m_enableTagHasBeenSet;

                    /**
                     * Metadata information list, available values are __SOURCE__, __FILENAME__, __TIMESTAMP__, __HOSTNAME__.

-SOURCE IP for log collection, for example: 10.0.1.2
-__FILENAME__: Log collection file name, for example: /data/log/nginx/access.log
-__TIMESTAMP__: Log timestamp (millisecond-level Unix timestamp). When retrieving logs by time range, the time is automatically used to retrieve logs. It is displayed on the console as "log time", for example: 1640005601188.
-__HOSTNAME__: Log source machine name. Need to use Loglistener 2.7.4 and above versions to capture this field, for example: localhost.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_metaFields;
                    bool m_metaFieldsHasBeenSet;

                    /**
                     * JSON format for shipping. 0: shipped as a string; 1: shipped in a structured way.
                     */
                    int64_t m_jsonType;
                    bool m_jsonTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_JSONINFO_H_
