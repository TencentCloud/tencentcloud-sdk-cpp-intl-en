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

#ifndef TENCENTCLOUD_AMS_V20201229_AMSCLIENT_H_
#define TENCENTCLOUD_AMS_V20201229_AMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ams/v20201229/model/CancelTaskRequest.h>
#include <tencentcloud/ams/v20201229/model/CancelTaskResponse.h>
#include <tencentcloud/ams/v20201229/model/CreateAudioModerationTaskRequest.h>
#include <tencentcloud/ams/v20201229/model/CreateAudioModerationTaskResponse.h>
#include <tencentcloud/ams/v20201229/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/ams/v20201229/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/ams/v20201229/model/DescribeTasksRequest.h>
#include <tencentcloud/ams/v20201229/model/DescribeTasksResponse.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            class AmsClient : public AbstractClient
            {
            public:
                AmsClient(const Credential &credential, const std::string &region);
                AmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelTaskResponse> CancelTaskOutcome;
                typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
                typedef std::function<void(const AmsClient*, const Model::CancelTaskRequest&, CancelTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAudioModerationTaskResponse> CreateAudioModerationTaskOutcome;
                typedef std::future<CreateAudioModerationTaskOutcome> CreateAudioModerationTaskOutcomeCallable;
                typedef std::function<void(const AmsClient*, const Model::CreateAudioModerationTaskRequest&, CreateAudioModerationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAudioModerationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const AmsClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const AmsClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;



                /**
                 *This API is used to cancel a moderation task. If it returns `RequestId`, the task has been canceled successfully.<br>Default API request rate limit: **20 requests/sec**.
                 * @param req CancelTaskRequest
                 * @return CancelTaskOutcome
                 */
                CancelTaskOutcome CancelTask(const Model::CancelTaskRequest &request);
                void CancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelTaskOutcomeCallable CancelTaskCallable(const Model::CancelTaskRequest& request);

                /**
                 *This API is used to submit audio content (such as an audio file or stream URL) for smart moderation. Before using it, you need to log in to the console with the Tencent Cloud root account [to activate AMS](https://console.cloud.tencent.com/cms/audio/package) and adjust the business configuration.<br>

### Feature use instructions
- Go to the "[CMS console - AMS](https://console.cloud.tencent.com/cms/audio/package)" to activate AMS.
- Default API request rate limit: **20 requests/sec**. When this limit is exceeded, requests for async moderation tasks (audio on demand) will automatically join the queue of requests pending moderation, while an error will be reported for sync moderation tasks (audio live streaming).

### API feature description
- It can detect audio streams or files for non-compliant content;
- You can set the callback address (Callback) to get the detection result (for moderation tasks in progress, the maximum callback time is the configured **segment length + 2s). You can also call the API for querying the audio detection result to poll the detection result;
- It can recognize various types of non-compliant content, including vulgarity, abuse, porn, and advertising;
- You can submit **up to 10** detection tasks at a time.

### Call description for audio file
- Supported audio file size: **< 500 MB**;
- Supported audio file duration: **< 1 hour**;
- Supported audio bitrate: 128–256 Kbps;
- Supported audio file formats: WAV, MP3, AAC, FLAC, AMR, 3GP, M4A, WMA, OGG, and APE;
- **When the input is a video file**, the audio track can be extracted from it for audio content moderation.

### Call description for audio stream
- Supported audio stream duration: **< 3 hours**;
- Supported audio bitrate: 128–256 Kbps;
- Supported audio stream transfer protocols: RTMP, HTTP, and HTTPS;
- Supported audio stream formats: RTP, SRTP, RTMP, RTMPS, MMSH, MMST, HLS, HTTP, TCP, HTTPS, and M3U8;
- **When the input is a video stream**, the audio track can be extracted from it for audio content moderation.
                 * @param req CreateAudioModerationTaskRequest
                 * @return CreateAudioModerationTaskOutcome
                 */
                CreateAudioModerationTaskOutcome CreateAudioModerationTask(const Model::CreateAudioModerationTaskRequest &request);
                void CreateAudioModerationTaskAsync(const Model::CreateAudioModerationTaskRequest& request, const CreateAudioModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAudioModerationTaskOutcomeCallable CreateAudioModerationTaskCallable(const Model::CreateAudioModerationTaskRequest& request);

                /**
                 *This interface is used to view the detailed information of the audio moderation tasks, including task status, detection results, corresponding text content recognized from the audio file, recommended follow-up operations of the maliciousness tags corresponding to the detection results, and so on. For specific output content, see the output parameter examples.
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 *This API is used to view the list of moderation tasks. You can also filter moderation tasks by multiple types of business information, such as business type, moderation result, and task status. The output content of the task list includes the total number of queried tasks, task name, task status, audio moderation type, maliciousness tag of the detection result, and suggested operation. For the specific output content, see the sample output parameters.<br>Default API request rate limit: **20 requests/sec**.
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_AMSCLIENT_H_
