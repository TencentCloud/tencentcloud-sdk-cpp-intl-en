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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPENOTEBOOKEXT_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPENOTEBOOKEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * (This object is abandoned in TaskType. Use TaskType.TaskTypePropertyList instead.) Notebook task extension
                */
                class TaskTypeNotebookExt : public AbstractModel
                {
                public:
                    TaskTypeNotebookExt();
                    ~TaskTypeNotebookExt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>SCRIPT SOURCE. Value: SCRIPT_SOURCE_LOCAL (LOCAL) / SCRIPT_SOURCE_GIT (GIT repository) /<br>SCRIPT_SOURCE_CFS (CFS file system) / SCRIPT_SOURCE_COS (cloud object storage) /<br>SCRIPT_SOURCE_WORKSPACE (WORKSPACE)</p>
                     * @return Source <p>SCRIPT SOURCE. Value: SCRIPT_SOURCE_LOCAL (LOCAL) / SCRIPT_SOURCE_GIT (GIT repository) /<br>SCRIPT_SOURCE_CFS (CFS file system) / SCRIPT_SOURCE_COS (cloud object storage) /<br>SCRIPT_SOURCE_WORKSPACE (WORKSPACE)</p>
                     * @deprecated
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>SCRIPT SOURCE. Value: SCRIPT_SOURCE_LOCAL (LOCAL) / SCRIPT_SOURCE_GIT (GIT repository) /<br>SCRIPT_SOURCE_CFS (CFS file system) / SCRIPT_SOURCE_COS (cloud object storage) /<br>SCRIPT_SOURCE_WORKSPACE (WORKSPACE)</p>
                     * @param _source <p>SCRIPT SOURCE. Value: SCRIPT_SOURCE_LOCAL (LOCAL) / SCRIPT_SOURCE_GIT (GIT repository) /<br>SCRIPT_SOURCE_CFS (CFS file system) / SCRIPT_SOURCE_COS (cloud object storage) /<br>SCRIPT_SOURCE_WORKSPACE (WORKSPACE)</p>
                     * @deprecated
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * @deprecated
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>For frontend display usage, meaningless to the execution platform</p>
                     * @return DisplayPath <p>For frontend display usage, meaningless to the execution platform</p>
                     * @deprecated
                     */
                    std::string GetDisplayPath() const;

                    /**
                     * 设置<p>For frontend display usage, meaningless to the execution platform</p>
                     * @param _displayPath <p>For frontend display usage, meaningless to the execution platform</p>
                     * @deprecated
                     */
                    void SetDisplayPath(const std::string& _displayPath);

                    /**
                     * 判断参数 DisplayPath 是否已赋值
                     * @return DisplayPath 是否已赋值
                     * @deprecated
                     */
                    bool DisplayPathHasBeenSet() const;

                    /**
                     * 获取<p>Notebook relative path</p>
                     * @return NotebookPath <p>Notebook relative path</p>
                     * @deprecated
                     */
                    std::string GetNotebookPath() const;

                    /**
                     * 设置<p>Notebook relative path</p>
                     * @param _notebookPath <p>Notebook relative path</p>
                     * @deprecated
                     */
                    void SetNotebookPath(const std::string& _notebookPath);

                    /**
                     * 判断参数 NotebookPath 是否已赋值
                     * @return NotebookPath 是否已赋值
                     * @deprecated
                     */
                    bool NotebookPathHasBeenSet() const;

                    /**
                     * 获取<p>Notebook absolute path</p>
                     * @return NotebookAbsolutePath <p>Notebook absolute path</p>
                     * @deprecated
                     */
                    std::string GetNotebookAbsolutePath() const;

                    /**
                     * 设置<p>Notebook absolute path</p>
                     * @param _notebookAbsolutePath <p>Notebook absolute path</p>
                     * @deprecated
                     */
                    void SetNotebookAbsolutePath(const std::string& _notebookAbsolutePath);

                    /**
                     * 判断参数 NotebookAbsolutePath 是否已赋值
                     * @return NotebookAbsolutePath 是否已赋值
                     * @deprecated
                     */
                    bool NotebookAbsolutePathHasBeenSet() const;

                private:

                    /**
                     * <p>SCRIPT SOURCE. Value: SCRIPT_SOURCE_LOCAL (LOCAL) / SCRIPT_SOURCE_GIT (GIT repository) /<br>SCRIPT_SOURCE_CFS (CFS file system) / SCRIPT_SOURCE_COS (cloud object storage) /<br>SCRIPT_SOURCE_WORKSPACE (WORKSPACE)</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>For frontend display usage, meaningless to the execution platform</p>
                     */
                    std::string m_displayPath;
                    bool m_displayPathHasBeenSet;

                    /**
                     * <p>Notebook relative path</p>
                     */
                    std::string m_notebookPath;
                    bool m_notebookPathHasBeenSet;

                    /**
                     * <p>Notebook absolute path</p>
                     */
                    std::string m_notebookAbsolutePath;
                    bool m_notebookAbsolutePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPENOTEBOOKEXT_H_
