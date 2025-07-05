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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCELOG_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCELOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Task instance log details.
                */
                class TaskInstanceLog : public AbstractModel
                {
                public:
                    TaskInstanceLog();
                    ~TaskInstanceLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task instance
                     * @return TaskInstanceIndex Task instance
                     * 
                     */
                    uint64_t GetTaskInstanceIndex() const;

                    /**
                     * 设置Task instance
                     * @param _taskInstanceIndex Task instance
                     * 
                     */
                    void SetTaskInstanceIndex(const uint64_t& _taskInstanceIndex);

                    /**
                     * 判断参数 TaskInstanceIndex 是否已赋值
                     * @return TaskInstanceIndex 是否已赋值
                     * 
                     */
                    bool TaskInstanceIndexHasBeenSet() const;

                    /**
                     * 获取Standard output log (Base64-encoded, up to 2048 bytes after decompression)
Note: This field may return `null`, indicating that no valid value was found.
                     * @return StdoutLog Standard output log (Base64-encoded, up to 2048 bytes after decompression)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetStdoutLog() const;

                    /**
                     * 设置Standard output log (Base64-encoded, up to 2048 bytes after decompression)
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _stdoutLog Standard output log (Base64-encoded, up to 2048 bytes after decompression)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetStdoutLog(const std::string& _stdoutLog);

                    /**
                     * 判断参数 StdoutLog 是否已赋值
                     * @return StdoutLog 是否已赋值
                     * 
                     */
                    bool StdoutLogHasBeenSet() const;

                    /**
                     * 获取Standard error log (Base64-encoded, up to 2048 bytes after decompression)
Note: This field may return `null`, indicating that no valid value was found.
                     * @return StderrLog Standard error log (Base64-encoded, up to 2048 bytes after decompression)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetStderrLog() const;

                    /**
                     * 设置Standard error log (Base64-encoded, up to 2048 bytes after decompression)
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _stderrLog Standard error log (Base64-encoded, up to 2048 bytes after decompression)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetStderrLog(const std::string& _stderrLog);

                    /**
                     * 判断参数 StderrLog 是否已赋值
                     * @return StderrLog 是否已赋值
                     * 
                     */
                    bool StderrLogHasBeenSet() const;

                    /**
                     * 获取Standard output redirection path
Note: This field may return `null`, indicating that no valid value was found.
                     * @return StdoutRedirectPath Standard output redirection path
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetStdoutRedirectPath() const;

                    /**
                     * 设置Standard output redirection path
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _stdoutRedirectPath Standard output redirection path
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetStdoutRedirectPath(const std::string& _stdoutRedirectPath);

                    /**
                     * 判断参数 StdoutRedirectPath 是否已赋值
                     * @return StdoutRedirectPath 是否已赋值
                     * 
                     */
                    bool StdoutRedirectPathHasBeenSet() const;

                    /**
                     * 获取Standard error redirection path
Note: This field may return `null`, indicating that no valid value was found.
                     * @return StderrRedirectPath Standard error redirection path
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetStderrRedirectPath() const;

                    /**
                     * 设置Standard error redirection path
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _stderrRedirectPath Standard error redirection path
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetStderrRedirectPath(const std::string& _stderrRedirectPath);

                    /**
                     * 判断参数 StderrRedirectPath 是否已赋值
                     * @return StderrRedirectPath 是否已赋值
                     * 
                     */
                    bool StderrRedirectPathHasBeenSet() const;

                    /**
                     * 获取Standard output redirection file name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return StdoutRedirectFileName Standard output redirection file name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetStdoutRedirectFileName() const;

                    /**
                     * 设置Standard output redirection file name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _stdoutRedirectFileName Standard output redirection file name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetStdoutRedirectFileName(const std::string& _stdoutRedirectFileName);

                    /**
                     * 判断参数 StdoutRedirectFileName 是否已赋值
                     * @return StdoutRedirectFileName 是否已赋值
                     * 
                     */
                    bool StdoutRedirectFileNameHasBeenSet() const;

                    /**
                     * 获取Standard error redirection file name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return StderrRedirectFileName Standard error redirection file name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetStderrRedirectFileName() const;

                    /**
                     * 设置Standard error redirection file name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _stderrRedirectFileName Standard error redirection file name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetStderrRedirectFileName(const std::string& _stderrRedirectFileName);

                    /**
                     * 判断参数 StderrRedirectFileName 是否已赋值
                     * @return StderrRedirectFileName 是否已赋值
                     * 
                     */
                    bool StderrRedirectFileNameHasBeenSet() const;

                private:

                    /**
                     * Task instance
                     */
                    uint64_t m_taskInstanceIndex;
                    bool m_taskInstanceIndexHasBeenSet;

                    /**
                     * Standard output log (Base64-encoded, up to 2048 bytes after decompression)
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_stdoutLog;
                    bool m_stdoutLogHasBeenSet;

                    /**
                     * Standard error log (Base64-encoded, up to 2048 bytes after decompression)
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_stderrLog;
                    bool m_stderrLogHasBeenSet;

                    /**
                     * Standard output redirection path
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_stdoutRedirectPath;
                    bool m_stdoutRedirectPathHasBeenSet;

                    /**
                     * Standard error redirection path
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_stderrRedirectPath;
                    bool m_stderrRedirectPathHasBeenSet;

                    /**
                     * Standard output redirection file name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_stdoutRedirectFileName;
                    bool m_stdoutRedirectFileNameHasBeenSet;

                    /**
                     * Standard error redirection file name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_stderrRedirectFileName;
                    bool m_stderrRedirectFileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCELOG_H_
