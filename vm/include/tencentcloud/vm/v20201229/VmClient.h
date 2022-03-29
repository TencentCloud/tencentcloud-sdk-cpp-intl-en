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

#ifndef TENCENTCLOUD_VM_V20201229_VMCLIENT_H_
#define TENCENTCLOUD_VM_V20201229_VMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vm/v20201229/model/CancelTaskRequest.h>
#include <tencentcloud/vm/v20201229/model/CancelTaskResponse.h>
#include <tencentcloud/vm/v20201229/model/CreateVideoModerationTaskRequest.h>
#include <tencentcloud/vm/v20201229/model/CreateVideoModerationTaskResponse.h>
#include <tencentcloud/vm/v20201229/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/vm/v20201229/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/vm/v20201229/model/DescribeTasksRequest.h>
#include <tencentcloud/vm/v20201229/model/DescribeTasksResponse.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            class VmClient : public AbstractClient
            {
            public:
                VmClient(const Credential &credential, const std::string &region);
                VmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelTaskResponse> CancelTaskOutcome;
                typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
                typedef std::function<void(const VmClient*, const Model::CancelTaskRequest&, CancelTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVideoModerationTaskResponse> CreateVideoModerationTaskOutcome;
                typedef std::future<CreateVideoModerationTaskOutcome> CreateVideoModerationTaskOutcomeCallable;
                typedef std::function<void(const VmClient*, const Model::CreateVideoModerationTaskRequest&, CreateVideoModerationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoModerationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const VmClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const VmClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;



                /**
                 *This API is used to cancel a moderation task. It will return the `TaskId` of the task after the task is canceled successfully.<br>

Default API request rate limit: **20 requests/sec**.
                 * @param req CancelTaskRequest
                 * @return CancelTaskOutcome
                 */
                CancelTaskOutcome CancelTask(const Model::CancelTaskRequest &request);
                void CancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelTaskOutcomeCallable CancelTaskCallable(const Model::CancelTaskRequest& request);

                /**
                 *This API is used to submit a video file or stream for smart moderation. Before using it, you need to log in to the console with the Tencent Cloud root account [to activate VM](https://console.cloud.tencent.com/cms/video/package) and adjust the business configuration.<br>
### Feature use instructions

- Go to the "[CMS console - VM](https://console.cloud.tencent.com/cms/video/package)" to activate AMS.

- This API is a paid API. For its billing mode, see [VM Pricing](https://intl.cloud.tencent.com/product/vm/pricing?from_cn_redirect=1).

- Default API request rate limit: **20 requests/sec**. When this limit is exceeded, requests for async moderation tasks (video on demand) will automatically join the queue of requests pending moderation, while an error will be reported for sync moderation tasks (video live streaming).
- Default limit on the number of concurrent moderation channels: 10. When this limit is exceeded, requests for async moderation tasks (video on demand) will automatically join the queue of requests pending moderation, while an error will be reported for sync moderation tasks (video live streaming).


### API feature description

- It can automatically detect video files or streams and recognize non-compliant content in them based on the deep learning technology from the perspectives of OCR-based text recognition, object detection (such as object, advertising logo, and QR code), image recognition, and audio moderation;
- It allows you to set the callback address (Callback) to get the detection result or call the API for viewing task details to get the details of the detection result through polling. For normal video moderation tasks, if non-compliant content is contained, the captured frames will be called back within **3s**, and the audio segments will be called back within the configured **segment duration + 2s**; for queued moderation tasks, the callback time will be equal to the sum of the callback time for normal moderation and waiting time;
- The API for viewing the moderation task list can be called to query the task queue. You can filter moderation tasks by multiple types of business information, such as business type, moderation result, and task status;
- It can recognize various non-compliant scenarios, including vulgarity, abuse, pornography, and advertising;
- It allows you to customize moderation policies based on different business scenarios;
- You can customize blocklist/allowlist dictionaries and image libraries to filter non-compliant content of custom types (currently, only blocklist configuration is supported);
- You can customize the moderation task priority, so that when multiple tasks are queuing, the task priority will be automatically adjusted according to the configuration;
- You can submit detection tasks in batches and **create up to 10 tasks at a time**;

### Call description for video file

- Supported video file size: **< 3 GB**
- Supported video file resolution: **the optimal resolution is 1920x1080 (1080p)**. For video files of less than 300 MB in size, their resolution can be greater than 1080p; for video files of a greater size, you can call [MPS](https://intl.cloud.tencent.com/product/mps/details?from_cn_redirect=1) to transcode them before submitting them for moderation;
- Supported video file formats: FLV, MKV, MP4, RMVB, AVI, WMV, 3GP, TS, MOV, RM, MPEG, and WMF;
- Supported video file access methods: URL (over HTTP/HTTPS) and Tencent Cloud COS;
- If you pass in the access URL of a video file, you need to **limit its header file read time to 3 seconds**. To ensure the stability and reliability of the video to be detected, we recommend you use Tencent Cloud COS for storage or CDN for caching;
- You can configure whether to enable audio moderation, and if it is not enabled, only the image content of video files will be moderated.

### Call description for video stream

- Supported video stream duration: **< 5 hours**
- Supported video stream resolution: **1920x1080 (1080p)**. For videos with a higher resolution, you can call [live transcoding](https://intl.cloud.tencent.com/document/product/267/39889?from_cn_redirect=1) to transcode them before submitting them for moderation;
- Supported video stream formats: mainstream video stream codecs such as RMTP and FLV;
- Supported video transfer protocols: HTTP, HTTPS, and RTMP;
- You can configure whether to enable audio moderation, and if it is not enabled, only the image content of video streams will be moderated.
                 * @param req CreateVideoModerationTaskRequest
                 * @return CreateVideoModerationTaskOutcome
                 */
                CreateVideoModerationTaskOutcome CreateVideoModerationTask(const Model::CreateVideoModerationTaskRequest &request);
                void CreateVideoModerationTaskAsync(const Model::CreateVideoModerationTaskRequest& request, const CreateVideoModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVideoModerationTaskOutcomeCallable CreateVideoModerationTaskCallable(const Model::CreateVideoModerationTaskRequest& request);

                /**
                 *This API is used to poll the details of the detection result.<br>

Default API request rate limit: **200 requests/sec**.
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 *This API is used to query the task queue. You can filter moderation tasks by multiple types of business information, such as business type, moderation result, and task status.<br>

Default API request rate limit: **20 requests/sec**.
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

#endif // !TENCENTCLOUD_VM_V20201229_VMCLIENT_H_
