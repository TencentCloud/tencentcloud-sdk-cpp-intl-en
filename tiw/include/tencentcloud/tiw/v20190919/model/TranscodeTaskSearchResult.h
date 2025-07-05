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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_TRANSCODETASKSEARCHRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_TRANSCODETASKSEARCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/TranscodeTaskResult.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Transcoding task query results.
                */
                class TranscodeTaskSearchResult : public AbstractModel
                {
                public:
                    TranscodeTaskSearchResult();
                    ~TranscodeTaskSearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creation time of the task.
                     * @return CreateTime Creation time of the task.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the task.
                     * @param _createTime Creation time of the task.
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
                     * 获取Unique task ID.
                     * @return TaskId Unique task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Unique task ID.
                     * @param _taskId Unique task ID.
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
                     * 获取Current task status.
- QUEUED: Queuing for transcoding.
- PROCESSING: Transcoding in progress.
- FINISHED: Transcoding finished.
                     * @return Status Current task status.
- QUEUED: Queuing for transcoding.
- PROCESSING: Transcoding in progress.
- FINISHED: Transcoding finished.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Current task status.
- QUEUED: Queuing for transcoding.
- PROCESSING: Transcoding in progress.
- FINISHED: Transcoding finished.
                     * @param _status Current task status.
- QUEUED: Queuing for transcoding.
- PROCESSING: Transcoding in progress.
- FINISHED: Transcoding finished.
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
                     * 获取Original name of the transcoded document.
                     * @return OriginalFilename Original name of the transcoded document.
                     * 
                     */
                    std::string GetOriginalFilename() const;

                    /**
                     * 设置Original name of the transcoded document.
                     * @param _originalFilename Original name of the transcoded document.
                     * 
                     */
                    void SetOriginalFilename(const std::string& _originalFilename);

                    /**
                     * 判断参数 OriginalFilename 是否已赋值
                     * @return OriginalFilename 是否已赋值
                     * 
                     */
                    bool OriginalFilenameHasBeenSet() const;

                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param _sdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Transcoding task result.
                     * @return Result Transcoding task result.
                     * 
                     */
                    TranscodeTaskResult GetResult() const;

                    /**
                     * 设置Transcoding task result.
                     * @param _result Transcoding task result.
                     * 
                     */
                    void SetResult(const TranscodeTaskResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Specifies whether the transcoding is static.
                     * @return IsStatic Specifies whether the transcoding is static.
                     * 
                     */
                    bool GetIsStatic() const;

                    /**
                     * 设置Specifies whether the transcoding is static.
                     * @param _isStatic Specifies whether the transcoding is static.
                     * 
                     */
                    void SetIsStatic(const bool& _isStatic);

                    /**
                     * 判断参数 IsStatic 是否已赋值
                     * @return IsStatic 是否已赋值
                     * 
                     */
                    bool IsStaticHasBeenSet() const;

                private:

                    /**
                     * Creation time of the task.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Unique task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Current task status.
- QUEUED: Queuing for transcoding.
- PROCESSING: Transcoding in progress.
- FINISHED: Transcoding finished.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Original name of the transcoded document.
                     */
                    std::string m_originalFilename;
                    bool m_originalFilenameHasBeenSet;

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Transcoding task result.
                     */
                    TranscodeTaskResult m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Specifies whether the transcoding is static.
                     */
                    bool m_isStatic;
                    bool m_isStaticHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_TRANSCODETASKSEARCHRESULT_H_
