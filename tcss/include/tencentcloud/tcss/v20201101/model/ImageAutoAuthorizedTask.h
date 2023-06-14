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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEAUTOAUTHORIZEDTASK_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEAUTOAUTHORIZEDTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Information of the automatic image licensing task
                */
                class ImageAutoAuthorizedTask : public AbstractModel
                {
                public:
                    ImageAutoAuthorizedTask();
                    ~ImageAutoAuthorizedTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Licensing method. Valid values: `AUTO` (automatic licensing); `MANUAL` (manual licensing).
                     * @return Type Licensing method. Valid values: `AUTO` (automatic licensing); `MANUAL` (manual licensing).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Licensing method. Valid values: `AUTO` (automatic licensing); `MANUAL` (manual licensing).
                     * @param _type Licensing method. Valid values: `AUTO` (automatic licensing); `MANUAL` (manual licensing).
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Task date
                     * @return AuthorizedDate Task date
                     * 
                     */
                    std::string GetAuthorizedDate() const;

                    /**
                     * 设置Task date
                     * @param _authorizedDate Task date
                     * 
                     */
                    void SetAuthorizedDate(const std::string& _authorizedDate);

                    /**
                     * 判断参数 AuthorizedDate 是否已赋值
                     * @return AuthorizedDate 是否已赋值
                     * 
                     */
                    bool AuthorizedDateHasBeenSet() const;

                    /**
                     * 获取Image source. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     * @return Source Image source. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Image source. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     * @param _source Image source. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Last licensing time
                     * @return LastAuthorizedTime Last licensing time
                     * 
                     */
                    std::string GetLastAuthorizedTime() const;

                    /**
                     * 设置Last licensing time
                     * @param _lastAuthorizedTime Last licensing time
                     * 
                     */
                    void SetLastAuthorizedTime(const std::string& _lastAuthorizedTime);

                    /**
                     * 判断参数 LastAuthorizedTime 是否已赋值
                     * @return LastAuthorizedTime 是否已赋值
                     * 
                     */
                    bool LastAuthorizedTimeHasBeenSet() const;

                    /**
                     * 获取Number of images automatically licensed successfully
                     * @return SuccessCount Number of images automatically licensed successfully
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置Number of images automatically licensed successfully
                     * @param _successCount Number of images automatically licensed successfully
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取Number of images failed to be automatically licensed
                     * @return FailCount Number of images failed to be automatically licensed
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置Number of images failed to be automatically licensed
                     * @param _failCount Number of images failed to be automatically licensed
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取Error code for the last task. Valid values: `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     * @return LatestFailCode Error code for the last task. Valid values: `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     * 
                     */
                    std::string GetLatestFailCode() const;

                    /**
                     * 设置Error code for the last task. Valid values: `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     * @param _latestFailCode Error code for the last task. Valid values: `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     * 
                     */
                    void SetLatestFailCode(const std::string& _latestFailCode);

                    /**
                     * 判断参数 LatestFailCode 是否已赋值
                     * @return LatestFailCode 是否已赋值
                     * 
                     */
                    bool LatestFailCodeHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Licensing method. Valid values: `AUTO` (automatic licensing); `MANUAL` (manual licensing).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Task date
                     */
                    std::string m_authorizedDate;
                    bool m_authorizedDateHasBeenSet;

                    /**
                     * Image source. Valid values: `LOCAL` (local image); `REGISTRY` (repository image).
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Last licensing time
                     */
                    std::string m_lastAuthorizedTime;
                    bool m_lastAuthorizedTimeHasBeenSet;

                    /**
                     * Number of images automatically licensed successfully
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Number of images failed to be automatically licensed
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * Error code for the last task. Valid values: `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     */
                    std::string m_latestFailCode;
                    bool m_latestFailCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEAUTOAUTHORIZEDTASK_H_
