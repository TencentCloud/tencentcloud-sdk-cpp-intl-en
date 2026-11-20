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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTEDFIELDS_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTEDFIELDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/PersonInfo.h>
#include <tencentcloud/ocr/v20181119/model/Record.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Flattened extraction result of entry and exit records (recommended, with 2–3 levels directly reaching business fields)
                */
                class ExtractedFields : public AbstractModel
                {
                public:
                    ExtractedFields();
                    ~ExtractedFields() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Title, such as &quot;Exit and Entry Record Query Result of the National Immigration Administration (Electronic Document)&quot;</p>
                     * @return Title <p>Title, such as &quot;Exit and Entry Record Query Result of the National Immigration Administration (Electronic Document)&quot;</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>Title, such as &quot;Exit and Entry Record Query Result of the National Immigration Administration (Electronic Document)&quot;</p>
                     * @param _title <p>Title, such as &quot;Exit and Entry Record Query Result of the National Immigration Administration (Electronic Document)&quot;</p>
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取<p>Query number</p>
                     * @return QueryNo <p>Query number</p>
                     * 
                     */
                    std::string GetQueryNo() const;

                    /**
                     * 设置<p>Query number</p>
                     * @param _queryNo <p>Query number</p>
                     * 
                     */
                    void SetQueryNo(const std::string& _queryNo);

                    /**
                     * 判断参数 QueryNo 是否已赋值
                     * @return QueryNo 是否已赋值
                     * 
                     */
                    bool QueryNoHasBeenSet() const;

                    /**
                     * 获取<p>Query date</p>
                     * @return QueryDate <p>Query date</p>
                     * 
                     */
                    std::string GetQueryDate() const;

                    /**
                     * 设置<p>Query date</p>
                     * @param _queryDate <p>Query date</p>
                     * 
                     */
                    void SetQueryDate(const std::string& _queryDate);

                    /**
                     * 判断参数 QueryDate 是否已赋值
                     * @return QueryDate 是否已赋值
                     * 
                     */
                    bool QueryDateHasBeenSet() const;

                    /**
                     * 获取<p>Date of issue</p>
                     * @return GenerateDate <p>Date of issue</p>
                     * 
                     */
                    std::string GetGenerateDate() const;

                    /**
                     * 设置<p>Date of issue</p>
                     * @param _generateDate <p>Date of issue</p>
                     * 
                     */
                    void SetGenerateDate(const std::string& _generateDate);

                    /**
                     * 判断参数 GenerateDate 是否已赋值
                     * @return GenerateDate 是否已赋值
                     * 
                     */
                    bool GenerateDateHasBeenSet() const;

                    /**
                     * 获取<p>Information of the inquirer</p>
                     * @return PersonInfo <p>Information of the inquirer</p>
                     * 
                     */
                    PersonInfo GetPersonInfo() const;

                    /**
                     * 设置<p>Information of the inquirer</p>
                     * @param _personInfo <p>Information of the inquirer</p>
                     * 
                     */
                    void SetPersonInfo(const PersonInfo& _personInfo);

                    /**
                     * 判断参数 PersonInfo 是否已赋值
                     * @return PersonInfo 是否已赋值
                     * 
                     */
                    bool PersonInfoHasBeenSet() const;

                    /**
                     * 获取<p>List of entry and exit records</p>
                     * @return Records <p>List of entry and exit records</p>
                     * 
                     */
                    std::vector<Record> GetRecords() const;

                    /**
                     * 设置<p>List of entry and exit records</p>
                     * @param _records <p>List of entry and exit records</p>
                     * 
                     */
                    void SetRecords(const std::vector<Record>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取<p>Start time of the query range</p>
                     * @return QueryPeriodStart <p>Start time of the query range</p>
                     * 
                     */
                    std::string GetQueryPeriodStart() const;

                    /**
                     * 设置<p>Start time of the query range</p>
                     * @param _queryPeriodStart <p>Start time of the query range</p>
                     * 
                     */
                    void SetQueryPeriodStart(const std::string& _queryPeriodStart);

                    /**
                     * 判断参数 QueryPeriodStart 是否已赋值
                     * @return QueryPeriodStart 是否已赋值
                     * 
                     */
                    bool QueryPeriodStartHasBeenSet() const;

                    /**
                     * 获取<p>End time of the query range</p>
                     * @return QueryPeriodEnd <p>End time of the query range</p>
                     * 
                     */
                    std::string GetQueryPeriodEnd() const;

                    /**
                     * 设置<p>End time of the query range</p>
                     * @param _queryPeriodEnd <p>End time of the query range</p>
                     * 
                     */
                    void SetQueryPeriodEnd(const std::string& _queryPeriodEnd);

                    /**
                     * 判断参数 QueryPeriodEnd 是否已赋值
                     * @return QueryPeriodEnd 是否已赋值
                     * 
                     */
                    bool QueryPeriodEndHasBeenSet() const;

                private:

                    /**
                     * <p>Title, such as &quot;Exit and Entry Record Query Result of the National Immigration Administration (Electronic Document)&quot;</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>Query number</p>
                     */
                    std::string m_queryNo;
                    bool m_queryNoHasBeenSet;

                    /**
                     * <p>Query date</p>
                     */
                    std::string m_queryDate;
                    bool m_queryDateHasBeenSet;

                    /**
                     * <p>Date of issue</p>
                     */
                    std::string m_generateDate;
                    bool m_generateDateHasBeenSet;

                    /**
                     * <p>Information of the inquirer</p>
                     */
                    PersonInfo m_personInfo;
                    bool m_personInfoHasBeenSet;

                    /**
                     * <p>List of entry and exit records</p>
                     */
                    std::vector<Record> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * <p>Start time of the query range</p>
                     */
                    std::string m_queryPeriodStart;
                    bool m_queryPeriodStartHasBeenSet;

                    /**
                     * <p>End time of the query range</p>
                     */
                    std::string m_queryPeriodEnd;
                    bool m_queryPeriodEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_EXTRACTEDFIELDS_H_
