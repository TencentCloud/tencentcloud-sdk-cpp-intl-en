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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TASKLOGURL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TASKLOGURL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Temp download URL for the report PDF
                */
                class TaskLogURL : public AbstractModel
                {
                public:
                    TaskLogURL();
                    ~TaskLogURL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Temporary Link for Report Download
                     * @return URL Temporary Link for Report Download
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置Temporary Link for Report Download
                     * @param _uRL Temporary Link for Report Download
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取Task Report ID
                     * @return LogId Task Report ID
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置Task Report ID
                     * @param _logId Task Report ID
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取Task Report Name
                     * @return TaskLogName Task Report Name
                     * 
                     */
                    std::string GetTaskLogName() const;

                    /**
                     * 设置Task Report Name
                     * @param _taskLogName Task Report Name
                     * 
                     */
                    void SetTaskLogName(const std::string& _taskLogName);

                    /**
                     * 判断参数 TaskLogName 是否已赋值
                     * @return TaskLogName 是否已赋值
                     * 
                     */
                    bool TaskLogNameHasBeenSet() const;

                    /**
                     * 获取APP ID
                     * @return AppId APP ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置APP ID
                     * @param _appId APP ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * Temporary Link for Report Download
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * Task Report ID
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * Task Report Name
                     */
                    std::string m_taskLogName;
                    bool m_taskLogNameHasBeenSet;

                    /**
                     * APP ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKLOGURL_H_
