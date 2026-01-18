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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_REPORTDATARESULT_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_REPORTDATARESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * General response for data query reports
                */
                class ReportDataResult : public AbstractModel
                {
                public:
                    ReportDataResult();
                    ~ReportDataResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Base64-encoded result data
                     * @return DataResult Base64-encoded result data
                     * 
                     */
                    std::string GetDataResult() const;

                    /**
                     * 设置Base64-encoded result data
                     * @param _dataResult Base64-encoded result data
                     * 
                     */
                    void SetDataResult(const std::string& _dataResult);

                    /**
                     * 判断参数 DataResult 是否已赋值
                     * @return DataResult 是否已赋值
                     * 
                     */
                    bool DataResultHasBeenSet() const;

                    /**
                     * 获取Executed SQL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecSql Executed SQL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecSql() const;

                    /**
                     * 设置Executed SQL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _execSql Executed SQL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecSql(const std::string& _execSql);

                    /**
                     * 判断参数 ExecSql 是否已赋值
                     * @return ExecSql 是否已赋值
                     * 
                     */
                    bool ExecSqlHasBeenSet() const;

                    /**
                     * 获取Execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecTime Execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置Execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _execTime Execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecTime(const int64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取Query index ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IndexId Query index ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIndexId() const;

                    /**
                     * 设置Query index ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _indexId Query index ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIndexId(const std::string& _indexId);

                    /**
                     * 判断参数 IndexId 是否已赋值
                     * @return IndexId 是否已赋值
                     * 
                     */
                    bool IndexIdHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded result data
                     */
                    std::string m_dataResult;
                    bool m_dataResultHasBeenSet;

                    /**
                     * Executed SQL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_execSql;
                    bool m_execSqlHasBeenSet;

                    /**
                     * Execution time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * Query index ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_indexId;
                    bool m_indexIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_REPORTDATARESULT_H_
