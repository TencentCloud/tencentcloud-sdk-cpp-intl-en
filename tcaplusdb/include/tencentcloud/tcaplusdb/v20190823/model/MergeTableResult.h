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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLERESULT_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CompareTablesInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Table merging results
                */
                class MergeTableResult : public AbstractModel
                {
                public:
                    MergeTableResult();
                    ~MergeTableResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return TaskId Task ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _taskId Task ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取If table merging is successful, `null` will be returned
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Error If table merging is successful, `null` will be returned
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置If table merging is successful, `null` will be returned
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _error If table merging is successful, `null` will be returned
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取Comparison results of tables
                     * @return Table Comparison results of tables
                     * 
                     */
                    CompareTablesInfo GetTable() const;

                    /**
                     * 设置Comparison results of tables
                     * @param _table Comparison results of tables
                     * 
                     */
                    void SetTable(const CompareTablesInfo& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取Application ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return ApplicationId Application ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _applicationId Application ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * Task ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * If table merging is successful, `null` will be returned
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * Comparison results of tables
                     */
                    CompareTablesInfo m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * Application ID
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLERESULT_H_
