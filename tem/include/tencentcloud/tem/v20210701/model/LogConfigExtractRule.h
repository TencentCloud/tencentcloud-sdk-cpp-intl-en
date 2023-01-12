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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIGEXTRACTRULE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIGEXTRACTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Configuration of log exporting rule
                */
                class LogConfigExtractRule : public AbstractModel
                {
                public:
                    LogConfigExtractRule();
                    ~LogConfigExtractRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取First line regex
Note: This field may return `null`, indicating that no valid value was found.
                     * @return BeginningRegex First line regex
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetBeginningRegex() const;

                    /**
                     * 设置First line regex
Note: This field may return `null`, indicating that no valid value was found.
                     * @param BeginningRegex First line regex
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetBeginningRegex(const std::string& _beginningRegex);

                    /**
                     * 判断参数 BeginningRegex 是否已赋值
                     * @return BeginningRegex 是否已赋值
                     */
                    bool BeginningRegexHasBeenSet() const;

                    /**
                     * 获取Withdrawl result
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Keys Withdrawl result
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置Withdrawl result
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Keys Withdrawl result
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetKeys(const std::vector<std::string>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取Filter keys
Note: This field may return `null`, indicating that no valid value was found.
                     * @return FilterKeys Filter keys
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> GetFilterKeys() const;

                    /**
                     * 设置Filter keys
Note: This field may return `null`, indicating that no valid value was found.
                     * @param FilterKeys Filter keys
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetFilterKeys(const std::vector<std::string>& _filterKeys);

                    /**
                     * 判断参数 FilterKeys 是否已赋值
                     * @return FilterKeys 是否已赋值
                     */
                    bool FilterKeysHasBeenSet() const;

                    /**
                     * 获取Filter values
Note: This field may return `null`, indicating that no valid value was found.
                     * @return FilterRegex Filter values
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> GetFilterRegex() const;

                    /**
                     * 设置Filter values
Note: This field may return `null`, indicating that no valid value was found.
                     * @param FilterRegex Filter values
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetFilterRegex(const std::vector<std::string>& _filterRegex);

                    /**
                     * 判断参数 FilterRegex 是否已赋值
                     * @return FilterRegex 是否已赋值
                     */
                    bool FilterRegexHasBeenSet() const;

                    /**
                     * 获取Log regex
Note: This field may return `null`, indicating that no valid value was found.
                     * @return LogRegex Log regex
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetLogRegex() const;

                    /**
                     * 设置Log regex
Note: This field may return `null`, indicating that no valid value was found.
                     * @param LogRegex Log regex
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetLogRegex(const std::string& _logRegex);

                    /**
                     * 判断参数 LogRegex 是否已赋值
                     * @return LogRegex 是否已赋值
                     */
                    bool LogRegexHasBeenSet() const;

                    /**
                     * 获取Time field
Note: This field may return `null`, indicating that no valid value was found.
                     * @return TimeKey Time field
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置Time field
Note: This field may return `null`, indicating that no valid value was found.
                     * @param TimeKey Time field
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取Time Format
Note: This field may return `null`, indicating that no valid value was found.
                     * @return TimeFormat Time Format
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Time Format
Note: This field may return `null`, indicating that no valid value was found.
                     * @param TimeFormat Time Format
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     */
                    bool TimeFormatHasBeenSet() const;

                    /**
                     * 获取- Enable the upload of the log that failed to parse
Note: This field may return `null`, indicating that no valid value was found.
                     * @return UnMatchUpload - Enable the upload of the log that failed to parse
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetUnMatchUpload() const;

                    /**
                     * 设置- Enable the upload of the log that failed to parse
Note: This field may return `null`, indicating that no valid value was found.
                     * @param UnMatchUpload - Enable the upload of the log that failed to parse
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetUnMatchUpload(const std::string& _unMatchUpload);

                    /**
                     * 判断参数 UnMatchUpload 是否已赋值
                     * @return UnMatchUpload 是否已赋值
                     */
                    bool UnMatchUploadHasBeenSet() const;

                    /**
                     * 获取Key of log failed to be parsed
Note: This field may return `null`, indicating that no valid value was found.
                     * @return UnMatchedKey Key of log failed to be parsed
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetUnMatchedKey() const;

                    /**
                     * 设置Key of log failed to be parsed
Note: This field may return `null`, indicating that no valid value was found.
                     * @param UnMatchedKey Key of log failed to be parsed
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetUnMatchedKey(const std::string& _unMatchedKey);

                    /**
                     * 判断参数 UnMatchedKey 是否已赋值
                     * @return UnMatchedKey 是否已赋值
                     */
                    bool UnMatchedKeyHasBeenSet() const;

                private:

                    /**
                     * First line regex
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_beginningRegex;
                    bool m_beginningRegexHasBeenSet;

                    /**
                     * Withdrawl result
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * Filter keys
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_filterKeys;
                    bool m_filterKeysHasBeenSet;

                    /**
                     * Filter values
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_filterRegex;
                    bool m_filterRegexHasBeenSet;

                    /**
                     * Log regex
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_logRegex;
                    bool m_logRegexHasBeenSet;

                    /**
                     * Time field
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * Time Format
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * - Enable the upload of the log that failed to parse
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_unMatchUpload;
                    bool m_unMatchUploadHasBeenSet;

                    /**
                     * Key of log failed to be parsed
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_unMatchedKey;
                    bool m_unMatchedKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIGEXTRACTRULE_H_
