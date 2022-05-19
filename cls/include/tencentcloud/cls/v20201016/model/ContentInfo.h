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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONTENTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONTENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/CsvInfo.h>
#include <tencentcloud/cls/v20201016/model/JsonInfo.h>
#include <tencentcloud/cls/v20201016/model/ParquetInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Format configuration of shipped log content
                */
                class ContentInfo : public AbstractModel
                {
                public:
                    ContentInfo();
                    ~ContentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Content format. Valid values: `json`, `csv`
                     * @return Format Content format. Valid values: `json`, `csv`
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Content format. Valid values: `json`, `csv`
                     * @param Format Content format. Valid values: `json`, `csv`
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取CSV format content description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Csv CSV format content description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    CsvInfo GetCsv() const;

                    /**
                     * 设置CSV format content description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Csv CSV format content description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCsv(const CsvInfo& _csv);

                    /**
                     * 判断参数 Csv 是否已赋值
                     * @return Csv 是否已赋值
                     */
                    bool CsvHasBeenSet() const;

                    /**
                     * 获取JSON format content description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Json JSON format content description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    JsonInfo GetJson() const;

                    /**
                     * 设置JSON format content description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Json JSON format content description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetJson(const JsonInfo& _json);

                    /**
                     * 判断参数 Json 是否已赋值
                     * @return Json 是否已赋值
                     */
                    bool JsonHasBeenSet() const;

                    /**
                     * 获取`Parquet` format description
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Parquet `Parquet` format description
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ParquetInfo GetParquet() const;

                    /**
                     * 设置`Parquet` format description
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Parquet `Parquet` format description
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetParquet(const ParquetInfo& _parquet);

                    /**
                     * 判断参数 Parquet 是否已赋值
                     * @return Parquet 是否已赋值
                     */
                    bool ParquetHasBeenSet() const;

                private:

                    /**
                     * Content format. Valid values: `json`, `csv`
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * CSV format content description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    CsvInfo m_csv;
                    bool m_csvHasBeenSet;

                    /**
                     * JSON format content description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    JsonInfo m_json;
                    bool m_jsonHasBeenSet;

                    /**
                     * `Parquet` format description
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    ParquetInfo m_parquet;
                    bool m_parquetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONTENTINFO_H_
