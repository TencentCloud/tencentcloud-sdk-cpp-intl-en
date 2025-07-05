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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Core file monitoring rules
                */
                class FileTamperRule : public AbstractModel
                {
                public:
                    FileTamperRule();
                    ~FileTamperRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Process path
                     * @return ProcessPath Process path
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置Process path
                     * @param _processPath Process path
                     * 
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取Accessed file path
                     * @return Target Accessed file path
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Accessed file path
                     * @param _target Accessed file path
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取Recommended action: skip: skip; alarm: alert
                     * @return Action Recommended action: skip: skip; alarm: alert
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Recommended action: skip: skip; alarm: alert
                     * @param _action Recommended action: skip: skip; alarm: alert
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Monitoring behavior
<li>read: read file</li>
<li>write: modify file</li>
<li>read-write: read and modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileAction Monitoring behavior
<li>read: read file</li>
<li>write: modify file</li>
<li>read-write: read and modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileAction() const;

                    /**
                     * 设置Monitoring behavior
<li>read: read file</li>
<li>write: modify file</li>
<li>read-write: read and modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileAction Monitoring behavior
<li>read: read file</li>
<li>write: modify file</li>
<li>read-write: read and modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileAction(const std::string& _fileAction);

                    /**
                     * 判断参数 FileAction 是否已赋值
                     * @return FileAction 是否已赋值
                     * 
                     */
                    bool FileActionHasBeenSet() const;

                private:

                    /**
                     * Process path
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * Accessed file path
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Recommended action: skip: skip; alarm: alert
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Monitoring behavior
<li>read: read file</li>
<li>write: modify file</li>
<li>read-write: read and modify file</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileAction;
                    bool m_fileActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULE_H_
