/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_PURGETASK_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_PURGETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * Purge task log details.
                */
                class PurgeTask : public AbstractModel
                {
                public:
                    PurgeTask();
                    ~PurgeTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Purge task ID.
                     * @return TaskId Purge task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Purge task ID.
                     * @param _taskId Purge task ID.
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
                     * 获取Purged URL.
                     * @return Url Purged URL.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Purged URL.
                     * @param _url Purged URL.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Purge task status. fail: failed, done: succeeded, process: purging.
                     * @return Status Purge task status. fail: failed, done: succeeded, process: purging.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Purge task status. fail: failed, done: succeeded, process: purging.
                     * @param _status Purge task status. fail: failed, done: succeeded, process: purging.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Purge type. url: URL purge; path: directory purge.
                     * @return PurgeType Purge type. url: URL purge; path: directory purge.
                     * 
                     */
                    std::string GetPurgeType() const;

                    /**
                     * 设置Purge type. url: URL purge; path: directory purge.
                     * @param _purgeType Purge type. url: URL purge; path: directory purge.
                     * 
                     */
                    void SetPurgeType(const std::string& _purgeType);

                    /**
                     * 判断参数 PurgeType 是否已赋值
                     * @return PurgeType 是否已赋值
                     * 
                     */
                    bool PurgeTypeHasBeenSet() const;

                    /**
                     * 获取Resource purge method. flush: purges updated resources, delete: purges all resources.
                     * @return FlushType Resource purge method. flush: purges updated resources, delete: purges all resources.
                     * 
                     */
                    std::string GetFlushType() const;

                    /**
                     * 设置Resource purge method. flush: purges updated resources, delete: purges all resources.
                     * @param _flushType Resource purge method. flush: purges updated resources, delete: purges all resources.
                     * 
                     */
                    void SetFlushType(const std::string& _flushType);

                    /**
                     * 判断参数 FlushType 是否已赋值
                     * @return FlushType 是否已赋值
                     * 
                     */
                    bool FlushTypeHasBeenSet() const;

                    /**
                     * 获取Purge task submission time
                     * @return CreateTime Purge task submission time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Purge task submission time
                     * @param _createTime Purge task submission time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Purge task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Purged URL.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Purge task status. fail: failed, done: succeeded, process: purging.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Purge type. url: URL purge; path: directory purge.
                     */
                    std::string m_purgeType;
                    bool m_purgeTypeHasBeenSet;

                    /**
                     * Resource purge method. flush: purges updated resources, delete: purges all resources.
                     */
                    std::string m_flushType;
                    bool m_flushTypeHasBeenSet;

                    /**
                     * Purge task submission time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_PURGETASK_H_
