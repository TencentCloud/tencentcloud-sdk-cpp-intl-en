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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CONTENT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CONTENT_H_

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
                * Content
                */
                class Content : public AbstractModel
                {
                public:
                    Content();
                    ~Content() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Diagnosis
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Diagnose Diagnosis
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDiagnose() const;

                    /**
                     * 设置Diagnosis
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _diagnose Diagnosis
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDiagnose(const std::string& _diagnose);

                    /**
                     * 判断参数 Diagnose 是否已赋值
                     * @return Diagnose 是否已赋值
                     * 
                     */
                    bool DiagnoseHasBeenSet() const;

                    /**
                     * 获取Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Reason Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _reason Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取OperationNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Operation OperationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置OperationNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _operation OperationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Link
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Url Link
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Link
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _url Link
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Diagnosis
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_diagnose;
                    bool m_diagnoseHasBeenSet;

                    /**
                     * Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * OperationNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Link
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CONTENT_H_
