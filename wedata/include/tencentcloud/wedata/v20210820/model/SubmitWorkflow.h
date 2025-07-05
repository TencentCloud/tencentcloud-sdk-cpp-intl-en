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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITWORKFLOW_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITWORKFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Submit Workflow Entity
                */
                class SubmitWorkflow : public AbstractModel
                {
                public:
                    SubmitWorkflow();
                    ~SubmitWorkflow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Submitted Task ID Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskIds Submitted Task ID Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置Submitted Task ID Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskIds Submitted Task ID Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取Execution Result
                     * @return Result Execution Result
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置Execution Result
                     * @param _result Execution Result
                     * 
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Execution Status Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ErrorDesc Execution Status Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetErrorDesc() const;

                    /**
                     * 设置Execution Status Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _errorDesc Execution Status Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetErrorDesc(const std::string& _errorDesc);

                    /**
                     * 判断参数 ErrorDesc 是否已赋值
                     * @return ErrorDesc 是否已赋值
                     * 
                     */
                    bool ErrorDescHasBeenSet() const;

                    /**
                     * 获取Execution Status ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ErrorId Execution Status ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetErrorId() const;

                    /**
                     * 设置Execution Status ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _errorId Execution Status ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetErrorId(const std::string& _errorId);

                    /**
                     * 判断参数 ErrorId 是否已赋值
                     * @return ErrorId 是否已赋值
                     * 
                     */
                    bool ErrorIdHasBeenSet() const;

                private:

                    /**
                     * Submitted Task ID Collection
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Execution Result
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Execution Status Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_errorDesc;
                    bool m_errorDescHasBeenSet;

                    /**
                     * Execution Status ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_errorId;
                    bool m_errorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITWORKFLOW_H_
