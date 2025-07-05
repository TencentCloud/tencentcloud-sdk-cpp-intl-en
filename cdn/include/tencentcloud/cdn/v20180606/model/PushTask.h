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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PUSHTASK_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PUSHTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Prefetch task details.
                */
                class PushTask : public AbstractModel
                {
                public:
                    PushTask();
                    ~PushTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Prefetch task ID
                     * @return TaskId Prefetch task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Prefetch task ID
                     * @param _taskId Prefetch task ID
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
                     * 获取Prefetched URL
                     * @return Url Prefetched URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Prefetched URL
                     * @param _url Prefetched URL
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
                     * 获取Prefetch task status
`fail`: Prefetch failed
`done`: Prefetch succeeded
`process`: Prefetch in progress
`invalid`: Invalid prefetch with 4XX/5XX status code returned from the origin server
                     * @return Status Prefetch task status
`fail`: Prefetch failed
`done`: Prefetch succeeded
`process`: Prefetch in progress
`invalid`: Invalid prefetch with 4XX/5XX status code returned from the origin server
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Prefetch task status
`fail`: Prefetch failed
`done`: Prefetch succeeded
`process`: Prefetch in progress
`invalid`: Invalid prefetch with 4XX/5XX status code returned from the origin server
                     * @param _status Prefetch task status
`fail`: Prefetch failed
`done`: Prefetch succeeded
`process`: Prefetch in progress
`invalid`: Invalid prefetch with 4XX/5XX status code returned from the origin server
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
                     * 获取Prefetch progress in percentage
                     * @return Percent Prefetch progress in percentage
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置Prefetch progress in percentage
                     * @param _percent Prefetch progress in percentage
                     * 
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取Prefetch task submission time
                     * @return CreateTime Prefetch task submission time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Prefetch task submission time
                     * @param _createTime Prefetch task submission time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Prefetch region
`mainland`: Within the Chinese mainland
`overseas`: Outside the Chinese mainland
`global`: Globe
                     * @return Area Prefetch region
`mainland`: Within the Chinese mainland
`overseas`: Outside the Chinese mainland
`global`: Globe
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Prefetch region
`mainland`: Within the Chinese mainland
`overseas`: Outside the Chinese mainland
`global`: Globe
                     * @param _area Prefetch region
`mainland`: Within the Chinese mainland
`overseas`: Outside the Chinese mainland
`global`: Globe
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Prefetch task update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UpdateTime Prefetch task update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Prefetch task update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _updateTime Prefetch task update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Prefetch task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Prefetched URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Prefetch task status
`fail`: Prefetch failed
`done`: Prefetch succeeded
`process`: Prefetch in progress
`invalid`: Invalid prefetch with 4XX/5XX status code returned from the origin server
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Prefetch progress in percentage
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * Prefetch task submission time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Prefetch region
`mainland`: Within the Chinese mainland
`overseas`: Outside the Chinese mainland
`global`: Globe
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Prefetch task update time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PUSHTASK_H_
