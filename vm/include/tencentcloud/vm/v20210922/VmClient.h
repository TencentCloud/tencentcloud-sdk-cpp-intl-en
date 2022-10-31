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

#ifndef TENCENTCLOUD_VM_V20210922_VMCLIENT_H_
#define TENCENTCLOUD_VM_V20210922_VMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vm/v20210922/model/CancelTaskRequest.h>
#include <tencentcloud/vm/v20210922/model/CancelTaskResponse.h>
#include <tencentcloud/vm/v20210922/model/CreateVideoModerationTaskRequest.h>
#include <tencentcloud/vm/v20210922/model/CreateVideoModerationTaskResponse.h>
#include <tencentcloud/vm/v20210922/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/vm/v20210922/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/vm/v20210922/model/DescribeTasksRequest.h>
#include <tencentcloud/vm/v20210922/model/DescribeTasksResponse.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
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
                 *This API is used to cancel a video moderation task.
                 * @param req CancelTaskRequest
                 * @return CancelTaskOutcome
                 */
                CancelTaskOutcome CancelTask(const Model::CancelTaskRequest &request);
                void CancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelTaskOutcomeCallable CancelTaskCallable(const Model::CancelTaskRequest& request);

                /**
                 *This API is used to create a video moderation task via a URL or bucket.
                 * @param req CreateVideoModerationTaskRequest
                 * @return CreateVideoModerationTaskOutcome
                 */
                CreateVideoModerationTaskOutcome CreateVideoModerationTask(const Model::CreateVideoModerationTaskRequest &request);
                void CreateVideoModerationTaskAsync(const Model::CreateVideoModerationTaskRequest& request, const CreateVideoModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVideoModerationTaskOutcomeCallable CreateVideoModerationTaskCallable(const Model::CreateVideoModerationTaskRequest& request);

                /**
                 *This API is used to get details of the video moderation task. 
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 *This API is used to query the task queue. You can filter moderation tasks by multiple types of business information, such as business type, moderation result, and task status.<br>

Default request rate limit: **20 requests/sec**.
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

#endif // !TENCENTCLOUD_VM_V20210922_VMCLIENT_H_
