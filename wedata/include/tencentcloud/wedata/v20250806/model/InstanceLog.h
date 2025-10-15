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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_INSTANCELOG_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_INSTANCELOG_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Instance log content.
                */
                class InstanceLog : public AbstractModel
                {
                public:
                    InstanceLog();
                    ~InstanceLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance unique id.

                     * @return InstanceKey Instance unique id.

                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Instance unique id.

                     * @param _instanceKey Instance unique id.

                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取Project ID.


                     * @return ProjectId Project ID.


                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.


                     * @param _projectId Project ID.


                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Specifies the code content to run.

                     * @return CodeContent Specifies the code content to run.

                     * 
                     */
                    std::string GetCodeContent() const;

                    /**
                     * 设置Specifies the code content to run.

                     * @param _codeContent Specifies the code content to run.

                     * 
                     */
                    void SetCodeContent(const std::string& _codeContent);

                    /**
                     * 判断参数 CodeContent 是否已赋值
                     * @return CodeContent 是否已赋值
                     * 
                     */
                    bool CodeContentHasBeenSet() const;

                    /**
                     * 获取log information

                     * @return LogInfo log information

                     * 
                     */
                    std::string GetLogInfo() const;

                    /**
                     * 设置log information

                     * @param _logInfo log information

                     * 
                     */
                    void SetLogInfo(const std::string& _logInfo);

                    /**
                     * 判断参数 LogInfo 是否已赋值
                     * @return LogInfo 是否已赋值
                     * 
                     */
                    bool LogInfoHasBeenSet() const;

                    /**
                     * 获取Used for paginated log queries; has no specific business meaning.

For the first query, set the value to null.

For subsequent queries, use the NextCursor value returned from the previous query.
                     * @return NextCursor Used for paginated log queries; has no specific business meaning.

For the first query, set the value to null.

For subsequent queries, use the NextCursor value returned from the previous query.
                     * 
                     */
                    std::string GetNextCursor() const;

                    /**
                     * 设置Used for paginated log queries; has no specific business meaning.

For the first query, set the value to null.

For subsequent queries, use the NextCursor value returned from the previous query.
                     * @param _nextCursor Used for paginated log queries; has no specific business meaning.

For the first query, set the value to null.

For subsequent queries, use the NextCursor value returned from the previous query.
                     * 
                     */
                    void SetNextCursor(const std::string& _nextCursor);

                    /**
                     * 判断参数 NextCursor 是否已赋值
                     * @return NextCursor 是否已赋值
                     * 
                     */
                    bool NextCursorHasBeenSet() const;

                private:

                    /**
                     * Instance unique id.

                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * Project ID.


                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Specifies the code content to run.

                     */
                    std::string m_codeContent;
                    bool m_codeContentHasBeenSet;

                    /**
                     * log information

                     */
                    std::string m_logInfo;
                    bool m_logInfoHasBeenSet;

                    /**
                     * Used for paginated log queries; has no specific business meaning.

For the first query, set the value to null.

For subsequent queries, use the NextCursor value returned from the previous query.
                     */
                    std::string m_nextCursor;
                    bool m_nextCursorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_INSTANCELOG_H_
